WINDOWS := $(shell which wine ; echo $$?)

#-------------------------------------------------------------------------------
# Files
#-------------------------------------------------------------------------------

TARGET_COL := gamecube

TARGET := SIM

BUILD_DIR := build/$(TARGET)

# SRC_DIRS := $(shell find src/ -type f -name '*.c')
# ASM_DIRS := $(shell find asm/ -type f -name '*.s')

SRC_DIRS := $(shell find src -type d)
ASM_DIRS := $(shell find asm -type d -not -path "asm/non_matching*") $(shell find data -type d)

C_FILES       := $(foreach dir,$(SRC_DIRS), $(wildcard $(dir)/*.c))
S_FILES       := $(foreach dir,$(ASM_DIRS), $(wildcard $(dir)/*.s))

# Inputs
LDSCRIPT := $(BUILD_DIR)/ldscript.lcf

# Outputs
ELF := $(BUILD_DIR)/$(TARGET).elf
MAP := $(BUILD_DIR)/$(TARGET).map
COMPARE_TO := $(BUILD_DIR)/$(TARGET)_S.elf

# Object files in link order
include obj_files.mk

GLOBAL_ASM_C_FILES != grep -rl 'GLOBAL_ASM(' $(C_FILES)
GLOBAL_ASM_O_FILES = $(addprefix $(BUILD_DIR)/,$(GLOBAL_ASM_C_FILES:.c=.o))

#-------------------------------------------------------------------------------
# Tools
#-------------------------------------------------------------------------------

MWCC_VERSION := 1.1

# Programs
ifeq ($(WINDOWS),1)
	WINE :=
else
	WINE := wine
endif

AS := tools/powerpc-eabi-as
OBJCOPY := $(DEVKITPPC)/bin/powerpc-eabi-objcopy
OBJDUMP := $(DEVKITPPC)/bin/powerpc-eabi-objdump
CPP := cpp -P
CC := $(WINE) tools/mwcc_compiler/$(MWCC_VERSION)/mwcceppc.exe
LD := $(WINE) tools/mwcc_compiler/$(MWCC_VERSION)/mwldeppc.exe
SHA1SUM := sha1sum
PYTHON := python3

ASM_PROCESSOR_DIR := tools/asm_processor
ASM_PROCESSOR := $(ASM_PROCESSOR_DIR)/compile.sh

# Options
INCLUDES := -i include -i include/dolphin/ -i src
NON_MATCHING := 0

# Assembler Flags
ASFLAGS := -mgekko -I include

# Linker Flags
LDFLAGS := -map $(MAP) -fp hard -nodefaults -w off

# Compiler Flags
CFLAGS := -Cpp_exceptions off -proc gekko -fp hard -O4,p -nodefaults -msgstyle gcc $(INCLUDES)


#-------------------------------------------------------------------------------
# Recipes
#-------------------------------------------------------------------------------

### Default target ###

default: all

# Compare to the checksum of a stripped original
all: $(ELF) | tools
ifeq ($(NON_MATCHING),0)
	@md5sum $(COMPARE_TO)
	@md5sum -c checksum.md5
endif

ALL_DIRS := build $(BUILD_DIR) $(addprefix $(BUILD_DIR)/,$(SRC_DIRS) $(ASM_DIRS))

# Make sure build directory exists before compiling anything
DUMMY != mkdir -p $(ALL_DIRS)

.PHONY: tools

$(LDSCRIPT): ldscript.lcf
	$(CPP) -MMD -MP -MT $@ -MF $@.d -I include/ -I . -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(ELF): $(O_FILES) $(GLOBAL_ASM_O_FILES) $(LDSCRIPT)
	$(LD) $(LDFLAGS) -o $@ -lcf $(LDSCRIPT) $(O_FILES)
	$(OBJCOPY) $(ELF) $(COMPARE_TO) -S

$(GLOBAL_ASM_O_FILES): BUILD_C := $(ASM_PROCESSOR) "$(CC) $(CFLAGS) $(OPT_FLAGS)" "$(AS) $(ASFLAGS)"

BUILD_C ?= $(CC) $(CFLAGS) $(OPT_FLAGS) -c -o

# Strip debugging sections and .mwcats.text section so only the important sections remain
# Tested to ensure it doesn't crash at least on Dolphin
# Also copy again to strip symbols since we don't want to diff those
setup:
	$(OBJCOPY) SIM_original.elf SIM.elf -R .mwcats.text -g
	$(OBJCOPY) SIM.elf SIM_S.elf -S

clean:
	rm -f -d -r build
#$(MAKE) -C tools clean

#tools:
#	$(MAKE) -C tools

$(BUILD_DIR)/%.o: %.s
	iconv --from UTF-8 --to SHIFT-JIS $< | $(AS) $(ASFLAGS) -o $@

$(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(BUILD_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

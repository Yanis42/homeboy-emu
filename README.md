# homeboy-emu

This repo contains a disassembly of the N64 Emulator ELF executable intended for use with the Gamecube releases of The Legend of Zelda Ocarina of Time, specifically the version shipped with the Japanese Zelda Collector's Edition disk as symbols and other debugging information was left unstripped.
The repo's name derives from file paths found in the debugging symbols such as
`C:\HOMEBOY\STEPHEN\Japanese Ocarina\Fire\simGCN.c:837`

It builds the following ELF executables:

SIM.elf   : `md5: 64428C7350B31E0AAD3DDE221C5B18A5`
SIM_S.elf : `md5: EDDD2DED9906AD2312F7EC585B3D72CE`

SIM_S is a version of the build with stripped symbols which when diffed against a similarly stripped original matches byte for byte if assembled and linked, which is the most realistic goal for verifying the accuracy of this disassembly.

## Building

### Required tools

* devkitPro:
    - ``wget https://wii.leseratte10.de/devkitPro/devkitPPC/r38%20%282020-07-25%29/devkitPPC-r38-1-linux_x86_64.pkg.tar.xz``
    - ``xz -d -v devkitPPC-r38-1-linux_x86_64.pkg.tar.xz``
    - ``tar -xvf devkitPPC-r38-1-linux_x86_64.pkg.tar``
    - ``sudo cp -r ./opt/devkitpro /opt/``
    - ``echo 'export DEVKITPPC="/opt/devkitpro/devkitPPC"' >> ~/.bashrc && source ~/.bashrc``
* python3

### Instructions

1. Obtain the original ELF executable found in the `120903_zelda.tgc` file on the Japanese Collector's Edition disk and place it in the base working directory and name it `SIM_original.elf`
2. Obtain a copy of the MWCC for embedded PowerPC and place it in the `tools/mwcc_compiler/1.1/` folder.
(NOTE: This compiler's executables [mwcceppc.exe mwasmeppc.exe and mwldeppc.exe] can be installed with Codewarrior 1.1 for Gamecube, but no license or crack is provided with this project. Please obtain access to the compiler on your own.)
3. Run make setup and make

romGet32:
/* 0689D0 8006DF70 7C0802A6 */  mflr    r0
/* 0689D4 8006DF74 5484017E */  clrlwi  r4, r4, 5
/* 0689D8 8006DF78 90010004 */  stw     r0, 4(r1)
/* 0689DC 8006DF7C 9421FFE0 */  stwu    r1, -0x20(r1)
/* 0689E0 8006DF80 93E1001C */  stw     r31, 0x1c(r1)
/* 0689E4 8006DF84 3BE50000 */  addi    r31, r5, 0
/* 0689E8 8006DF88 80030214 */  lwz     r0, 0x214(r3)
/* 0689EC 8006DF8C 7C040040 */  cmplw   r4, r0
/* 0689F0 8006DF90 40800030 */  bge     lbl_8006DFC0
/* 0689F4 8006DF94 38A40000 */  addi    r5, r4, 0
/* 0689F8 8006DF98 38810014 */  addi    r4, r1, 0x14
/* 0689FC 8006DF9C 38C00004 */  li      r6, 4
/* 068A00 8006DFA0 38E00000 */  li      r7, 0
/* 068A04 8006DFA4 4BFFFC55 */  bl      romCopy
/* 068A08 8006DFA8 2C030000 */  cmpwi   r3, 0
/* 068A0C 8006DFAC 41820014 */  beq     lbl_8006DFC0
/* 068A10 8006DFB0 80010014 */  lwz     r0, 0x14(r1)
/* 068A14 8006DFB4 38600001 */  li      r3, 1
/* 068A18 8006DFB8 901F0000 */  stw     r0, 0(r31)
/* 068A1C 8006DFBC 48000010 */  b       lbl_8006DFCC
lbl_8006DFC0:
/* 068A20 8006DFC0 38000000 */  li      r0, 0
/* 068A24 8006DFC4 901F0000 */  stw     r0, 0(r31)
/* 068A28 8006DFC8 38600001 */  li      r3, 1
lbl_8006DFCC:
/* 068A2C 8006DFCC 80010024 */  lwz     r0, 0x24(r1)
/* 068A30 8006DFD0 83E1001C */  lwz     r31, 0x1c(r1)
/* 068A34 8006DFD4 38210020 */  addi    r1, r1, 0x20
/* 068A38 8006DFD8 7C0803A6 */  mtlr    r0
/* 068A3C 8006DFDC 4E800020 */  blr

__romLoadBlock_Complete:
/* 06A14C 8006F6EC 7C0802A6 */  mflr    r0
/* 06A150 8006F6F0 90010004 */  stw     r0, 4(r1)
/* 06A154 8006F6F4 9421FFF8 */  stwu    r1, -8(r1)
/* 06A158 8006F6F8 80030008 */  lwz     r0, 8(r3)
/* 06A15C 8006F6FC 2C000000 */  cmpwi   r0, 0
/* 06A160 8006F700 4182005C */  beq     lbl_8006F75C
/* 06A164 8006F704 3CE30001 */  addis   r7, r3, 1
/* 06A168 8006F708 3CA000FF */  lis     r5, 0xff
/* 06A16C 8006F70C 81070E44 */  lwz     r8, 0xe44(r7)
/* 06A170 8006F710 3C80FF01 */  lis     r4, 0xff01
/* 06A174 8006F714 38C500FF */  addi    r6, r5, 0xff
/* 06A178 8006F718 38A4FF00 */  addi    r5, r4, -256
/* 06A17C 8006F71C 39200000 */  li      r9, 0
/* 06A180 8006F720 48000028 */  b       lbl_8006F748
lbl_8006F724:
/* 06A184 8006F724 80080000 */  lwz     r0, 0(r8)
/* 06A188 8006F728 39290001 */  addi    r9, r9, 1
/* 06A18C 8006F72C 5404C23E */  srwi    r4, r0, 8
/* 06A190 8006F730 5400402E */  slwi    r0, r0, 8
/* 06A194 8006F734 7C843038 */  and     r4, r4, r6
/* 06A198 8006F738 7C002838 */  and     r0, r0, r5
/* 06A19C 8006F73C 7C800378 */  or      r0, r4, r0
/* 06A1A0 8006F740 90080000 */  stw     r0, 0(r8)
/* 06A1A4 8006F744 39080004 */  addi    r8, r8, 4
lbl_8006F748:
/* 06A1A8 8006F748 80870E60 */  lwz     r4, 0xe60(r7)
/* 06A1AC 8006F74C 38040003 */  addi    r0, r4, 3
/* 06A1B0 8006F750 5400F0BE */  srwi    r0, r0, 2
/* 06A1B4 8006F754 7C090040 */  cmplw   r9, r0
/* 06A1B8 8006F758 4180FFCC */  blt     lbl_8006F724
lbl_8006F75C:
/* 06A1BC 8006F75C 3CE30001 */  addis   r7, r3, 1
/* 06A1C0 8006F760 80A70E50 */  lwz     r5, 0xe50(r7)
/* 06A1C4 8006F764 38000000 */  li      r0, 0
/* 06A1C8 8006F768 80C70E60 */  lwz     r6, 0xe60(r7)
/* 06A1CC 8006F76C 38800001 */  li      r4, 1
/* 06A1D0 8006F770 54A52036 */  slwi    r5, r5, 4
/* 06A1D4 8006F774 7CA32A14 */  add     r5, r3, r5
/* 06A1D8 8006F778 90C50220 */  stw     r6, 0x220(r5)
/* 06A1DC 8006F77C 80670E4C */  lwz     r3, 0xe4c(r7)
/* 06A1E0 8006F780 9065021C */  stw     r3, 0x21c(r5)
/* 06A1E4 8006F784 98050228 */  stb     r0, 0x228(r5)
/* 06A1E8 8006F788 80670E4C */  lwz     r3, 0xe4c(r7)
/* 06A1EC 8006F78C 7C601E70 */  srawi   r0, r3, 3
/* 06A1F0 8006F790 7CA70214 */  add     r5, r7, r0
/* 06A1F4 8006F794 5460077E */  clrlwi  r0, r3, 0x1d
/* 06A1F8 8006F798 88650224 */  lbz     r3, 0x224(r5)
/* 06A1FC 8006F79C 7C800030 */  slw     r0, r4, r0
/* 06A200 8006F7A0 7C600378 */  or      r0, r3, r0
/* 06A204 8006F7A4 98050224 */  stb     r0, 0x224(r5)
/* 06A208 8006F7A8 81870E48 */  lwz     r12, 0xe48(r7)
/* 06A20C 8006F7AC 280C0000 */  cmplwi  r12, 0
/* 06A210 8006F7B0 4182001C */  beq     lbl_8006F7CC
/* 06A214 8006F7B4 7D8803A6 */  mtlr    r12
/* 06A218 8006F7B8 4E800021 */  blrl
/* 06A21C 8006F7BC 2C030000 */  cmpwi   r3, 0
/* 06A220 8006F7C0 4082000C */  bne     lbl_8006F7CC
/* 06A224 8006F7C4 38600000 */  li      r3, 0
/* 06A228 8006F7C8 48000008 */  b       lbl_8006F7D0
lbl_8006F7CC:
/* 06A22C 8006F7CC 38600001 */  li      r3, 1
lbl_8006F7D0:
/* 06A230 8006F7D0 8001000C */  lwz     r0, 0xc(r1)
/* 06A234 8006F7D4 38210008 */  addi    r1, r1, 8
/* 06A238 8006F7D8 7C0803A6 */  mtlr    r0
/* 06A23C 8006F7DC 4E800020 */  blr

romFindOldestBlock:
/* 06A6AC 8006FC4C 3CE30001 */  addis   r7, r3, 1
/* 06A6B0 8006FC50 38000800 */  li      r0, 0x800
/* 06A6B4 8006FC54 8147021C */  lwz     r10, 0x21c(r7)
/* 06A6B8 8006FC58 7C0903A6 */  mtctr   r0
/* 06A6BC 8006FC5C 39800000 */  li      r12, 0
/* 06A6C0 8006FC60 39000000 */  li      r8, 0
lbl_8006FC64:
/* 06A6C4 8006FC64 80030220 */  lwz     r0, 0x220(r3)
/* 06A6C8 8006FC68 38E3021C */  addi    r7, r3, 0x21c
/* 06A6CC 8006FC6C 28000000 */  cmplwi  r0, 0
/* 06A6D0 8006FC70 418200A8 */  beq     lbl_8006FD18
/* 06A6D4 8006FC74 2C050000 */  cmpwi   r5, 0
/* 06A6D8 8006FC78 40820010 */  bne     lbl_8006FC88
/* 06A6DC 8006FC7C 80070000 */  lwz     r0, 0(r7)
/* 06A6E0 8006FC80 2C000000 */  cmpwi   r0, 0
/* 06A6E4 8006FC84 40800018 */  bge     lbl_8006FC9C
lbl_8006FC88:
/* 06A6E8 8006FC88 2C050001 */  cmpwi   r5, 1
/* 06A6EC 8006FC8C 4082008C */  bne     lbl_8006FD18
/* 06A6F0 8006FC90 80070000 */  lwz     r0, 0(r7)
/* 06A6F4 8006FC94 2C000000 */  cmpwi   r0, 0
/* 06A6F8 8006FC98 40800080 */  bge     lbl_8006FD18
lbl_8006FC9C:
/* 06A6FC 8006FC9C 80070008 */  lwz     r0, 8(r7)
/* 06A700 8006FCA0 7C005040 */  cmplw   r0, r10
/* 06A704 8006FCA4 40810010 */  ble     lbl_8006FCB4
/* 06A708 8006FCA8 7C0A0050 */  subf    r0, r10, r0
/* 06A70C 8006FCAC 2160FFFF */  subfic  r11, r0, -1
/* 06A710 8006FCB0 48000008 */  b       lbl_8006FCB8
lbl_8006FCB4:
/* 06A714 8006FCB4 7D605050 */  subf    r11, r0, r10
lbl_8006FCB8:
/* 06A718 8006FCB8 2C060000 */  cmpwi   r6, 0
/* 06A71C 8006FCBC 40820024 */  bne     lbl_8006FCE0
/* 06A720 8006FCC0 7C0B6040 */  cmplw   r11, r12
/* 06A724 8006FCC4 40810054 */  ble     lbl_8006FD18
/* 06A728 8006FCC8 8807000C */  lbz     r0, 0xc(r7)
/* 06A72C 8006FCCC 7C000775 */  extsb.  r0, r0
/* 06A730 8006FCD0 40820048 */  bne     lbl_8006FD18
/* 06A734 8006FCD4 39280000 */  addi    r9, r8, 0
/* 06A738 8006FCD8 398B0000 */  addi    r12, r11, 0
/* 06A73C 8006FCDC 4800003C */  b       lbl_8006FD18
lbl_8006FCE0:
/* 06A740 8006FCE0 2C060001 */  cmpwi   r6, 1
/* 06A744 8006FCE4 40820024 */  bne     lbl_8006FD08
/* 06A748 8006FCE8 7C0B6040 */  cmplw   r11, r12
/* 06A74C 8006FCEC 4081002C */  ble     lbl_8006FD18
/* 06A750 8006FCF0 8807000C */  lbz     r0, 0xc(r7)
/* 06A754 8006FCF4 2C000001 */  cmpwi   r0, 1
/* 06A758 8006FCF8 40820020 */  bne     lbl_8006FD18
/* 06A75C 8006FCFC 39280000 */  addi    r9, r8, 0
/* 06A760 8006FD00 398B0000 */  addi    r12, r11, 0
/* 06A764 8006FD04 48000014 */  b       lbl_8006FD18
lbl_8006FD08:
/* 06A768 8006FD08 7C0B6040 */  cmplw   r11, r12
/* 06A76C 8006FD0C 4081000C */  ble     lbl_8006FD18
/* 06A770 8006FD10 39280000 */  addi    r9, r8, 0
/* 06A774 8006FD14 398B0000 */  addi    r12, r11, 0
lbl_8006FD18:
/* 06A778 8006FD18 80030230 */  lwz     r0, 0x230(r3)
/* 06A77C 8006FD1C 38E3022C */  addi    r7, r3, 0x22c
/* 06A780 8006FD20 39080001 */  addi    r8, r8, 1
/* 06A784 8006FD24 28000000 */  cmplwi  r0, 0
/* 06A788 8006FD28 38630010 */  addi    r3, r3, 0x10
/* 06A78C 8006FD2C 418200A8 */  beq     lbl_8006FDD4
/* 06A790 8006FD30 2C050000 */  cmpwi   r5, 0
/* 06A794 8006FD34 40820010 */  bne     lbl_8006FD44
/* 06A798 8006FD38 80070000 */  lwz     r0, 0(r7)
/* 06A79C 8006FD3C 2C000000 */  cmpwi   r0, 0
/* 06A7A0 8006FD40 40800018 */  bge     lbl_8006FD58
lbl_8006FD44:
/* 06A7A4 8006FD44 2C050001 */  cmpwi   r5, 1
/* 06A7A8 8006FD48 4082008C */  bne     lbl_8006FDD4
/* 06A7AC 8006FD4C 80070000 */  lwz     r0, 0(r7)
/* 06A7B0 8006FD50 2C000000 */  cmpwi   r0, 0
/* 06A7B4 8006FD54 40800080 */  bge     lbl_8006FDD4
lbl_8006FD58:
/* 06A7B8 8006FD58 80070008 */  lwz     r0, 8(r7)
/* 06A7BC 8006FD5C 7C005040 */  cmplw   r0, r10
/* 06A7C0 8006FD60 40810010 */  ble     lbl_8006FD70
/* 06A7C4 8006FD64 7C0A0050 */  subf    r0, r10, r0
/* 06A7C8 8006FD68 2160FFFF */  subfic  r11, r0, -1
/* 06A7CC 8006FD6C 48000008 */  b       lbl_8006FD74
lbl_8006FD70:
/* 06A7D0 8006FD70 7D605050 */  subf    r11, r0, r10
lbl_8006FD74:
/* 06A7D4 8006FD74 2C060000 */  cmpwi   r6, 0
/* 06A7D8 8006FD78 40820024 */  bne     lbl_8006FD9C
/* 06A7DC 8006FD7C 7C0B6040 */  cmplw   r11, r12
/* 06A7E0 8006FD80 40810054 */  ble     lbl_8006FDD4
/* 06A7E4 8006FD84 8807000C */  lbz     r0, 0xc(r7)
/* 06A7E8 8006FD88 7C000775 */  extsb.  r0, r0
/* 06A7EC 8006FD8C 40820048 */  bne     lbl_8006FDD4
/* 06A7F0 8006FD90 39280000 */  addi    r9, r8, 0
/* 06A7F4 8006FD94 398B0000 */  addi    r12, r11, 0
/* 06A7F8 8006FD98 4800003C */  b       lbl_8006FDD4
lbl_8006FD9C:
/* 06A7FC 8006FD9C 2C060001 */  cmpwi   r6, 1
/* 06A800 8006FDA0 40820024 */  bne     lbl_8006FDC4
/* 06A804 8006FDA4 7C0B6040 */  cmplw   r11, r12
/* 06A808 8006FDA8 4081002C */  ble     lbl_8006FDD4
/* 06A80C 8006FDAC 8807000C */  lbz     r0, 0xc(r7)
/* 06A810 8006FDB0 2C000001 */  cmpwi   r0, 1
/* 06A814 8006FDB4 40820020 */  bne     lbl_8006FDD4
/* 06A818 8006FDB8 39280000 */  addi    r9, r8, 0
/* 06A81C 8006FDBC 398B0000 */  addi    r12, r11, 0
/* 06A820 8006FDC0 48000014 */  b       lbl_8006FDD4
lbl_8006FDC4:
/* 06A824 8006FDC4 7C0B6040 */  cmplw   r11, r12
/* 06A828 8006FDC8 4081000C */  ble     lbl_8006FDD4
/* 06A82C 8006FDCC 39280000 */  addi    r9, r8, 0
/* 06A830 8006FDD0 398B0000 */  addi    r12, r11, 0
lbl_8006FDD4:
/* 06A834 8006FDD4 38630010 */  addi    r3, r3, 0x10
/* 06A838 8006FDD8 39080001 */  addi    r8, r8, 1
/* 06A83C 8006FDDC 4200FE88 */  bdnz    lbl_8006FC64
/* 06A840 8006FDE0 280C0000 */  cmplwi  r12, 0
/* 06A844 8006FDE4 41820010 */  beq     lbl_8006FDF4
/* 06A848 8006FDE8 91240000 */  stw     r9, 0(r4)
/* 06A84C 8006FDEC 38600001 */  li      r3, 1
/* 06A850 8006FDF0 4E800020 */  blr
lbl_8006FDF4:
/* 06A854 8006FDF4 38600000 */  li      r3, 0
/* 06A858 8006FDF8 4E800020 */  blr

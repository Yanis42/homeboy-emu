glabel romSetCacheSize
/* 0681F4 8006D794 7C0802A6 */  mflr    r0
/* 0681F8 8006D798 90010004 */  stw     r0, 4(r1)
/* 0681FC 8006D79C 3C000010 */  lis     r0, 0x10
/* 068200 8006D7A0 7C040000 */  cmpw    r4, r0
/* 068204 8006D7A4 9421FFE8 */  stwu    r1, -0x18(r1)
/* 068208 8006D7A8 93E10014 */  stw     r31, 0x14(r1)
/* 06820C 8006D7AC 93C10010 */  stw     r30, 0x10(r1)
/* 068210 8006D7B0 3BC30000 */  addi    r30, r3, 0
/* 068214 8006D7B4 4080000C */  bge     lbl_8006D7C0
/* 068218 8006D7B8 3C800010 */  lis     r4, 0x10
/* 06821C 8006D7BC 48000020 */  b       lbl_8006D7DC
lbl_8006D7C0:
/* 068220 8006D7C0 3C000080 */  lis     r0, 0x80
/* 068224 8006D7C4 7C040000 */  cmpw    r4, r0
/* 068228 8006D7C8 4081000C */  ble     lbl_8006D7D4
/* 06822C 8006D7CC 3C800080 */  lis     r4, 0x80
/* 068230 8006D7D0 4800000C */  b       lbl_8006D7DC
lbl_8006D7D4:
/* 068234 8006D7D4 38041FFF */  addi    r0, r4, 0x1fff
/* 068238 8006D7D8 54040024 */  rlwinm  r4, r0, 0, 0, 0x12
lbl_8006D7DC:
/* 06823C 8006D7DC 3FFE0001 */  addis   r31, r30, 1
/* 068240 8006D7E0 7C806E70 */  srawi   r0, r4, 0xd
/* 068244 8006D7E4 909F0E6C */  stw     r4, 0xe6c(r31)
/* 068248 8006D7E8 7C000194 */  addze   r0, r0
/* 06824C 8006D7EC 901F0E68 */  stw     r0, 0xe68(r31)
/* 068250 8006D7F0 387E0004 */  addi    r3, r30, 4
/* 068254 8006D7F4 64843000 */  oris    r4, r4, 0x3000
/* 068258 8006D7F8 4BF999BD */  bl      xlHeapTake
/* 06825C 8006D7FC 2C030000 */  cmpwi   r3, 0
/* 068260 8006D800 4082000C */  bne     lbl_8006D80C
/* 068264 8006D804 38600000 */  li      r3, 0
/* 068268 8006D808 48000010 */  b       lbl_8006D818
lbl_8006D80C:
/* 06826C 8006D80C 801E0004 */  lwz     r0, 4(r30)
/* 068270 8006D810 38600001 */  li      r3, 1
/* 068274 8006D814 901F0220 */  stw     r0, 0x220(r31)
lbl_8006D818:
/* 068278 8006D818 8001001C */  lwz     r0, 0x1c(r1)
/* 06827C 8006D81C 83E10014 */  lwz     r31, 0x14(r1)
/* 068280 8006D820 83C10010 */  lwz     r30, 0x10(r1)
/* 068284 8006D824 7C0803A6 */  mtlr    r0
/* 068288 8006D828 38210018 */  addi    r1, r1, 0x18
/* 06828C 8006D82C 4E800020 */  blr

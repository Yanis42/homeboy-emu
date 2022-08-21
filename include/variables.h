#ifndef __VARIABLES_H_
#define __VARIABLES_H_

#ifndef ORIGINAL

// ======================= xlCoreGCN.c ================================================
// ======================= xlPostGCN.c ================================================
// ======================= xlFileGCN.c ================================================
// ======================= xlList.c ===================================================
// ======================= xlHeap.c ===================================================
// ======================= xlObject.c =================================================
// ======================= simGCN.c ===================================================
// ======================= movie.c ====================================================
// ======================= THPPlayer.c ================================================
// ======================= THPAudioDecode.c ===========================================
// ======================= THPDraw.c ==================================================
// ======================= THPRead.c ==================================================
// ======================= THPVideoDecode.c ===========================================
// ======================= mcardGCN.c =================================================
// ======================= codeGCN.c ==================================================
// ======================= soundGCN.c =================================================
// ======================= frame.c ====================================================
// ======================= system.c ===================================================
// ======================= cpu.c ======================================================
// ======================= pif.c ======================================================
// ======================= ram.c ======================================================
// ======================= rom.c ======================================================
// ======================= rdp.c ======================================================
// ======================= rdb.c ======================================================
// ======================= rsp.c ======================================================
// ======================= mips.c =====================================================
// ======================= disk.c =====================================================
// ======================= flash.c ====================================================
// ======================= sram.c =====================================================
// ======================= audio.c ====================================================
// ======================= video.c ====================================================
// ======================= serial.c ===================================================
// ======================= library.c ==================================================
// ======================= peripheral.c ===============================================
// ======================= _frameGCNcc.c ==============================================
// ======================= _buildtev.c ================================================
// ======================= PPCArch.c ==================================================
// ======================= OS.c =======================================================
// ======================= OSAlarm.c ==================================================
// ======================= OSAlloc.c ==================================================
// ======================= OSArena.c ==================================================
// ======================= OSAudioSystem.c ============================================
// ======================= OSCache.c ==================================================
// ======================= OSContext.c ================================================
// ======================= OSError.c ==================================================
// ======================= OSFont.c ===================================================
// ======================= OSInterrupt.c ==============================================
// ======================= OSLink.c ===================================================
// ======================= OSMessage.c ================================================
// ======================= OSMemory.c =================================================
// ======================= OSMutex.c ==================================================
// ======================= OSReboot.c =================================================
// ======================= OSReset.c ==================================================
// ======================= OSResetSW.c ================================================
// ======================= OSRtc.c ====================================================
// ======================= OSSync.c ===================================================
// ======================= OSThread.c =================================================
// ======================= OSTime.c ===================================================
// ======================= __start.c ==================================================
// ======================= __ppc_eabi_init.cpp ========================================
// ======================= EXIBios.c ==================================================
// ======================= EXIUart.c ==================================================
// ======================= SIBios.c ===================================================
// ======================= SISamplingRate.c ===========================================
// ======================= vi.c =======================================================
// ======================= db.c =======================================================
// ======================= mtx.c ======================================================
// ======================= mtxvec.c ===================================================
// ======================= mtx44.c ====================================================
// ======================= GXInit.c ===================================================
// ======================= GXFifo.c ===================================================
// ======================= GXAttr.c ===================================================
// ======================= GXMisc.c ===================================================
// ======================= GXGeometry.c ===============================================
// ======================= GXFrameBuf.c ===============================================
// ======================= GXLight.c ==================================================
// ======================= GXTexture.c ================================================
// ======================= GXBump.c ===================================================
// ======================= GXTev.c ====================================================
// ======================= GXPixel.c ==================================================
// ======================= GXTransform.c ==============================================
// ======================= GXPerf.c ===================================================
// ======================= Padclamp.c =================================================
// ======================= Pad.c ======================================================
// ======================= dvdlow.c ===================================================
// ======================= dvdfs.c ====================================================
// ======================= dvd.c ======================================================
// ======================= dvdqueue.c =================================================
// ======================= dvderror.c =================================================
// ======================= dvdidutils.c ===============================================
// ======================= dvdFatal.c =================================================
// ======================= fstload.c ==================================================
// ======================= DEMOInit.c =================================================
// ======================= DEMOPuts.c =================================================
// ======================= DEMOFont.c =================================================
// ======================= DEMOPad.c ==================================================
// ======================= DEMOStats.c ================================================
// ======================= ai.c =======================================================
// ======================= ar.c =======================================================
// ======================= dsp.c ======================================================
// ======================= dsp_debug.c ================================================
// ======================= dsp_task.c =================================================
// ======================= CARDBios.c =================================================
// ======================= CARDUnlock.c ===============================================
// ======================= CARDRdwr.c =================================================
// ======================= CARDBlock.c ================================================
// ======================= CARDDir.c ==================================================
// ======================= CARDCheck.c ================================================
// ======================= CARDMount.c ================================================
// ======================= CARDFormat.c ===============================================
// ======================= CARDOpen.c =================================================
// ======================= CARDCreate.c ===============================================
// ======================= CARDRead.c =================================================
// ======================= CARDWrite.c ================================================
// ======================= CARDDelete.c ===============================================
// ======================= CARDStat.c =================================================
// ======================= CARDNet.c ==================================================
// ======================= THPDec.c ===================================================
// ======================= THPAudio.c =================================================
// ======================= texPalette.c ===============================================
// ======================= mainloop.c =================================================
// ======================= nubevent.c =================================================
// ======================= nubinit.c ==================================================
// ======================= msg.c ======================================================
// ======================= msgbuf.c ===================================================
// ======================= serpoll.c ==================================================
// ======================= usr_put.c ==================================================
// ======================= dispatch.c =================================================
// ======================= msghndlr.c =================================================
// ======================= support.c ==================================================
// ======================= mutex_TRK.c ================================================
// ======================= notify.c ===================================================
// ======================= flush_cache.c ==============================================
// ======================= mem_TRK.c ==================================================
// ======================= __exception.s ==============================================
// ======================= targimpl.c =================================================
// ======================= dolphin_trk.c ==============================================
// ======================= mpc_7xx_603e.c =============================================
// ======================= main_TRK.c =================================================
// ======================= dolphin_trk_glue.c =========================================
// ======================= targcont.c =================================================
// ======================= __mem.c ====================================================
// ======================= __va_arg.c =================================================
// ======================= global_destructor_chain.c ==================================
// ======================= runtime.c ==================================================
// ======================= abort_exit.c ===============================================
// ======================= ansi_files.c ===============================================
// ======================= ansi_fp.c ==================================================
// ======================= buffer_io.c ================================================
// ======================= critical_regions.ppc_eabi.c ================================
// ======================= ctype.c ====================================================
// ======================= direct_io.c ================================================
// ======================= errno.c ====================================================
// ======================= mbstring.c =================================================
// ======================= mem.c ======================================================
// ======================= mem_funcs.c ================================================
// ======================= misc_io.c ==================================================
// ======================= printf.c ===================================================
// ======================= scanf.c ====================================================
// ======================= string.c ===================================================
// ======================= strtoul.c ==================================================
// ======================= uart_console_io.c ==========================================
// ======================= float.c ====================================================
// ======================= wchar_io.c =================================================
// ======================= e_asin.c ===================================================
// ======================= e_pow.c ====================================================
// ======================= fminmaxdim.c ===============================================
// ======================= s_ceil.c ===================================================
// ======================= s_copysign.c ===============================================
// ======================= s_floor.c ==================================================
// ======================= s_frexp.c ==================================================
// ======================= s_ldexp.c ==================================================
// ======================= w_pow.c ====================================================
// ======================= hyperbolicsf.c =============================================
// ======================= log10f.c ===================================================
// ======================= trigf.c ====================================================
// ======================= math_inlines.c =============================================
// ======================= common_float_tables.c ======================================
// ======================= AmcExi2Stubs.c =============================================
// ======================= DebuggerDriver.c ===========================================
// ======================= odenotstub.c ===============================================
#else
/*
 * Local symbols included but should not be uncommented when types are discovered
 */

#include <dolphin.h>
#include <unk.h>

// ======================= xlCoreGCN.c ================================================
/* 800D3720 global */ extern UNK_TYPE gTgPcTPL;
/* 800DB7A4 local  */ // extern UNK_TYPE @226;
/* 800DB7B0 local  */ // extern UNK_TYPE @227;
/* 800DB7BC local  */ // extern UNK_TYPE @318;
/* 800F3EE0 local  */ // extern UNK_TYPE rmodeobj;
/* 80135580 local  */ // extern UNK_TYPE gnCountArgument;
/* 80135584 local  */ // extern UNK_TYPE gaszArgument;
/* 80135588 local  */ // extern UNK_TYPE DefaultFifo;
/* 8013558C local  */ // extern UNK_TYPE DefaultFifoObj;
/* 80135590 local  */ // extern UNK_TYPE gpHeap;
/* 80135594 local  */ // extern UNK_TYPE gArenaHi;
/* 80135598 local  */ // extern UNK_TYPE gArenaLo;
/* 8013559C global */ extern UNK_TYPE rmode;
/* 80135D00 local  */ // extern UNK_TYPE @137;
/* 80135D04 local  */ // extern UNK_TYPE @181;
/* 80135D08 local  */ // extern UNK_TYPE @182;
/* 80135D10 local  */ // extern UNK_TYPE @184;
// ======================= xlPostGCN.c ================================================
/* 800F3F1C global */ extern UNK_TYPE g_texMap;
// ======================= xlFileGCN.c ================================================
/* 800DB7E0 global */ extern UNK_TYPE gTypeFile;
/* 80134CE0 local  */ // extern UNK_TYPE @98;
/* 801355A0 local  */ // extern UNK_TYPE gpfOpen;
/* 801355A4 local  */ // extern UNK_TYPE gpfRead;
// ======================= xlList.c ===================================================
/* 800F3FA0 local  */ // extern UNK_TYPE gListList;
// ======================= xlHeap.c ===================================================
/* 800F3FB0 local  */ // extern UNK_TYPE gapHeapBlockCache;
/* 801355A8 local  */ // extern UNK_TYPE gpHeap;
/* 801355AC local  */ // extern UNK_TYPE gpHeapBlockFirst;
/* 801355B0 local  */ // extern UNK_TYPE gpHeapBlockLast;
/* 801355B4 local  */ // extern UNK_TYPE gnHeapTakeCount;
/* 801355B8 local  */ // extern UNK_TYPE gnHeapFreeCount;
/* 801355BC local  */ // extern UNK_TYPE gnHeapTakeCacheCount;
/* 801355C0 global */ extern UNK_TYPE gnSizeHeap;
// ======================= xlObject.c =================================================
/* 801355C8 local  */ // extern UNK_TYPE gpListData;
// ======================= simGCN.c ===================================================
/* 800D2FE0 local  */ // extern UNK_TYPE @143;
/* 800D3010 local  */ // extern UNK_TYPE @282;
/* 800D3040 local  */ // extern UNK_TYPE @283;
/* 800D3070 local  */ // extern UNK_TYPE @302;
/* 800D30A0 local  */ // extern UNK_TYPE @303;
/* 800D30D0 local  */ // extern UNK_TYPE @337;
/* 800D3100 local  */ // extern UNK_TYPE @338;
/* 800DB800 global */ extern UNK_TYPE gcoverOpen;
/* 800DE0E0 global */ extern UNK_TYPE gnoDisk;
/* 800E0000 global */ extern UNK_TYPE gretryErr;
/* 800E2460 global */ extern UNK_TYPE gfatalErr;
/* 800E5760 global */ extern UNK_TYPE gwrongDisk;
/* 800E7680 global */ extern UNK_TYPE greadingDisk;
/* 800E82E0 global */ extern UNK_TYPE gbar;
/* 800E8A40 global */ extern UNK_TYPE gyes;
/* 800E9020 global */ extern UNK_TYPE gno;
/* 800E9600 global */ extern UNK_TYPE gmesgOK;
/* 800E9960 global */ extern UNK_TYPE Vert_s16;
/* 800E9980 global */ extern UNK_TYPE VertTitle_s16;
/* 800E99A0 global */ extern UNK_TYPE VertYes_s16;
/* 800E99C0 global */ extern UNK_TYPE VertNo_s16;
/* 800E99E0 global */ extern UNK_TYPE Vert_s16Bar;
/* 800E9A00 global */ extern UNK_TYPE Colors_u32;
/* 800E9A20 global */ extern UNK_TYPE TexCoords_u8;
/* 800E9A28 local  */ // extern UNK_TYPE @954;
/* 800E9A34 local  */ // extern UNK_TYPE @955;
/* 800E9A44 local  */ // extern UNK_TYPE @956;
/* 800E9A54 local  */ // extern UNK_TYPE @958;
/* 800E9AA8 local  */ // extern UNK_TYPE @959;
/* 800E9AFC local  */ // extern UNK_TYPE @960;
/* 800E9B34 local  */ // extern UNK_TYPE @1223;
/* 800E9B80 local  */ // extern UNK_TYPE @1224;
/* 800E9BD0 local  */ // extern UNK_TYPE @1225;
/* 800E9BDC local  */ // extern UNK_TYPE @1228;
/* 800E9BE8 local  */ // extern UNK_TYPE @1281;
/* 800E9CC0 local  */ // extern UNK_TYPE @1585;
/* 800E9CDC local  */ // extern UNK_TYPE @1598;
/* 800E9D08 local  */ // extern UNK_TYPE @1599;
/* 800E9D14 local  */ // extern UNK_TYPE @2468;
/* 800E9D28 local  */ // extern UNK_TYPE @2469;
/* 800E9D3C local  */ // extern UNK_TYPE @2470;
/* 800E9D50 local  */ // extern UNK_TYPE @2471;
/* 800E9D64 local  */ // extern UNK_TYPE @2472;
/* 800E9D78 local  */ // extern UNK_TYPE @2473;
/* 800E9D8C local  */ // extern UNK_TYPE @2474;
/* 800E9DA0 local  */ // extern UNK_TYPE @2475;
/* 800E9DB4 local  */ // extern UNK_TYPE @2476;
/* 800E9DC8 local  */ // extern UNK_TYPE @2477;
/* 800E9DDC local  */ // extern UNK_TYPE @2478;
/* 800E9DF0 local  */ // extern UNK_TYPE @2479;
/* 800E9E04 local  */ // extern UNK_TYPE @2480;
/* 800E9E18 local  */ // extern UNK_TYPE @2481;
/* 800E9E2C local  */ // extern UNK_TYPE @2482;
/* 800E9E40 local  */ // extern UNK_TYPE @2483;
/* 800E9E54 local  */ // extern UNK_TYPE @2484;
/* 800E9E68 local  */ // extern UNK_TYPE @2485;
/* 800E9E7C local  */ // extern UNK_TYPE @2486;
/* 800E9E90 local  */ // extern UNK_TYPE @2487;
/* 800E9EA4 local  */ // extern UNK_TYPE @2488;
/* 800E9EB8 local  */ // extern UNK_TYPE @2489;
/* 800E9ECC local  */ // extern UNK_TYPE @2490;
/* 800E9EE0 local  */ // extern UNK_TYPE @2491;
/* 800E9EF4 local  */ // extern UNK_TYPE @2492;
/* 800E9F08 local  */ // extern UNK_TYPE @2493;
/* 800E9F1C local  */ // extern UNK_TYPE @2494;
/* 800E9F30 local  */ // extern UNK_TYPE @2495;
/* 800E9F44 local  */ // extern UNK_TYPE @2496;
/* 800E9F5C local  */ // extern UNK_TYPE @2497;
/* 800E9FFC local  */ // extern UNK_TYPE @2552;
/* 800EA010 local  */ // extern UNK_TYPE @2553;
/* 800EA024 local  */ // extern UNK_TYPE @2554;
/* 800EA038 local  */ // extern UNK_TYPE @2555;
/* 800EA04C local  */ // extern UNK_TYPE @2556;
/* 800EA060 local  */ // extern UNK_TYPE @2557;
/* 800EA074 local  */ // extern UNK_TYPE @2558;
/* 800EA088 local  */ // extern UNK_TYPE @2559;
/* 800EA09C local  */ // extern UNK_TYPE @2560;
/* 800EA114 local  */ // extern UNK_TYPE @2625;
/* 800EA128 local  */ // extern UNK_TYPE @2626;
/* 800EA13C local  */ // extern UNK_TYPE @2627;
/* 800EA150 local  */ // extern UNK_TYPE @2645;
/* 800EA16C local  */ // extern UNK_TYPE @2900;
/* 800EA194 local  */ // extern UNK_TYPE @2901;
/* 800F4540 local  */ // extern UNK_TYPE gOrthoMtx;
/* 800F4580 local  */ // extern UNK_TYPE gContMap;
/* 800F46C0 local  */ // extern UNK_TYPE gaszArgument;
/* 80134CE8 global */ extern UNK_TYPE gmsg_ld01Size;
/* 80134CEC global */ extern UNK_TYPE gmsg_ld02Size;
/* 80134CF0 global */ extern UNK_TYPE gmsg_ld03Size;
/* 80134CF4 global */ extern UNK_TYPE gmsg_ld04Size;
/* 80134CF8 global */ extern UNK_TYPE gmsg_ld05_1Size;
/* 80134CFC global */ extern UNK_TYPE gmsg_ld05_2Size;
/* 80134D00 global */ extern UNK_TYPE gmsg_ld06_1Size;
/* 80134D04 global */ extern UNK_TYPE gmsg_ld06_2Size;
/* 80134D08 global */ extern UNK_TYPE gmsg_ld06_3Size;
/* 80134D0C global */ extern UNK_TYPE gmsg_ld06_4Size;
/* 80134D10 global */ extern UNK_TYPE gmsg_ld07Size;
/* 80134D14 global */ extern UNK_TYPE gmsg_gf01Size;
/* 80134D18 global */ extern UNK_TYPE gmsg_gf02Size;
/* 80134D1C global */ extern UNK_TYPE gmsg_gf03Size;
/* 80134D20 global */ extern UNK_TYPE gmsg_gf04Size;
/* 80134D24 global */ extern UNK_TYPE gmsg_gf05Size;
/* 80134D28 global */ extern UNK_TYPE gmsg_gf06Size;
/* 80134D2C global */ extern UNK_TYPE gmsg_in01Size;
/* 80134D30 global */ extern UNK_TYPE gmsg_in02Size;
/* 80134D34 global */ extern UNK_TYPE gmsg_in03Size;
/* 80134D38 global */ extern UNK_TYPE gmsg_in04Size;
/* 80134D3C global */ extern UNK_TYPE gmsg_in05Size;
/* 80134D40 global */ extern UNK_TYPE gmsg_sv01Size;
/* 80134D44 global */ extern UNK_TYPE gmsg_sv01_2Size;
/* 80134D48 global */ extern UNK_TYPE gmsg_sv02Size;
/* 80134D4C global */ extern UNK_TYPE gmsg_sv03Size;
/* 80134D50 global */ extern UNK_TYPE gmsg_sv04Size;
/* 80134D54 global */ extern UNK_TYPE gmsg_sv05_1Size;
/* 80134D58 global */ extern UNK_TYPE gmsg_sv06_1Size;
/* 80134D5C global */ extern UNK_TYPE gmsg_sv06_2Size;
/* 80134D60 global */ extern UNK_TYPE gmsg_sv06_3Size;
/* 80134D64 global */ extern UNK_TYPE gmsg_sv06_4Size;
/* 80134D68 global */ extern UNK_TYPE gmsg_sv06_5Size;
/* 80134D6C global */ extern UNK_TYPE gmsg_sv07Size;
/* 80134D70 global */ extern UNK_TYPE gmsg_sv08Size;
/* 80134D74 global */ extern UNK_TYPE gmsg_sv09Size;
/* 80134D78 global */ extern UNK_TYPE gmsg_sv10Size;
/* 80134D7C global */ extern UNK_TYPE gmsg_sv11Size;
/* 80134D80 global */ extern UNK_TYPE gmsg_sv12Size;
/* 80134D84 global */ extern UNK_TYPE gmsg_sv_shareSize;
/* 80134D88 global */ extern UNK_TYPE gz_bnrSize;
/* 80134D8C global */ extern UNK_TYPE gz_iconSize;
/* 80134D90 global */ extern UNK_TYPE gHighlightChoice;
/* 80134D94 global */ extern UNK_TYPE simulatorMessageCurrent;
/* 80134D98 global */ extern UNK_TYPE gResetBeginFlag;
/* 80134D9C local  */ // extern UNK_TYPE @1226;
/* 80134DA4 local  */ // extern UNK_TYPE @1227;
/* 801355D0 local  */ // extern UNK_TYPE gpCode;
/* 801355D4 global */ extern UNK_TYPE gButtonDownToggle;
/* 801355D8 global */ extern UNK_TYPE gDVDResetToggle;
/* 801355DC local  */ // extern UNK_TYPE toggle$192;
/* 801355E0 local  */ // extern UNK_TYPE nPrevButton$701;
/* 801355E4 local  */ // extern UNK_TYPE nCurrButton$702;
/* 801355E8 local  */ // extern UNK_TYPE gbReset;
/* 801355EC local  */ // extern UNK_TYPE gnTickReset;
/* 801355F0 global */ extern UNK_TYPE gPreviousIPLSetting;
/* 801355F4 global */ extern UNK_TYPE gPreviousForceMenuSetting;
/* 801355F8 global */ extern UNK_TYPE gPreviousAllowResetSetting;
/* 801355FC global */ extern UNK_TYPE gbDisplayedError;
/* 80135600 global */ extern UNK_TYPE gpSystem;
/* 80135604 global */ extern UNK_TYPE gpSound;
/* 80135608 global */ extern UNK_TYPE gpFrame;
/* 80135D18 local  */ // extern UNK_TYPE @140;
/* 80135D1C local  */ // extern UNK_TYPE @141;
/* 80135D20 local  */ // extern UNK_TYPE @142;
/* 80135D24 local  */ // extern UNK_TYPE @1428;
/* 80135D28 local  */ // extern UNK_TYPE @1429;
/* 80135D2C local  */ // extern UNK_TYPE @1430;
/* 80135D30 local  */ // extern UNK_TYPE @1600;
/* 80135D38 local  */ // extern UNK_TYPE @1602;
/* 80135D40 local  */ // extern UNK_TYPE @1663;
/* 80135D48 local  */ // extern UNK_TYPE @1665;
/* 80135D50 local  */ // extern UNK_TYPE @1789;
/* 80135D54 local  */ // extern UNK_TYPE @1790;
/* 80135D58 local  */ // extern UNK_TYPE @1791;
/* 80135D5C local  */ // extern UNK_TYPE @2688;
/* 80135D60 local  */ // extern UNK_TYPE @2689;
/* 80135D64 local  */ // extern UNK_TYPE @2690;
/* 80135D68 local  */ // extern UNK_TYPE @2691;
/* 80135D6C local  */ // extern UNK_TYPE @2692;
// ======================= movie.c ====================================================
/* 800EA1C8 local  */ // extern UNK_TYPE @146;
/* 80135610 global */ extern UNK_TYPE gBufferP;
// ======================= THPPlayer.c ================================================
/* 800EA1E8 local  */ // extern UNK_TYPE VolumeTable;
/* 800EA2E8 local  */ // extern UNK_TYPE @25;
/* 800EA324 local  */ // extern UNK_TYPE @60;
/* 800EA360 local  */ // extern UNK_TYPE @61;
/* 800EA398 local  */ // extern UNK_TYPE @62;
/* 800EA3A8 local  */ // extern UNK_TYPE @64;
/* 800EA3C8 local  */ // extern UNK_TYPE @65;
/* 800EA3DC local  */ // extern UNK_TYPE @66;
/* 800EA3F8 local  */ // extern UNK_TYPE @199;
/* 800EA424 local  */ // extern UNK_TYPE @200;
/* 800EA458 local  */ // extern UNK_TYPE @201;
/* 800F46E0 global */ extern UNK_TYPE gpErrorMessageBuffer;
/* 800F96E0 local  */ // extern UNK_TYPE WorkBuffer;
/* 800F9720 local  */ // extern UNK_TYPE PrepareReadyQueue;
/* 800F9740 local  */ // extern UNK_TYPE UsedTextureSetQueue;
/* 800F9760 local  */ // extern UNK_TYPE UsedTextureSetMessage;
/* 800F9780 local  */ // extern UNK_TYPE SoundBuffer;
/* 800F9C80 global */ extern UNK_TYPE ActivePlayer;
/* 80134DB0 local  */ // extern UNK_TYPE @63;
/* 80135618 local  */ // extern UNK_TYPE Initialized;
/* 8013561C local  */ // extern UNK_TYPE PrepareReadyMessage;
/* 80135620 local  */ // extern UNK_TYPE OldVIPostCallback;
/* 80135624 local  */ // extern UNK_TYPE SoundBufferIndex;
/* 80135628 local  */ // extern UNK_TYPE OldAIDCallback;
/* 8013562C local  */ // extern UNK_TYPE LastAudioBuffer;
/* 80135630 local  */ // extern UNK_TYPE CurAudioBuffer;
/* 80135634 local  */ // extern UNK_TYPE AudioSystem;
/* 80135D70 local  */ // extern UNK_TYPE @67;
/* 80135D74 local  */ // extern UNK_TYPE @357;
// ======================= THPAudioDecode.c ===========================================
/* 800EA488 local  */ // extern UNK_TYPE @25;
/* 800F9E50 local  */ // extern UNK_TYPE AudioDecodeThread;
/* 800FA168 local  */ // extern UNK_TYPE AudioDecodeThreadStack;
/* 800FB168 local  */ // extern UNK_TYPE FreeAudioBufferQueue;
/* 800FB188 local  */ // extern UNK_TYPE DecodedAudioBufferQueue;
/* 800FB1A8 local  */ // extern UNK_TYPE FreeAudioBufferMessage;
/* 800FB1B4 local  */ // extern UNK_TYPE DecodedAudioBufferMessage;
/* 80135638 local  */ // extern UNK_TYPE AudioDecodeThreadCreated;
// ======================= THPDraw.c ==================================================
/* 80135D78 local  */ // extern UNK_TYPE @12;
/* 80135D80 local  */ // extern UNK_TYPE @15;
/* 80135D84 local  */ // extern UNK_TYPE @18;
/* 80135D88 local  */ // extern UNK_TYPE @21;
/* 80135D8C local  */ // extern UNK_TYPE @42;
/* 80135D90 local  */ // extern UNK_TYPE @43;
/* 80135D94 local  */ // extern UNK_TYPE @44;
/* 80135D98 local  */ // extern UNK_TYPE @46;
// ======================= THPRead.c ==================================================
/* 800D3130 local  */ // extern UNK_TYPE @144;
/* 800D3160 local  */ // extern UNK_TYPE @167;
/* 800D3190 local  */ // extern UNK_TYPE @168;
/* 800EA4B0 local  */ // extern UNK_TYPE @290;
/* 800EA4CC local  */ // extern UNK_TYPE @365;
/* 800EA500 local  */ // extern UNK_TYPE @384;
/* 800FB1C0 local  */ // extern UNK_TYPE FreeReadBufferQueue;
/* 800FB1E0 local  */ // extern UNK_TYPE ReadedBufferQueue;
/* 800FB200 local  */ // extern UNK_TYPE ReadedBufferQueue2;
/* 800FB220 local  */ // extern UNK_TYPE FreeReadBufferMessage;
/* 800FB248 local  */ // extern UNK_TYPE ReadedBufferMessage;
/* 800FB270 local  */ // extern UNK_TYPE ReadedBufferMessage2;
/* 800FB298 local  */ // extern UNK_TYPE ReadThread;
/* 800FB5B0 local  */ // extern UNK_TYPE ReadThreadStack;
/* 800FC5B0 local  */ // extern UNK_TYPE gOrthoMtx;
/* 80135640 local  */ // extern UNK_TYPE ReadThreadCreated;
/* 80135644 global */ extern UNK_TYPE gMovieErrorToggle;
/* 80135648 local  */ // extern UNK_TYPE toggle$184;
/* 8013564C local  */ // extern UNK_TYPE gbReset;
/* 80135650 local  */ // extern UNK_TYPE gnTickReset;
/* 80135DA0 local  */ // extern UNK_TYPE @141;
/* 80135DA4 local  */ // extern UNK_TYPE @142;
/* 80135DA8 local  */ // extern UNK_TYPE @143;
/* 80135DAC local  */ // extern UNK_TYPE @310;
/* 80135DB0 local  */ // extern UNK_TYPE @312;
/* 80135DB8 local  */ // extern UNK_TYPE @408;
/* 80135DBC local  */ // extern UNK_TYPE @409;
/* 80135DC0 local  */ // extern UNK_TYPE @410;
/* 80135DC4 local  */ // extern UNK_TYPE @411;
/* 80135DC8 local  */ // extern UNK_TYPE @412;
/* 80135DCC local  */ // extern UNK_TYPE @413;
/* 80135DD0 local  */ // extern UNK_TYPE @414;
/* 80135DD4 local  */ // extern UNK_TYPE @415;
// ======================= THPVideoDecode.c ===========================================
/* 800EA520 local  */ // extern UNK_TYPE @25;
/* 800FC5F0 local  */ // extern UNK_TYPE VideoDecodeThread;
/* 800FC908 local  */ // extern UNK_TYPE VideoDecodeThreadStack;
/* 800FD908 local  */ // extern UNK_TYPE FreeTextureSetQueue;
/* 800FD928 local  */ // extern UNK_TYPE DecodedTextureSetQueue;
/* 800FD948 local  */ // extern UNK_TYPE FreeTextureSetMessage;
/* 800FD954 local  */ // extern UNK_TYPE DecodedTextureSetMessage;
/* 80135658 local  */ // extern UNK_TYPE VideoDecodeThreadCreated;
/* 8013565C local  */ // extern UNK_TYPE First;
// ======================= mcardGCN.c =================================================
/* 800EA548 local  */ // extern UNK_TYPE @2076;
/* 800EA564 local  */ // extern UNK_TYPE @2334;
/* 800EA59C local  */ // extern UNK_TYPE @2335;
/* 800EA5A8 local  */ // extern UNK_TYPE @2980;
/* 800EA608 local  */ // extern UNK_TYPE @2995;
/* 800EA668 local  */ // extern UNK_TYPE @3180;
/* 800EA730 local  */ // extern UNK_TYPE @3232;
/* 800EA740 local  */ // extern UNK_TYPE @3335;
/* 800EA754 local  */ // extern UNK_TYPE @3537;
/* 800EA764 local  */ // extern UNK_TYPE @3834;
/* 800EA778 local  */ // extern UNK_TYPE @4148;
/* 800EA78C local  */ // extern UNK_TYPE @4149;
/* 800EA7A0 local  */ // extern UNK_TYPE @4195;
/* 800EA7B4 local  */ // extern UNK_TYPE @4256;
/* 800FD960 local  */ // extern UNK_TYPE gMCardCardWorkArea;
/* 80107960 global */ extern UNK_TYPE gDate;
/* 80107988 global */ extern UNK_TYPE bNoWriteInCurrentFrame;
/* 801079B0 global */ extern UNK_TYPE mCard;
/* 80134DB8 local  */ // extern UNK_TYPE toggle$1034;
/* 80135660 global */ extern UNK_TYPE currentIdx;
/* 80135664 local  */ // extern UNK_TYPE yes$771;
/* 80135668 local  */ // extern UNK_TYPE prevMenuEntry$772;
/* 8013566C local  */ // extern UNK_TYPE nextMenuEntry$773;
/* 80135670 local  */ // extern UNK_TYPE toggle2$1029;
/* 80135674 local  */ // extern UNK_TYPE checkFailCount$1490;
/* 80135678 global */ extern UNK_TYPE bWrite2Card;
// ======================= codeGCN.c ==================================================
/* 800EA7C8 global */ extern UNK_TYPE gClassCode;
/* 80134DC0 local  */ // extern UNK_TYPE @134;
/* 80135680 local  */ // extern UNK_TYPE gpBufferFunction;
/* 80135684 local  */ // extern UNK_TYPE ganDataCode;
// ======================= soundGCN.c =================================================
/* 800EA7D8 global */ extern UNK_TYPE gClassSound;
/* 800EA7E8 local  */ // extern UNK_TYPE @475;
/* 800EA828 local  */ // extern UNK_TYPE @476;
/* 80108180 global */ extern UNK_TYPE gVolumeCurve;
/* 80134DC8 local  */ // extern UNK_TYPE @108;
/* 80134DD0 local  */ // extern UNK_TYPE @291;
/* 80135DD8 local  */ // extern UNK_TYPE @387;
/* 80135DDC local  */ // extern UNK_TYPE @388;
/* 80135DE0 local  */ // extern UNK_TYPE @389;
/* 80135DE8 local  */ // extern UNK_TYPE @390;
/* 80135DF0 local  */ // extern UNK_TYPE @392;
/* 80135DF8 local  */ // extern UNK_TYPE @642;
// ======================= frame.c ====================================================
/* 800D31C0 local  */ // extern UNK_TYPE @2157;
/* 800EA838 local  */ // extern UNK_TYPE @137;
/* 800EA848 global */ extern UNK_TYPE gClassFrame;
/* 800EA858 global */ extern UNK_TYPE ganNameColor;
/* 800EA878 global */ extern UNK_TYPE ganNamePixel;
/* 800EA898 global */ extern UNK_TYPE ganNameTexMtx;
/* 800EA8B8 global */ extern UNK_TYPE ganNameTexCoord;
/* 800EA8D8 local  */ // extern UNK_TYPE @1055;
/* 800EA8EC local  */ // extern UNK_TYPE @1056;
/* 800EA900 local  */ // extern UNK_TYPE @1057;
/* 800EA914 local  */ // extern UNK_TYPE @1058;
/* 800EA920 local  */ // extern UNK_TYPE gaszNameColor;
/* 800EA970 local  */ // extern UNK_TYPE gaszNameAlpha;
/* 800EA994 local  */ // extern UNK_TYPE gapfDrawTriangle;
/* 800EA9B4 local  */ // extern UNK_TYPE gapfDrawLine;
/* 800EA9CC local  */ // extern UNK_TYPE sZBufShift;
/* 800EAA0C local  */ // extern UNK_TYPE @1455;
/* 800EAA18 local  */ // extern UNK_TYPE @1456;
/* 800EAA24 local  */ // extern UNK_TYPE gaszNameColorType;
/* 800EAA38 local  */ // extern UNK_TYPE sCommandCodes$1679;
/* 800EAA58 local  */ // extern UNK_TYPE sCommandCodes$1702;
/* 800EAA80 local  */ // extern UNK_TYPE sCommandCodes2$1722;
/* 800EAAA8 local  */ // extern UNK_TYPE GBIcode$1816;
/* 800EAAB4 local  */ // extern UNK_TYPE GBIcode2D2$1906;
/* 800EAAD0 local  */ // extern UNK_TYPE GBIcode3D1$1907;
/* 800EAAE4 local  */ // extern UNK_TYPE GBIcode3D2$1908;
/* 800EAAFC global */ extern UNK_TYPE anRenderModeDatabaseCycle2;
/* 800EAC8C global */ extern UNK_TYPE anRenderModeDatabaseCopy;
/* 800EAE1C global */ extern UNK_TYPE anRenderModeDatabaseFill;
/* 800EAFAC global */ extern UNK_TYPE anRenderModeDatabaseCycle1;
/* 800EB13C local  */ // extern UNK_TYPE @2728;
/* 800EB168 local  */ // extern UNK_TYPE @2729;
/* 800EB190 local  */ // extern UNK_TYPE @3455;
/* 800EB1B8 local  */ // extern UNK_TYPE @4743;
/* 800EB1F8 local  */ // extern UNK_TYPE @4785;
/* 800EB20C local  */ // extern UNK_TYPE @6116;
/* 800EB22C local  */ // extern UNK_TYPE @6137;
/* 800EB2AC local  */ // extern UNK_TYPE @6333;
/* 800EB2D4 local  */ // extern UNK_TYPE @7442;
/* 801085A0 local  */ // extern UNK_TYPE sConstantBufAddr;
/* 801085C0 local  */ // extern UNK_TYPE sTempZBuf;
/* 8012DDC0 local  */ // extern UNK_TYPE sFrameObj1$1562;
/* 8012DDE0 local  */ // extern UNK_TYPE sFrameObj2$1563;
/* 8012DE00 local  */ // extern UNK_TYPE sFrameObj$1564;
/* 8012DE20 local  */ // extern UNK_TYPE sFrameObj$1565;
/* 8012DE40 local  */ // extern UNK_TYPE sFrameObj$1568;
/* 8012DE60 local  */ // extern UNK_TYPE line$1582;
/* 8012F260 local  */ // extern UNK_TYPE line$1606;
/* 8012FC60 local  */ // extern UNK_TYPE line$1630;
/* 80130660 local  */ // extern UNK_TYPE sFrameObj$1647;
/* 80130680 local  */ // extern UNK_TYPE sFrameObj$1660;
/* 801306A0 local  */ // extern UNK_TYPE frameObj$1663;
/* 801306C0 local  */ // extern UNK_TYPE frameObj$1673;
/* 801306E0 local  */ // extern UNK_TYPE tempLine$1785;
/* 80134DD8 local  */ // extern UNK_TYPE sRemapI$746;
/* 80134DE0 local  */ // extern UNK_TYPE @1039;
/* 80134DE8 local  */ // extern UNK_TYPE @1040;
/* 80134DF0 local  */ // extern UNK_TYPE @1041;
/* 80134DF4 local  */ // extern UNK_TYPE @1042;
/* 80134DF8 local  */ // extern UNK_TYPE @1043;
/* 80134DFC local  */ // extern UNK_TYPE @1044;
/* 80134E00 local  */ // extern UNK_TYPE @1045;
/* 80134E04 local  */ // extern UNK_TYPE @1046;
/* 80134E08 local  */ // extern UNK_TYPE @1047;
/* 80134E10 local  */ // extern UNK_TYPE @1048;
/* 80134E18 local  */ // extern UNK_TYPE @1049;
/* 80134E20 local  */ // extern UNK_TYPE @1050;
/* 80134E28 local  */ // extern UNK_TYPE @1051;
/* 80134E2C local  */ // extern UNK_TYPE @1052;
/* 80134E34 local  */ // extern UNK_TYPE @1053;
/* 80134E3C local  */ // extern UNK_TYPE @1054;
/* 80134E44 local  */ // extern UNK_TYPE @1452;
/* 80134E48 local  */ // extern UNK_TYPE @1453;
/* 80134E50 local  */ // extern UNK_TYPE @1454;
/* 80134E56 local  */ // extern UNK_TYPE cAlpha$1648;
/* 80134E58 local  */ // extern UNK_TYPE @7443;
/* 80135688 local  */ // extern UNK_TYPE gbFrameValid;
/* 8013568C local  */ // extern UNK_TYPE gbFrameBegin;
/* 80135690 local  */ // extern UNK_TYPE snScissorChanged;
/* 80135694 local  */ // extern UNK_TYPE snScissorXOrig;
/* 80135698 local  */ // extern UNK_TYPE snScissorYOrig;
/* 8013569C local  */ // extern UNK_TYPE snScissorWidth;
/* 801356A0 local  */ // extern UNK_TYPE snScissorHeight;
/* 801356A4 local  */ // extern UNK_TYPE sCopyFrameSyncReceived;
/* 801356A8 local  */ // extern UNK_TYPE sSpecialZeldaHackON;
/* 801356AC local  */ // extern UNK_TYPE sDestinationBuffer;
/* 801356B0 local  */ // extern UNK_TYPE sSrcBuffer;
/* 801356B4 local  */ // extern UNK_TYPE sNumAddr;
/* 801356B8 local  */ // extern UNK_TYPE gHackCreditsColor;
/* 801356BC global */ extern UNK_TYPE gNoSwapBuffer;
/* 801356C0 local  */ // extern UNK_TYPE gnCountMapHack;
/* 801356C4 local  */ // extern UNK_TYPE nCounter$1367;
/* 801356C8 local  */ // extern UNK_TYPE bSkip$1410;
/* 801356CC local  */ // extern UNK_TYPE nLastFrame$1695;
/* 801356D0 local  */ // extern UNK_TYPE nCopyFrame$1697;
/* 80135E00 local  */ // extern UNK_TYPE @2783;
/* 80135E04 local  */ // extern UNK_TYPE @2848;
/* 80135E08 local  */ // extern UNK_TYPE @2849;
/* 80135E10 local  */ // extern UNK_TYPE @2851;
/* 80135E18 local  */ // extern UNK_TYPE @2909;
/* 80135E1C local  */ // extern UNK_TYPE @2910;
/* 80135E20 local  */ // extern UNK_TYPE @2911;
/* 80135E24 local  */ // extern UNK_TYPE @2912;
/* 80135E28 local  */ // extern UNK_TYPE @2914;
/* 80135E30 local  */ // extern UNK_TYPE @3235;
/* 80135E34 local  */ // extern UNK_TYPE @3236;
/* 80135E38 local  */ // extern UNK_TYPE @3237;
/* 80135E40 local  */ // extern UNK_TYPE @3238;
/* 80135E48 local  */ // extern UNK_TYPE @3239;
/* 80135E50 local  */ // extern UNK_TYPE @3240;
/* 80135E54 local  */ // extern UNK_TYPE @3241;
/* 80135E58 local  */ // extern UNK_TYPE @3401;
/* 80135E5C local  */ // extern UNK_TYPE @3402;
/* 80135E60 local  */ // extern UNK_TYPE @3551;
/* 80135E64 local  */ // extern UNK_TYPE @3552;
/* 80135E68 local  */ // extern UNK_TYPE @3553;
/* 80135E6C local  */ // extern UNK_TYPE @3554;
/* 80135E70 local  */ // extern UNK_TYPE @3575;
/* 80135E78 local  */ // extern UNK_TYPE @3576;
/* 80135E80 local  */ // extern UNK_TYPE @4417;
/* 80135E84 local  */ // extern UNK_TYPE @4418;
/* 80135E88 local  */ // extern UNK_TYPE @4419;
/* 80135E8C local  */ // extern UNK_TYPE @4420;
/* 80135E90 local  */ // extern UNK_TYPE @4421;
/* 80135E94 local  */ // extern UNK_TYPE @4449;
/* 80135E98 local  */ // extern UNK_TYPE @4450;
/* 80135E9C local  */ // extern UNK_TYPE @4451;
/* 80135EA0 local  */ // extern UNK_TYPE @4452;
/* 80135EA4 local  */ // extern UNK_TYPE @4600;
/* 80135EA8 local  */ // extern UNK_TYPE @4601;
/* 80135EAC local  */ // extern UNK_TYPE @4602;
/* 80135EB0 local  */ // extern UNK_TYPE @4962;
/* 80135EB4 local  */ // extern UNK_TYPE @5270;
/* 80135EB8 local  */ // extern UNK_TYPE @5271;
/* 80135EBC local  */ // extern UNK_TYPE @5272;
/* 80135EC0 local  */ // extern UNK_TYPE @5273;
/* 80135EC4 local  */ // extern UNK_TYPE @5274;
/* 80135EC8 local  */ // extern UNK_TYPE @6104;
/* 80135ECC local  */ // extern UNK_TYPE @6254;
/* 80135ED0 local  */ // extern UNK_TYPE @6255;
/* 80135ED4 local  */ // extern UNK_TYPE @6256;
/* 80135ED8 local  */ // extern UNK_TYPE @6257;
/* 80135EDC local  */ // extern UNK_TYPE @6258;
/* 80135EE0 local  */ // extern UNK_TYPE @6259;
/* 80135EE4 local  */ // extern UNK_TYPE @6274;
/* 80135EE8 local  */ // extern UNK_TYPE @7124;
/* 80135EEC local  */ // extern UNK_TYPE @7125;
/* 80135EF0 local  */ // extern UNK_TYPE @7126;
/* 80135EF4 local  */ // extern UNK_TYPE @7127;
/* 80135EF8 local  */ // extern UNK_TYPE @7128;
/* 80135EFC local  */ // extern UNK_TYPE @7129;
/* 80135F00 local  */ // extern UNK_TYPE @7130;
/* 80135F04 local  */ // extern UNK_TYPE @7131;
/* 80135F08 local  */ // extern UNK_TYPE @7132;
/* 80135F0C local  */ // extern UNK_TYPE @7133;
/* 80135F10 local  */ // extern UNK_TYPE @7134;
/* 80135F14 local  */ // extern UNK_TYPE @7135;
/* 80135F18 local  */ // extern UNK_TYPE @7136;
/* 80135F1C local  */ // extern UNK_TYPE @7137;
/* 80135F20 local  */ // extern UNK_TYPE @7138;
/* 80135F24 local  */ // extern UNK_TYPE @7139;
/* 80135F28 local  */ // extern UNK_TYPE @7140;
/* 80135F2C local  */ // extern UNK_TYPE @7141;
/* 80135F30 local  */ // extern UNK_TYPE @7201;
/* 80135F34 local  */ // extern UNK_TYPE @7202;
/* 80135F38 local  */ // extern UNK_TYPE @7203;
/* 80135F3C local  */ // extern UNK_TYPE @7204;
/* 80135F40 local  */ // extern UNK_TYPE @7205;
/* 80135F44 local  */ // extern UNK_TYPE @7206;
/* 80135F48 local  */ // extern UNK_TYPE @7207;
/* 80135F4C local  */ // extern UNK_TYPE @7208;
/* 80135F50 local  */ // extern UNK_TYPE @7209;
/* 80135F54 local  */ // extern UNK_TYPE @7210;
/* 80135F58 local  */ // extern UNK_TYPE @7211;
/* 80135F5C local  */ // extern UNK_TYPE @7212;
/* 80135F60 local  */ // extern UNK_TYPE @7213;
/* 80135F64 local  */ // extern UNK_TYPE @7214;
/* 80135F68 local  */ // extern UNK_TYPE @7215;
/* 80135F6C local  */ // extern UNK_TYPE @7216;
/* 80135F70 local  */ // extern UNK_TYPE @7217;
/* 80135F74 local  */ // extern UNK_TYPE @7218;
/* 80135F78 local  */ // extern UNK_TYPE @7219;
/* 80135F7C local  */ // extern UNK_TYPE @7220;
/* 80135F80 local  */ // extern UNK_TYPE @7221;
/* 80135F88 local  */ // extern UNK_TYPE @7222;
// ======================= system.c ===================================================
/* 800EB300 local  */ // extern UNK_TYPE @139;
/* 800EB310 global */ extern UNK_TYPE gClassSystem;
/* 800EB320 local  */ // extern UNK_TYPE contMap;
/* 800EB460 local  */ // extern UNK_TYPE @1446;
/* 800EB4A0 local  */ // extern UNK_TYPE @1680;
/* 800EB4AC local  */ // extern UNK_TYPE @1681;
/* 800EB4B8 local  */ // extern UNK_TYPE @1683;
/* 800EB4C8 local  */ // extern UNK_TYPE @1685;
/* 800EB508 local  */ // extern UNK_TYPE @2352;
/* 800EB518 local  */ // extern UNK_TYPE @2353;
/* 800EB528 local  */ // extern UNK_TYPE @2355;
/* 800EB534 local  */ // extern UNK_TYPE @2359;
/* 800EB548 local  */ // extern UNK_TYPE @2363;
/* 800EB564 local  */ // extern UNK_TYPE @2368;
/* 800EB574 local  */ // extern UNK_TYPE @2371;
/* 800EB580 local  */ // extern UNK_TYPE @2374;
/* 800EB590 local  */ // extern UNK_TYPE @2382;
/* 800EB5A0 local  */ // extern UNK_TYPE @2388;
/* 800EB5AC local  */ // extern UNK_TYPE @2394;
/* 800EB5B8 local  */ // extern UNK_TYPE @2398;
/* 800EB5C8 local  */ // extern UNK_TYPE @2401;
/* 800EB5D8 local  */ // extern UNK_TYPE @2404;
/* 800EB5E8 local  */ // extern UNK_TYPE @2408;
/* 800EB5F4 local  */ // extern UNK_TYPE @2409;
/* 800EB600 local  */ // extern UNK_TYPE @2410;
/* 800EB60C local  */ // extern UNK_TYPE @2412;
/* 800EB61C local  */ // extern UNK_TYPE @2413;
/* 800EB62C local  */ // extern UNK_TYPE @2414;
/* 800EB63C local  */ // extern UNK_TYPE @2431;
/* 800EB64C local  */ // extern UNK_TYPE @2435;
/* 801308E0 global */ extern UNK_TYPE gSystemRomConfigurationList;
/* 80134E60 global */ extern UNK_TYPE nTickMultiplier;
/* 80134E64 global */ extern UNK_TYPE fTickScale;
/* 80134E68 local  */ // extern UNK_TYPE @1668;
/* 80134E6C local  */ // extern UNK_TYPE @1669;
/* 80134E70 local  */ // extern UNK_TYPE @1670;
/* 80134E74 local  */ // extern UNK_TYPE @1671;
/* 80134E7C local  */ // extern UNK_TYPE @1672;
/* 80134E84 local  */ // extern UNK_TYPE @1673;
/* 80134E88 local  */ // extern UNK_TYPE @1674;
/* 80134E8C local  */ // extern UNK_TYPE @1675;
/* 80134E90 local  */ // extern UNK_TYPE @1676;
/* 80134E94 local  */ // extern UNK_TYPE @1677;
/* 80134E98 local  */ // extern UNK_TYPE @1678;
/* 80134E9C local  */ // extern UNK_TYPE @1679;
/* 80134EA0 local  */ // extern UNK_TYPE @1682;
/* 80134EA8 local  */ // extern UNK_TYPE @1684;
/* 80134EB0 local  */ // extern UNK_TYPE @2350;
/* 80134EB8 local  */ // extern UNK_TYPE @2351;
/* 80134EC0 local  */ // extern UNK_TYPE @2354;
/* 80134EC8 local  */ // extern UNK_TYPE @2356;
/* 80134ED0 local  */ // extern UNK_TYPE @2357;
/* 80134ED8 local  */ // extern UNK_TYPE @2358;
/* 80134EE0 local  */ // extern UNK_TYPE @2360;
/* 80134EE8 local  */ // extern UNK_TYPE @2361;
/* 80134EF0 local  */ // extern UNK_TYPE @2362;
/* 80134EF8 local  */ // extern UNK_TYPE @2364;
/* 80134F00 local  */ // extern UNK_TYPE @2365;
/* 80134F08 local  */ // extern UNK_TYPE @2367;
/* 80134F10 local  */ // extern UNK_TYPE @2369;
/* 80134F18 local  */ // extern UNK_TYPE @2370;
/* 80134F20 local  */ // extern UNK_TYPE @2372;
/* 80134F28 local  */ // extern UNK_TYPE @2373;
/* 80134F2C local  */ // extern UNK_TYPE @2375;
/* 80134F34 local  */ // extern UNK_TYPE @2376;
/* 80134F3C local  */ // extern UNK_TYPE @2377;
/* 80134F44 local  */ // extern UNK_TYPE @2378;
/* 80134F4C local  */ // extern UNK_TYPE @2379;
/* 80134F54 local  */ // extern UNK_TYPE @2380;
/* 80134F5C local  */ // extern UNK_TYPE @2381;
/* 80134F64 local  */ // extern UNK_TYPE @2383;
/* 80134F6C local  */ // extern UNK_TYPE @2384;
/* 80134F74 local  */ // extern UNK_TYPE @2385;
/* 80134F7C local  */ // extern UNK_TYPE @2386;
/* 80134F84 local  */ // extern UNK_TYPE @2387;
/* 80134F8C local  */ // extern UNK_TYPE @2389;
/* 80134F94 local  */ // extern UNK_TYPE @2390;
/* 80134F9C local  */ // extern UNK_TYPE @2391;
/* 80134FA4 local  */ // extern UNK_TYPE @2392;
/* 80134FAC local  */ // extern UNK_TYPE @2393;
/* 80134FB4 local  */ // extern UNK_TYPE @2395;
/* 80134FBC local  */ // extern UNK_TYPE @2396;
/* 80134FC4 local  */ // extern UNK_TYPE @2397;
/* 80134FC8 local  */ // extern UNK_TYPE @2399;
/* 80134FD0 local  */ // extern UNK_TYPE @2400;
/* 80134FD4 local  */ // extern UNK_TYPE @2402;
/* 80134FDC local  */ // extern UNK_TYPE @2403;
/* 80134FE0 local  */ // extern UNK_TYPE @2405;
/* 80134FE8 local  */ // extern UNK_TYPE @2406;
/* 80134FF0 local  */ // extern UNK_TYPE @2407;
/* 80134FF8 local  */ // extern UNK_TYPE @2411;
/* 80135000 local  */ // extern UNK_TYPE @2415;
/* 80135008 local  */ // extern UNK_TYPE @2416;
/* 80135010 local  */ // extern UNK_TYPE @2417;
/* 80135018 local  */ // extern UNK_TYPE @2418;
/* 80135020 local  */ // extern UNK_TYPE @2419;
/* 80135028 local  */ // extern UNK_TYPE @2420;
/* 80135030 local  */ // extern UNK_TYPE @2421;
/* 80135038 local  */ // extern UNK_TYPE @2422;
/* 80135040 local  */ // extern UNK_TYPE @2423;
/* 80135048 local  */ // extern UNK_TYPE @2424;
/* 80135050 local  */ // extern UNK_TYPE @2425;
/* 80135058 local  */ // extern UNK_TYPE @2426;
/* 80135060 local  */ // extern UNK_TYPE @2427;
/* 80135068 local  */ // extern UNK_TYPE @2428;
/* 80135070 local  */ // extern UNK_TYPE @2429;
/* 80135078 local  */ // extern UNK_TYPE @2430;
/* 80135080 local  */ // extern UNK_TYPE @2432;
/* 80135088 local  */ // extern UNK_TYPE @2433;
/* 80135090 local  */ // extern UNK_TYPE @2434;
/* 80135098 local  */ // extern UNK_TYPE @2436;
/* 801350A0 local  */ // extern UNK_TYPE @2437;
/* 801356D8 global */ extern UNK_TYPE gnFlagZelda;
/* 80135F90 local  */ // extern UNK_TYPE @2349;
/* 80135F94 local  */ // extern UNK_TYPE @2366;
/* 80135F98 local  */ // extern UNK_TYPE @2439;
// ======================= cpu.c ======================================================
/* 800EB658 global */ extern UNK_TYPE gClassCPU;
/* 800EB668 local  */ // extern UNK_TYPE gaszNameGPR;
/* 800EB6E8 local  */ // extern UNK_TYPE gaszNameFPR;
/* 800EB768 local  */ // extern UNK_TYPE @204;
/* 800EB774 local  */ // extern UNK_TYPE @205;
/* 800EB780 local  */ // extern UNK_TYPE @207;
/* 800EB78C local  */ // extern UNK_TYPE @209;
/* 800EB79C local  */ // extern UNK_TYPE @210;
/* 800EB7A8 local  */ // extern UNK_TYPE @212;
/* 800EB7B4 local  */ // extern UNK_TYPE @220;
/* 800EB7C0 local  */ // extern UNK_TYPE @221;
/* 800EB7CC local  */ // extern UNK_TYPE @222;
/* 800EB7D8 local  */ // extern UNK_TYPE @223;
/* 800EB7E8 local  */ // extern UNK_TYPE @224;
/* 800EB7F8 local  */ // extern UNK_TYPE @225;
/* 800EB808 local  */ // extern UNK_TYPE @226;
/* 800EB818 local  */ // extern UNK_TYPE @227;
/* 800EB828 local  */ // extern UNK_TYPE @229;
/* 800EB834 local  */ // extern UNK_TYPE @232;
/* 800EB840 local  */ // extern UNK_TYPE @233;
/* 800EB850 local  */ // extern UNK_TYPE gaszNameCP0;
/* 800EB8D0 local  */ // extern UNK_TYPE @235;
/* 800EB8E0 local  */ // extern UNK_TYPE @236;
/* 800EB8F0 local  */ // extern UNK_TYPE @237;
/* 800EB900 local  */ // extern UNK_TYPE @238;
/* 800EB910 local  */ // extern UNK_TYPE @239;
/* 800EB920 local  */ // extern UNK_TYPE @240;
/* 800EB930 local  */ // extern UNK_TYPE @241;
/* 800EB940 local  */ // extern UNK_TYPE @242;
/* 800EB950 local  */ // extern UNK_TYPE @243;
/* 800EB960 local  */ // extern UNK_TYPE @244;
/* 800EB974 local  */ // extern UNK_TYPE @245;
/* 800EB988 local  */ // extern UNK_TYPE @246;
/* 800EB99C local  */ // extern UNK_TYPE @247;
/* 800EB9B0 local  */ // extern UNK_TYPE @248;
/* 800EB9C4 local  */ // extern UNK_TYPE @249;
/* 800EB9D8 local  */ // extern UNK_TYPE @250;
/* 800EB9EC local  */ // extern UNK_TYPE @251;
/* 800EBA00 local  */ // extern UNK_TYPE @252;
/* 800EBA14 local  */ // extern UNK_TYPE @253;
/* 800EBA28 local  */ // extern UNK_TYPE @254;
/* 800EBA3C local  */ // extern UNK_TYPE @255;
/* 800EBA50 local  */ // extern UNK_TYPE @256;
/* 800EBA64 local  */ // extern UNK_TYPE @257;
/* 800EBA78 local  */ // extern UNK_TYPE @258;
/* 800EBA8C local  */ // extern UNK_TYPE @259;
/* 800EBAA0 local  */ // extern UNK_TYPE @260;
/* 800EBAB4 local  */ // extern UNK_TYPE @261;
/* 800EBAC8 local  */ // extern UNK_TYPE @262;
/* 800EBADC local  */ // extern UNK_TYPE @263;
/* 800EBAF0 local  */ // extern UNK_TYPE @264;
/* 800EBB04 local  */ // extern UNK_TYPE gaszNameCP1;
/* 800EBB88 local  */ // extern UNK_TYPE ganMaskGetCP0;
/* 800EBC88 local  */ // extern UNK_TYPE ganMaskSetCP0;
/* 800EBD88 local  */ // extern UNK_TYPE Opcode;
/* 800EBDC8 local  */ // extern UNK_TYPE SpecialOpcode;
/* 800EBE08 local  */ // extern UNK_TYPE RegimmOpcode;
/* 800EBE28 local  */ // extern UNK_TYPE ganOpcodeSaveFP1;
/* 800EBE3C local  */ // extern UNK_TYPE ganOpcodeSaveFP2_0;
/* 800EBE50 local  */ // extern UNK_TYPE ganOpcodeSaveFP2_1;
/* 800EBE5C local  */ // extern UNK_TYPE ganOpcodeLoadFP;
/* 800EBE70 global */ extern UNK_TYPE ganMapGPR;
/* 800EBEF0 local  */ // extern UNK_TYPE @11596;
/* 800EBF54 local  */ // extern UNK_TYPE @11595;
/* 800EC054 local  */ // extern UNK_TYPE @11665;
/* 800EC078 local  */ // extern UNK_TYPE @11677;
/* 800EC090 local  */ // extern UNK_TYPE @11678;
/* 800EC0B8 local  */ // extern UNK_TYPE @11679;
/* 800EC0CC local  */ // extern UNK_TYPE @13051;
/* 800EC130 local  */ // extern UNK_TYPE @13050;
/* 800EC1E0 local  */ // extern UNK_TYPE @13940;
/* 800EC1EC local  */ // extern UNK_TYPE @13942;
/* 800EC228 local  */ // extern UNK_TYPE @14126;
/* 800EC258 local  */ // extern UNK_TYPE @15146;
/* 800EC358 local  */ // extern UNK_TYPE @15143;
/* 800EC458 local  */ // extern UNK_TYPE @15142;
/* 800EC558 local  */ // extern UNK_TYPE @15140;
/* 800EC658 local  */ // extern UNK_TYPE @15139;
/* 800EC674 local  */ // extern UNK_TYPE @15138;
/* 800EC698 local  */ // extern UNK_TYPE @15137;
/* 800EC6FC local  */ // extern UNK_TYPE @15136;
/* 800EC74C local  */ // extern UNK_TYPE @15135;
/* 800EC84C local  */ // extern UNK_TYPE @15134;
/* 800EC94C local  */ // extern UNK_TYPE @15420;
/* 800EC980 local  */ // extern UNK_TYPE @27576;
/* 800EC99C local  */ // extern UNK_TYPE @27577;
/* 800EC9BC local  */ // extern UNK_TYPE @27578;
/* 800EC9CC local  */ // extern UNK_TYPE @27579;
/* 800EC9E8 local  */ // extern UNK_TYPE @27580;
/* 800ECA08 local  */ // extern UNK_TYPE @27581;
/* 800ECA18 local  */ // extern UNK_TYPE @27582;
/* 800ECA28 local  */ // extern UNK_TYPE @27583;
/* 800ECA38 local  */ // extern UNK_TYPE @27584;
/* 800ECA48 local  */ // extern UNK_TYPE @27585;
/* 800ECA58 local  */ // extern UNK_TYPE @27586;
/* 800ECA68 local  */ // extern UNK_TYPE @27587;
/* 800ECA78 local  */ // extern UNK_TYPE @27588;
/* 800ECA88 local  */ // extern UNK_TYPE @27589;
/* 800ECA98 local  */ // extern UNK_TYPE @27590;
/* 800ECAAC local  */ // extern UNK_TYPE @27591;
/* 800ECAC0 local  */ // extern UNK_TYPE @27592;
/* 800ECAD4 local  */ // extern UNK_TYPE @27593;
/* 800ECAE8 local  */ // extern UNK_TYPE @27594;
/* 800ECAF8 local  */ // extern UNK_TYPE @27595;
/* 800ECB08 local  */ // extern UNK_TYPE @27596;
/* 800ECB18 local  */ // extern UNK_TYPE @27597;
/* 800ECB28 local  */ // extern UNK_TYPE @27598;
/* 800ECB38 local  */ // extern UNK_TYPE @27599;
/* 800ECB48 local  */ // extern UNK_TYPE @27600;
/* 800ECB58 local  */ // extern UNK_TYPE @27601;
/* 800ECB68 local  */ // extern UNK_TYPE @27602;
/* 800ECB78 local  */ // extern UNK_TYPE @27603;
/* 800ECB88 local  */ // extern UNK_TYPE @27604;
/* 800ECB9C local  */ // extern UNK_TYPE @27605;
/* 800ECBAC local  */ // extern UNK_TYPE @27606;
/* 800ECBBC local  */ // extern UNK_TYPE @27607;
/* 800ECBCC local  */ // extern UNK_TYPE @27608;
/* 800ECBDC local  */ // extern UNK_TYPE @27609;
/* 800ECBEC local  */ // extern UNK_TYPE @27610;
/* 800ECBFC local  */ // extern UNK_TYPE @27611;
/* 800ECC0C local  */ // extern UNK_TYPE @27612;
/* 800ECC1C local  */ // extern UNK_TYPE @27613;
/* 800ECC2C local  */ // extern UNK_TYPE @27614;
/* 800ECC3C local  */ // extern UNK_TYPE @27615;
/* 800ECC4C local  */ // extern UNK_TYPE @27616;
/* 800ECC5C local  */ // extern UNK_TYPE @27617;
/* 800ECC6C local  */ // extern UNK_TYPE @27618;
/* 800ECC7C local  */ // extern UNK_TYPE @27619;
/* 800ECC90 local  */ // extern UNK_TYPE @27620;
/* 800ECCA4 local  */ // extern UNK_TYPE @27621;
/* 800ECCB8 local  */ // extern UNK_TYPE @27622;
/* 800ECCCC local  */ // extern UNK_TYPE @27623;
/* 800ECCDC local  */ // extern UNK_TYPE @27624;
/* 800ECCEC local  */ // extern UNK_TYPE @27625;
/* 800ECCFC local  */ // extern UNK_TYPE @27626;
/* 800ECD0C local  */ // extern UNK_TYPE @27627;
/* 800ECD1C local  */ // extern UNK_TYPE @27628;
/* 800ECD2C local  */ // extern UNK_TYPE @27629;
/* 800ECD3C local  */ // extern UNK_TYPE @27630;
/* 800ECD4C local  */ // extern UNK_TYPE @27631;
/* 800ECD5C local  */ // extern UNK_TYPE @27632;
/* 800ECD6C local  */ // extern UNK_TYPE @27633;
/* 800ECD80 local  */ // extern UNK_TYPE @27634;
/* 800ECD90 local  */ // extern UNK_TYPE @27635;
/* 800ECDA0 local  */ // extern UNK_TYPE @27636;
/* 800ECDB0 local  */ // extern UNK_TYPE @27637;
/* 800ECDC0 local  */ // extern UNK_TYPE @27638;
/* 800ECDD0 local  */ // extern UNK_TYPE @27639;
/* 800ECDE0 local  */ // extern UNK_TYPE @27648;
/* 800ECEE0 local  */ // extern UNK_TYPE @27647;
/* 800ECFE0 local  */ // extern UNK_TYPE @27646;
/* 800ED0E0 local  */ // extern UNK_TYPE @27645;
/* 800ED1E0 local  */ // extern UNK_TYPE @27644;
/* 800ED1FC local  */ // extern UNK_TYPE @27643;
/* 800ED260 local  */ // extern UNK_TYPE @27642;
/* 800ED2B0 local  */ // extern UNK_TYPE @27641;
/* 800ED3B0 local  */ // extern UNK_TYPE @27640;
/* 800ED4B0 local  */ // extern UNK_TYPE @27732;
/* 800ED514 local  */ // extern UNK_TYPE @27731;
/* 800ED574 local  */ // extern UNK_TYPE @27772;
/* 800ED5F4 local  */ // extern UNK_TYPE @27808;
/* 800ED674 local  */ // extern UNK_TYPE @28227;
/* 80130A58 global */ extern UNK_TYPE aHeapTreeFlag;
/* 801350A8 local  */ // extern UNK_TYPE @138;
/* 801350AC local  */ // extern UNK_TYPE @139;
/* 801350B4 local  */ // extern UNK_TYPE @140;
/* 801350B8 local  */ // extern UNK_TYPE @141;
/* 801350BC local  */ // extern UNK_TYPE @142;
/* 801350C0 local  */ // extern UNK_TYPE @143;
/* 801350C4 local  */ // extern UNK_TYPE @144;
/* 801350C8 local  */ // extern UNK_TYPE @145;
/* 801350CC local  */ // extern UNK_TYPE @146;
/* 801350D0 local  */ // extern UNK_TYPE @147;
/* 801350D4 local  */ // extern UNK_TYPE @148;
/* 801350D8 local  */ // extern UNK_TYPE @149;
/* 801350DC local  */ // extern UNK_TYPE @150;
/* 801350E0 local  */ // extern UNK_TYPE @151;
/* 801350E4 local  */ // extern UNK_TYPE @152;
/* 801350E8 local  */ // extern UNK_TYPE @153;
/* 801350EC local  */ // extern UNK_TYPE @154;
/* 801350F0 local  */ // extern UNK_TYPE @155;
/* 801350F4 local  */ // extern UNK_TYPE @156;
/* 801350F8 local  */ // extern UNK_TYPE @157;
/* 801350FC local  */ // extern UNK_TYPE @158;
/* 80135100 local  */ // extern UNK_TYPE @159;
/* 80135104 local  */ // extern UNK_TYPE @160;
/* 80135108 local  */ // extern UNK_TYPE @161;
/* 8013510C local  */ // extern UNK_TYPE @162;
/* 80135110 local  */ // extern UNK_TYPE @163;
/* 80135114 local  */ // extern UNK_TYPE @164;
/* 80135118 local  */ // extern UNK_TYPE @165;
/* 8013511C local  */ // extern UNK_TYPE @166;
/* 80135120 local  */ // extern UNK_TYPE @167;
/* 80135124 local  */ // extern UNK_TYPE @168;
/* 80135128 local  */ // extern UNK_TYPE @169;
/* 8013512C local  */ // extern UNK_TYPE @170;
/* 80135130 local  */ // extern UNK_TYPE @171;
/* 80135134 local  */ // extern UNK_TYPE @172;
/* 80135138 local  */ // extern UNK_TYPE @173;
/* 8013513C local  */ // extern UNK_TYPE @174;
/* 80135140 local  */ // extern UNK_TYPE @175;
/* 80135144 local  */ // extern UNK_TYPE @176;
/* 80135148 local  */ // extern UNK_TYPE @177;
/* 8013514C local  */ // extern UNK_TYPE @178;
/* 80135150 local  */ // extern UNK_TYPE @179;
/* 80135154 local  */ // extern UNK_TYPE @180;
/* 80135158 local  */ // extern UNK_TYPE @181;
/* 8013515C local  */ // extern UNK_TYPE @182;
/* 80135160 local  */ // extern UNK_TYPE @183;
/* 80135164 local  */ // extern UNK_TYPE @184;
/* 80135168 local  */ // extern UNK_TYPE @185;
/* 8013516C local  */ // extern UNK_TYPE @186;
/* 80135170 local  */ // extern UNK_TYPE @187;
/* 80135174 local  */ // extern UNK_TYPE @188;
/* 80135178 local  */ // extern UNK_TYPE @189;
/* 8013517C local  */ // extern UNK_TYPE @190;
/* 80135180 local  */ // extern UNK_TYPE @191;
/* 80135184 local  */ // extern UNK_TYPE @192;
/* 80135188 local  */ // extern UNK_TYPE @193;
/* 8013518C local  */ // extern UNK_TYPE @194;
/* 80135190 local  */ // extern UNK_TYPE @195;
/* 80135194 local  */ // extern UNK_TYPE @196;
/* 80135198 local  */ // extern UNK_TYPE @197;
/* 8013519C local  */ // extern UNK_TYPE @198;
/* 801351A0 local  */ // extern UNK_TYPE @199;
/* 801351A4 local  */ // extern UNK_TYPE @200;
/* 801351A8 local  */ // extern UNK_TYPE @201;
/* 801351AC local  */ // extern UNK_TYPE @202;
/* 801351B4 local  */ // extern UNK_TYPE @203;
/* 801351BC local  */ // extern UNK_TYPE @206;
/* 801351C4 local  */ // extern UNK_TYPE @208;
/* 801351CC local  */ // extern UNK_TYPE @211;
/* 801351D4 local  */ // extern UNK_TYPE @213;
/* 801351DC local  */ // extern UNK_TYPE @214;
/* 801351E4 local  */ // extern UNK_TYPE @215;
/* 801351EC local  */ // extern UNK_TYPE @216;
/* 801351F0 local  */ // extern UNK_TYPE @217;
/* 801351F8 local  */ // extern UNK_TYPE @218;
/* 80135200 local  */ // extern UNK_TYPE @219;
/* 80135208 local  */ // extern UNK_TYPE @228;
/* 8013520C local  */ // extern UNK_TYPE @230;
/* 80135214 local  */ // extern UNK_TYPE @231;
/* 8013521C local  */ // extern UNK_TYPE @234;
/* 80135224 local  */ // extern UNK_TYPE @265;
/* 8013522C local  */ // extern UNK_TYPE @13044;
/* 80135234 local  */ // extern UNK_TYPE @13045;
/* 8013523C local  */ // extern UNK_TYPE @13046;
/* 80135244 local  */ // extern UNK_TYPE @13047;
/* 8013524C local  */ // extern UNK_TYPE @13048;
/* 80135254 local  */ // extern UNK_TYPE @13049;
/* 8013525C local  */ // extern UNK_TYPE @13941;
/* 80135260 local  */ // extern UNK_TYPE @28228;
/* 801356E0 global */ extern UNK_TYPE gHeapTree;
/* 801356E4 local  */ // extern UNK_TYPE cpuCompile_DSLLV_function;
/* 801356E8 local  */ // extern UNK_TYPE cpuCompile_DSRLV_function;
/* 801356EC local  */ // extern UNK_TYPE cpuCompile_DSRAV_function;
/* 801356F0 local  */ // extern UNK_TYPE cpuCompile_DMULT_function;
/* 801356F4 local  */ // extern UNK_TYPE cpuCompile_DMULTU_function;
/* 801356F8 local  */ // extern UNK_TYPE cpuCompile_DDIV_function;
/* 801356FC local  */ // extern UNK_TYPE cpuCompile_DDIVU_function;
/* 80135700 local  */ // extern UNK_TYPE cpuCompile_DADD_function;
/* 80135704 local  */ // extern UNK_TYPE cpuCompile_DADDU_function;
/* 80135708 local  */ // extern UNK_TYPE cpuCompile_DSUB_function;
/* 8013570C local  */ // extern UNK_TYPE cpuCompile_DSUBU_function;
/* 80135710 local  */ // extern UNK_TYPE cpuCompile_S_SQRT_function;
/* 80135714 local  */ // extern UNK_TYPE cpuCompile_D_SQRT_function;
/* 80135718 local  */ // extern UNK_TYPE cpuCompile_W_CVT_SD_function;
/* 8013571C local  */ // extern UNK_TYPE cpuCompile_L_CVT_SD_function;
/* 80135720 local  */ // extern UNK_TYPE cpuCompile_CEIL_W_function;
/* 80135724 local  */ // extern UNK_TYPE cpuCompile_FLOOR_W_function;
/* 80135728 local  */ // extern UNK_TYPE cpuCompile_ROUND_W_function;
/* 8013572C local  */ // extern UNK_TYPE cpuCompile_TRUNC_W_function;
/* 80135730 local  */ // extern UNK_TYPE cpuCompile_LB_function;
/* 80135734 local  */ // extern UNK_TYPE cpuCompile_LH_function;
/* 80135738 local  */ // extern UNK_TYPE cpuCompile_LW_function;
/* 8013573C local  */ // extern UNK_TYPE cpuCompile_LBU_function;
/* 80135740 local  */ // extern UNK_TYPE cpuCompile_LHU_function;
/* 80135744 local  */ // extern UNK_TYPE cpuCompile_SB_function;
/* 80135748 local  */ // extern UNK_TYPE cpuCompile_SH_function;
/* 8013574C local  */ // extern UNK_TYPE cpuCompile_SW_function;
/* 80135750 local  */ // extern UNK_TYPE cpuCompile_LDC_function;
/* 80135754 local  */ // extern UNK_TYPE cpuCompile_SDC_function;
/* 80135758 local  */ // extern UNK_TYPE cpuCompile_LWL_function;
/* 8013575C local  */ // extern UNK_TYPE cpuCompile_LWR_function;
/* 80135FA0 local  */ // extern UNK_TYPE @13389;
/* 80135FA8 local  */ // extern UNK_TYPE @15131;
/* 80135FB0 local  */ // extern UNK_TYPE @15132;
/* 80135FB8 local  */ // extern UNK_TYPE @15133;
/* 80135FC0 local  */ // extern UNK_TYPE @15144;
/* 80135FC8 local  */ // extern UNK_TYPE @15374;
// ======================= pif.c ======================================================
/* 800ED6B8 global */ extern UNK_TYPE gClassPIF;
/* 80135268 local  */ // extern UNK_TYPE @131;
// ======================= ram.c ======================================================
/* 800ED6C8 global */ extern UNK_TYPE gClassRAM;
/* 800ED6D8 local  */ // extern UNK_TYPE @339;
/* 800ED74C local  */ // extern UNK_TYPE @346;
/* 800ED7C0 local  */ // extern UNK_TYPE @353;
/* 800ED854 local  */ // extern UNK_TYPE @360;
/* 80135270 local  */ // extern UNK_TYPE @116;
// ======================= rom.c ======================================================
/* 800ED8E8 global */ extern UNK_TYPE gClassROM;
/* 800ED8F8 local  */ // extern UNK_TYPE ganOffsetBlock_ZLJ;
/* 800EDC10 local  */ // extern UNK_TYPE ganOffsetBlock_URAZLJ;
/* 800EDF28 local  */ // extern UNK_TYPE @1390;
/* 800EDF34 local  */ // extern UNK_TYPE @1392;
/* 80135278 local  */ // extern UNK_TYPE @133;
/* 8013527C local  */ // extern UNK_TYPE @1387;
/* 80135284 local  */ // extern UNK_TYPE @1388;
/* 8013528C local  */ // extern UNK_TYPE @1389;
/* 80135294 local  */ // extern UNK_TYPE @1391;
/* 8013529C local  */ // extern UNK_TYPE @1393;
/* 801352A0 local  */ // extern UNK_TYPE @1394;
/* 801352A8 local  */ // extern UNK_TYPE @1395;
/* 80135760 local  */ // extern UNK_TYPE gbProgress;
/* 80135764 local  */ // extern UNK_TYPE gpImageBack;
/* 80135768 local  */ // extern UNK_TYPE iImage$294;
/* 80135FD0 local  */ // extern UNK_TYPE @1149;
/* 80135FD8 local  */ // extern UNK_TYPE @1151;
/* 80135FE0 local  */ // extern UNK_TYPE @1153;
/* 80135FE8 local  */ // extern UNK_TYPE @1421;
/* 80135FEC local  */ // extern UNK_TYPE @1422;
/* 80135FF0 local  */ // extern UNK_TYPE @1423;
/* 80135FF4 local  */ // extern UNK_TYPE @1424;
/* 80135FF8 local  */ // extern UNK_TYPE @1425;
/* 80135FFC local  */ // extern UNK_TYPE @1426;
/* 80136000 local  */ // extern UNK_TYPE @1427;
// ======================= rdp.c ======================================================
/* 800EDF40 global */ extern UNK_TYPE gClassRDP;
/* 800EDF50 local  */ // extern UNK_TYPE sCommandCodes$168;
/* 800EDF5C local  */ // extern UNK_TYPE @515;
/* 800EDF90 local  */ // extern UNK_TYPE @525;
/* 800EDFC4 local  */ // extern UNK_TYPE @540;
/* 800EE038 local  */ // extern UNK_TYPE @570;
/* 800EE0AC local  */ // extern UNK_TYPE @933;
/* 801352B0 local  */ // extern UNK_TYPE @118;
/* 80135770 local  */ // extern UNK_TYPE nCount$122;
/* 80135774 local  */ // extern UNK_TYPE nBlurCount$123;
/* 80135778 local  */ // extern UNK_TYPE nNoteCount$124;
/* 8013577C local  */ // extern UNK_TYPE nZCount$125;
/* 80135780 local  */ // extern UNK_TYPE nZBufferCount$126;
/* 80136008 local  */ // extern UNK_TYPE @926;
/* 8013600C local  */ // extern UNK_TYPE @927;
/* 80136010 local  */ // extern UNK_TYPE @928;
/* 80136014 local  */ // extern UNK_TYPE @929;
/* 80136018 local  */ // extern UNK_TYPE @930;
/* 8013601C local  */ // extern UNK_TYPE @931;
/* 80136020 local  */ // extern UNK_TYPE @932;
/* 80136028 local  */ // extern UNK_TYPE @935;
/* 80136030 local  */ // extern UNK_TYPE @937;
// ======================= rdb.c ======================================================
/* 800EE1B0 global */ extern UNK_TYPE gClassRdb;
/* 800EE1C0 local  */ // extern UNK_TYPE @385;
/* 801352B8 local  */ // extern UNK_TYPE @105;
// ======================= rsp.c ======================================================
/* 800EE220 global */ extern UNK_TYPE gClassRSP;
/* 800EE230 global */ extern UNK_TYPE cmask_tab;
/* 800EE250 global */ extern UNK_TYPE emask_tab;
/* 800EE270 local  */ // extern UNK_TYPE TMEMSIZE$3463;
/* 800EE27C local  */ // extern UNK_TYPE @5189;
/* 800EE2A4 local  */ // extern UNK_TYPE @5239;
/* 800EE318 local  */ // extern UNK_TYPE @5415;
/* 800EE338 local  */ // extern UNK_TYPE @5414;
/* 800EE3AC local  */ // extern UNK_TYPE @5472;
/* 800EE3D8 local  */ // extern UNK_TYPE @6252;
/* 800EE40C local  */ // extern UNK_TYPE @6251;
/* 800EE448 local  */ // extern UNK_TYPE @6250;
/* 800EE47C local  */ // extern UNK_TYPE @6757;
/* 800EE4B0 local  */ // extern UNK_TYPE @6756;
/* 800EE4EC local  */ // extern UNK_TYPE @6751;
/* 800EE568 local  */ // extern UNK_TYPE @9082;
/* 800EE5D4 local  */ // extern UNK_TYPE @9334;
/* 800EE630 local  */ // extern UNK_TYPE @9702;
/* 800EE690 local  */ // extern UNK_TYPE @10919;
/* 801352C0 local  */ // extern UNK_TYPE @136;
/* 801352C4 local  */ // extern UNK_TYPE nFirstTime$2148;
/* 801352C8 local  */ // extern UNK_TYPE nFirstTime$2648;
/* 801352CC local  */ // extern UNK_TYPE nFirstTime$2757;
/* 801352D0 local  */ // extern UNK_TYPE nFirstTime$2796;
/* 801352D4 local  */ // extern UNK_TYPE scissorX1;
/* 801352D6 local  */ // extern UNK_TYPE scissorY1;
/* 801352D8 local  */ // extern UNK_TYPE TMEMMASK$3464;
/* 801352E0 local  */ // extern UNK_TYPE TMEMSHIFT$3465;
/* 80135788 local  */ // extern UNK_TYPE counter$2409;
/* 8013578C local  */ // extern UNK_TYPE scissorX0;
/* 8013578E local  */ // extern UNK_TYPE scissorY0;
/* 80135790 local  */ // extern UNK_TYPE flagBilerp;
/* 80135794 local  */ // extern UNK_TYPE rdpSetTimg_w0;
/* 80135798 local  */ // extern UNK_TYPE rdpSetTile_w0;
/* 8013579C local  */ // extern UNK_TYPE tmemSliceWmax;
/* 8013579E local  */ // extern UNK_TYPE imageSrcWsize;
/* 801357A0 local  */ // extern UNK_TYPE flagSplit;
/* 801357A2 local  */ // extern UNK_TYPE imagePtrX0;
/* 801357A4 local  */ // extern UNK_TYPE imageTop;
/* 801357A8 local  */ // extern UNK_TYPE tmemSrcLines;
/* 80136038 local  */ // extern UNK_TYPE @6241;
/* 8013603C local  */ // extern UNK_TYPE @6242;
/* 80136040 local  */ // extern UNK_TYPE @6243;
/* 80136048 local  */ // extern UNK_TYPE @6245;
/* 80136050 local  */ // extern UNK_TYPE @6248;
/* 80136058 local  */ // extern UNK_TYPE @6797;
/* 8013605C local  */ // extern UNK_TYPE @6798;
/* 80136060 local  */ // extern UNK_TYPE @6799;
/* 80136064 local  */ // extern UNK_TYPE @6800;
/* 80136068 local  */ // extern UNK_TYPE @6801;
/* 8013606C local  */ // extern UNK_TYPE @6811;
/* 80136070 local  */ // extern UNK_TYPE @7226;
/* 80136074 local  */ // extern UNK_TYPE @14927;
// ======================= mips.c =====================================================
/* 800EE6D0 global */ extern UNK_TYPE gClassMips;
/* 800EE6E0 local  */ // extern UNK_TYPE @222;
/* 800EE714 local  */ // extern UNK_TYPE @273;
/* 801352E8 local  */ // extern UNK_TYPE @106;
// ======================= disk.c =====================================================
/* 800EE748 global */ extern UNK_TYPE gClassDisk;
/* 801352F0 local  */ // extern UNK_TYPE @105;
// ======================= flash.c ====================================================
/* 800EE758 global */ extern UNK_TYPE gClassFlash;
/* 801352F8 local  */ // extern UNK_TYPE @131;
// ======================= sram.c =====================================================
/* 800EE768 global */ extern UNK_TYPE gClassSram;
/* 80135300 local  */ // extern UNK_TYPE @131;
// ======================= audio.c ====================================================
/* 800EE778 global */ extern UNK_TYPE gClassAudio;
/* 800EE788 local  */ // extern UNK_TYPE @219;
/* 800EE7A8 local  */ // extern UNK_TYPE @221;
/* 800EE7C4 local  */ // extern UNK_TYPE @222;
/* 800EE818 local  */ // extern UNK_TYPE @248;
/* 80135308 local  */ // extern UNK_TYPE @135;
/* 80135310 local  */ // extern UNK_TYPE @220;
// ======================= video.c ====================================================
/* 800EE870 global */ extern UNK_TYPE gClassVideo;
/* 800EE880 local  */ // extern UNK_TYPE @257;
/* 800EE954 local  */ // extern UNK_TYPE @301;
/* 80135318 local  */ // extern UNK_TYPE @114;
// ======================= serial.c ===================================================
/* 800EEA28 global */ extern UNK_TYPE gClassSerial;
/* 800EEA38 local  */ // extern UNK_TYPE @168;
/* 800EEA9C local  */ // extern UNK_TYPE @191;
/* 80135320 local  */ // extern UNK_TYPE @106;
// ======================= library.c ==================================================
/* 800EEB00 local  */ // extern UNK_TYPE @140;
/* 800EEB0C global */ extern UNK_TYPE gClassLibrary;
/* 800EEB1C local  */ // extern UNK_TYPE __osRcpImTable;
/* 800EEC1C local  */ // extern UNK_TYPE @611;
/* 800EEC28 local  */ // extern UNK_TYPE @612;
/* 800EEC3C local  */ // extern UNK_TYPE @613;
/* 800EEC50 local  */ // extern UNK_TYPE @614;
/* 800EEC60 local  */ // extern UNK_TYPE @615;
/* 800EEC74 local  */ // extern UNK_TYPE @616;
/* 800EEC84 local  */ // extern UNK_TYPE @617;
/* 800EEC94 local  */ // extern UNK_TYPE @618;
/* 800EECA4 local  */ // extern UNK_TYPE @619;
/* 800EECB8 local  */ // extern UNK_TYPE @620;
/* 800EECD0 local  */ // extern UNK_TYPE @621;
/* 800EECE0 local  */ // extern UNK_TYPE @622;
/* 800EECF0 local  */ // extern UNK_TYPE @623;
/* 800EED00 local  */ // extern UNK_TYPE @629;
/* 800EED14 local  */ // extern UNK_TYPE @630;
/* 800EED28 local  */ // extern UNK_TYPE @631;
/* 800EED34 local  */ // extern UNK_TYPE @632;
/* 800EED40 local  */ // extern UNK_TYPE @633;
/* 800EED4C local  */ // extern UNK_TYPE @634;
/* 800EED58 local  */ // extern UNK_TYPE @635;
/* 800EED64 local  */ // extern UNK_TYPE @637;
/* 800EED74 local  */ // extern UNK_TYPE @638;
/* 800EED84 local  */ // extern UNK_TYPE @639;
/* 800EED90 local  */ // extern UNK_TYPE @641;
/* 800EED9C local  */ // extern UNK_TYPE @642;
/* 800EEDA8 local  */ // extern UNK_TYPE @643;
/* 800EEDB8 local  */ // extern UNK_TYPE @644;
/* 800EEDC4 local  */ // extern UNK_TYPE @645;
/* 800EEDD0 local  */ // extern UNK_TYPE @646;
/* 800EEDDC local  */ // extern UNK_TYPE @647;
/* 800EEDEC local  */ // extern UNK_TYPE @648;
/* 800EEDFC local  */ // extern UNK_TYPE @649;
/* 800EEE10 local  */ // extern UNK_TYPE @650;
/* 800EEE20 local  */ // extern UNK_TYPE @651;
/* 800EEE34 local  */ // extern UNK_TYPE @652;
/* 800EEE48 local  */ // extern UNK_TYPE @653;
/* 800EEE58 local  */ // extern UNK_TYPE @654;
/* 800EEE68 local  */ // extern UNK_TYPE @655;
/* 800EEE78 local  */ // extern UNK_TYPE @656;
/* 800EEE8C local  */ // extern UNK_TYPE @657;
/* 800EEEA0 local  */ // extern UNK_TYPE @658;
/* 800EEEAC local  */ // extern UNK_TYPE @659;
/* 800EEEBC local  */ // extern UNK_TYPE @660;
/* 800EEED0 local  */ // extern UNK_TYPE @661;
/* 800EEEEC local  */ // extern UNK_TYPE @662;
/* 800EEF04 local  */ // extern UNK_TYPE @663;
/* 800EEF18 local  */ // extern UNK_TYPE @664;
/* 800EEF2C global */ extern UNK_TYPE gaFunction;
/* 800EFF34 local  */ // extern UNK_TYPE @1282;
/* 800EFF7C local  */ // extern UNK_TYPE @1283;
/* 800EFF88 local  */ // extern UNK_TYPE @2781;
/* 80135328 local  */ // extern UNK_TYPE dtor$466;
/* 8013532C local  */ // extern UNK_TYPE dtor$480;
/* 80135330 local  */ // extern UNK_TYPE nAddress$605;
/* 80135334 local  */ // extern UNK_TYPE @624;
/* 8013533C local  */ // extern UNK_TYPE @625;
/* 80135344 local  */ // extern UNK_TYPE @626;
/* 8013534C local  */ // extern UNK_TYPE @627;
/* 80135354 local  */ // extern UNK_TYPE @628;
/* 8013535C local  */ // extern UNK_TYPE @636;
/* 80135364 local  */ // extern UNK_TYPE @640;
/* 80136078 local  */ // extern UNK_TYPE @1666;
/* 8013607C local  */ // extern UNK_TYPE @1667;
/* 80136080 local  */ // extern UNK_TYPE @1669;
/* 80136088 local  */ // extern UNK_TYPE @1742;
/* 80136090 local  */ // extern UNK_TYPE @1743;
/* 80136098 local  */ // extern UNK_TYPE @1744;
/* 801360A0 local  */ // extern UNK_TYPE @1745;
/* 801360A4 local  */ // extern UNK_TYPE @1746;
/* 801360A8 local  */ // extern UNK_TYPE @1747;
/* 801360AC local  */ // extern UNK_TYPE @1748;
/* 801360B0 local  */ // extern UNK_TYPE @1749;
/* 801360B8 local  */ // extern UNK_TYPE @1933;
/* 801360C0 local  */ // extern UNK_TYPE @1934;
/* 801360C8 local  */ // extern UNK_TYPE @1936;
/* 801360D0 local  */ // extern UNK_TYPE @2329;
/* 801360D4 local  */ // extern UNK_TYPE @2383;
// ======================= peripheral.c ===============================================
/* 800EFFB0 local  */ // extern UNK_TYPE @107;
/* 800EFFBC global */ extern UNK_TYPE gClassPeripheral;
/* 800EFFCC local  */ // extern UNK_TYPE @257;
/* 800F0090 local  */ // extern UNK_TYPE @355;
// ======================= _frameGCNcc.c ==============================================
/* 800F0158 global */ extern UNK_TYPE gCombinedColor;
/* 800F0198 global */ extern UNK_TYPE gCombinedAlpha;
/* 800F01B8 local  */ // extern UNK_TYPE ganNameTevStage;
/* 800F01F8 local  */ // extern UNK_TYPE sTevColorOp;
/* 800F025C local  */ // extern UNK_TYPE sTevColorArg;
/* 800F02AC local  */ // extern UNK_TYPE sTevAlphaArg;
/* 800F02FC local  */ // extern UNK_TYPE @111;
/* 800F0308 local  */ // extern UNK_TYPE @114;
/* 800F0314 local  */ // extern UNK_TYPE @116;
/* 800F0320 local  */ // extern UNK_TYPE @118;
/* 800F0330 local  */ // extern UNK_TYPE @119;
/* 800F0340 local  */ // extern UNK_TYPE @120;
/* 800F0350 local  */ // extern UNK_TYPE @121;
/* 800F035C local  */ // extern UNK_TYPE @122;
/* 800F0368 local  */ // extern UNK_TYPE @123;
/* 800F0374 local  */ // extern UNK_TYPE @124;
/* 800F0380 local  */ // extern UNK_TYPE @125;
/* 800F0390 local  */ // extern UNK_TYPE sColorNames;
/* 800F03D0 local  */ // extern UNK_TYPE sAlphaNames;
/* 800F0410 local  */ // extern UNK_TYPE strings$288;
/* 800F0450 local  */ // extern UNK_TYPE @356;
/* 80135370 local  */ // extern UNK_TYPE sOrder;
/* 80135378 local  */ // extern UNK_TYPE sReplace;
/* 80135380 local  */ // extern UNK_TYPE @112;
/* 80135388 local  */ // extern UNK_TYPE @113;
/* 80135390 local  */ // extern UNK_TYPE @115;
/* 80135398 local  */ // extern UNK_TYPE @117;
/* 8013539C local  */ // extern UNK_TYPE @126;
/* 801353A0 local  */ // extern UNK_TYPE @289;
/* 801353A8 local  */ // extern UNK_TYPE @290;
/* 801353B0 local  */ // extern UNK_TYPE @291;
/* 801353B8 local  */ // extern UNK_TYPE @292;
/* 801353C0 local  */ // extern UNK_TYPE @293;
/* 801353C8 local  */ // extern UNK_TYPE @294;
/* 801353D0 local  */ // extern UNK_TYPE @295;
/* 801353D8 local  */ // extern UNK_TYPE @296;
/* 801353E0 local  */ // extern UNK_TYPE @297;
/* 801353E8 local  */ // extern UNK_TYPE @298;
/* 801353F0 local  */ // extern UNK_TYPE @299;
/* 801353F8 local  */ // extern UNK_TYPE @300;
// ======================= _buildtev.c ================================================
/* 800F0460 global */ extern UNK_TYPE gColorArgs;
/* 800F04A0 global */ extern UNK_TYPE gAlphaArgs;
/* 800F04C8 local  */ // extern UNK_TYPE sUsualOps;
/* 800F0518 local  */ // extern UNK_TYPE sUsualCArgs;
/* 800F0528 local  */ // extern UNK_TYPE sUsualAArgs;
/* 800F0538 local  */ // extern UNK_TYPE texelType$183;
/* 800F0558 local  */ // extern UNK_TYPE lightType$184;
/* 800F0568 local  */ // extern UNK_TYPE @1359;
/* 800F0590 local  */ // extern UNK_TYPE @1360;
/* 800F05B8 local  */ // extern UNK_TYPE @1362;
/* 800F05E0 local  */ // extern UNK_TYPE @1363;
/* 80130C50 local  */ // extern UNK_TYPE tevStages$519;
/* 80135400 local  */ // extern UNK_TYPE zeroType$182;
/* 80135408 local  */ // extern UNK_TYPE @1361;
/* 801360D8 local  */ // extern UNK_TYPE @185;
// ======================= PPCArch.c ==================================================
// ======================= OS.c =======================================================
/* 800F0628 local  */ // extern UNK_TYPE @1;
/* 800F066C local  */ // extern UNK_TYPE @86;
/* 800F067C local  */ // extern UNK_TYPE @87;
/* 800F0694 local  */ // extern UNK_TYPE @88;
/* 800F06A0 local  */ // extern UNK_TYPE @89;
/* 800F06AC local  */ // extern UNK_TYPE @90;
/* 800F06BC local  */ // extern UNK_TYPE @91;
/* 800F06C8 local  */ // extern UNK_TYPE @92;
/* 800F06D8 local  */ // extern UNK_TYPE @93;
/* 800F06E8 local  */ // extern UNK_TYPE @94;
/* 800F06F8 local  */ // extern UNK_TYPE @95;
/* 800F0708 local  */ // extern UNK_TYPE @96;
/* 800F0724 local  */ // extern UNK_TYPE @98;
/* 800F0734 local  */ // extern UNK_TYPE @99;
/* 800F074C local  */ // extern UNK_TYPE __OSExceptionLocations;
/* 800F0788 local  */ // extern UNK_TYPE @133;
/* 800F07A4 local  */ // extern UNK_TYPE @134;
/* 800F07D4 local  */ // extern UNK_TYPE @135;
/* 800F0804 local  */ // extern UNK_TYPE @136;
/* 80130F20 local  */ // extern UNK_TYPE DriveInfo;
/* 80130F40 local  */ // extern UNK_TYPE DriveBlock;
/* 80135410 global */ extern UNK_TYPE __OSVersion;
/* 80135414 local  */ // extern UNK_TYPE @97;
/* 8013541C local  */ // extern UNK_TYPE @144;
/* 801357B0 local  */ // extern UNK_TYPE BootInfo;
/* 801357B4 local  */ // extern UNK_TYPE BI2DebugFlag;
/* 801357B8 local  */ // extern UNK_TYPE BI2DebugFlagHolder;
/* 801357BC weak   */ // extern UNK_TYPE __OSIsGcam;
/* 801357C0 local  */ // extern UNK_TYPE ZeroF;
/* 801357C8 local  */ // extern UNK_TYPE ZeroPS;
/* 801357D0 local  */ // extern UNK_TYPE AreWeInitialized;
/* 801357D4 local  */ // extern UNK_TYPE OSExceptionTable;
/* 801357D8 global */ extern UNK_TYPE __OSSavedRegionEnd;
/* 801357DC global */ extern UNK_TYPE __OSSavedRegionStart;
/* 801357E0 global */ extern UNK_TYPE __OSInIPL;
/* 801357E8 global */ extern UNK_TYPE __OSStartTime;
// ======================= OSAlarm.c ==================================================
/* 800F0820 local  */ // extern UNK_TYPE ResetFunctionInfo;
/* 801357F0 local  */ // extern UNK_TYPE AlarmQueue;
// ======================= OSAlloc.c ==================================================
/* 800F0830 local  */ // extern UNK_TYPE @354;
/* 800F0854 local  */ // extern UNK_TYPE @355;
/* 800F088C local  */ // extern UNK_TYPE @356;
/* 800F08B4 local  */ // extern UNK_TYPE @357;
/* 800F0904 local  */ // extern UNK_TYPE @358;
/* 800F0944 local  */ // extern UNK_TYPE @359;
/* 800F097C local  */ // extern UNK_TYPE @360;
/* 800F09C8 local  */ // extern UNK_TYPE @361;
/* 800F09FC local  */ // extern UNK_TYPE @362;
/* 800F0A3C local  */ // extern UNK_TYPE @363;
/* 800F0A78 local  */ // extern UNK_TYPE @364;
/* 800F0AC0 local  */ // extern UNK_TYPE @365;
/* 800F0B20 local  */ // extern UNK_TYPE @366;
/* 800F0B4C local  */ // extern UNK_TYPE @385;
/* 800F0B60 local  */ // extern UNK_TYPE @386;
/* 800F0B74 local  */ // extern UNK_TYPE @387;
/* 800F0B90 local  */ // extern UNK_TYPE @388;
/* 800F0BA4 local  */ // extern UNK_TYPE @389;
/* 800F0BB4 local  */ // extern UNK_TYPE @390;
/* 80135420 global */ extern volatile OSHeapHandle __OSCurrHeap;
/* 801357F8 local  */ // extern UNK_TYPE HeapArray;
/* 801357FC local  */ // extern UNK_TYPE NumHeaps;
/* 80135800 local  */ // extern UNK_TYPE ArenaStart;
/* 80135804 local  */ // extern UNK_TYPE ArenaEnd;
// ======================= OSArena.c ==================================================
/* 80135428 local  */ // extern UNK_TYPE __OSArenaLo;
/* 80135808 local  */ // extern UNK_TYPE __OSArenaHi;
// ======================= OSAudioSystem.c ============================================
/* 800F0BC8 local  */ // extern UNK_TYPE DSPInitCode;
// ======================= OSCache.c ==================================================
/* 800F0C48 local  */ // extern UNK_TYPE @63;
/* 800F0C74 local  */ // extern UNK_TYPE @84;
/* 800F0C8C local  */ // extern UNK_TYPE @85;
/* 800F0CA8 local  */ // extern UNK_TYPE @86;
/* 800F0CD8 local  */ // extern UNK_TYPE @87;
/* 800F0D14 local  */ // extern UNK_TYPE @88;
/* 800F0D4C local  */ // extern UNK_TYPE @89;
/* 800F0D8C local  */ // extern UNK_TYPE @90;
/* 800F0DB8 local  */ // extern UNK_TYPE @91;
/* 800F0DD8 local  */ // extern UNK_TYPE @92;
/* 800F0DF4 local  */ // extern UNK_TYPE @104;
/* 800F0E10 local  */ // extern UNK_TYPE @105;
/* 800F0E2C local  */ // extern UNK_TYPE @106;
/* 800F0E44 local  */ // extern UNK_TYPE @107;
// ======================= OSContext.c ================================================
/* 800F0E78 local  */ // extern UNK_TYPE @61;
/* 800F0EBC local  */ // extern UNK_TYPE @62;
/* 800F0EEC local  */ // extern UNK_TYPE @63;
/* 800F0F1C local  */ // extern UNK_TYPE @64;
/* 800F0F4C local  */ // extern UNK_TYPE @65;
/* 800F0F60 local  */ // extern UNK_TYPE @66;
/* 800F0F84 local  */ // extern UNK_TYPE @67;
/* 800F0F98 local  */ // extern UNK_TYPE @68;
/* 800F0FB4 local  */ // extern UNK_TYPE @69;
/* 800F0FC8 local  */ // extern UNK_TYPE @70;
/* 800F0FE8 local  */ // extern UNK_TYPE @71;
/* 800F1010 local  */ // extern UNK_TYPE @72;
/* 800F102C local  */ // extern UNK_TYPE @76;
// ======================= OSError.c ==================================================
/* 800F1050 local  */ // extern UNK_TYPE @13;
/* 800F1068 local  */ // extern UNK_TYPE @14;
/* 800F1090 local  */ // extern UNK_TYPE @15;
/* 800F10AC local  */ // extern UNK_TYPE @74;
/* 800F10CC local  */ // extern UNK_TYPE @75;
/* 800F10E4 local  */ // extern UNK_TYPE @77;
/* 800F1118 local  */ // extern UNK_TYPE @78;
/* 800F1128 local  */ // extern UNK_TYPE @79;
/* 800F1188 local  */ // extern UNK_TYPE @80;
/* 800F11D4 local  */ // extern UNK_TYPE @81;
/* 800F1238 local  */ // extern UNK_TYPE @82;
/* 800F1298 local  */ // extern UNK_TYPE @83;
/* 800F12B8 local  */ // extern UNK_TYPE @84;
/* 800F12D8 local  */ // extern UNK_TYPE @85;
/* 800F12F4 local  */ // extern UNK_TYPE @86;
/* 800F132C local  */ // extern UNK_TYPE @87;
/* 80130F70 global */ extern UNK_TYPE __OSErrorTable;
/* 80135430 global */ extern u32 __OSFpscrEnableBits;
/* 80135434 local  */ // extern UNK_TYPE @76;
// ======================= OSFont.c ===================================================
/* 80135438 local  */ // extern UNK_TYPE fontEncode$80;
// ======================= OSInterrupt.c ==============================================
/* 800F1370 local  */ // extern UNK_TYPE InterruptPrioTable;
/* 80135810 local  */ // extern UNK_TYPE InterruptHandlerTable;
/* 80135814 global */ extern volatile u32 __OSLastInterruptSrr0;
/* 80135818 global */ extern volatile __OSInterrupt __OSLastInterrupt;
/* 80135820 global */ extern volatile OSTime __OSLastInterruptTime;
// ======================= OSLink.c ===================================================
// ======================= OSMessage.c ================================================
// ======================= OSMemory.c =================================================
/* 800F13A0 local  */ // extern UNK_TYPE ResetFunctionInfo;
// ======================= OSMutex.c ==================================================
// ======================= OSReboot.c =================================================
/* 80130FC0 local  */ // extern UNK_TYPE Header;
/* 80135828 local  */ // extern UNK_TYPE SaveStart;
/* 8013582C local  */ // extern UNK_TYPE SaveEnd;
/* 80135830 local  */ // extern UNK_TYPE Prepared;
// ======================= OSReset.c ==================================================
/* 80135838 local  */ // extern UNK_TYPE ResetFunctionQueue;
/* 80135840 local  */ // extern UNK_TYPE bootThisDol;
// ======================= OSResetSW.c ================================================
/* 80135848 local  */ // extern UNK_TYPE ResetCallback;
/* 8013584C local  */ // extern UNK_TYPE Down;
/* 80135850 local  */ // extern UNK_TYPE LastState;
/* 80135858 local  */ // extern UNK_TYPE HoldUp;
/* 80135860 local  */ // extern UNK_TYPE HoldDown;
// ======================= OSRtc.c ====================================================
/* 80130FE0 local  */ // extern UNK_TYPE Scb;
// ======================= OSSync.c ===================================================
// ======================= OSThread.c =================================================
/* 80131038 local  */ // extern UNK_TYPE RunQueue;
/* 80131138 local  */ // extern UNK_TYPE IdleThread;
/* 80131450 local  */ // extern UNK_TYPE DefaultThread;
/* 80131768 local  */ // extern UNK_TYPE IdleContext;
/* 80135440 local  */ // extern UNK_TYPE SwitchThreadCallback;
/* 80135868 local  */ // extern UNK_TYPE RunQueueBits;
/* 8013586C local  */ // extern UNK_TYPE RunQueueHint;
/* 80135870 local  */ // extern UNK_TYPE Reschedule;
// ======================= OSTime.c ===================================================
/* 800F13B0 local  */ // extern UNK_TYPE YearDays;
/* 800F13E0 local  */ // extern UNK_TYPE LeapYearDays;
// ======================= __start.c ==================================================
/* 80135878 local  */ // extern UNK_TYPE Debug_BBA;
// ======================= __ppc_eabi_init.cpp ========================================
// ======================= EXIBios.c ==================================================
/* 800F1410 local  */ // extern UNK_TYPE @1;
/* 800F1458 local  */ // extern UNK_TYPE @450;
/* 800F1468 local  */ // extern UNK_TYPE @451;
/* 800F1478 local  */ // extern UNK_TYPE @452;
/* 800F1488 local  */ // extern UNK_TYPE @453;
/* 800F1498 local  */ // extern UNK_TYPE @454;
/* 800F14AC local  */ // extern UNK_TYPE @455;
/* 800F14C0 local  */ // extern UNK_TYPE @456;
/* 800F14CC local  */ // extern UNK_TYPE @462;
/* 800F14D8 local  */ // extern UNK_TYPE @463;
/* 800F14E8 local  */ // extern UNK_TYPE @464;
/* 800F14FC local  */ // extern UNK_TYPE @466;
/* 800F150C local  */ // extern UNK_TYPE @467;
/* 80131A30 local  */ // extern UNK_TYPE Ecb;
/* 80135448 global */ extern UNK_TYPE __EXIVersion;
/* 80135880 local  */ // extern UNK_TYPE IDSerialPort1;
// ======================= EXIUart.c ==================================================
/* 80135888 local  */ // extern UNK_TYPE Chan;
/* 8013588C local  */ // extern UNK_TYPE Dev;
/* 80135890 local  */ // extern UNK_TYPE Enabled;
/* 80135894 local  */ // extern UNK_TYPE BarnacleEnabled;
// ======================= SIBios.c ===================================================
/* 800F1520 local  */ // extern UNK_TYPE @1;
/* 800F1564 local  */ // extern UNK_TYPE Si;
/* 800F1578 local  */ // extern UNK_TYPE Type;
/* 800F1588 local  */ // extern UNK_TYPE @457;
/* 800F1594 local  */ // extern UNK_TYPE @459;
/* 800F15A4 local  */ // extern UNK_TYPE @460;
/* 800F15B4 local  */ // extern UNK_TYPE @461;
/* 800F15C4 local  */ // extern UNK_TYPE @462;
/* 800F15D0 local  */ // extern UNK_TYPE @463;
/* 800F15E0 local  */ // extern UNK_TYPE @464;
/* 800F15F4 local  */ // extern UNK_TYPE @465;
/* 800F1608 local  */ // extern UNK_TYPE @466;
/* 800F161C local  */ // extern UNK_TYPE @467;
/* 800F1628 local  */ // extern UNK_TYPE @468;
/* 80131AF0 local  */ // extern UNK_TYPE Packet;
/* 80131B70 local  */ // extern UNK_TYPE Alarm;
/* 80131C10 local  */ // extern UNK_TYPE TypeTime;
/* 80131C30 local  */ // extern UNK_TYPE XferTime;
/* 80131C50 local  */ // extern UNK_TYPE TypeCallback;
/* 80131C90 local  */ // extern UNK_TYPE RDSTHandler;
/* 80131CA0 local  */ // extern UNK_TYPE InputBufferValid;
/* 80131CB0 local  */ // extern UNK_TYPE InputBuffer;
/* 80131CD0 local  */ // extern UNK_TYPE InputBufferVcount;
/* 80131CE0 local  */ // extern UNK_TYPE cmdFixDevice$327;
/* 80135450 global */ extern UNK_TYPE __SIVersion;
/* 80135898 local  */ // extern UNK_TYPE cmdTypeAndStatus$78;
/* 8013589C local  */ // extern UNK_TYPE cmdTypeAndStatus$372;
/* 801358A0 global */ extern UNK_TYPE __PADFixBits;
// ======================= SISamplingRate.c ===========================================
/* 800F1638 local  */ // extern UNK_TYPE XYNTSC;
/* 800F1668 local  */ // extern UNK_TYPE XYPAL;
/* 800F1698 local  */ // extern UNK_TYPE @16;
/* 801358A8 local  */ // extern UNK_TYPE SamplingRate;
// ======================= vi.c =======================================================
/* 800F16D0 local  */ // extern UNK_TYPE @1;
/* 800F1714 local  */ // extern UNK_TYPE timing;
/* 800F1890 local  */ // extern UNK_TYPE taps;
/* 800F18C4 local  */ // extern UNK_TYPE @97;
/* 800F1930 local  */ // extern UNK_TYPE @347;
/* 800F195C local  */ // extern UNK_TYPE @348;
/* 800F1988 local  */ // extern UNK_TYPE @349;
/* 800F19B4 local  */ // extern UNK_TYPE @350;
/* 800F19E0 local  */ // extern UNK_TYPE @351;
/* 800F1A0C local  */ // extern UNK_TYPE @352;
/* 800F1A38 local  */ // extern UNK_TYPE @535;
/* 800F1A84 local  */ // extern UNK_TYPE @736;
/* 80131CF0 local  */ // extern UNK_TYPE regs;
/* 80131D68 local  */ // extern UNK_TYPE shdwRegs;
/* 80131DE0 local  */ // extern UNK_TYPE HorVer;
/* 80135458 global */ extern UNK_TYPE __VIVersion;
/* 8013545C local  */ // extern UNK_TYPE @534;
/* 801358B0 local  */ // extern UNK_TYPE IsInitialized;
/* 801358B4 local  */ // extern UNK_TYPE retraceCount;
/* 801358B8 local  */ // extern UNK_TYPE flushFlag;
/* 801358BC local  */ // extern UNK_TYPE retraceQueue;
/* 801358C4 local  */ // extern UNK_TYPE PreCB;
/* 801358C8 local  */ // extern UNK_TYPE PostCB;
/* 801358CC local  */ // extern UNK_TYPE PositionCallback;
/* 801358D0 local  */ // extern UNK_TYPE encoderType;
/* 801358D4 local  */ // extern UNK_TYPE displayOffsetH;
/* 801358D6 local  */ // extern UNK_TYPE displayOffsetV;
/* 801358D8 local  */ // extern UNK_TYPE changeMode;
/* 801358E0 local  */ // extern UNK_TYPE changed;
/* 801358E8 local  */ // extern UNK_TYPE shdwChangeMode;
/* 801358F0 local  */ // extern UNK_TYPE shdwChanged;
/* 801358F8 local  */ // extern UNK_TYPE CurrTiming;
/* 801358FC local  */ // extern UNK_TYPE CurrTvMode;
/* 80135900 local  */ // extern UNK_TYPE NextBufAddr;
/* 80135904 local  */ // extern UNK_TYPE CurrBufAddr;
/* 80135908 local  */ // extern UNK_TYPE FBSet;
/* 8013590C local  */ // extern UNK_TYPE message$343;
// ======================= db.c =======================================================
/* 800F1AA0 local  */ // extern UNK_TYPE @9;
/* 80135910 global */ extern DBInterface* __DBInterface;
/* 80135914 global */ extern UNK_TYPE DBVerbose;
// ======================= mtx.c ======================================================
/* 80135468 local  */ // extern UNK_TYPE Unit01;
/* 801360E0 local  */ // extern UNK_TYPE @96;
/* 801360E4 local  */ // extern UNK_TYPE @97;
// ======================= mtxvec.c ===================================================
// ======================= mtx44.c ====================================================
/* 801360E8 local  */ // extern UNK_TYPE @99;
/* 801360EC local  */ // extern UNK_TYPE @100;
/* 801360F0 local  */ // extern UNK_TYPE @101;
/* 801360F4 local  */ // extern UNK_TYPE @102;
/* 801360F8 local  */ // extern UNK_TYPE @105;
/* 801360FC local  */ // extern UNK_TYPE @106;
// ======================= GXInit.c ===================================================
/* 800F1AC0 local  */ // extern UNK_TYPE @1;
/* 800F1B20 local  */ // extern UNK_TYPE DefaultTexData;
/* 800F1B40 local  */ // extern UNK_TYPE GXDefaultVATList;
/* 800F1C10 local  */ // extern UNK_TYPE GXDefaultProjData;
/* 800F1C2C local  */ // extern UNK_TYPE GXTexRegionAddrTable;
/* 800F1CEC local  */ // extern UNK_TYPE GXResetFuncInfo;
/* 80131E38 local  */ // extern UNK_TYPE FifoObj;
/* 80131EB8 local  */ // extern UNK_TYPE gxData;
/* 80135470 global */ extern UNK_TYPE __GXVersion;
/* 80135918 global */ extern UNK_TYPE __piReg;
/* 8013591C global */ extern UNK_TYPE __cpReg;
/* 80135920 global */ extern UNK_TYPE __peReg;
/* 80135924 global */ extern UNK_TYPE __memReg;
/* 80135928 local  */ // extern UNK_TYPE peCount$35;
/* 80135930 local  */ // extern UNK_TYPE time$36;
/* 80135938 local  */ // extern UNK_TYPE calledOnce$37;
/* 8013593C local  */ // extern UNK_TYPE resetFuncRegistered$70;
/* 80136100 global */ extern UNK_TYPE __GXData;
/* 80136104 local  */ // extern UNK_TYPE @289;
/* 80136108 local  */ // extern UNK_TYPE @290;
/* 8013610C local  */ // extern UNK_TYPE @291;
/* 80136110 local  */ // extern UNK_TYPE @292;
/* 80136114 local  */ // extern UNK_TYPE @293;
/* 80136118 local  */ // extern UNK_TYPE @353;
/* 8013611C local  */ // extern UNK_TYPE @354;
/* 80136120 local  */ // extern UNK_TYPE @356;
// ======================= GXFifo.c ===================================================
/* 80135940 local  */ // extern UNK_TYPE CPUFifo;
/* 80135944 local  */ // extern UNK_TYPE GPFifo;
/* 80135948 local  */ // extern UNK_TYPE __GXCurrentThread;
/* 8013594C local  */ // extern UNK_TYPE CPGPLinked;
/* 80135950 local  */ // extern UNK_TYPE GXOverflowSuspendInProgress;
/* 80135954 local  */ // extern UNK_TYPE BreakPointCB;
/* 80135958 local  */ // extern UNK_TYPE __GXOverflowCount;
// ======================= GXAttr.c ===================================================
/* 800F1D00 local  */ // extern UNK_TYPE @176;
/* 800F1D68 local  */ // extern UNK_TYPE @498;
/* 800F1DAC local  */ // extern UNK_TYPE @525;
/* 800F1DF0 local  */ // extern UNK_TYPE @820;
/* 800F1E0C local  */ // extern UNK_TYPE @819;
/* 80135478 local  */ // extern UNK_TYPE tbl1$263;
/* 8013547C local  */ // extern UNK_TYPE tbl2$264;
/* 80135480 local  */ // extern UNK_TYPE tbl3$265;
// ======================= GXMisc.c ===================================================
/* 80135960 local  */ // extern UNK_TYPE TokenCB;
/* 80135964 local  */ // extern UNK_TYPE DrawDoneCB;
/* 80135968 local  */ // extern UNK_TYPE DrawDone;
/* 8013596C local  */ // extern UNK_TYPE FinishQueue;
// ======================= GXGeometry.c ===============================================
// ======================= GXFrameBuf.c ===============================================
/* 800F1E60 global */ extern GXRenderModeObj GXNtsc480IntDf;
/* 800F1E9C global */ extern GXRenderModeObj GXNtsc480Prog;
/* 800F1ED8 global */ extern GXRenderModeObj GXMpal480IntDf;
/* 800F1F14 global */ extern GXRenderModeObj GXPal528IntDf;
/* 800F1F50 global */ extern GXRenderModeObj GXEurgb60Hz480IntDf;
/* 80136128 local  */ // extern UNK_TYPE @179;
/* 80136130 local  */ // extern UNK_TYPE @234;
// ======================= GXLight.c ==================================================
// ======================= GXTexture.c ================================================
/* 800F1F90 local  */ // extern UNK_TYPE @145;
/* 800F2084 local  */ // extern UNK_TYPE @224;
/* 80135488 local  */ // extern UNK_TYPE GXTexMode0Ids;
/* 80135490 local  */ // extern UNK_TYPE GXTexMode1Ids;
/* 80135498 local  */ // extern UNK_TYPE GXTexImage0Ids;
/* 801354A0 local  */ // extern UNK_TYPE GXTexImage1Ids;
/* 801354A8 local  */ // extern UNK_TYPE GXTexImage2Ids;
/* 801354B0 local  */ // extern UNK_TYPE GXTexImage3Ids;
/* 801354B8 local  */ // extern UNK_TYPE GXTexTlutIds;
/* 801354C0 local  */ // extern UNK_TYPE GX2HWFiltConv;
/* 80136138 local  */ // extern UNK_TYPE @220;
/* 80136140 local  */ // extern UNK_TYPE @222;
/* 80136148 local  */ // extern UNK_TYPE @288;
/* 8013614C local  */ // extern UNK_TYPE @289;
/* 80136150 local  */ // extern UNK_TYPE @290;
/* 80136154 local  */ // extern UNK_TYPE @291;
/* 80136158 local  */ // extern UNK_TYPE @292;
/* 8013615C local  */ // extern UNK_TYPE @293;
// ======================= GXBump.c ===================================================
// ======================= GXTev.c ====================================================
/* 800F20C0 local  */ // extern UNK_TYPE TEVCOpTableST0;
/* 800F20D4 local  */ // extern UNK_TYPE TEVCOpTableST1;
/* 800F20E8 local  */ // extern UNK_TYPE TEVAOpTableST0;
/* 800F20FC local  */ // extern UNK_TYPE TEVAOpTableST1;
/* 800F2110 local  */ // extern UNK_TYPE c2r$364;
// ======================= GXPixel.c ==================================================
/* 800F2138 local  */ // extern UNK_TYPE p2f$362;
/* 80136160 local  */ // extern UNK_TYPE @221;
/* 80136164 local  */ // extern UNK_TYPE @222;
/* 80136168 local  */ // extern UNK_TYPE @223;
/* 80136170 local  */ // extern UNK_TYPE @224;
/* 80136178 local  */ // extern UNK_TYPE @225;
/* 80136180 local  */ // extern UNK_TYPE @226;
/* 80136188 local  */ // extern UNK_TYPE @227;
/* 80136190 local  */ // extern UNK_TYPE @229;
/* 80136198 local  */ // extern UNK_TYPE @252;
/* 801361A0 local  */ // extern UNK_TYPE @253;
/* 801361A8 local  */ // extern UNK_TYPE @254;
/* 801361B0 local  */ // extern UNK_TYPE @255;
/* 801361B8 local  */ // extern UNK_TYPE @257;
// ======================= GXTransform.c ==============================================
/* 801361C0 local  */ // extern UNK_TYPE @26;
/* 801361C4 local  */ // extern UNK_TYPE @28;
/* 801361C8 local  */ // extern UNK_TYPE @201;
// ======================= GXPerf.c ===================================================
/* 800F2158 local  */ // extern UNK_TYPE @281;
/* 800F21B4 local  */ // extern UNK_TYPE @280;
/* 800F2244 local  */ // extern UNK_TYPE @387;
// ======================= Padclamp.c =================================================
/* 800D3200 local  */ // extern UNK_TYPE ClampRegion;
// ======================= Pad.c ======================================================
/* 800F22A0 local  */ // extern UNK_TYPE @1;
/* 800F22E8 local  */ // extern UNK_TYPE ResetFunctionInfo;
/* 80132468 local  */ // extern UNK_TYPE Type;
/* 80132478 local  */ // extern UNK_TYPE Origin;
/* 801324A8 local  */ // extern UNK_TYPE CmdProbeDevice;
/* 801354C8 global */ extern UNK_TYPE __PADVersion;
/* 801354CC local  */ // extern UNK_TYPE ResettingChan;
/* 801354D0 local  */ // extern UNK_TYPE XPatchBits;
/* 801354D4 local  */ // extern UNK_TYPE AnalogMode;
/* 801354D8 local  */ // extern UNK_TYPE Spec;
/* 801354DC local  */ // extern UNK_TYPE MakeStatus;
/* 801354E0 local  */ // extern UNK_TYPE CmdReadOrigin;
/* 801354E4 local  */ // extern UNK_TYPE CmdCalibrate;
/* 80135978 local  */ // extern UNK_TYPE Initialized;
/* 8013597C local  */ // extern UNK_TYPE EnabledBits;
/* 80135980 local  */ // extern UNK_TYPE ResettingBits;
/* 80135984 local  */ // extern UNK_TYPE RecalibrateBits;
/* 80135988 local  */ // extern UNK_TYPE WaitingBits;
/* 8013598C local  */ // extern UNK_TYPE CheckingBits;
/* 80135990 local  */ // extern UNK_TYPE PendingBits;
/* 80135994 local  */ // extern UNK_TYPE BarrelBits;
/* 80135998 local  */ // extern UNK_TYPE SamplingCallback;
/* 8013599C local  */ // extern UNK_TYPE recalibrated$388;
/* 801359A0 global */ extern UNK_TYPE __PADSpec;
// ======================= dvdlow.c ===================================================
/* 801324B8 local  */ // extern UNK_TYPE CommandList;
/* 801324F8 local  */ // extern UNK_TYPE AlarmForWA;
/* 80132520 local  */ // extern UNK_TYPE AlarmForTimeout;
/* 80132548 local  */ // extern UNK_TYPE AlarmForBreak;
/* 80132570 local  */ // extern UNK_TYPE Prev;
/* 8013257C local  */ // extern UNK_TYPE Curr;
/* 801354E8 local  */ // extern UNK_TYPE FirstRead;
/* 801359A8 local  */ // extern UNK_TYPE StopAtNextInt;
/* 801359AC local  */ // extern UNK_TYPE LastLength;
/* 801359B0 local  */ // extern UNK_TYPE Callback;
/* 801359B4 local  */ // extern UNK_TYPE ResetCoverCallback;
/* 801359B8 local  */ // extern UNK_TYPE LastResetEnd;
/* 801359C0 local  */ // extern UNK_TYPE ResetOccurred;
/* 801359C4 local  */ // extern UNK_TYPE WaitingCoverClose;
/* 801359C8 local  */ // extern UNK_TYPE Breaking;
/* 801359CC local  */ // extern UNK_TYPE WorkAroundType;
/* 801359D0 local  */ // extern UNK_TYPE WorkAroundSeekLocation;
/* 801359D8 local  */ // extern UNK_TYPE LastReadFinished;
/* 801359E0 local  */ // extern UNK_TYPE LastReadIssued;
/* 801359E8 local  */ // extern UNK_TYPE LastCommandWasRead;
/* 801359EC local  */ // extern UNK_TYPE NextCommandNumber;
// ======================= dvdfs.c ====================================================
/* 800F22F8 local  */ // extern UNK_TYPE @119;
/* 800F23C0 local  */ // extern UNK_TYPE @140;
/* 800F23F8 local  */ // extern UNK_TYPE @239;
/* 800F242C local  */ // extern UNK_TYPE @265;
/* 801354F0 local  */ // extern UNK_TYPE @118;
/* 801359F0 local  */ // extern UNK_TYPE BootInfo;
/* 801359F4 local  */ // extern UNK_TYPE FstStart;
/* 801359F8 local  */ // extern UNK_TYPE FstStringStart;
/* 801359FC local  */ // extern UNK_TYPE MaxEntryNum;
/* 80135A00 local  */ // extern UNK_TYPE currentDirectory;
/* 80135A04 global */ extern UNK_TYPE __DVDLongFileNameFlag;
/* 80135A08 global */ extern UNK_TYPE __DVDThreadQueue;
// ======================= dvd.c ======================================================
/* 800F2460 local  */ // extern UNK_TYPE @1;
/* 800F24A8 local  */ // extern UNK_TYPE @18;
/* 800F24B4 local  */ // extern UNK_TYPE @24;
/* 800F24E8 local  */ // extern UNK_TYPE @344;
/* 800F2528 local  */ // extern UNK_TYPE ImmCommand;
/* 800F2534 local  */ // extern UNK_TYPE @768;
/* 800F2578 local  */ // extern UNK_TYPE @907;
/* 800F25AC local  */ // extern UNK_TYPE @1011;
/* 801325A0 local  */ // extern UNK_TYPE BB2;
/* 801325C0 local  */ // extern UNK_TYPE CurrDiskID;
/* 801325E0 local  */ // extern UNK_TYPE DummyCommandBlock;
/* 80132610 local  */ // extern UNK_TYPE ResetAlarm;
/* 801354F8 global */ extern UNK_TYPE __DVDVersion;
/* 801354FC local  */ // extern UNK_TYPE autoInvalidation;
/* 80135500 local  */ // extern UNK_TYPE checkOptionalCommand;
/* 80135504 local  */ // extern UNK_TYPE @23;
/* 8013550C local  */ // extern UNK_TYPE DmaCommand;
/* 80135A10 local  */ // extern UNK_TYPE executing;
/* 80135A14 local  */ // extern UNK_TYPE IDShouldBe;
/* 80135A18 local  */ // extern UNK_TYPE bootInfo;
/* 80135A1C local  */ // extern UNK_TYPE PauseFlag;
/* 80135A20 local  */ // extern UNK_TYPE PausingFlag;
/* 80135A24 local  */ // extern UNK_TYPE AutoFinishing;
/* 80135A28 local  */ // extern UNK_TYPE FatalErrorFlag;
/* 80135A2C local  */ // extern UNK_TYPE CurrCommand;
/* 80135A30 local  */ // extern UNK_TYPE Canceling;
/* 80135A34 local  */ // extern UNK_TYPE CancelCallback;
/* 80135A38 local  */ // extern UNK_TYPE ResumeFromHere;
/* 80135A3C local  */ // extern UNK_TYPE CancelLastError;
/* 80135A40 local  */ // extern UNK_TYPE LastError;
/* 80135A44 local  */ // extern UNK_TYPE NumInternalRetry;
/* 80135A48 local  */ // extern UNK_TYPE ResetRequired;
/* 80135A4C local  */ // extern UNK_TYPE FirstTimeInBootrom;
/* 80135A50 local  */ // extern UNK_TYPE DVDInitialized;
/* 80135A54 global */ extern UNK_TYPE LastState;
// ======================= dvdqueue.c =================================================
/* 80132638 local  */ // extern UNK_TYPE WaitingQueue;
// ======================= dvderror.c =================================================
/* 800F25E0 local  */ // extern UNK_TYPE ErrorTable;
// ======================= dvdidutils.c ===============================================
// ======================= dvdFatal.c =================================================
/* 80135A58 local  */ // extern UNK_TYPE FatalFunc;
// ======================= fstload.c ==================================================
/* 800F2628 local  */ // extern UNK_TYPE @38;
/* 800F2644 local  */ // extern UNK_TYPE @39;
/* 800F265C local  */ // extern UNK_TYPE @40;
/* 800F2670 local  */ // extern UNK_TYPE @41;
/* 800F2684 local  */ // extern UNK_TYPE @44;
/* 80132658 local  */ // extern UNK_TYPE bb2Buf;
/* 80132698 local  */ // extern UNK_TYPE block$18;
/* 80135510 local  */ // extern UNK_TYPE @37;
/* 80135514 local  */ // extern UNK_TYPE @42;
/* 80135518 local  */ // extern UNK_TYPE @43;
/* 80135A60 local  */ // extern UNK_TYPE status;
/* 80135A64 local  */ // extern UNK_TYPE bb2;
/* 80135A68 local  */ // extern UNK_TYPE idTmp;
// ======================= DEMOInit.c =================================================
/* 800F2698 local  */ // extern UNK_TYPE @21;
/* 800F26A4 local  */ // extern UNK_TYPE @22;
/* 800F26C4 local  */ // extern UNK_TYPE @121;
/* 800F26FC local  */ // extern UNK_TYPE @122;
/* 800F270C local  */ // extern UNK_TYPE @136;
/* 800F273C local  */ // extern UNK_TYPE @166;
/* 800F2758 local  */ // extern UNK_TYPE @167;
/* 800F2778 local  */ // extern UNK_TYPE @168;
/* 800F27A0 local  */ // extern UNK_TYPE @169;
/* 800F27C8 local  */ // extern UNK_TYPE @170;
/* 800F27F8 local  */ // extern UNK_TYPE @171;
/* 801326C8 local  */ // extern UNK_TYPE rmodeobj;
/* 80135520 local  */ // extern UNK_TYPE DemoFirstFrame;
/* 80135A70 local  */ // extern UNK_TYPE DefaultFifo;
/* 80135A74 local  */ // extern UNK_TYPE DefaultFifoObj;
/* 80135A78 local  */ // extern UNK_TYPE rmode;
/* 80135A7C local  */ // extern UNK_TYPE allocatedFrameBufferSize;
/* 80135A80 local  */ // extern UNK_TYPE GPHangWorkaround;
/* 80135A84 local  */ // extern UNK_TYPE FrameCount;
/* 80135A88 local  */ // extern UNK_TYPE FrameMissThreshold;
/* 80135A8C global */ extern UNK_TYPE DemoCurrentBuffer;
/* 80135A90 global */ extern UNK_TYPE DemoFrameBuffer2;
/* 80135A94 global */ extern UNK_TYPE DemoFrameBuffer1;
/* 801361D0 local  */ // extern UNK_TYPE @41;
/* 801361D4 local  */ // extern UNK_TYPE @42;
/* 801361D8 local  */ // extern UNK_TYPE @44;
// ======================= DEMOPuts.c =================================================
/* 80132708 local  */ // extern UNK_TYPE fontTexObj;
/* 80135A98 local  */ // extern UNK_TYPE fontShift;
/* 801361E0 local  */ // extern UNK_TYPE @21;
/* 801361E4 local  */ // extern UNK_TYPE @22;
/* 801361E8 local  */ // extern UNK_TYPE @24;
/* 801361F0 local  */ // extern UNK_TYPE @31;
/* 801361F8 local  */ // extern UNK_TYPE @33;
/* 80136200 local  */ // extern UNK_TYPE @55;
// ======================= DEMOFont.c =================================================
/* 800F2820 global */ extern UNK_TYPE DEMOFontBitmap;
// ======================= DEMOPad.c ==================================================
/* 800F3420 local  */ // extern UNK_TYPE PadChanMask;
/* 80132728 local  */ // extern UNK_TYPE Pad;
/* 80132758 global */ extern UNK_TYPE DemoPad;
/* 80135AA0 global */ extern UNK_TYPE DemoNumValidPads;
// ======================= DEMOStats.c ================================================
/* 800F3430 local  */ // extern UNK_TYPE @51;
/* 800F343C local  */ // extern UNK_TYPE @52;
/* 800F3464 local  */ // extern UNK_TYPE @53;
/* 800F348C local  */ // extern UNK_TYPE @158;
/* 800F3498 local  */ // extern UNK_TYPE @160;
/* 800F34A4 local  */ // extern UNK_TYPE @161;
/* 800F34B0 local  */ // extern UNK_TYPE @163;
/* 800F34BC local  */ // extern UNK_TYPE @164;
/* 800F34E8 local  */ // extern UNK_TYPE @171;
/* 800F3510 local  */ // extern UNK_TYPE @170;
/* 800F3538 local  */ // extern UNK_TYPE @169;
/* 800F3560 local  */ // extern UNK_TYPE @165;
/* 80135528 local  */ // extern UNK_TYPE @162;
/* 80135AA8 global */ extern UNK_TYPE DemoStatEnable;
/* 80135AAC local  */ // extern UNK_TYPE DemoStat;
/* 80135AB0 local  */ // extern UNK_TYPE DemoStatIndx;
/* 80135AB4 local  */ // extern UNK_TYPE DemoStatMaxIndx;
/* 80135AB8 local  */ // extern UNK_TYPE DemoStatClocks;
/* 80135ABC local  */ // extern UNK_TYPE DemoStatDisp;
/* 80135AC0 local  */ // extern UNK_TYPE topPixIn;
/* 80135AC4 local  */ // extern UNK_TYPE topPixOut;
/* 80135AC8 local  */ // extern UNK_TYPE botPixIn;
/* 80135ACC local  */ // extern UNK_TYPE botPixOut;
/* 80135AD0 local  */ // extern UNK_TYPE clrPixIn;
/* 80135AD4 local  */ // extern UNK_TYPE copyClks;
/* 80135AD8 local  */ // extern UNK_TYPE vcCheck;
/* 80135ADC local  */ // extern UNK_TYPE vcMiss;
/* 80135AE0 local  */ // extern UNK_TYPE vcStall;
/* 80135AE4 local  */ // extern UNK_TYPE cpReq;
/* 80135AE8 local  */ // extern UNK_TYPE tcReq;
/* 80135AEC local  */ // extern UNK_TYPE cpuRdReq;
/* 80135AF0 local  */ // extern UNK_TYPE cpuWrReq;
/* 80135AF4 local  */ // extern UNK_TYPE dspReq;
/* 80135AF8 local  */ // extern UNK_TYPE ioReq;
/* 80135AFC local  */ // extern UNK_TYPE viReq;
/* 80135B00 local  */ // extern UNK_TYPE peReq;
/* 80135B04 local  */ // extern UNK_TYPE rfReq;
/* 80135B08 local  */ // extern UNK_TYPE fiReq;
/* 80136208 local  */ // extern UNK_TYPE @159;
/* 80136210 local  */ // extern UNK_TYPE @167;
// ======================= ai.c =======================================================
/* 800F3588 local  */ // extern UNK_TYPE @1;
/* 80135530 global */ extern UNK_TYPE __AIVersion;
/* 80135B10 local  */ // extern UNK_TYPE __AIS_Callback;
/* 80135B14 local  */ // extern UNK_TYPE __AID_Callback;
/* 80135B18 local  */ // extern UNK_TYPE __CallbackStack;
/* 80135B1C local  */ // extern UNK_TYPE __OldStack;
/* 80135B20 local  */ // extern UNK_TYPE __AI_init_flag;
/* 80135B24 local  */ // extern UNK_TYPE __AID_Active;
/* 80135B28 local  */ // extern UNK_TYPE bound_32KHz;
/* 80135B30 local  */ // extern UNK_TYPE bound_48KHz;
/* 80135B38 local  */ // extern UNK_TYPE min_wait;
/* 80135B40 local  */ // extern UNK_TYPE max_wait;
/* 80135B48 local  */ // extern UNK_TYPE buffer;
// ======================= ar.c =======================================================
/* 800F35D0 local  */ // extern UNK_TYPE @1;
/* 80135538 global */ extern UNK_TYPE __ARVersion;
/* 80135B50 local  */ // extern UNK_TYPE __AR_Callback;
/* 80135B54 local  */ // extern UNK_TYPE __AR_Size;
/* 80135B58 local  */ // extern UNK_TYPE __AR_InternalSize;
/* 80135B5C local  */ // extern UNK_TYPE __AR_ExpansionSize;
/* 80135B60 local  */ // extern UNK_TYPE __AR_StackPointer;
/* 80135B64 local  */ // extern UNK_TYPE __AR_FreeBlocks;
/* 80135B68 local  */ // extern UNK_TYPE __AR_BlockLength;
/* 80135B6C local  */ // extern UNK_TYPE __AR_init_flag;
// ======================= dsp.c ======================================================
/* 800F3618 local  */ // extern UNK_TYPE @1;
/* 800F3660 local  */ // extern UNK_TYPE @19;
/* 800F3680 local  */ // extern UNK_TYPE @20;
/* 800F368C local  */ // extern UNK_TYPE @21;
/* 80135540 global */ extern UNK_TYPE __DSPVersion;
/* 80135B70 local  */ // extern UNK_TYPE __DSP_init_flag;
// ======================= dsp_debug.c ================================================
// ======================= dsp_task.c =================================================
/* 800F3698 local  */ // extern UNK_TYPE @266;
/* 800F36B8 local  */ // extern UNK_TYPE @267;
/* 800F36E8 local  */ // extern UNK_TYPE @268;
/* 800F3718 local  */ // extern UNK_TYPE @269;
/* 800F3748 local  */ // extern UNK_TYPE @270;
/* 800F3778 local  */ // extern UNK_TYPE @271;
/* 800F37A8 local  */ // extern UNK_TYPE @294;
/* 80135B78 global */ extern UNK_TYPE __DSP_rude_task_pending;
/* 80135B7C global */ extern UNK_TYPE __DSP_rude_task;
/* 80135B80 global */ extern UNK_TYPE __DSP_tmp_task;
/* 80135B84 global */ extern UNK_TYPE __DSP_last_task;
/* 80135B88 global */ extern UNK_TYPE __DSP_first_task;
/* 80135B8C global */ extern UNK_TYPE __DSP_curr_task;
// ======================= CARDBios.c =================================================
/* 800F37D8 local  */ // extern UNK_TYPE @1;
/* 800F3820 local  */ // extern UNK_TYPE ResetFunctionInfo;
/* 801327D0 global */ extern UNK_TYPE __CARDBlock;
/* 801329F0 global */ extern UNK_TYPE __CARDDiskNone;
/* 80135548 global */ extern UNK_TYPE __CARDVersion;
/* 80135B90 local  */ // extern UNK_TYPE __CARDEncode;
// ======================= CARDUnlock.c ===============================================
/* 800F3840 local  */ // extern UNK_TYPE CardData;
/* 80135550 local  */ // extern UNK_TYPE next;
// ======================= CARDRdwr.c =================================================
// ======================= CARDBlock.c ================================================
// ======================= CARDDir.c ==================================================
// ======================= CARDCheck.c ================================================
// ======================= CARDMount.c ================================================
/* 800F39A0 local  */ // extern UNK_TYPE SectorSizeTable;
/* 800F39C0 local  */ // extern UNK_TYPE LatencyTable;
// ======================= CARDFormat.c ===============================================
// ======================= CARDOpen.c =================================================
// ======================= CARDCreate.c ===============================================
// ======================= CARDRead.c =================================================
// ======================= CARDWrite.c ================================================
// ======================= CARDDelete.c ===============================================
// ======================= CARDStat.c =================================================
// ======================= CARDNet.c ==================================================
/* 80135558 global */ extern UNK_TYPE __CARDVendorID;
/* 8013555A global */ extern UNK_TYPE __CARDPermMask;
// ======================= THPDec.c ===================================================
/* 800D3210 local  */ // extern UNK_TYPE __THPJpegNaturalOrder;
/* 800D3260 local  */ // extern UNK_TYPE __THPAANScaleFactor;
/* 800F39E0 local  */ // extern UNK_TYPE @1;
/* 80132A20 local  */ // extern UNK_TYPE __THPIDCTWorkspace;
/* 80132B20 local  */ // extern UNK_TYPE __THPLCWork512;
/* 80132B2C local  */ // extern UNK_TYPE __THPLCWork640;
/* 80132B38 local  */ // extern UNK_TYPE __THPMCUBuffer;
/* 80135560 global */ extern UNK_TYPE __THPVersion;
/* 80135BA0 local  */ // extern UNK_TYPE Ydchuff;
/* 80135BC0 local  */ // extern UNK_TYPE Udchuff;
/* 80135BE0 local  */ // extern UNK_TYPE Vdchuff;
/* 80135C00 local  */ // extern UNK_TYPE Yachuff;
/* 80135C20 local  */ // extern UNK_TYPE Uachuff;
/* 80135C40 local  */ // extern UNK_TYPE Vachuff;
/* 80135C44 local  */ // extern UNK_TYPE __THPHuffmanBits;
/* 80135C48 local  */ // extern UNK_TYPE __THPHuffmanSizeTab;
/* 80135C4C local  */ // extern UNK_TYPE __THPHuffmanCodeTab;
/* 80135C60 local  */ // extern UNK_TYPE Gbase;
/* 80135C80 local  */ // extern UNK_TYPE Gwid;
/* 80135CA0 local  */ // extern UNK_TYPE Gq;
/* 80135CA4 local  */ // extern UNK_TYPE __THPOldGQR5;
/* 80135CA8 local  */ // extern UNK_TYPE __THPOldGQR6;
/* 80135CAC local  */ // extern UNK_TYPE __THPWorkArea;
/* 80135CB0 local  */ // extern UNK_TYPE __THPInfo;
/* 80135CB4 local  */ // extern UNK_TYPE __THPInitFlag;
/* 80136218 local  */ // extern UNK_TYPE @244;
/* 80136220 local  */ // extern UNK_TYPE @666;
/* 80136224 local  */ // extern UNK_TYPE @667;
/* 80136228 local  */ // extern UNK_TYPE @668;
/* 8013622C local  */ // extern UNK_TYPE @669;
/* 80136230 local  */ // extern UNK_TYPE @670;
// ======================= THPAudio.c =================================================
// ======================= texPalette.c ===============================================
/* 80136238 local  */ // extern UNK_TYPE @55;
// ======================= mainloop.c =================================================
// ======================= nubevent.c =================================================
/* 80132B50 global */ extern UNK_TYPE gTRKEventQueue;
// ======================= nubinit.c ==================================================
/* 800D32A0 local  */ // extern UNK_TYPE @40;
/* 80132B78 global */ extern UNK_TYPE gTRKBigEndian;
// ======================= msg.c ======================================================
// ======================= msgbuf.c ===================================================
/* 80132B80 global */ extern UNK_TYPE gTRKMsgBufs;
// ======================= serpoll.c ==================================================
/* 80134530 local  */ // extern UNK_TYPE gTRKFramingState;
/* 80134544 global */ extern UNK_TYPE gTRKInputPendingPtr;
// ======================= usr_put.c ==================================================
// ======================= dispatch.c =================================================
/* 800F3A20 global */ extern UNK_TYPE gTRKDispatchTable;
/* 80134548 global */ extern UNK_TYPE gTRKDispatchTableSize;
// ======================= msghndlr.c =================================================
// ======================= support.c ==================================================
// ======================= mutex_TRK.c ================================================
// ======================= notify.c ===================================================
// ======================= flush_cache.c ==============================================
// ======================= mem_TRK.c ==================================================
// ======================= __exception.s ==============================================
// ======================= targimpl.c =================================================
/* 800D32C0 global */ extern UNK_TYPE gTRKMemMap;
/* 800D32D0 local  */ // extern UNK_TYPE @233;
/* 800D32E4 local  */ // extern UNK_TYPE @238;
/* 800D32F8 local  */ // extern UNK_TYPE @243;
/* 800F3AA8 global */ extern UNK_TYPE gTRKRestoreFlags;
/* 800F3AB4 local  */ // extern UNK_TYPE gTRKExceptionStatus;
/* 800F3AC4 local  */ // extern UNK_TYPE gTRKStepStatus;
/* 80134550 local  */ // extern UNK_TYPE TRK_saved_exceptionID;
/* 80134554 global */ extern UNK_TYPE gTRKSaveState;
/* 801345E8 global */ extern UNK_TYPE TRKvalue128_temp;
/* 801345F8 global */ extern UNK_TYPE gTRKState;
/* 801346A0 global */ extern UNK_TYPE gTRKCPUState;
// ======================= dolphin_trk.c ==============================================
/* 800F3AD8 local  */ // extern UNK_TYPE TRK_ISR_OFFSETS;
// ======================= mpc_7xx_603e.c =============================================
// ======================= main_TRK.c =================================================
/* 80134AD0 local  */ // extern UNK_TYPE TRK_mainError;
// ======================= dolphin_trk_glue.c =========================================
/* 800F3B18 global */ extern UNK_TYPE gDBCommTable;
// ======================= targcont.c =================================================
// ======================= __mem.c ====================================================
// ======================= __va_arg.c =================================================
// ======================= global_destructor_chain.c ==================================
/* 80135CB8 global */ extern UNK_TYPE __global_destructor_chain;
// ======================= runtime.c ==================================================
/* 800D3310 local  */ // extern UNK_TYPE __constants;
// ======================= abort_exit.c ===============================================
/* 800D2FC0 global */ // extern UNK_TYPE _dtors;
/* 80134AD8 local  */ // extern UNK_TYPE atexit_funcs;
/* 80134BD8 local  */ // extern UNK_TYPE __atexit_funcs;
/* 80135CC0 global */ extern UNK_TYPE __aborting;
/* 80135CC4 local  */ // extern UNK_TYPE atexit_curr_func;
/* 80135CC8 local  */ // extern UNK_TYPE __atexit_curr_func;
/* 80135CCC global */ extern UNK_TYPE __stdio_exit;
/* 80135CD0 global */ extern UNK_TYPE __console_exit;
// ======================= ansi_files.c ===============================================
/* 800F3B38 global */ extern UNK_TYPE __files;
// ======================= ansi_fp.c ==================================================
/* 800D3328 local  */ // extern UNK_TYPE bit_values;
/* 800D3370 local  */ // extern UNK_TYPE digit_values;
/* 80136240 local  */ // extern UNK_TYPE @268;
/* 80136248 local  */ // extern UNK_TYPE @270;
/* 80136250 local  */ // extern UNK_TYPE @272;
/* 80136258 local  */ // extern UNK_TYPE @362;
/* 80136260 local  */ // extern UNK_TYPE @363;
// ======================= buffer_io.c ================================================
// ======================= critical_regions.ppc_eabi.c ================================
// ======================= ctype.c ====================================================
/* 800D33B0 global */ extern UNK_TYPE __ctype_map;
/* 800D34B0 global */ extern UNK_TYPE __lower_map;
/* 800D35B0 global */ extern UNK_TYPE __upper_map;
// ======================= direct_io.c ================================================
// ======================= errno.c ====================================================
/* 80135CD8 global */ extern UNK_TYPE errno;
// ======================= mbstring.c =================================================
// ======================= mem.c ======================================================
// ======================= mem_funcs.c ================================================
// ======================= misc_io.c ==================================================
// ======================= printf.c ===================================================
/* 800D36B0 local  */ // extern UNK_TYPE @stringBase0;
/* 800F3C10 local  */ // extern UNK_TYPE @1009;
/* 800F3C94 local  */ // extern UNK_TYPE @1066;
/* 800F3D18 local  */ // extern UNK_TYPE @1186;
/* 800F3DE8 local  */ // extern UNK_TYPE @1185;
/* 80135568 local  */ // extern UNK_TYPE @wstringBase0;
/* 80136268 local  */ // extern UNK_TYPE @919;
// ======================= scanf.c ====================================================
// ======================= string.c ===================================================
/* 80135570 local  */ // extern UNK_TYPE K1;
/* 80135574 local  */ // extern UNK_TYPE K2;
// ======================= strtoul.c ==================================================
/* 800F3E30 local  */ // extern UNK_TYPE @410;
// ======================= uart_console_io.c ==========================================
/* 80135CE0 local  */ // extern UNK_TYPE initialized$16;
// ======================= float.c ====================================================
/* 800F3E78 global */ extern UNK_TYPE __float_nan;
/* 800F3E7C global */ extern UNK_TYPE __float_huge;
// ======================= wchar_io.c =================================================
// ======================= e_asin.c ===================================================
// ======================= e_pow.c ====================================================
/* 800D36C0 local  */ // extern UNK_TYPE bp;
/* 800D36D0 local  */ // extern UNK_TYPE dp_h;
/* 800D36E0 local  */ // extern UNK_TYPE dp_l;
/* 80136270 local  */ // extern UNK_TYPE @375;
/* 80136278 local  */ // extern UNK_TYPE @376;
/* 80136280 local  */ // extern UNK_TYPE @377;
/* 80136288 local  */ // extern UNK_TYPE @378;
/* 80136290 local  */ // extern UNK_TYPE @379;
/* 80136298 local  */ // extern UNK_TYPE @380;
/* 801362A0 local  */ // extern UNK_TYPE @381;
/* 801362A8 local  */ // extern UNK_TYPE @382;
/* 801362B0 local  */ // extern UNK_TYPE @383;
/* 801362B8 local  */ // extern UNK_TYPE @384;
/* 801362C0 local  */ // extern UNK_TYPE @385;
/* 801362C8 local  */ // extern UNK_TYPE @386;
/* 801362D0 local  */ // extern UNK_TYPE @387;
/* 801362D8 local  */ // extern UNK_TYPE @388;
/* 801362E0 local  */ // extern UNK_TYPE @389;
/* 801362E8 local  */ // extern UNK_TYPE @390;
/* 801362F0 local  */ // extern UNK_TYPE @391;
/* 801362F8 local  */ // extern UNK_TYPE @392;
/* 80136300 local  */ // extern UNK_TYPE @393;
/* 80136308 local  */ // extern UNK_TYPE @394;
/* 80136310 local  */ // extern UNK_TYPE @395;
/* 80136318 local  */ // extern UNK_TYPE @396;
/* 80136320 local  */ // extern UNK_TYPE @397;
/* 80136328 local  */ // extern UNK_TYPE @398;
/* 80136330 local  */ // extern UNK_TYPE @399;
/* 80136338 local  */ // extern UNK_TYPE @400;
/* 80136340 local  */ // extern UNK_TYPE @401;
/* 80136348 local  */ // extern UNK_TYPE @402;
/* 80136350 local  */ // extern UNK_TYPE @403;
/* 80136358 local  */ // extern UNK_TYPE @404;
/* 80136360 local  */ // extern UNK_TYPE @405;
/* 80136368 local  */ // extern UNK_TYPE @406;
/* 80136370 local  */ // extern UNK_TYPE @407;
/* 80136378 local  */ // extern UNK_TYPE @409;
// ======================= fminmaxdim.c ===============================================
// ======================= s_ceil.c ===================================================
/* 80136380 local  */ // extern UNK_TYPE @166;
/* 80136388 local  */ // extern UNK_TYPE @167;
// ======================= s_copysign.c ===============================================
// ======================= s_floor.c ==================================================
/* 80136390 local  */ // extern UNK_TYPE @166;
/* 80136398 local  */ // extern UNK_TYPE @167;
// ======================= s_frexp.c ==================================================
/* 801363A0 local  */ // extern UNK_TYPE @100;
// ======================= s_ldexp.c ==================================================
/* 801363A8 local  */ // extern UNK_TYPE @131;
/* 801363B0 local  */ // extern UNK_TYPE @132;
/* 801363B8 local  */ // extern UNK_TYPE @133;
/* 801363C0 local  */ // extern UNK_TYPE @134;
/* 801363C8 local  */ // extern UNK_TYPE @135;
// ======================= w_pow.c ====================================================
// ======================= hyperbolicsf.c =============================================
// ======================= log10f.c ===================================================
/* 800D36F0 local  */ // extern UNK_TYPE _log10_poly;
/* 801363D0 local  */ // extern UNK_TYPE @128;
/* 801363D4 local  */ // extern UNK_TYPE @129;
/* 801363D8 local  */ // extern UNK_TYPE @130;
/* 801363DC local  */ // extern UNK_TYPE @131;
/* 801363E0 local  */ // extern UNK_TYPE @132;
/* 801363E4 local  */ // extern UNK_TYPE @133;
/* 801363E8 local  */ // extern UNK_TYPE @135;
// ======================= trigf.c ====================================================
/* 800D2FA0 global */ // extern UNK_TYPE _ctors;
/* 800D3700 local  */ // extern UNK_TYPE tmp_float;
/* 800F3E80 local  */ // extern UNK_TYPE __four_over_pi_m1;
/* 801363F0 local  */ // extern UNK_TYPE @106;
/* 801363F4 local  */ // extern UNK_TYPE @107;
/* 801363F8 local  */ // extern UNK_TYPE @108;
/* 80136400 local  */ // extern UNK_TYPE @110;
// ======================= math_inlines.c =============================================
/* 80136408 local  */ // extern UNK_TYPE @106;
/* 80136410 local  */ // extern UNK_TYPE @107;
/* 80136418 local  */ // extern UNK_TYPE @108;
// ======================= common_float_tables.c ======================================
/* 800F3E90 global */ extern const float __sincos_on_quadrant[];
/* 800F3EB0 global */ extern const float __sincos_poly[];
// ======================= AmcExi2Stubs.c =============================================
// ======================= DebuggerDriver.c ===========================================
/* 80135578 local  */ // extern UNK_TYPE SendCount;
/* 80135CE8 local  */ // extern UNK_TYPE MTRCallback;
/* 80135CEC local  */ // extern UNK_TYPE DBGCallback;
/* 80135CF0 local  */ // extern UNK_TYPE SendMailData;
/* 80135CF4 local  */ // extern UNK_TYPE RecvDataLeng;
/* 80135CF8 local  */ // extern UNK_TYPE pEXIInputFlag;
/* 80135CFC local  */ // extern UNK_TYPE EXIInputFlag;
// ======================= odenotstub.c ===============================================
#endif

#endif

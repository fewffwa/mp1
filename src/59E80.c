#include "common.h"

INCLUDE_ASM(s32, "59E80", func_80059280);

INCLUDE_ASM(s32, "59E80", func_80059348);

INCLUDE_ASM(s32, "59E80", func_80059354);

INCLUDE_ASM(s32, "59E80", func_800593AC);

INCLUDE_ASM(s32, "59E80", func_80059400);

INCLUDE_ASM(s32, "59E80", func_80059448);

INCLUDE_ASM(s32, "59E80", func_8005949C);

INCLUDE_ASM(s32, "59E80", func_800594E4);

INCLUDE_ASM(s32, "59E80", func_800594FC);

INCLUDE_ASM(s32, "59E80", func_80059514);

INCLUDE_ASM(s32, "59E80", func_80059520);

INCLUDE_ASM(s32, "59E80", func_80059550);

INCLUDE_ASM(s32, "59E80", func_80059578);

INCLUDE_ASM(s32, "59E80", func_80059600);

INCLUDE_ASM(s32, "59E80", func_8005963C);

INCLUDE_ASM(s32, "59E80", func_80059678);

INCLUDE_ASM(s32, "59E80", func_800596B8);

INCLUDE_ASM(s32, "59E80", func_800596DC);

INCLUDE_ASM(s32, "59E80", func_80059768);

INCLUDE_ASM(s32, "59E80", IsBoardFeatureFlagSet);

INCLUDE_ASM(s32, "59E80", SetBoardFeatureFlag);

INCLUDE_ASM(s32, "59E80", ClearBoardFeatureFlag);

INCLUDE_ASM(s32, "59E80", MakeHeap);

INCLUDE_ASM(s32, "59E80", Malloc);

INCLUDE_ASM(s32, "59E80", Free);

INCLUDE_ASM(s32, "59E80", func_800599DC);

INCLUDE_ASM(s32, "59E80", func_80059AA4);

INCLUDE_ASM(s32, "59E80", func_80059AD8);

s32 Align16(s32 arg0) {
    return (arg0 + 0x1F) & ~0xF;
}

s32 func_80059B10(s32 arg0) {
    if (arg0 < 0) {
        if (arg0 + 3 == D_800ED147) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return IsBoardFeatureFlagSet(arg0);
    }
}

s32 func_80059B48(s32 arg0) {
    if (arg0 < 0) {
        return 1;
    } else {
        return IsBoardFeatureFlagSet(arg0);
    }
}

INCLUDE_ASM(s32, "59E80", func_80059B74);

INCLUDE_ASM(s32, "59E80", func_80059C28);

INCLUDE_ASM(s32, "59E80", func_80059CB8);

INCLUDE_ASM(s32, "59E80", func_80059CE8);

INCLUDE_ASM(s32, "59E80", func_80059DAC);

INCLUDE_ASM(s32, "59E80", func_80059E28);

INCLUDE_ASM(s32, "59E80", func_80059EBC);

INCLUDE_ASM(s32, "59E80", func_8005A22C);

INCLUDE_ASM(s32, "59E80", func_8005A258);

INCLUDE_ASM(s32, "59E80", func_8005A2B8);

INCLUDE_ASM(s32, "59E80", func_8005A4C0);

INCLUDE_ASM(s32, "59E80", func_8005A9D8);

INCLUDE_ASM(s32, "59E80", func_8005AA5C);

INCLUDE_ASM(s32, "59E80", func_8005AA88);

INCLUDE_ASM(s32, "59E80", func_8005AC50);

INCLUDE_ASM(s32, "59E80", func_8005AD18);

INCLUDE_ASM(s32, "59E80", func_8005AE44);

INCLUDE_ASM(s32, "59E80", func_8005AE88);

INCLUDE_ASM(s32, "59E80", func_8005AF60);

INCLUDE_ASM(s32, "59E80", func_8005AFC8);

INCLUDE_ASM(s32, "59E80", func_8005AFEC);

INCLUDE_ASM(s32, "59E80", func_8005B024);

INCLUDE_ASM(s32, "59E80", func_8005B060);

INCLUDE_ASM(s32, "59E80", func_8005B0C4);

INCLUDE_ASM(s32, "59E80", func_8005B244);

INCLUDE_ASM(s32, "59E80", func_8005B280);

INCLUDE_ASM(s32, "59E80", func_8005B300);

INCLUDE_ASM(s32, "59E80", func_8005B358);

INCLUDE_ASM(s32, "59E80", func_8005B388);

INCLUDE_ASM(s32, "59E80", func_8005B3B0);

INCLUDE_ASM(s32, "59E80", func_8005B414);

INCLUDE_ASM(s32, "59E80", func_8005B470);

INCLUDE_ASM(s32, "59E80", func_8005B510);

INCLUDE_ASM(s32, "59E80", func_8005B5D8);

INCLUDE_ASM(s32, "59E80", func_8005B648);

INCLUDE_ASM(s32, "59E80", func_8005B6D0);

INCLUDE_ASM(s32, "59E80", func_8005B75C);

INCLUDE_ASM(s32, "59E80", func_8005B7E8);

INCLUDE_ASM(s32, "59E80", func_8005B838);

#ifndef _COMMON_STRUCTS_
#define _COMMON_STRUCTS_

#include "types.h"

typedef struct playerMain {
/* 0x00 */ char unk_00;
/* 0x01 */ u8 cpuDifficulty;
/* 0x02 */ u8 cpuDifficultyCopy;
/* 0x03 */ u8 flags; //including CPU flag
/* 0x04 */ u8 characterID;
/* 0x05 */ char unk_05[3];
/* 0x08 */ u16 coinAmount;
/* 0x0A */ s16 miniGameCoins; //coins to give to player after minigame
/* 0x0C */ u16 starAmount;
/* 0x0E */ u16 curChainIndex;
/* 0x10 */ u16 curSpaceIndex;
/* 0x12 */ u16 nextChainIndex;
/* 0x14 */ u16 nextSpaceIndex;
/* 0x16 */ u8 poisonedFlag;
/* 0x17 */ u8 turn_status; //space type player landed on
/* 0x18 */ u8 playerIndex; //0, 1, 2, or 3
/* 0x19 */ char unk_19[3]; //likely padding
/* 0x1C */ void* unk_1C; //some heap instance
/* 0x20 */ void* playerObj; //ptr to playerObj on heap
/* 0x24 */ u16 totalMinigameCoins;
/* 0x26 */ u16 totalCoins;
/* 0x28 */ u8 happeningSpacesTotal;
/* 0x29 */ u8 redSpacesTotal;
/* 0x2A */ u8 blueSpacesTotal;
/* 0x2B */ u8 minigameSpacesTotal;
/* 0x2C */ u8 chanceSpacesTotal;
/* 0x2D */ u8 mushroomSpacesTotal;
/* 0x2E */ u8 bowserSpacesTotal;
/* 0x2F */ char unk_2F;
} playerMain; //sizeof 0x30
//P1 800F32B0, P2 800F32E0, P3 800F3310, P4 800F3340

typedef struct Object {
/* 0x00 */ char unk_00[0x14];
/* 0x14 */ void* func_ptr;
/* 0x18 */ char unk_18[0x34];
/* 0x4C */ u8  unk_4C;
/* 0x4C */ u8  unk_4D;
/* 0x4C */ u8  unk_4E;
/* 0x4C */ u8  unk_4F;
} Object; //sizeof 0x50

typedef struct Vec2f {
               f32 x;
               f32 y;
} Vec2f;

typedef struct Vec2s {
               s32 x;
               s32 y;
} Vec2s;

typedef struct Vec3f {
               f32 x;
               f32 y;
               f32 z;
} Vec3f;

typedef struct Vec3s {
               s32 x;
               s32 y;
               s32 z;
} Vec3s;

typedef struct Vec4f {
               f32 x;
               f32 y;
               f32 z;
               f32 yaw;
} Vec4f;

#endif
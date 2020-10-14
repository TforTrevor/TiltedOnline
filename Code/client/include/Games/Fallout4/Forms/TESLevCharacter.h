#pragma once

#if TP_FALLOUT4

#include <Games/Fallout4/Forms/TESBoundAnimObject.h>
#include <Games/Fallout4/Components/BGSModelMaterialSwap.h>
#include <Games/Fallout4/Components/TESLeveledList.h>

struct TESLevCharacter : TESBoundAnimObject
{
    // Components
    TESLeveledList leveledList;
    BGSModelMaterialSwap modelTextureSwap;
};

static_assert(offsetof(TESLevCharacter, leveledList) == 0x68);
static_assert(offsetof(TESLevCharacter, modelTextureSwap) == 0x98);
static_assert(sizeof(TESLevCharacter) == 0xD8);

#endif

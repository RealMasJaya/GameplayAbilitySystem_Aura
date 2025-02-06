// copyright RealMasJaya

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "../../../../../../../../Program Files/Epic Games/UE_5.5/Engine/Plugins/Editor/GameplayTagsEditor/Source/GameplayTagsEditor/Private/GameplayTagEditorUtilities.h"

/**
 * AuraGameplayTags
 *
 * Singleton containing native Gameplay Tags
 */

struct FAuraGameplayTags
{
public:
	static const FAuraGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();
protected:

private:
	static FAuraGameplayTags GameplayTags;
};

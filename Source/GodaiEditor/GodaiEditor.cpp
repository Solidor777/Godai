// Copyright Justin Camden 2022. All Rights Reserved.

#include "GodaiEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE( FGodaiEditorModule, GodaiEditor);

DEFINE_LOG_CATEGORY(GodaiEditor)

#define LOCTEXT_NAMESPACE "GodaiEditor"

void FGodaiEditorModule::StartupModule()
{
    UE_LOG(GodaiEditor, Warning, TEXT("GodaiEditor: Module Started"));
}

void FGodaiEditorModule::ShutdownModule()
{
    UE_LOG(GodaiEditor, Warning, TEXT("GodaiEditor: Module Shutdown"));
}

#undef LOCTEXT_NAMESPACE
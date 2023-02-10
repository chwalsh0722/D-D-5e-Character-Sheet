#include "MyForm.h"
#include "spellAddPopUp.h"
#include "ExpandListSpells.h"
#include "Character.h"
#include "SaveConfirm.h"
#include "DeleteSpellConfirm.h"
#include "clearSheetContentsConfirm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    CharacterSheet::MyForm CharacterSheetForm;

    Application::Run(% CharacterSheetForm);
}

#include "spellAddPopUp.h"
#include "ExpandListSpells.h"
#include "SaveConfirm.h"
#include "Header.h"
#include "clearSheetContentsConfirm.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::ComponentModel;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text;
using namespace System::Threading::Tasks;

#pragma once

namespace CharacterSheet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			// Delete temporary directories.
			deleteTempData();

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ charNameCORE;
	protected:
		private: System::Windows::Forms::TextBox^ charClass;
		private: System::Windows::Forms::TextBox^ charBackground;
		private: System::Windows::Forms::TextBox^ playerName;
		private: System::Windows::Forms::TextBox^ charRace;
		private: System::Windows::Forms::TextBox^ charAlignment;
		private: System::Windows::Forms::TextBox^ charExp;
		private: System::Windows::Forms::TextBox^ scoreSTR;
		private: System::Windows::Forms::Label^ modSTR;
		private: System::Windows::Forms::TextBox^ scoreDEX;
		private: System::Windows::Forms::Label^ modDEX;
		private: System::Windows::Forms::TextBox^ scoreCON;
		private: System::Windows::Forms::Label^ modCON;
		private: System::Windows::Forms::TextBox^ scoreINT;
		private: System::Windows::Forms::Label^ modINT;
		private: System::Windows::Forms::TextBox^ scoreWIS;
		private: System::Windows::Forms::Label^ modWIS;
		private: System::Windows::Forms::TextBox^ scoreCHA;
		private: System::Windows::Forms::Label^ modCHA;
		private: System::Windows::Forms::CheckBox^ saveProfSTR;
		private: System::Windows::Forms::Label^ profBonus;
		private: System::Windows::Forms::Label^ saveSTR;
		private: System::Windows::Forms::Label^ saveDEX;
		private: System::Windows::Forms::CheckBox^ saveProfDEX;
		private: System::Windows::Forms::Label^ saveCON;
		private: System::Windows::Forms::CheckBox^ saveProfCON;
		private: System::Windows::Forms::Label^ saveINT;
		private: System::Windows::Forms::CheckBox^ saveProfINT;
		private: System::Windows::Forms::Label^ saveWIS;
		private: System::Windows::Forms::CheckBox^ saveProfWIS;
		private: System::Windows::Forms::Label^ saveCHA;
		private: System::Windows::Forms::CheckBox^ saveProfCHA;
		private: System::Windows::Forms::Label^ skillAcrobatics;
		private: System::Windows::Forms::Label^ skillAnimalHandling;
		private: System::Windows::Forms::Label^ skillArcana;
		private: System::Windows::Forms::Label^ skillHistory;
		private: System::Windows::Forms::Label^ skillDeception;
		private: System::Windows::Forms::Label^ skillAthletics;
		private: System::Windows::Forms::Label^ skillPerception;
		private: System::Windows::Forms::Label^ skillNature;
		private: System::Windows::Forms::Label^ skillMedicine;
		private: System::Windows::Forms::Label^ skillInvestigation;
		private: System::Windows::Forms::Label^ skillIntimidation;
		private: System::Windows::Forms::Label^ skillInsight;
		private: System::Windows::Forms::Label^ skillSurvival;
		private: System::Windows::Forms::Label^ skillStealth;
		private: System::Windows::Forms::Label^ skillSleightOfHand;
		private: System::Windows::Forms::Label^ skillReligion;
		private: System::Windows::Forms::Label^ skillPersuasion;
		private: System::Windows::Forms::Label^ skillPerformance;
		private: System::Windows::Forms::CheckBox^ profHistory;
		private: System::Windows::Forms::CheckBox^ profDeception;
		private: System::Windows::Forms::CheckBox^ profAthletics;
		private: System::Windows::Forms::CheckBox^ profArcana;
		private: System::Windows::Forms::CheckBox^ profAnimalHandling;
		private: System::Windows::Forms::CheckBox^ profAcrobatics;
		private: System::Windows::Forms::CheckBox^ profPerception;
		private: System::Windows::Forms::CheckBox^ profNature;
		private: System::Windows::Forms::CheckBox^ profMedicine;
		private: System::Windows::Forms::CheckBox^ profInvestigation;
		private: System::Windows::Forms::CheckBox^ profIntimidation;
		private: System::Windows::Forms::CheckBox^ profInsight;
		private: System::Windows::Forms::CheckBox^ profSurvival;
		private: System::Windows::Forms::CheckBox^ profStealth;
		private: System::Windows::Forms::CheckBox^ profSleightOfHand;
		private: System::Windows::Forms::CheckBox^ profReligion;
		private: System::Windows::Forms::CheckBox^ profPersuasion;
		private: System::Windows::Forms::CheckBox^ profPerformance;
		private: System::Windows::Forms::Label^ passPerception;
		private: System::Windows::Forms::TextBox^ initiative;
		private: System::Windows::Forms::TextBox^ speed;
		private: System::Windows::Forms::TextBox^ armorClass;
		private: System::Windows::Forms::NumericUpDown^ currentHitPoints;
		private: System::Windows::Forms::TextBox^ maxHitPoints;
		private: System::Windows::Forms::NumericUpDown^ charLevel;
		private: System::Windows::Forms::NumericUpDown^ currentNumHitDie;
		private: System::Windows::Forms::NumericUpDown^ tempHitPoints;
		private: System::Windows::Forms::TextBox^ featuresAndTraits;
		private: System::Windows::Forms::ComboBox^ hitDieType;
		private: System::Windows::Forms::CheckBox^ deathSuccess1;
		private: System::Windows::Forms::CheckBox^ deathSuccess2;
		private: System::Windows::Forms::CheckBox^ deathSuccess3;
		private: System::Windows::Forms::CheckBox^ deathFailure3;
		private: System::Windows::Forms::CheckBox^ deathFailure2;
		private: System::Windows::Forms::CheckBox^ deathFailure1;
		private: System::Windows::Forms::TextBox^ personalityTraitsTextBox;
		private: System::Windows::Forms::TextBox^ idealsTextBox;
		private: System::Windows::Forms::TextBox^ bondsTextBox;
		private: System::Windows::Forms::TextBox^ flawsTextBox;
		private: System::Windows::Forms::TextBox^ attackName1;
		private: System::Windows::Forms::TextBox^ attackBonus1;
		private: System::Windows::Forms::TextBox^ attackDamageType1;
		private: System::Windows::Forms::TextBox^ attackDamageType2;
		private: System::Windows::Forms::TextBox^ attackBonus2;
		private: System::Windows::Forms::TextBox^ attackName2;
		private: System::Windows::Forms::TextBox^ attackDamageType4;
		private: System::Windows::Forms::TextBox^ attackBonus4;
		private: System::Windows::Forms::TextBox^ attackName4;
		private: System::Windows::Forms::TextBox^ attackDamageType3;
		private: System::Windows::Forms::TextBox^ attackBonus3;
		private: System::Windows::Forms::TextBox^ attackName3;
		private: System::Windows::Forms::Panel^ sheetBackground1;
		private: System::Windows::Forms::TextBox^ attackDamageType11;
		private: System::Windows::Forms::TextBox^ attackBonus11;
		private: System::Windows::Forms::TextBox^ attackName11;
		private: System::Windows::Forms::TextBox^ attackDamageType10;
		private: System::Windows::Forms::TextBox^ attackBonus10;
		private: System::Windows::Forms::TextBox^ attackName10;
		private: System::Windows::Forms::TextBox^ attackDamageType9;
		private: System::Windows::Forms::TextBox^ attackBonus9;
		private: System::Windows::Forms::TextBox^ attackName9;
		private: System::Windows::Forms::TextBox^ attackDamageType8;
		private: System::Windows::Forms::TextBox^ attackBonus8;
		private: System::Windows::Forms::TextBox^ attackName8;
		private: System::Windows::Forms::TextBox^ attackDamageType7;
		private: System::Windows::Forms::TextBox^ attackBonus7;
		private: System::Windows::Forms::TextBox^ attackName7;
		private: System::Windows::Forms::TextBox^ attackDamageType6;
		private: System::Windows::Forms::TextBox^ attackBonus6;
		private: System::Windows::Forms::TextBox^ attackName6;
		private: System::Windows::Forms::TextBox^ attackDamageType5;
		private: System::Windows::Forms::TextBox^ attackBonus5;
		private: System::Windows::Forms::TextBox^ attackName5;
		private: System::Windows::Forms::TextBox^ profLangProficiency1;
		private: System::Windows::Forms::TextBox^ profLangAttribute1;
		private: System::Windows::Forms::TextBox^ profLangType1;
		private: System::Windows::Forms::Label^ headerProfLangProficiency;
		private: System::Windows::Forms::Label^ headerProfLangAttribute;
		private: System::Windows::Forms::Label^ headerProfLangType;
		private: System::Windows::Forms::TextBox^ profLangProficiency7;
		private: System::Windows::Forms::TextBox^ profLangAttribute7;
		private: System::Windows::Forms::TextBox^ profLangType7;
		private: System::Windows::Forms::TextBox^ profLangProficiency6;
		private: System::Windows::Forms::TextBox^ profLangAttribute6;
		private: System::Windows::Forms::TextBox^ profLangType6;
		private: System::Windows::Forms::TextBox^ profLangProficiency5;
		private: System::Windows::Forms::TextBox^ profLangAttribute5;
		private: System::Windows::Forms::TextBox^ profLangType5;
		private: System::Windows::Forms::TextBox^ profLangProficiency4;
		private: System::Windows::Forms::TextBox^ profLangAttribute4;
		private: System::Windows::Forms::TextBox^ profLangType4;
		private: System::Windows::Forms::TextBox^ profLangProficiency3;
		private: System::Windows::Forms::TextBox^ profLangAttribute3;
		private: System::Windows::Forms::TextBox^ profLangType3;
		private: System::Windows::Forms::TextBox^ profLangProficiency2;
		private: System::Windows::Forms::TextBox^ profLangAttribute2;
		private: System::Windows::Forms::TextBox^ profLangType2;
		private: System::Windows::Forms::TextBox^ numGoldPieces;
		private: System::Windows::Forms::TextBox^ numElectrumPieces;
		private: System::Windows::Forms::TextBox^ numSilverPieces;
		private: System::Windows::Forms::TextBox^ numCopperPieces;
		private: System::Windows::Forms::TextBox^ itemWeight10;
		private: System::Windows::Forms::TextBox^ itemName10;
		private: System::Windows::Forms::TextBox^ itemAmt10;
		private: System::Windows::Forms::TextBox^ itemWeight9;
		private: System::Windows::Forms::TextBox^ itemName9;
		private: System::Windows::Forms::TextBox^ itemAmt9;
		private: System::Windows::Forms::TextBox^ itemWeight8;
		private: System::Windows::Forms::TextBox^ itemName8;
		private: System::Windows::Forms::TextBox^ itemAmt8;
		private: System::Windows::Forms::TextBox^ itemWeight7;
		private: System::Windows::Forms::TextBox^ itemName7;
		private: System::Windows::Forms::TextBox^ itemAmt7;
		private: System::Windows::Forms::TextBox^ itemWeight6;
		private: System::Windows::Forms::TextBox^ itemName6;
		private: System::Windows::Forms::TextBox^ itemAmt6;
		private: System::Windows::Forms::TextBox^ itemWeight5;
		private: System::Windows::Forms::TextBox^ itemName5;
		private: System::Windows::Forms::TextBox^ itemAmt5;
		private: System::Windows::Forms::TextBox^ itemWeight4;
		private: System::Windows::Forms::TextBox^ itemName4;
		private: System::Windows::Forms::TextBox^ itemAmt4;
		private: System::Windows::Forms::TextBox^ itemWeight3;
		private: System::Windows::Forms::TextBox^ itemName3;
		private: System::Windows::Forms::TextBox^ itemAmt3;
		private: System::Windows::Forms::TextBox^ itemWeight2;
		private: System::Windows::Forms::TextBox^ itemName2;
		private: System::Windows::Forms::TextBox^ itemAmt2;
		private: System::Windows::Forms::TextBox^ itemWeight1;
		private: System::Windows::Forms::TextBox^ itemName1;
		private: System::Windows::Forms::TextBox^ itemAmt1;
		private: System::Windows::Forms::Label^ headerItemWeight;
		private: System::Windows::Forms::Label^ headerItemName;
		private: System::Windows::Forms::Label^ headerItemAmt;
		private: System::Windows::Forms::TextBox^ numPlatinumPieces;
		private: System::Windows::Forms::TabControl^ tabs;
		private: System::Windows::Forms::TabPage^ tabPage1;
		private: System::Windows::Forms::TabPage^ tabPage2;
		private: System::Windows::Forms::TabPage^ tabPage3;
		private: System::Windows::Forms::Panel^ panel1;
		private: System::Windows::Forms::Panel^ sheetBackground2;
		private: System::Windows::Forms::TextBox^ charHair;
		private: System::Windows::Forms::TextBox^ charSkin;
		private: System::Windows::Forms::TextBox^ charEyes;
		private: System::Windows::Forms::TextBox^ charWeight;
		private: System::Windows::Forms::TextBox^ charHeight;
		private: System::Windows::Forms::TextBox^ charAge;
		private: System::Windows::Forms::TextBox^ charNameBIO;
		private: System::Windows::Forms::TextBox^ charTreasure;
		private: System::Windows::Forms::TextBox^ charAdditionalFeaturesTraits;
		private: System::Windows::Forms::TextBox^ charBackstory;
		private: System::Windows::Forms::TextBox^ charAppearance;
		private: System::Windows::Forms::TextBox^ charAlliesOrganizations;
		private: System::Windows::Forms::Button^ buttonAddSpell;
		private: System::Windows::Forms::Button^ buttonExpandSpells;
		private: System::Windows::Forms::Button^ buttonSave;
		private: System::Windows::Forms::NumericUpDown^ remainingLevel9Slots;
		private: System::Windows::Forms::NumericUpDown^ remainingLevel8Slots;
		private: System::Windows::Forms::NumericUpDown^ remainingLevel7Slots;
		private: System::Windows::Forms::NumericUpDown^ remainingLevel6Slots;
		private: System::Windows::Forms::NumericUpDown^ remainingLevel5Slots;
		private: System::Windows::Forms::NumericUpDown^ remainingLevel4Slots;
		private: System::Windows::Forms::NumericUpDown^ remainingLevel3Slots;
		private: System::Windows::Forms::NumericUpDown^ remainingLevel2Slots;
		private: System::Windows::Forms::NumericUpDown^ remainingLevel1Slots;
		private: System::Windows::Forms::TextBox^ totalLevel5Slots;
		private: System::Windows::Forms::TextBox^ totalLevel9Slots;
		private: System::Windows::Forms::TextBox^ totalLevel8Slots;
		private: System::Windows::Forms::TextBox^ totalLevel7Slots;
		private: System::Windows::Forms::TextBox^ totalLevel6Slots;
		private: System::Windows::Forms::TextBox^ totalLevel3Slots;
		private: System::Windows::Forms::TextBox^ totalLevel4Slots;
		private: System::Windows::Forms::TextBox^ totalLevel2Slots;
		private: System::Windows::Forms::TextBox^ totalLevel1Slots;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::CheckBox^ inspiration;
		private: System::Windows::Forms::ListBox^ list2ndLevelSpells;
		private: System::Windows::Forms::ListBox^ list1stLevelSpells;
		private: System::Windows::Forms::ListBox^ list9thLevelSpells;
		private: System::Windows::Forms::ListBox^ list8thLevelSpells;
		private: System::Windows::Forms::ListBox^ list7thLevelSpells;
		private: System::Windows::Forms::ListBox^ list6thLevelSpells;
		private: System::Windows::Forms::ListBox^ list5thLevelSpells;
		private: System::Windows::Forms::ListBox^ list4thLevelSpells;
		private: System::Windows::Forms::ListBox^ list3rdLevelSpells;
		private: System::Windows::Forms::ListBox^ listCantrips;
		private: System::Windows::Forms::TextBox^ spellAttackBonus;
		private: System::Windows::Forms::TextBox^ spellSaveDC;
		private: System::Windows::Forms::TextBox^ spellcastAbility;
		private: System::Windows::Forms::TextBox^ spellcastClass;
private: System::Windows::Forms::Button^ buttonClearSheet;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->charNameCORE = (gcnew System::Windows::Forms::TextBox());
			this->charClass = (gcnew System::Windows::Forms::TextBox());
			this->charBackground = (gcnew System::Windows::Forms::TextBox());
			this->playerName = (gcnew System::Windows::Forms::TextBox());
			this->charRace = (gcnew System::Windows::Forms::TextBox());
			this->charAlignment = (gcnew System::Windows::Forms::TextBox());
			this->charExp = (gcnew System::Windows::Forms::TextBox());
			this->scoreSTR = (gcnew System::Windows::Forms::TextBox());
			this->modSTR = (gcnew System::Windows::Forms::Label());
			this->scoreDEX = (gcnew System::Windows::Forms::TextBox());
			this->modDEX = (gcnew System::Windows::Forms::Label());
			this->scoreCON = (gcnew System::Windows::Forms::TextBox());
			this->modCON = (gcnew System::Windows::Forms::Label());
			this->scoreINT = (gcnew System::Windows::Forms::TextBox());
			this->modINT = (gcnew System::Windows::Forms::Label());
			this->scoreWIS = (gcnew System::Windows::Forms::TextBox());
			this->modWIS = (gcnew System::Windows::Forms::Label());
			this->scoreCHA = (gcnew System::Windows::Forms::TextBox());
			this->modCHA = (gcnew System::Windows::Forms::Label());
			this->saveProfSTR = (gcnew System::Windows::Forms::CheckBox());
			this->profBonus = (gcnew System::Windows::Forms::Label());
			this->saveSTR = (gcnew System::Windows::Forms::Label());
			this->saveDEX = (gcnew System::Windows::Forms::Label());
			this->saveProfDEX = (gcnew System::Windows::Forms::CheckBox());
			this->saveCON = (gcnew System::Windows::Forms::Label());
			this->saveProfCON = (gcnew System::Windows::Forms::CheckBox());
			this->saveINT = (gcnew System::Windows::Forms::Label());
			this->saveProfINT = (gcnew System::Windows::Forms::CheckBox());
			this->saveWIS = (gcnew System::Windows::Forms::Label());
			this->saveProfWIS = (gcnew System::Windows::Forms::CheckBox());
			this->saveCHA = (gcnew System::Windows::Forms::Label());
			this->saveProfCHA = (gcnew System::Windows::Forms::CheckBox());
			this->skillAcrobatics = (gcnew System::Windows::Forms::Label());
			this->skillAnimalHandling = (gcnew System::Windows::Forms::Label());
			this->skillArcana = (gcnew System::Windows::Forms::Label());
			this->skillHistory = (gcnew System::Windows::Forms::Label());
			this->skillDeception = (gcnew System::Windows::Forms::Label());
			this->skillAthletics = (gcnew System::Windows::Forms::Label());
			this->skillPerception = (gcnew System::Windows::Forms::Label());
			this->skillNature = (gcnew System::Windows::Forms::Label());
			this->skillMedicine = (gcnew System::Windows::Forms::Label());
			this->skillInvestigation = (gcnew System::Windows::Forms::Label());
			this->skillIntimidation = (gcnew System::Windows::Forms::Label());
			this->skillInsight = (gcnew System::Windows::Forms::Label());
			this->skillSurvival = (gcnew System::Windows::Forms::Label());
			this->skillStealth = (gcnew System::Windows::Forms::Label());
			this->skillSleightOfHand = (gcnew System::Windows::Forms::Label());
			this->skillReligion = (gcnew System::Windows::Forms::Label());
			this->skillPersuasion = (gcnew System::Windows::Forms::Label());
			this->skillPerformance = (gcnew System::Windows::Forms::Label());
			this->profHistory = (gcnew System::Windows::Forms::CheckBox());
			this->profDeception = (gcnew System::Windows::Forms::CheckBox());
			this->profAthletics = (gcnew System::Windows::Forms::CheckBox());
			this->profArcana = (gcnew System::Windows::Forms::CheckBox());
			this->profAnimalHandling = (gcnew System::Windows::Forms::CheckBox());
			this->profAcrobatics = (gcnew System::Windows::Forms::CheckBox());
			this->profPerception = (gcnew System::Windows::Forms::CheckBox());
			this->profNature = (gcnew System::Windows::Forms::CheckBox());
			this->profMedicine = (gcnew System::Windows::Forms::CheckBox());
			this->profInvestigation = (gcnew System::Windows::Forms::CheckBox());
			this->profIntimidation = (gcnew System::Windows::Forms::CheckBox());
			this->profInsight = (gcnew System::Windows::Forms::CheckBox());
			this->profSurvival = (gcnew System::Windows::Forms::CheckBox());
			this->profStealth = (gcnew System::Windows::Forms::CheckBox());
			this->profSleightOfHand = (gcnew System::Windows::Forms::CheckBox());
			this->profReligion = (gcnew System::Windows::Forms::CheckBox());
			this->profPersuasion = (gcnew System::Windows::Forms::CheckBox());
			this->profPerformance = (gcnew System::Windows::Forms::CheckBox());
			this->passPerception = (gcnew System::Windows::Forms::Label());
			this->initiative = (gcnew System::Windows::Forms::TextBox());
			this->speed = (gcnew System::Windows::Forms::TextBox());
			this->armorClass = (gcnew System::Windows::Forms::TextBox());
			this->currentHitPoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->maxHitPoints = (gcnew System::Windows::Forms::TextBox());
			this->charLevel = (gcnew System::Windows::Forms::NumericUpDown());
			this->currentNumHitDie = (gcnew System::Windows::Forms::NumericUpDown());
			this->tempHitPoints = (gcnew System::Windows::Forms::NumericUpDown());
			this->featuresAndTraits = (gcnew System::Windows::Forms::TextBox());
			this->hitDieType = (gcnew System::Windows::Forms::ComboBox());
			this->deathSuccess1 = (gcnew System::Windows::Forms::CheckBox());
			this->deathSuccess2 = (gcnew System::Windows::Forms::CheckBox());
			this->deathSuccess3 = (gcnew System::Windows::Forms::CheckBox());
			this->deathFailure3 = (gcnew System::Windows::Forms::CheckBox());
			this->deathFailure2 = (gcnew System::Windows::Forms::CheckBox());
			this->deathFailure1 = (gcnew System::Windows::Forms::CheckBox());
			this->personalityTraitsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->idealsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bondsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->flawsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->attackName1 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus1 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType1 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType2 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus2 = (gcnew System::Windows::Forms::TextBox());
			this->attackName2 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType4 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus4 = (gcnew System::Windows::Forms::TextBox());
			this->attackName4 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType3 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus3 = (gcnew System::Windows::Forms::TextBox());
			this->attackName3 = (gcnew System::Windows::Forms::TextBox());
			this->sheetBackground1 = (gcnew System::Windows::Forms::Panel());
			this->buttonClearSheet = (gcnew System::Windows::Forms::Button());
			this->inspiration = (gcnew System::Windows::Forms::CheckBox());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->numPlatinumPieces = (gcnew System::Windows::Forms::TextBox());
			this->numGoldPieces = (gcnew System::Windows::Forms::TextBox());
			this->numElectrumPieces = (gcnew System::Windows::Forms::TextBox());
			this->numSilverPieces = (gcnew System::Windows::Forms::TextBox());
			this->numCopperPieces = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight10 = (gcnew System::Windows::Forms::TextBox());
			this->itemName10 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt10 = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight9 = (gcnew System::Windows::Forms::TextBox());
			this->itemName9 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt9 = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight8 = (gcnew System::Windows::Forms::TextBox());
			this->itemName8 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt8 = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight7 = (gcnew System::Windows::Forms::TextBox());
			this->itemName7 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt7 = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight6 = (gcnew System::Windows::Forms::TextBox());
			this->itemName6 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt6 = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight5 = (gcnew System::Windows::Forms::TextBox());
			this->itemName5 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt5 = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight4 = (gcnew System::Windows::Forms::TextBox());
			this->itemName4 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt4 = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight3 = (gcnew System::Windows::Forms::TextBox());
			this->itemName3 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt3 = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight2 = (gcnew System::Windows::Forms::TextBox());
			this->itemName2 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt2 = (gcnew System::Windows::Forms::TextBox());
			this->itemWeight1 = (gcnew System::Windows::Forms::TextBox());
			this->itemName1 = (gcnew System::Windows::Forms::TextBox());
			this->itemAmt1 = (gcnew System::Windows::Forms::TextBox());
			this->headerItemWeight = (gcnew System::Windows::Forms::Label());
			this->headerItemName = (gcnew System::Windows::Forms::Label());
			this->headerItemAmt = (gcnew System::Windows::Forms::Label());
			this->profLangProficiency7 = (gcnew System::Windows::Forms::TextBox());
			this->profLangAttribute7 = (gcnew System::Windows::Forms::TextBox());
			this->profLangType7 = (gcnew System::Windows::Forms::TextBox());
			this->profLangProficiency6 = (gcnew System::Windows::Forms::TextBox());
			this->profLangAttribute6 = (gcnew System::Windows::Forms::TextBox());
			this->profLangType6 = (gcnew System::Windows::Forms::TextBox());
			this->profLangProficiency5 = (gcnew System::Windows::Forms::TextBox());
			this->profLangAttribute5 = (gcnew System::Windows::Forms::TextBox());
			this->profLangType5 = (gcnew System::Windows::Forms::TextBox());
			this->profLangProficiency4 = (gcnew System::Windows::Forms::TextBox());
			this->profLangAttribute4 = (gcnew System::Windows::Forms::TextBox());
			this->profLangType4 = (gcnew System::Windows::Forms::TextBox());
			this->profLangProficiency3 = (gcnew System::Windows::Forms::TextBox());
			this->profLangAttribute3 = (gcnew System::Windows::Forms::TextBox());
			this->profLangType3 = (gcnew System::Windows::Forms::TextBox());
			this->profLangProficiency2 = (gcnew System::Windows::Forms::TextBox());
			this->profLangAttribute2 = (gcnew System::Windows::Forms::TextBox());
			this->profLangType2 = (gcnew System::Windows::Forms::TextBox());
			this->profLangProficiency1 = (gcnew System::Windows::Forms::TextBox());
			this->profLangAttribute1 = (gcnew System::Windows::Forms::TextBox());
			this->profLangType1 = (gcnew System::Windows::Forms::TextBox());
			this->headerProfLangProficiency = (gcnew System::Windows::Forms::Label());
			this->headerProfLangAttribute = (gcnew System::Windows::Forms::Label());
			this->headerProfLangType = (gcnew System::Windows::Forms::Label());
			this->attackDamageType11 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus11 = (gcnew System::Windows::Forms::TextBox());
			this->attackName11 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType10 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus10 = (gcnew System::Windows::Forms::TextBox());
			this->attackName10 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType9 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus9 = (gcnew System::Windows::Forms::TextBox());
			this->attackName9 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType8 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus8 = (gcnew System::Windows::Forms::TextBox());
			this->attackName8 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType7 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus7 = (gcnew System::Windows::Forms::TextBox());
			this->attackName7 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType6 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus6 = (gcnew System::Windows::Forms::TextBox());
			this->attackName6 = (gcnew System::Windows::Forms::TextBox());
			this->attackDamageType5 = (gcnew System::Windows::Forms::TextBox());
			this->attackBonus5 = (gcnew System::Windows::Forms::TextBox());
			this->attackName5 = (gcnew System::Windows::Forms::TextBox());
			this->tabs = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->sheetBackground2 = (gcnew System::Windows::Forms::Panel());
			this->charTreasure = (gcnew System::Windows::Forms::TextBox());
			this->charAdditionalFeaturesTraits = (gcnew System::Windows::Forms::TextBox());
			this->charBackstory = (gcnew System::Windows::Forms::TextBox());
			this->charAppearance = (gcnew System::Windows::Forms::TextBox());
			this->charAlliesOrganizations = (gcnew System::Windows::Forms::TextBox());
			this->charHair = (gcnew System::Windows::Forms::TextBox());
			this->charSkin = (gcnew System::Windows::Forms::TextBox());
			this->charEyes = (gcnew System::Windows::Forms::TextBox());
			this->charWeight = (gcnew System::Windows::Forms::TextBox());
			this->charHeight = (gcnew System::Windows::Forms::TextBox());
			this->charAge = (gcnew System::Windows::Forms::TextBox());
			this->charNameBIO = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->spellAttackBonus = (gcnew System::Windows::Forms::TextBox());
			this->spellSaveDC = (gcnew System::Windows::Forms::TextBox());
			this->spellcastAbility = (gcnew System::Windows::Forms::TextBox());
			this->spellcastClass = (gcnew System::Windows::Forms::TextBox());
			this->list9thLevelSpells = (gcnew System::Windows::Forms::ListBox());
			this->list8thLevelSpells = (gcnew System::Windows::Forms::ListBox());
			this->list7thLevelSpells = (gcnew System::Windows::Forms::ListBox());
			this->list6thLevelSpells = (gcnew System::Windows::Forms::ListBox());
			this->list5thLevelSpells = (gcnew System::Windows::Forms::ListBox());
			this->list4thLevelSpells = (gcnew System::Windows::Forms::ListBox());
			this->list3rdLevelSpells = (gcnew System::Windows::Forms::ListBox());
			this->list2ndLevelSpells = (gcnew System::Windows::Forms::ListBox());
			this->list1stLevelSpells = (gcnew System::Windows::Forms::ListBox());
			this->listCantrips = (gcnew System::Windows::Forms::ListBox());
			this->remainingLevel9Slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->remainingLevel8Slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->remainingLevel7Slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->remainingLevel6Slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->remainingLevel5Slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->remainingLevel4Slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->remainingLevel3Slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->remainingLevel2Slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->remainingLevel1Slots = (gcnew System::Windows::Forms::NumericUpDown());
			this->totalLevel5Slots = (gcnew System::Windows::Forms::TextBox());
			this->totalLevel9Slots = (gcnew System::Windows::Forms::TextBox());
			this->totalLevel8Slots = (gcnew System::Windows::Forms::TextBox());
			this->totalLevel7Slots = (gcnew System::Windows::Forms::TextBox());
			this->totalLevel6Slots = (gcnew System::Windows::Forms::TextBox());
			this->totalLevel3Slots = (gcnew System::Windows::Forms::TextBox());
			this->totalLevel4Slots = (gcnew System::Windows::Forms::TextBox());
			this->totalLevel2Slots = (gcnew System::Windows::Forms::TextBox());
			this->totalLevel1Slots = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonAddSpell = (gcnew System::Windows::Forms::Button());
			this->buttonExpandSpells = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->currentHitPoints))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->charLevel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->currentNumHitDie))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tempHitPoints))->BeginInit();
			this->sheetBackground1->SuspendLayout();
			this->tabs->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->sheetBackground2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel9Slots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel8Slots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel7Slots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel6Slots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel5Slots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel4Slots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel3Slots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel2Slots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel1Slots))->BeginInit();
			this->SuspendLayout();
			// 
			// charNameCORE
			// 
			this->charNameCORE->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charNameCORE->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charNameCORE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charNameCORE->Location = System::Drawing::Point(86, 85);
			this->charNameCORE->Name = L"charNameCORE";
			this->charNameCORE->Size = System::Drawing::Size(199, 22);
			this->charNameCORE->TabIndex = 0;
			this->charNameCORE->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charClass
			// 
			this->charClass->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charClass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charClass->Location = System::Drawing::Point(358, 65);
			this->charClass->Name = L"charClass";
			this->charClass->Size = System::Drawing::Size(86, 15);
			this->charClass->TabIndex = 1;
			this->charClass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charBackground
			// 
			this->charBackground->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charBackground->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charBackground->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charBackground->Location = System::Drawing::Point(509, 65);
			this->charBackground->Name = L"charBackground";
			this->charBackground->Size = System::Drawing::Size(100, 16);
			this->charBackground->TabIndex = 2;
			this->charBackground->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// playerName
			// 
			this->playerName->BackColor = System::Drawing::SystemColors::ControlLight;
			this->playerName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->playerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerName->Location = System::Drawing::Point(637, 65);
			this->playerName->Name = L"playerName";
			this->playerName->Size = System::Drawing::Size(100, 16);
			this->playerName->TabIndex = 3;
			this->playerName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charRace
			// 
			this->charRace->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charRace->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charRace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charRace->Location = System::Drawing::Point(358, 100);
			this->charRace->Name = L"charRace";
			this->charRace->Size = System::Drawing::Size(100, 16);
			this->charRace->TabIndex = 4;
			this->charRace->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charAlignment
			// 
			this->charAlignment->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charAlignment->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charAlignment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charAlignment->Location = System::Drawing::Point(509, 100);
			this->charAlignment->Name = L"charAlignment";
			this->charAlignment->Size = System::Drawing::Size(100, 16);
			this->charAlignment->TabIndex = 5;
			this->charAlignment->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charExp
			// 
			this->charExp->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charExp->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charExp->Location = System::Drawing::Point(637, 100);
			this->charExp->Name = L"charExp";
			this->charExp->Size = System::Drawing::Size(100, 16);
			this->charExp->TabIndex = 6;
			this->charExp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// scoreSTR
			// 
			this->scoreSTR->BackColor = System::Drawing::SystemColors::ControlLight;
			this->scoreSTR->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->scoreSTR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreSTR->Location = System::Drawing::Point(51, 205);
			this->scoreSTR->Name = L"scoreSTR";
			this->scoreSTR->Size = System::Drawing::Size(49, 31);
			this->scoreSTR->TabIndex = 7;
			this->scoreSTR->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->scoreSTR->TextChanged += gcnew System::EventHandler(this, &MyForm::scoreSTR_TextChanged);
			// 
			// modSTR
			// 
			this->modSTR->BackColor = System::Drawing::SystemColors::Window;
			this->modSTR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modSTR->Location = System::Drawing::Point(67, 249);
			this->modSTR->Name = L"modSTR";
			this->modSTR->Size = System::Drawing::Size(18, 15);
			this->modSTR->TabIndex = 14;
			this->modSTR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// scoreDEX
			// 
			this->scoreDEX->BackColor = System::Drawing::SystemColors::ControlLight;
			this->scoreDEX->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->scoreDEX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreDEX->Location = System::Drawing::Point(51, 301);
			this->scoreDEX->Name = L"scoreDEX";
			this->scoreDEX->Size = System::Drawing::Size(49, 31);
			this->scoreDEX->TabIndex = 8;
			this->scoreDEX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->scoreDEX->TextChanged += gcnew System::EventHandler(this, &MyForm::scoreDEX_TextChanged);
			// 
			// modDEX
			// 
			this->modDEX->BackColor = System::Drawing::SystemColors::Window;
			this->modDEX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modDEX->Location = System::Drawing::Point(67, 345);
			this->modDEX->Name = L"modDEX";
			this->modDEX->Size = System::Drawing::Size(18, 15);
			this->modDEX->TabIndex = 16;
			this->modDEX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// scoreCON
			// 
			this->scoreCON->BackColor = System::Drawing::SystemColors::ControlLight;
			this->scoreCON->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->scoreCON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreCON->Location = System::Drawing::Point(51, 396);
			this->scoreCON->Name = L"scoreCON";
			this->scoreCON->Size = System::Drawing::Size(49, 31);
			this->scoreCON->TabIndex = 9;
			this->scoreCON->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->scoreCON->TextChanged += gcnew System::EventHandler(this, &MyForm::scoreCON_TextChanged);
			// 
			// modCON
			// 
			this->modCON->BackColor = System::Drawing::SystemColors::Window;
			this->modCON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modCON->Location = System::Drawing::Point(67, 440);
			this->modCON->Name = L"modCON";
			this->modCON->Size = System::Drawing::Size(18, 15);
			this->modCON->TabIndex = 18;
			this->modCON->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// scoreINT
			// 
			this->scoreINT->BackColor = System::Drawing::SystemColors::ControlLight;
			this->scoreINT->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->scoreINT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreINT->Location = System::Drawing::Point(51, 492);
			this->scoreINT->Name = L"scoreINT";
			this->scoreINT->Size = System::Drawing::Size(49, 31);
			this->scoreINT->TabIndex = 10;
			this->scoreINT->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->scoreINT->TextChanged += gcnew System::EventHandler(this, &MyForm::scoreINT_TextChanged);
			// 
			// modINT
			// 
			this->modINT->BackColor = System::Drawing::SystemColors::Window;
			this->modINT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modINT->Location = System::Drawing::Point(67, 536);
			this->modINT->Name = L"modINT";
			this->modINT->Size = System::Drawing::Size(18, 15);
			this->modINT->TabIndex = 20;
			this->modINT->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// scoreWIS
			// 
			this->scoreWIS->BackColor = System::Drawing::SystemColors::ControlLight;
			this->scoreWIS->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->scoreWIS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreWIS->Location = System::Drawing::Point(51, 587);
			this->scoreWIS->Name = L"scoreWIS";
			this->scoreWIS->Size = System::Drawing::Size(49, 31);
			this->scoreWIS->TabIndex = 11;
			this->scoreWIS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->scoreWIS->TextChanged += gcnew System::EventHandler(this, &MyForm::scoreWIS_TextChanged);
			// 
			// modWIS
			// 
			this->modWIS->BackColor = System::Drawing::SystemColors::Window;
			this->modWIS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modWIS->Location = System::Drawing::Point(67, 631);
			this->modWIS->Name = L"modWIS";
			this->modWIS->Size = System::Drawing::Size(18, 15);
			this->modWIS->TabIndex = 22;
			this->modWIS->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// scoreCHA
			// 
			this->scoreCHA->BackColor = System::Drawing::SystemColors::ControlLight;
			this->scoreCHA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->scoreCHA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreCHA->Location = System::Drawing::Point(51, 682);
			this->scoreCHA->Name = L"scoreCHA";
			this->scoreCHA->Size = System::Drawing::Size(49, 31);
			this->scoreCHA->TabIndex = 12;
			this->scoreCHA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->scoreCHA->TextChanged += gcnew System::EventHandler(this, &MyForm::scoreCHA_TextChanged);
			// 
			// modCHA
			// 
			this->modCHA->BackColor = System::Drawing::SystemColors::Window;
			this->modCHA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modCHA->Location = System::Drawing::Point(67, 726);
			this->modCHA->Name = L"modCHA";
			this->modCHA->Size = System::Drawing::Size(18, 15);
			this->modCHA->TabIndex = 24;
			this->modCHA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveProfSTR
			// 
			this->saveProfSTR->AutoSize = true;
			this->saveProfSTR->BackColor = System::Drawing::SystemColors::Window;
			this->saveProfSTR->Location = System::Drawing::Point(130, 271);
			this->saveProfSTR->Name = L"saveProfSTR";
			this->saveProfSTR->Size = System::Drawing::Size(15, 14);
			this->saveProfSTR->TabIndex = 300;
			this->saveProfSTR->UseVisualStyleBackColor = false;
			this->saveProfSTR->CheckedChanged += gcnew System::EventHandler(this, &MyForm::saveProfSTR_CheckedChanged);
			// 
			// profBonus
			// 
			this->profBonus->BackColor = System::Drawing::SystemColors::Window;
			this->profBonus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profBonus->Location = System::Drawing::Point(132, 224);
			this->profBonus->Name = L"profBonus";
			this->profBonus->Size = System::Drawing::Size(23, 22);
			this->profBonus->TabIndex = 27;
			this->profBonus->Text = L"2";
			this->profBonus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveSTR
			// 
			this->saveSTR->BackColor = System::Drawing::SystemColors::Window;
			this->saveSTR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveSTR->Location = System::Drawing::Point(148, 269);
			this->saveSTR->Name = L"saveSTR";
			this->saveSTR->Size = System::Drawing::Size(21, 16);
			this->saveSTR->TabIndex = 28;
			this->saveSTR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveDEX
			// 
			this->saveDEX->BackColor = System::Drawing::SystemColors::Window;
			this->saveDEX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveDEX->Location = System::Drawing::Point(148, 287);
			this->saveDEX->Name = L"saveDEX";
			this->saveDEX->Size = System::Drawing::Size(21, 16);
			this->saveDEX->TabIndex = 29;
			this->saveDEX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveProfDEX
			// 
			this->saveProfDEX->AutoSize = true;
			this->saveProfDEX->BackColor = System::Drawing::SystemColors::Window;
			this->saveProfDEX->Location = System::Drawing::Point(130, 288);
			this->saveProfDEX->Name = L"saveProfDEX";
			this->saveProfDEX->Size = System::Drawing::Size(15, 14);
			this->saveProfDEX->TabIndex = 300;
			this->saveProfDEX->UseVisualStyleBackColor = false;
			this->saveProfDEX->CheckedChanged += gcnew System::EventHandler(this, &MyForm::saveProfDEX_CheckedChanged);
			// 
			// saveCON
			// 
			this->saveCON->BackColor = System::Drawing::SystemColors::Window;
			this->saveCON->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveCON->Location = System::Drawing::Point(148, 305);
			this->saveCON->Name = L"saveCON";
			this->saveCON->Size = System::Drawing::Size(21, 16);
			this->saveCON->TabIndex = 31;
			this->saveCON->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveProfCON
			// 
			this->saveProfCON->AutoSize = true;
			this->saveProfCON->BackColor = System::Drawing::SystemColors::Window;
			this->saveProfCON->Location = System::Drawing::Point(130, 306);
			this->saveProfCON->Name = L"saveProfCON";
			this->saveProfCON->Size = System::Drawing::Size(15, 14);
			this->saveProfCON->TabIndex = 300;
			this->saveProfCON->UseVisualStyleBackColor = false;
			this->saveProfCON->CheckedChanged += gcnew System::EventHandler(this, &MyForm::saveProfCON_CheckedChanged);
			// 
			// saveINT
			// 
			this->saveINT->BackColor = System::Drawing::SystemColors::Window;
			this->saveINT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveINT->Location = System::Drawing::Point(148, 323);
			this->saveINT->Name = L"saveINT";
			this->saveINT->Size = System::Drawing::Size(21, 16);
			this->saveINT->TabIndex = 33;
			this->saveINT->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveProfINT
			// 
			this->saveProfINT->AutoSize = true;
			this->saveProfINT->BackColor = System::Drawing::SystemColors::Window;
			this->saveProfINT->Location = System::Drawing::Point(130, 324);
			this->saveProfINT->Name = L"saveProfINT";
			this->saveProfINT->Size = System::Drawing::Size(15, 14);
			this->saveProfINT->TabIndex = 300;
			this->saveProfINT->UseVisualStyleBackColor = false;
			this->saveProfINT->CheckedChanged += gcnew System::EventHandler(this, &MyForm::saveProfINT_CheckedChanged);
			// 
			// saveWIS
			// 
			this->saveWIS->BackColor = System::Drawing::SystemColors::Window;
			this->saveWIS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveWIS->Location = System::Drawing::Point(148, 341);
			this->saveWIS->Name = L"saveWIS";
			this->saveWIS->Size = System::Drawing::Size(21, 16);
			this->saveWIS->TabIndex = 35;
			this->saveWIS->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveProfWIS
			// 
			this->saveProfWIS->AutoSize = true;
			this->saveProfWIS->BackColor = System::Drawing::SystemColors::Window;
			this->saveProfWIS->Location = System::Drawing::Point(130, 342);
			this->saveProfWIS->Name = L"saveProfWIS";
			this->saveProfWIS->Size = System::Drawing::Size(15, 14);
			this->saveProfWIS->TabIndex = 300;
			this->saveProfWIS->UseVisualStyleBackColor = false;
			this->saveProfWIS->CheckedChanged += gcnew System::EventHandler(this, &MyForm::saveProfWIS_CheckedChanged);
			// 
			// saveCHA
			// 
			this->saveCHA->BackColor = System::Drawing::SystemColors::Window;
			this->saveCHA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveCHA->Location = System::Drawing::Point(148, 359);
			this->saveCHA->Name = L"saveCHA";
			this->saveCHA->Size = System::Drawing::Size(21, 16);
			this->saveCHA->TabIndex = 37;
			this->saveCHA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveProfCHA
			// 
			this->saveProfCHA->AutoSize = true;
			this->saveProfCHA->BackColor = System::Drawing::SystemColors::Window;
			this->saveProfCHA->Location = System::Drawing::Point(130, 360);
			this->saveProfCHA->Name = L"saveProfCHA";
			this->saveProfCHA->Size = System::Drawing::Size(15, 14);
			this->saveProfCHA->TabIndex = 300;
			this->saveProfCHA->UseVisualStyleBackColor = false;
			this->saveProfCHA->CheckedChanged += gcnew System::EventHandler(this, &MyForm::saveProfCHA_CheckedChanged);
			// 
			// skillAcrobatics
			// 
			this->skillAcrobatics->BackColor = System::Drawing::SystemColors::Window;
			this->skillAcrobatics->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillAcrobatics->Location = System::Drawing::Point(146, 423);
			this->skillAcrobatics->Name = L"skillAcrobatics";
			this->skillAcrobatics->Size = System::Drawing::Size(21, 16);
			this->skillAcrobatics->TabIndex = 39;
			this->skillAcrobatics->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillAnimalHandling
			// 
			this->skillAnimalHandling->BackColor = System::Drawing::SystemColors::Window;
			this->skillAnimalHandling->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillAnimalHandling->Location = System::Drawing::Point(146, 441);
			this->skillAnimalHandling->Name = L"skillAnimalHandling";
			this->skillAnimalHandling->Size = System::Drawing::Size(21, 16);
			this->skillAnimalHandling->TabIndex = 40;
			this->skillAnimalHandling->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillArcana
			// 
			this->skillArcana->BackColor = System::Drawing::SystemColors::Window;
			this->skillArcana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillArcana->Location = System::Drawing::Point(146, 459);
			this->skillArcana->Name = L"skillArcana";
			this->skillArcana->Size = System::Drawing::Size(21, 16);
			this->skillArcana->TabIndex = 41;
			this->skillArcana->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillHistory
			// 
			this->skillHistory->BackColor = System::Drawing::SystemColors::Window;
			this->skillHistory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillHistory->Location = System::Drawing::Point(146, 513);
			this->skillHistory->Name = L"skillHistory";
			this->skillHistory->Size = System::Drawing::Size(21, 16);
			this->skillHistory->TabIndex = 44;
			this->skillHistory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillDeception
			// 
			this->skillDeception->BackColor = System::Drawing::SystemColors::Window;
			this->skillDeception->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillDeception->Location = System::Drawing::Point(146, 495);
			this->skillDeception->Name = L"skillDeception";
			this->skillDeception->Size = System::Drawing::Size(21, 16);
			this->skillDeception->TabIndex = 43;
			this->skillDeception->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillAthletics
			// 
			this->skillAthletics->BackColor = System::Drawing::SystemColors::Window;
			this->skillAthletics->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillAthletics->Location = System::Drawing::Point(146, 477);
			this->skillAthletics->Name = L"skillAthletics";
			this->skillAthletics->Size = System::Drawing::Size(21, 16);
			this->skillAthletics->TabIndex = 42;
			this->skillAthletics->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillPerception
			// 
			this->skillPerception->BackColor = System::Drawing::SystemColors::Window;
			this->skillPerception->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillPerception->Location = System::Drawing::Point(146, 621);
			this->skillPerception->Name = L"skillPerception";
			this->skillPerception->Size = System::Drawing::Size(21, 16);
			this->skillPerception->TabIndex = 50;
			this->skillPerception->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillNature
			// 
			this->skillNature->BackColor = System::Drawing::SystemColors::Window;
			this->skillNature->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillNature->Location = System::Drawing::Point(146, 603);
			this->skillNature->Name = L"skillNature";
			this->skillNature->Size = System::Drawing::Size(21, 16);
			this->skillNature->TabIndex = 49;
			this->skillNature->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillMedicine
			// 
			this->skillMedicine->BackColor = System::Drawing::SystemColors::Window;
			this->skillMedicine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillMedicine->Location = System::Drawing::Point(146, 585);
			this->skillMedicine->Name = L"skillMedicine";
			this->skillMedicine->Size = System::Drawing::Size(21, 16);
			this->skillMedicine->TabIndex = 48;
			this->skillMedicine->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillInvestigation
			// 
			this->skillInvestigation->BackColor = System::Drawing::SystemColors::Window;
			this->skillInvestigation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillInvestigation->Location = System::Drawing::Point(146, 567);
			this->skillInvestigation->Name = L"skillInvestigation";
			this->skillInvestigation->Size = System::Drawing::Size(21, 16);
			this->skillInvestigation->TabIndex = 47;
			this->skillInvestigation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillIntimidation
			// 
			this->skillIntimidation->BackColor = System::Drawing::SystemColors::Window;
			this->skillIntimidation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillIntimidation->Location = System::Drawing::Point(146, 549);
			this->skillIntimidation->Name = L"skillIntimidation";
			this->skillIntimidation->Size = System::Drawing::Size(21, 16);
			this->skillIntimidation->TabIndex = 46;
			this->skillIntimidation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillInsight
			// 
			this->skillInsight->BackColor = System::Drawing::SystemColors::Window;
			this->skillInsight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillInsight->Location = System::Drawing::Point(146, 531);
			this->skillInsight->Name = L"skillInsight";
			this->skillInsight->Size = System::Drawing::Size(21, 16);
			this->skillInsight->TabIndex = 45;
			this->skillInsight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillSurvival
			// 
			this->skillSurvival->BackColor = System::Drawing::SystemColors::Window;
			this->skillSurvival->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillSurvival->Location = System::Drawing::Point(146, 729);
			this->skillSurvival->Name = L"skillSurvival";
			this->skillSurvival->Size = System::Drawing::Size(21, 16);
			this->skillSurvival->TabIndex = 56;
			this->skillSurvival->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillStealth
			// 
			this->skillStealth->BackColor = System::Drawing::SystemColors::Window;
			this->skillStealth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillStealth->Location = System::Drawing::Point(146, 711);
			this->skillStealth->Name = L"skillStealth";
			this->skillStealth->Size = System::Drawing::Size(21, 16);
			this->skillStealth->TabIndex = 55;
			this->skillStealth->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillSleightOfHand
			// 
			this->skillSleightOfHand->BackColor = System::Drawing::SystemColors::Window;
			this->skillSleightOfHand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillSleightOfHand->Location = System::Drawing::Point(146, 693);
			this->skillSleightOfHand->Name = L"skillSleightOfHand";
			this->skillSleightOfHand->Size = System::Drawing::Size(21, 16);
			this->skillSleightOfHand->TabIndex = 54;
			this->skillSleightOfHand->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillReligion
			// 
			this->skillReligion->BackColor = System::Drawing::SystemColors::Window;
			this->skillReligion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillReligion->Location = System::Drawing::Point(146, 675);
			this->skillReligion->Name = L"skillReligion";
			this->skillReligion->Size = System::Drawing::Size(21, 16);
			this->skillReligion->TabIndex = 53;
			this->skillReligion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillPersuasion
			// 
			this->skillPersuasion->BackColor = System::Drawing::SystemColors::Window;
			this->skillPersuasion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skillPersuasion->Location = System::Drawing::Point(146, 657);
			this->skillPersuasion->Name = L"skillPersuasion";
			this->skillPersuasion->Size = System::Drawing::Size(21, 16);
			this->skillPersuasion->TabIndex = 52;
			this->skillPersuasion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillPerformance
			// 
			this->skillPerformance->BackColor = System::Drawing::SystemColors::Window;
			this->skillPerformance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->skillPerformance->Location = System::Drawing::Point(146, 639);
			this->skillPerformance->Name = L"skillPerformance";
			this->skillPerformance->Size = System::Drawing::Size(21, 16);
			this->skillPerformance->TabIndex = 51;
			this->skillPerformance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// profHistory
			// 
			this->profHistory->AutoSize = true;
			this->profHistory->BackColor = System::Drawing::SystemColors::Window;
			this->profHistory->Location = System::Drawing::Point(130, 514);
			this->profHistory->Name = L"profHistory";
			this->profHistory->Size = System::Drawing::Size(15, 14);
			this->profHistory->TabIndex = 300;
			this->profHistory->UseVisualStyleBackColor = false;
			this->profHistory->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profHistory_CheckedChanged);
			// 
			// profDeception
			// 
			this->profDeception->AutoSize = true;
			this->profDeception->BackColor = System::Drawing::SystemColors::Window;
			this->profDeception->Location = System::Drawing::Point(130, 495);
			this->profDeception->Name = L"profDeception";
			this->profDeception->Size = System::Drawing::Size(15, 14);
			this->profDeception->TabIndex = 300;
			this->profDeception->UseVisualStyleBackColor = false;
			this->profDeception->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profDeception_CheckedChanged);
			// 
			// profAthletics
			// 
			this->profAthletics->AutoSize = true;
			this->profAthletics->BackColor = System::Drawing::SystemColors::Window;
			this->profAthletics->Location = System::Drawing::Point(130, 477);
			this->profAthletics->Name = L"profAthletics";
			this->profAthletics->Size = System::Drawing::Size(15, 14);
			this->profAthletics->TabIndex = 300;
			this->profAthletics->Tag = L"STR";
			this->profAthletics->UseVisualStyleBackColor = false;
			this->profAthletics->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profAthletics_CheckedChanged);
			// 
			// profArcana
			// 
			this->profArcana->AutoSize = true;
			this->profArcana->BackColor = System::Drawing::SystemColors::Window;
			this->profArcana->Location = System::Drawing::Point(130, 459);
			this->profArcana->Name = L"profArcana";
			this->profArcana->Size = System::Drawing::Size(15, 14);
			this->profArcana->TabIndex = 300;
			this->profArcana->UseVisualStyleBackColor = false;
			this->profArcana->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profArcana_CheckedChanged);
			// 
			// profAnimalHandling
			// 
			this->profAnimalHandling->AutoSize = true;
			this->profAnimalHandling->BackColor = System::Drawing::SystemColors::Window;
			this->profAnimalHandling->Location = System::Drawing::Point(130, 441);
			this->profAnimalHandling->Name = L"profAnimalHandling";
			this->profAnimalHandling->Size = System::Drawing::Size(15, 14);
			this->profAnimalHandling->TabIndex = 300;
			this->profAnimalHandling->UseVisualStyleBackColor = false;
			this->profAnimalHandling->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profAnimimalHandling_CheckedChanged);
			// 
			// profAcrobatics
			// 
			this->profAcrobatics->AutoSize = true;
			this->profAcrobatics->BackColor = System::Drawing::SystemColors::Window;
			this->profAcrobatics->Location = System::Drawing::Point(130, 423);
			this->profAcrobatics->Name = L"profAcrobatics";
			this->profAcrobatics->Size = System::Drawing::Size(15, 14);
			this->profAcrobatics->TabIndex = 300;
			this->profAcrobatics->UseVisualStyleBackColor = false;
			this->profAcrobatics->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profAcrobatics_CheckedChanged);
			// 
			// profPerception
			// 
			this->profPerception->AutoSize = true;
			this->profPerception->BackColor = System::Drawing::SystemColors::Window;
			this->profPerception->Location = System::Drawing::Point(130, 622);
			this->profPerception->Name = L"profPerception";
			this->profPerception->Size = System::Drawing::Size(15, 14);
			this->profPerception->TabIndex = 300;
			this->profPerception->UseVisualStyleBackColor = false;
			this->profPerception->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profPerception_CheckedChanged);
			// 
			// profNature
			// 
			this->profNature->AutoSize = true;
			this->profNature->BackColor = System::Drawing::SystemColors::Window;
			this->profNature->Location = System::Drawing::Point(130, 604);
			this->profNature->Name = L"profNature";
			this->profNature->Size = System::Drawing::Size(15, 14);
			this->profNature->TabIndex = 300;
			this->profNature->UseVisualStyleBackColor = false;
			this->profNature->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profNature_CheckedChanged);
			// 
			// profMedicine
			// 
			this->profMedicine->AutoSize = true;
			this->profMedicine->BackColor = System::Drawing::SystemColors::Window;
			this->profMedicine->Location = System::Drawing::Point(130, 586);
			this->profMedicine->Name = L"profMedicine";
			this->profMedicine->Size = System::Drawing::Size(15, 14);
			this->profMedicine->TabIndex = 300;
			this->profMedicine->UseVisualStyleBackColor = false;
			this->profMedicine->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profMedicine_CheckedChanged);
			// 
			// profInvestigation
			// 
			this->profInvestigation->AutoSize = true;
			this->profInvestigation->BackColor = System::Drawing::SystemColors::Window;
			this->profInvestigation->Location = System::Drawing::Point(130, 568);
			this->profInvestigation->Name = L"profInvestigation";
			this->profInvestigation->Size = System::Drawing::Size(15, 14);
			this->profInvestigation->TabIndex = 300;
			this->profInvestigation->UseVisualStyleBackColor = false;
			this->profInvestigation->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profInvestigation_CheckedChanged);
			// 
			// profIntimidation
			// 
			this->profIntimidation->AutoSize = true;
			this->profIntimidation->BackColor = System::Drawing::SystemColors::Window;
			this->profIntimidation->Location = System::Drawing::Point(130, 550);
			this->profIntimidation->Name = L"profIntimidation";
			this->profIntimidation->Size = System::Drawing::Size(15, 14);
			this->profIntimidation->TabIndex = 300;
			this->profIntimidation->UseVisualStyleBackColor = false;
			this->profIntimidation->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profIntimidation_CheckedChanged);
			// 
			// profInsight
			// 
			this->profInsight->AutoSize = true;
			this->profInsight->BackColor = System::Drawing::SystemColors::Window;
			this->profInsight->Location = System::Drawing::Point(130, 532);
			this->profInsight->Name = L"profInsight";
			this->profInsight->Size = System::Drawing::Size(15, 14);
			this->profInsight->TabIndex = 300;
			this->profInsight->UseVisualStyleBackColor = false;
			this->profInsight->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profInsight_CheckedChanged);
			// 
			// profSurvival
			// 
			this->profSurvival->AutoSize = true;
			this->profSurvival->BackColor = System::Drawing::SystemColors::Window;
			this->profSurvival->Location = System::Drawing::Point(130, 730);
			this->profSurvival->Name = L"profSurvival";
			this->profSurvival->Size = System::Drawing::Size(15, 14);
			this->profSurvival->TabIndex = 300;
			this->profSurvival->UseVisualStyleBackColor = false;
			this->profSurvival->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profSurvival_CheckedChanged);
			// 
			// profStealth
			// 
			this->profStealth->AutoSize = true;
			this->profStealth->BackColor = System::Drawing::SystemColors::Window;
			this->profStealth->Location = System::Drawing::Point(130, 713);
			this->profStealth->Name = L"profStealth";
			this->profStealth->Size = System::Drawing::Size(15, 14);
			this->profStealth->TabIndex = 300;
			this->profStealth->UseVisualStyleBackColor = false;
			this->profStealth->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profStealth_CheckedChanged);
			// 
			// profSleightOfHand
			// 
			this->profSleightOfHand->AutoSize = true;
			this->profSleightOfHand->BackColor = System::Drawing::SystemColors::Window;
			this->profSleightOfHand->Location = System::Drawing::Point(130, 694);
			this->profSleightOfHand->Name = L"profSleightOfHand";
			this->profSleightOfHand->Size = System::Drawing::Size(15, 14);
			this->profSleightOfHand->TabIndex = 300;
			this->profSleightOfHand->UseVisualStyleBackColor = false;
			this->profSleightOfHand->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profSleightOfHand_CheckedChanged);
			// 
			// profReligion
			// 
			this->profReligion->AutoSize = true;
			this->profReligion->BackColor = System::Drawing::SystemColors::Window;
			this->profReligion->Location = System::Drawing::Point(130, 676);
			this->profReligion->Name = L"profReligion";
			this->profReligion->Size = System::Drawing::Size(15, 14);
			this->profReligion->TabIndex = 300;
			this->profReligion->UseVisualStyleBackColor = false;
			this->profReligion->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profReligion_CheckedChanged);
			// 
			// profPersuasion
			// 
			this->profPersuasion->AutoSize = true;
			this->profPersuasion->BackColor = System::Drawing::SystemColors::Window;
			this->profPersuasion->Location = System::Drawing::Point(130, 658);
			this->profPersuasion->Name = L"profPersuasion";
			this->profPersuasion->Size = System::Drawing::Size(15, 14);
			this->profPersuasion->TabIndex = 300;
			this->profPersuasion->UseVisualStyleBackColor = false;
			this->profPersuasion->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profPersuasion_CheckedChanged);
			// 
			// profPerformance
			// 
			this->profPerformance->AutoSize = true;
			this->profPerformance->BackColor = System::Drawing::SystemColors::Window;
			this->profPerformance->Location = System::Drawing::Point(130, 640);
			this->profPerformance->Name = L"profPerformance";
			this->profPerformance->Size = System::Drawing::Size(15, 14);
			this->profPerformance->TabIndex = 300;
			this->profPerformance->UseVisualStyleBackColor = false;
			this->profPerformance->CheckedChanged += gcnew System::EventHandler(this, &MyForm::profPerformance_CheckedChanged);
			// 
			// passPerception
			// 
			this->passPerception->BackColor = System::Drawing::SystemColors::Window;
			this->passPerception->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passPerception->Location = System::Drawing::Point(45, 787);
			this->passPerception->Name = L"passPerception";
			this->passPerception->Size = System::Drawing::Size(23, 22);
			this->passPerception->TabIndex = 75;
			this->passPerception->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// initiative
			// 
			this->initiative->BackColor = System::Drawing::SystemColors::ControlLight;
			this->initiative->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->initiative->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->initiative->Location = System::Drawing::Point(380, 192);
			this->initiative->Name = L"initiative";
			this->initiative->Size = System::Drawing::Size(49, 31);
			this->initiative->TabIndex = 14;
			this->initiative->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// speed
			// 
			this->speed->BackColor = System::Drawing::SystemColors::ControlLight;
			this->speed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->speed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->speed->Location = System::Drawing::Point(458, 192);
			this->speed->Name = L"speed";
			this->speed->Size = System::Drawing::Size(49, 31);
			this->speed->TabIndex = 15;
			this->speed->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// armorClass
			// 
			this->armorClass->BackColor = System::Drawing::SystemColors::ControlLight;
			this->armorClass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->armorClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->armorClass->Location = System::Drawing::Point(308, 197);
			this->armorClass->Name = L"armorClass";
			this->armorClass->Size = System::Drawing::Size(41, 22);
			this->armorClass->TabIndex = 13;
			this->armorClass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// currentHitPoints
			// 
			this->currentHitPoints->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->currentHitPoints->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->currentHitPoints->Location = System::Drawing::Point(398, 285);
			this->currentHitPoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->currentHitPoints->Name = L"currentHitPoints";
			this->currentHitPoints->Size = System::Drawing::Size(93, 34);
			this->currentHitPoints->TabIndex = 80;
			this->currentHitPoints->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			// 
			// maxHitPoints
			// 
			this->maxHitPoints->BackColor = System::Drawing::SystemColors::Window;
			this->maxHitPoints->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maxHitPoints->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maxHitPoints->Location = System::Drawing::Point(402, 260);
			this->maxHitPoints->Name = L"maxHitPoints";
			this->maxHitPoints->ReadOnly = true;
			this->maxHitPoints->Size = System::Drawing::Size(89, 12);
			this->maxHitPoints->TabIndex = 81;
			this->maxHitPoints->Text = L"4";
			this->maxHitPoints->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charLevel
			// 
			this->charLevel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charLevel->Location = System::Drawing::Point(450, 65);
			this->charLevel->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->charLevel->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->charLevel->Name = L"charLevel";
			this->charLevel->Size = System::Drawing::Size(44, 18);
			this->charLevel->TabIndex = 83;
			this->charLevel->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->charLevel->ValueChanged += gcnew System::EventHandler(this, &MyForm::charLevel_ValueChanged);
			// 
			// currentNumHitDie
			// 
			this->currentNumHitDie->BackColor = System::Drawing::SystemColors::Window;
			this->currentNumHitDie->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->currentNumHitDie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentNumHitDie->Location = System::Drawing::Point(339, 421);
			this->currentNumHitDie->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->currentNumHitDie->Name = L"currentNumHitDie";
			this->currentNumHitDie->Size = System::Drawing::Size(50, 14);
			this->currentNumHitDie->TabIndex = 84;
			this->currentNumHitDie->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->currentNumHitDie->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// tempHitPoints
			// 
			this->tempHitPoints->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tempHitPoints->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tempHitPoints->Location = System::Drawing::Point(398, 348);
			this->tempHitPoints->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->tempHitPoints->Name = L"tempHitPoints";
			this->tempHitPoints->Size = System::Drawing::Size(93, 34);
			this->tempHitPoints->TabIndex = 87;
			// 
			// featuresAndTraits
			// 
			this->featuresAndTraits->BackColor = System::Drawing::SystemColors::ControlLight;
			this->featuresAndTraits->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->featuresAndTraits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->featuresAndTraits->Location = System::Drawing::Point(551, 514);
			this->featuresAndTraits->Margin = System::Windows::Forms::Padding(2);
			this->featuresAndTraits->Multiline = true;
			this->featuresAndTraits->Name = L"featuresAndTraits";
			this->featuresAndTraits->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->featuresAndTraits->Size = System::Drawing::Size(216, 492);
			this->featuresAndTraits->TabIndex = 20;
			// 
			// hitDieType
			// 
			this->hitDieType->AllowDrop = true;
			this->hitDieType->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->hitDieType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hitDieType->FormattingEnabled = true;
			this->hitDieType->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"D4", L"D6", L"D8", L"D10", L"D12" });
			this->hitDieType->Location = System::Drawing::Point(336, 441);
			this->hitDieType->Name = L"hitDieType";
			this->hitDieType->Size = System::Drawing::Size(54, 28);
			this->hitDieType->TabIndex = 89;
			this->hitDieType->Text = L"D4";
			this->hitDieType->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::hitDieType_SelectedIndexChanged);
			// 
			// deathSuccess1
			// 
			this->deathSuccess1->Appearance = System::Windows::Forms::Appearance::Button;
			this->deathSuccess1->BackColor = System::Drawing::SystemColors::Window;
			this->deathSuccess1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->deathSuccess1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->deathSuccess1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deathSuccess1->Location = System::Drawing::Point(461, 429);
			this->deathSuccess1->Name = L"deathSuccess1";
			this->deathSuccess1->Size = System::Drawing::Size(12, 12);
			this->deathSuccess1->TabIndex = 300;
			this->deathSuccess1->UseVisualStyleBackColor = false;
			// 
			// deathSuccess2
			// 
			this->deathSuccess2->Appearance = System::Windows::Forms::Appearance::Button;
			this->deathSuccess2->BackColor = System::Drawing::SystemColors::Window;
			this->deathSuccess2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->deathSuccess2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->deathSuccess2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deathSuccess2->Location = System::Drawing::Point(476, 429);
			this->deathSuccess2->Name = L"deathSuccess2";
			this->deathSuccess2->Size = System::Drawing::Size(12, 12);
			this->deathSuccess2->TabIndex = 300;
			this->deathSuccess2->UseVisualStyleBackColor = false;
			// 
			// deathSuccess3
			// 
			this->deathSuccess3->Appearance = System::Windows::Forms::Appearance::Button;
			this->deathSuccess3->BackColor = System::Drawing::SystemColors::Window;
			this->deathSuccess3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->deathSuccess3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->deathSuccess3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deathSuccess3->Location = System::Drawing::Point(491, 429);
			this->deathSuccess3->Name = L"deathSuccess3";
			this->deathSuccess3->Size = System::Drawing::Size(12, 12);
			this->deathSuccess3->TabIndex = 300;
			this->deathSuccess3->UseVisualStyleBackColor = false;
			// 
			// deathFailure3
			// 
			this->deathFailure3->Appearance = System::Windows::Forms::Appearance::Button;
			this->deathFailure3->BackColor = System::Drawing::SystemColors::Window;
			this->deathFailure3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->deathFailure3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->deathFailure3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deathFailure3->Location = System::Drawing::Point(491, 449);
			this->deathFailure3->Name = L"deathFailure3";
			this->deathFailure3->Size = System::Drawing::Size(12, 12);
			this->deathFailure3->TabIndex = 300;
			this->deathFailure3->UseVisualStyleBackColor = false;
			// 
			// deathFailure2
			// 
			this->deathFailure2->Appearance = System::Windows::Forms::Appearance::Button;
			this->deathFailure2->BackColor = System::Drawing::SystemColors::Window;
			this->deathFailure2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->deathFailure2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->deathFailure2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deathFailure2->Location = System::Drawing::Point(476, 449);
			this->deathFailure2->Name = L"deathFailure2";
			this->deathFailure2->Size = System::Drawing::Size(12, 12);
			this->deathFailure2->TabIndex = 300;
			this->deathFailure2->UseVisualStyleBackColor = false;
			// 
			// deathFailure1
			// 
			this->deathFailure1->Appearance = System::Windows::Forms::Appearance::Button;
			this->deathFailure1->BackColor = System::Drawing::SystemColors::Window;
			this->deathFailure1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->deathFailure1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->deathFailure1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deathFailure1->Location = System::Drawing::Point(461, 449);
			this->deathFailure1->Name = L"deathFailure1";
			this->deathFailure1->Size = System::Drawing::Size(12, 12);
			this->deathFailure1->TabIndex = 300;
			this->deathFailure1->UseVisualStyleBackColor = false;
			// 
			// personalityTraitsTextBox
			// 
			this->personalityTraitsTextBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->personalityTraitsTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->personalityTraitsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->personalityTraitsTextBox->Location = System::Drawing::Point(560, 187);
			this->personalityTraitsTextBox->Margin = System::Windows::Forms::Padding(2);
			this->personalityTraitsTextBox->Multiline = true;
			this->personalityTraitsTextBox->Name = L"personalityTraitsTextBox";
			this->personalityTraitsTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->personalityTraitsTextBox->Size = System::Drawing::Size(201, 59);
			this->personalityTraitsTextBox->TabIndex = 16;
			// 
			// idealsTextBox
			// 
			this->idealsTextBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->idealsTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->idealsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idealsTextBox->Location = System::Drawing::Point(560, 278);
			this->idealsTextBox->Margin = System::Windows::Forms::Padding(2);
			this->idealsTextBox->Multiline = true;
			this->idealsTextBox->Name = L"idealsTextBox";
			this->idealsTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->idealsTextBox->Size = System::Drawing::Size(201, 43);
			this->idealsTextBox->TabIndex = 17;
			// 
			// bondsTextBox
			// 
			this->bondsTextBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->bondsTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bondsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bondsTextBox->Location = System::Drawing::Point(560, 354);
			this->bondsTextBox->Margin = System::Windows::Forms::Padding(2);
			this->bondsTextBox->Multiline = true;
			this->bondsTextBox->Name = L"bondsTextBox";
			this->bondsTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->bondsTextBox->Size = System::Drawing::Size(201, 44);
			this->bondsTextBox->TabIndex = 18;
			// 
			// flawsTextBox
			// 
			this->flawsTextBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->flawsTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->flawsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flawsTextBox->Location = System::Drawing::Point(560, 426);
			this->flawsTextBox->Margin = System::Windows::Forms::Padding(2);
			this->flawsTextBox->Multiline = true;
			this->flawsTextBox->Name = L"flawsTextBox";
			this->flawsTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->flawsTextBox->Size = System::Drawing::Size(201, 43);
			this->flawsTextBox->TabIndex = 19;
			// 
			// attackName1
			// 
			this->attackName1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName1->Location = System::Drawing::Point(296, 523);
			this->attackName1->Name = L"attackName1";
			this->attackName1->Size = System::Drawing::Size(79, 13);
			this->attackName1->TabIndex = 21;
			// 
			// attackBonus1
			// 
			this->attackBonus1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus1->Location = System::Drawing::Point(386, 523);
			this->attackBonus1->Name = L"attackBonus1";
			this->attackBonus1->Size = System::Drawing::Size(43, 13);
			this->attackBonus1->TabIndex = 22;
			this->attackBonus1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackDamageType1
			// 
			this->attackDamageType1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType1->Location = System::Drawing::Point(437, 523);
			this->attackDamageType1->Name = L"attackDamageType1";
			this->attackDamageType1->Size = System::Drawing::Size(80, 13);
			this->attackDamageType1->TabIndex = 23;
			// 
			// attackDamageType2
			// 
			this->attackDamageType2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType2->Location = System::Drawing::Point(437, 543);
			this->attackDamageType2->Name = L"attackDamageType2";
			this->attackDamageType2->Size = System::Drawing::Size(80, 13);
			this->attackDamageType2->TabIndex = 26;
			// 
			// attackBonus2
			// 
			this->attackBonus2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus2->Location = System::Drawing::Point(386, 543);
			this->attackBonus2->Name = L"attackBonus2";
			this->attackBonus2->Size = System::Drawing::Size(43, 13);
			this->attackBonus2->TabIndex = 25;
			this->attackBonus2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName2
			// 
			this->attackName2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName2->Location = System::Drawing::Point(296, 543);
			this->attackName2->Name = L"attackName2";
			this->attackName2->Size = System::Drawing::Size(79, 13);
			this->attackName2->TabIndex = 24;
			// 
			// attackDamageType4
			// 
			this->attackDamageType4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType4->Location = System::Drawing::Point(437, 583);
			this->attackDamageType4->Name = L"attackDamageType4";
			this->attackDamageType4->Size = System::Drawing::Size(80, 13);
			this->attackDamageType4->TabIndex = 32;
			// 
			// attackBonus4
			// 
			this->attackBonus4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus4->Location = System::Drawing::Point(386, 583);
			this->attackBonus4->Name = L"attackBonus4";
			this->attackBonus4->Size = System::Drawing::Size(43, 13);
			this->attackBonus4->TabIndex = 31;
			this->attackBonus4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName4
			// 
			this->attackName4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName4->Location = System::Drawing::Point(296, 583);
			this->attackName4->Name = L"attackName4";
			this->attackName4->Size = System::Drawing::Size(79, 13);
			this->attackName4->TabIndex = 30;
			// 
			// attackDamageType3
			// 
			this->attackDamageType3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType3->Location = System::Drawing::Point(437, 563);
			this->attackDamageType3->Name = L"attackDamageType3";
			this->attackDamageType3->Size = System::Drawing::Size(80, 13);
			this->attackDamageType3->TabIndex = 29;
			// 
			// attackBonus3
			// 
			this->attackBonus3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus3->Location = System::Drawing::Point(386, 563);
			this->attackBonus3->Name = L"attackBonus3";
			this->attackBonus3->Size = System::Drawing::Size(43, 13);
			this->attackBonus3->TabIndex = 28;
			this->attackBonus3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName3
			// 
			this->attackName3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName3->Location = System::Drawing::Point(296, 563);
			this->attackName3->Name = L"attackName3";
			this->attackName3->Size = System::Drawing::Size(79, 13);
			this->attackName3->TabIndex = 27;
			// 
			// sheetBackground1
			// 
			this->sheetBackground1->AutoScroll = true;
			this->sheetBackground1->BackColor = System::Drawing::SystemColors::Window;
			this->sheetBackground1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sheetBackground1.BackgroundImage")));
			this->sheetBackground1->Controls->Add(this->buttonClearSheet);
			this->sheetBackground1->Controls->Add(this->inspiration);
			this->sheetBackground1->Controls->Add(this->buttonSave);
			this->sheetBackground1->Controls->Add(this->numPlatinumPieces);
			this->sheetBackground1->Controls->Add(this->numGoldPieces);
			this->sheetBackground1->Controls->Add(this->numElectrumPieces);
			this->sheetBackground1->Controls->Add(this->numSilverPieces);
			this->sheetBackground1->Controls->Add(this->numCopperPieces);
			this->sheetBackground1->Controls->Add(this->itemWeight10);
			this->sheetBackground1->Controls->Add(this->itemName10);
			this->sheetBackground1->Controls->Add(this->itemAmt10);
			this->sheetBackground1->Controls->Add(this->itemWeight9);
			this->sheetBackground1->Controls->Add(this->itemName9);
			this->sheetBackground1->Controls->Add(this->itemAmt9);
			this->sheetBackground1->Controls->Add(this->itemWeight8);
			this->sheetBackground1->Controls->Add(this->itemName8);
			this->sheetBackground1->Controls->Add(this->itemAmt8);
			this->sheetBackground1->Controls->Add(this->itemWeight7);
			this->sheetBackground1->Controls->Add(this->itemName7);
			this->sheetBackground1->Controls->Add(this->itemAmt7);
			this->sheetBackground1->Controls->Add(this->itemWeight6);
			this->sheetBackground1->Controls->Add(this->itemName6);
			this->sheetBackground1->Controls->Add(this->itemAmt6);
			this->sheetBackground1->Controls->Add(this->itemWeight5);
			this->sheetBackground1->Controls->Add(this->itemName5);
			this->sheetBackground1->Controls->Add(this->itemAmt5);
			this->sheetBackground1->Controls->Add(this->itemWeight4);
			this->sheetBackground1->Controls->Add(this->itemName4);
			this->sheetBackground1->Controls->Add(this->itemAmt4);
			this->sheetBackground1->Controls->Add(this->itemWeight3);
			this->sheetBackground1->Controls->Add(this->itemName3);
			this->sheetBackground1->Controls->Add(this->itemAmt3);
			this->sheetBackground1->Controls->Add(this->itemWeight2);
			this->sheetBackground1->Controls->Add(this->itemName2);
			this->sheetBackground1->Controls->Add(this->itemAmt2);
			this->sheetBackground1->Controls->Add(this->itemWeight1);
			this->sheetBackground1->Controls->Add(this->itemName1);
			this->sheetBackground1->Controls->Add(this->itemAmt1);
			this->sheetBackground1->Controls->Add(this->headerItemWeight);
			this->sheetBackground1->Controls->Add(this->headerItemName);
			this->sheetBackground1->Controls->Add(this->headerItemAmt);
			this->sheetBackground1->Controls->Add(this->profLangProficiency7);
			this->sheetBackground1->Controls->Add(this->profLangAttribute7);
			this->sheetBackground1->Controls->Add(this->profLangType7);
			this->sheetBackground1->Controls->Add(this->profLangProficiency6);
			this->sheetBackground1->Controls->Add(this->profLangAttribute6);
			this->sheetBackground1->Controls->Add(this->profLangType6);
			this->sheetBackground1->Controls->Add(this->profLangProficiency5);
			this->sheetBackground1->Controls->Add(this->profLangAttribute5);
			this->sheetBackground1->Controls->Add(this->profLangType5);
			this->sheetBackground1->Controls->Add(this->profLangProficiency4);
			this->sheetBackground1->Controls->Add(this->profLangAttribute4);
			this->sheetBackground1->Controls->Add(this->profLangType4);
			this->sheetBackground1->Controls->Add(this->profLangProficiency3);
			this->sheetBackground1->Controls->Add(this->profLangAttribute3);
			this->sheetBackground1->Controls->Add(this->profLangType3);
			this->sheetBackground1->Controls->Add(this->profLangProficiency2);
			this->sheetBackground1->Controls->Add(this->profLangAttribute2);
			this->sheetBackground1->Controls->Add(this->profLangType2);
			this->sheetBackground1->Controls->Add(this->profLangProficiency1);
			this->sheetBackground1->Controls->Add(this->profLangAttribute1);
			this->sheetBackground1->Controls->Add(this->profLangType1);
			this->sheetBackground1->Controls->Add(this->headerProfLangProficiency);
			this->sheetBackground1->Controls->Add(this->headerProfLangAttribute);
			this->sheetBackground1->Controls->Add(this->headerProfLangType);
			this->sheetBackground1->Controls->Add(this->attackDamageType11);
			this->sheetBackground1->Controls->Add(this->attackBonus11);
			this->sheetBackground1->Controls->Add(this->attackName11);
			this->sheetBackground1->Controls->Add(this->attackDamageType10);
			this->sheetBackground1->Controls->Add(this->attackBonus10);
			this->sheetBackground1->Controls->Add(this->attackName10);
			this->sheetBackground1->Controls->Add(this->attackDamageType9);
			this->sheetBackground1->Controls->Add(this->attackBonus9);
			this->sheetBackground1->Controls->Add(this->attackName9);
			this->sheetBackground1->Controls->Add(this->attackDamageType8);
			this->sheetBackground1->Controls->Add(this->attackBonus8);
			this->sheetBackground1->Controls->Add(this->attackName8);
			this->sheetBackground1->Controls->Add(this->attackDamageType7);
			this->sheetBackground1->Controls->Add(this->attackBonus7);
			this->sheetBackground1->Controls->Add(this->attackName7);
			this->sheetBackground1->Controls->Add(this->attackDamageType6);
			this->sheetBackground1->Controls->Add(this->attackBonus6);
			this->sheetBackground1->Controls->Add(this->attackName6);
			this->sheetBackground1->Controls->Add(this->attackDamageType5);
			this->sheetBackground1->Controls->Add(this->attackBonus5);
			this->sheetBackground1->Controls->Add(this->attackName5);
			this->sheetBackground1->Controls->Add(this->attackDamageType4);
			this->sheetBackground1->Controls->Add(this->attackBonus4);
			this->sheetBackground1->Controls->Add(this->attackName4);
			this->sheetBackground1->Controls->Add(this->attackDamageType3);
			this->sheetBackground1->Controls->Add(this->attackBonus3);
			this->sheetBackground1->Controls->Add(this->attackName3);
			this->sheetBackground1->Controls->Add(this->attackDamageType2);
			this->sheetBackground1->Controls->Add(this->attackBonus2);
			this->sheetBackground1->Controls->Add(this->attackName2);
			this->sheetBackground1->Controls->Add(this->attackDamageType1);
			this->sheetBackground1->Controls->Add(this->attackBonus1);
			this->sheetBackground1->Controls->Add(this->attackName1);
			this->sheetBackground1->Controls->Add(this->flawsTextBox);
			this->sheetBackground1->Controls->Add(this->bondsTextBox);
			this->sheetBackground1->Controls->Add(this->idealsTextBox);
			this->sheetBackground1->Controls->Add(this->personalityTraitsTextBox);
			this->sheetBackground1->Controls->Add(this->deathFailure3);
			this->sheetBackground1->Controls->Add(this->deathFailure2);
			this->sheetBackground1->Controls->Add(this->deathFailure1);
			this->sheetBackground1->Controls->Add(this->deathSuccess3);
			this->sheetBackground1->Controls->Add(this->deathSuccess2);
			this->sheetBackground1->Controls->Add(this->deathSuccess1);
			this->sheetBackground1->Controls->Add(this->hitDieType);
			this->sheetBackground1->Controls->Add(this->featuresAndTraits);
			this->sheetBackground1->Controls->Add(this->tempHitPoints);
			this->sheetBackground1->Controls->Add(this->currentNumHitDie);
			this->sheetBackground1->Controls->Add(this->charLevel);
			this->sheetBackground1->Controls->Add(this->maxHitPoints);
			this->sheetBackground1->Controls->Add(this->currentHitPoints);
			this->sheetBackground1->Controls->Add(this->armorClass);
			this->sheetBackground1->Controls->Add(this->speed);
			this->sheetBackground1->Controls->Add(this->initiative);
			this->sheetBackground1->Controls->Add(this->passPerception);
			this->sheetBackground1->Controls->Add(this->profSurvival);
			this->sheetBackground1->Controls->Add(this->profStealth);
			this->sheetBackground1->Controls->Add(this->profSleightOfHand);
			this->sheetBackground1->Controls->Add(this->profReligion);
			this->sheetBackground1->Controls->Add(this->profPersuasion);
			this->sheetBackground1->Controls->Add(this->profPerformance);
			this->sheetBackground1->Controls->Add(this->profPerception);
			this->sheetBackground1->Controls->Add(this->profNature);
			this->sheetBackground1->Controls->Add(this->profMedicine);
			this->sheetBackground1->Controls->Add(this->profInvestigation);
			this->sheetBackground1->Controls->Add(this->profIntimidation);
			this->sheetBackground1->Controls->Add(this->profInsight);
			this->sheetBackground1->Controls->Add(this->profHistory);
			this->sheetBackground1->Controls->Add(this->profDeception);
			this->sheetBackground1->Controls->Add(this->profAthletics);
			this->sheetBackground1->Controls->Add(this->profArcana);
			this->sheetBackground1->Controls->Add(this->profAnimalHandling);
			this->sheetBackground1->Controls->Add(this->profAcrobatics);
			this->sheetBackground1->Controls->Add(this->skillSurvival);
			this->sheetBackground1->Controls->Add(this->skillStealth);
			this->sheetBackground1->Controls->Add(this->skillSleightOfHand);
			this->sheetBackground1->Controls->Add(this->skillReligion);
			this->sheetBackground1->Controls->Add(this->skillPersuasion);
			this->sheetBackground1->Controls->Add(this->skillPerformance);
			this->sheetBackground1->Controls->Add(this->skillPerception);
			this->sheetBackground1->Controls->Add(this->skillNature);
			this->sheetBackground1->Controls->Add(this->skillMedicine);
			this->sheetBackground1->Controls->Add(this->skillInvestigation);
			this->sheetBackground1->Controls->Add(this->skillIntimidation);
			this->sheetBackground1->Controls->Add(this->skillInsight);
			this->sheetBackground1->Controls->Add(this->skillHistory);
			this->sheetBackground1->Controls->Add(this->skillDeception);
			this->sheetBackground1->Controls->Add(this->skillAthletics);
			this->sheetBackground1->Controls->Add(this->skillArcana);
			this->sheetBackground1->Controls->Add(this->skillAnimalHandling);
			this->sheetBackground1->Controls->Add(this->skillAcrobatics);
			this->sheetBackground1->Controls->Add(this->saveProfCHA);
			this->sheetBackground1->Controls->Add(this->saveCHA);
			this->sheetBackground1->Controls->Add(this->saveProfWIS);
			this->sheetBackground1->Controls->Add(this->saveWIS);
			this->sheetBackground1->Controls->Add(this->saveProfINT);
			this->sheetBackground1->Controls->Add(this->saveINT);
			this->sheetBackground1->Controls->Add(this->saveProfCON);
			this->sheetBackground1->Controls->Add(this->saveCON);
			this->sheetBackground1->Controls->Add(this->saveProfDEX);
			this->sheetBackground1->Controls->Add(this->saveDEX);
			this->sheetBackground1->Controls->Add(this->saveSTR);
			this->sheetBackground1->Controls->Add(this->profBonus);
			this->sheetBackground1->Controls->Add(this->saveProfSTR);
			this->sheetBackground1->Controls->Add(this->modCHA);
			this->sheetBackground1->Controls->Add(this->scoreCHA);
			this->sheetBackground1->Controls->Add(this->modWIS);
			this->sheetBackground1->Controls->Add(this->scoreWIS);
			this->sheetBackground1->Controls->Add(this->modINT);
			this->sheetBackground1->Controls->Add(this->scoreINT);
			this->sheetBackground1->Controls->Add(this->modCON);
			this->sheetBackground1->Controls->Add(this->scoreCON);
			this->sheetBackground1->Controls->Add(this->modDEX);
			this->sheetBackground1->Controls->Add(this->scoreDEX);
			this->sheetBackground1->Controls->Add(this->modSTR);
			this->sheetBackground1->Controls->Add(this->scoreSTR);
			this->sheetBackground1->Controls->Add(this->charExp);
			this->sheetBackground1->Controls->Add(this->charAlignment);
			this->sheetBackground1->Controls->Add(this->charRace);
			this->sheetBackground1->Controls->Add(this->playerName);
			this->sheetBackground1->Controls->Add(this->charBackground);
			this->sheetBackground1->Controls->Add(this->charClass);
			this->sheetBackground1->Controls->Add(this->charNameCORE);
			this->sheetBackground1->Location = System::Drawing::Point(0, 1);
			this->sheetBackground1->Name = L"sheetBackground1";
			this->sheetBackground1->Size = System::Drawing::Size(816, 1073);
			this->sheetBackground1->TabIndex = 112;
			// 
			// buttonClearSheet
			// 
			this->buttonClearSheet->Location = System::Drawing::Point(669, 17);
			this->buttonClearSheet->Name = L"buttonClearSheet";
			this->buttonClearSheet->Size = System::Drawing::Size(98, 23);
			this->buttonClearSheet->TabIndex = 302;
			this->buttonClearSheet->Text = L"Clear Sheet";
			this->buttonClearSheet->UseVisualStyleBackColor = true;
			this->buttonClearSheet->Click += gcnew System::EventHandler(this, &MyForm::buttonClearSheet_Click);
			// 
			// inspiration
			// 
			this->inspiration->Appearance = System::Windows::Forms::Appearance::Button;
			this->inspiration->BackColor = System::Drawing::SystemColors::Window;
			this->inspiration->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->inspiration->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->inspiration->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->inspiration->Location = System::Drawing::Point(129, 173);
			this->inspiration->Name = L"inspiration";
			this->inspiration->Size = System::Drawing::Size(26, 24);
			this->inspiration->TabIndex = 301;
			this->inspiration->UseVisualStyleBackColor = false;
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(597, 17);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(66, 23);
			this->buttonSave->TabIndex = 196;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &MyForm::buttonSave_Click);
			// 
			// numPlatinumPieces
			// 
			this->numPlatinumPieces->BackColor = System::Drawing::SystemColors::ControlLight;
			this->numPlatinumPieces->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numPlatinumPieces->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numPlatinumPieces->Location = System::Drawing::Point(307, 941);
			this->numPlatinumPieces->Name = L"numPlatinumPieces";
			this->numPlatinumPieces->Size = System::Drawing::Size(36, 14);
			this->numPlatinumPieces->TabIndex = 194;
			this->numPlatinumPieces->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numGoldPieces
			// 
			this->numGoldPieces->BackColor = System::Drawing::SystemColors::ControlLight;
			this->numGoldPieces->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numGoldPieces->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numGoldPieces->Location = System::Drawing::Point(307, 906);
			this->numGoldPieces->Name = L"numGoldPieces";
			this->numGoldPieces->Size = System::Drawing::Size(36, 14);
			this->numGoldPieces->TabIndex = 193;
			this->numGoldPieces->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numElectrumPieces
			// 
			this->numElectrumPieces->BackColor = System::Drawing::SystemColors::ControlLight;
			this->numElectrumPieces->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numElectrumPieces->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numElectrumPieces->Location = System::Drawing::Point(307, 871);
			this->numElectrumPieces->Name = L"numElectrumPieces";
			this->numElectrumPieces->Size = System::Drawing::Size(36, 14);
			this->numElectrumPieces->TabIndex = 192;
			this->numElectrumPieces->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numSilverPieces
			// 
			this->numSilverPieces->BackColor = System::Drawing::SystemColors::ControlLight;
			this->numSilverPieces->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numSilverPieces->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numSilverPieces->Location = System::Drawing::Point(307, 836);
			this->numSilverPieces->Name = L"numSilverPieces";
			this->numSilverPieces->Size = System::Drawing::Size(36, 14);
			this->numSilverPieces->TabIndex = 191;
			this->numSilverPieces->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numCopperPieces
			// 
			this->numCopperPieces->BackColor = System::Drawing::SystemColors::ControlLight;
			this->numCopperPieces->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numCopperPieces->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCopperPieces->Location = System::Drawing::Point(307, 801);
			this->numCopperPieces->Name = L"numCopperPieces";
			this->numCopperPieces->Size = System::Drawing::Size(36, 14);
			this->numCopperPieces->TabIndex = 190;
			this->numCopperPieces->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight10
			// 
			this->itemWeight10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight10->Location = System::Drawing::Point(481, 987);
			this->itemWeight10->Name = L"itemWeight10";
			this->itemWeight10->Size = System::Drawing::Size(33, 13);
			this->itemWeight10->TabIndex = 189;
			this->itemWeight10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName10
			// 
			this->itemName10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName10->Location = System::Drawing::Point(395, 987);
			this->itemName10->Name = L"itemName10";
			this->itemName10->Size = System::Drawing::Size(81, 13);
			this->itemName10->TabIndex = 188;
			// 
			// itemAmt10
			// 
			this->itemAmt10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt10->Location = System::Drawing::Point(363, 987);
			this->itemAmt10->Name = L"itemAmt10";
			this->itemAmt10->Size = System::Drawing::Size(27, 13);
			this->itemAmt10->TabIndex = 187;
			this->itemAmt10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight9
			// 
			this->itemWeight9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight9->Location = System::Drawing::Point(481, 967);
			this->itemWeight9->Name = L"itemWeight9";
			this->itemWeight9->Size = System::Drawing::Size(33, 13);
			this->itemWeight9->TabIndex = 186;
			this->itemWeight9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName9
			// 
			this->itemName9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName9->Location = System::Drawing::Point(395, 967);
			this->itemName9->Name = L"itemName9";
			this->itemName9->Size = System::Drawing::Size(81, 13);
			this->itemName9->TabIndex = 185;
			// 
			// itemAmt9
			// 
			this->itemAmt9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt9->Location = System::Drawing::Point(363, 967);
			this->itemAmt9->Name = L"itemAmt9";
			this->itemAmt9->Size = System::Drawing::Size(27, 13);
			this->itemAmt9->TabIndex = 184;
			this->itemAmt9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight8
			// 
			this->itemWeight8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight8->Location = System::Drawing::Point(481, 947);
			this->itemWeight8->Name = L"itemWeight8";
			this->itemWeight8->Size = System::Drawing::Size(33, 13);
			this->itemWeight8->TabIndex = 183;
			this->itemWeight8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName8
			// 
			this->itemName8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName8->Location = System::Drawing::Point(395, 947);
			this->itemName8->Name = L"itemName8";
			this->itemName8->Size = System::Drawing::Size(81, 13);
			this->itemName8->TabIndex = 182;
			// 
			// itemAmt8
			// 
			this->itemAmt8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt8->Location = System::Drawing::Point(363, 947);
			this->itemAmt8->Name = L"itemAmt8";
			this->itemAmt8->Size = System::Drawing::Size(27, 13);
			this->itemAmt8->TabIndex = 181;
			this->itemAmt8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight7
			// 
			this->itemWeight7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight7->Location = System::Drawing::Point(481, 927);
			this->itemWeight7->Name = L"itemWeight7";
			this->itemWeight7->Size = System::Drawing::Size(33, 13);
			this->itemWeight7->TabIndex = 180;
			this->itemWeight7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName7
			// 
			this->itemName7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName7->Location = System::Drawing::Point(395, 927);
			this->itemName7->Name = L"itemName7";
			this->itemName7->Size = System::Drawing::Size(81, 13);
			this->itemName7->TabIndex = 179;
			// 
			// itemAmt7
			// 
			this->itemAmt7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt7->Location = System::Drawing::Point(363, 927);
			this->itemAmt7->Name = L"itemAmt7";
			this->itemAmt7->Size = System::Drawing::Size(27, 13);
			this->itemAmt7->TabIndex = 178;
			this->itemAmt7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight6
			// 
			this->itemWeight6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight6->Location = System::Drawing::Point(481, 907);
			this->itemWeight6->Name = L"itemWeight6";
			this->itemWeight6->Size = System::Drawing::Size(33, 13);
			this->itemWeight6->TabIndex = 177;
			this->itemWeight6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName6
			// 
			this->itemName6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName6->Location = System::Drawing::Point(395, 907);
			this->itemName6->Name = L"itemName6";
			this->itemName6->Size = System::Drawing::Size(81, 13);
			this->itemName6->TabIndex = 176;
			// 
			// itemAmt6
			// 
			this->itemAmt6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt6->Location = System::Drawing::Point(363, 907);
			this->itemAmt6->Name = L"itemAmt6";
			this->itemAmt6->Size = System::Drawing::Size(27, 13);
			this->itemAmt6->TabIndex = 175;
			this->itemAmt6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight5
			// 
			this->itemWeight5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight5->Location = System::Drawing::Point(481, 887);
			this->itemWeight5->Name = L"itemWeight5";
			this->itemWeight5->Size = System::Drawing::Size(33, 13);
			this->itemWeight5->TabIndex = 174;
			this->itemWeight5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName5
			// 
			this->itemName5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName5->Location = System::Drawing::Point(395, 887);
			this->itemName5->Name = L"itemName5";
			this->itemName5->Size = System::Drawing::Size(81, 13);
			this->itemName5->TabIndex = 173;
			// 
			// itemAmt5
			// 
			this->itemAmt5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt5->Location = System::Drawing::Point(363, 887);
			this->itemAmt5->Name = L"itemAmt5";
			this->itemAmt5->Size = System::Drawing::Size(27, 13);
			this->itemAmt5->TabIndex = 172;
			this->itemAmt5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight4
			// 
			this->itemWeight4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight4->Location = System::Drawing::Point(481, 867);
			this->itemWeight4->Name = L"itemWeight4";
			this->itemWeight4->Size = System::Drawing::Size(33, 13);
			this->itemWeight4->TabIndex = 171;
			this->itemWeight4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName4
			// 
			this->itemName4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName4->Location = System::Drawing::Point(395, 867);
			this->itemName4->Name = L"itemName4";
			this->itemName4->Size = System::Drawing::Size(81, 13);
			this->itemName4->TabIndex = 170;
			// 
			// itemAmt4
			// 
			this->itemAmt4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt4->Location = System::Drawing::Point(363, 867);
			this->itemAmt4->Name = L"itemAmt4";
			this->itemAmt4->Size = System::Drawing::Size(27, 13);
			this->itemAmt4->TabIndex = 169;
			this->itemAmt4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight3
			// 
			this->itemWeight3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight3->Location = System::Drawing::Point(481, 847);
			this->itemWeight3->Name = L"itemWeight3";
			this->itemWeight3->Size = System::Drawing::Size(33, 13);
			this->itemWeight3->TabIndex = 168;
			this->itemWeight3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName3
			// 
			this->itemName3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName3->Location = System::Drawing::Point(395, 847);
			this->itemName3->Name = L"itemName3";
			this->itemName3->Size = System::Drawing::Size(81, 13);
			this->itemName3->TabIndex = 167;
			// 
			// itemAmt3
			// 
			this->itemAmt3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt3->Location = System::Drawing::Point(363, 847);
			this->itemAmt3->Name = L"itemAmt3";
			this->itemAmt3->Size = System::Drawing::Size(27, 13);
			this->itemAmt3->TabIndex = 166;
			this->itemAmt3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight2
			// 
			this->itemWeight2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight2->Location = System::Drawing::Point(481, 827);
			this->itemWeight2->Name = L"itemWeight2";
			this->itemWeight2->Size = System::Drawing::Size(33, 13);
			this->itemWeight2->TabIndex = 165;
			this->itemWeight2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName2
			// 
			this->itemName2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName2->Location = System::Drawing::Point(395, 827);
			this->itemName2->Name = L"itemName2";
			this->itemName2->Size = System::Drawing::Size(81, 13);
			this->itemName2->TabIndex = 164;
			// 
			// itemAmt2
			// 
			this->itemAmt2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt2->Location = System::Drawing::Point(363, 827);
			this->itemAmt2->Name = L"itemAmt2";
			this->itemAmt2->Size = System::Drawing::Size(27, 13);
			this->itemAmt2->TabIndex = 163;
			this->itemAmt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemWeight1
			// 
			this->itemWeight1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemWeight1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemWeight1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemWeight1->Location = System::Drawing::Point(481, 807);
			this->itemWeight1->Name = L"itemWeight1";
			this->itemWeight1->Size = System::Drawing::Size(33, 13);
			this->itemWeight1->TabIndex = 162;
			this->itemWeight1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// itemName1
			// 
			this->itemName1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemName1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName1->Location = System::Drawing::Point(395, 807);
			this->itemName1->Name = L"itemName1";
			this->itemName1->Size = System::Drawing::Size(81, 13);
			this->itemName1->TabIndex = 161;
			// 
			// itemAmt1
			// 
			this->itemAmt1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->itemAmt1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemAmt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemAmt1->Location = System::Drawing::Point(363, 807);
			this->itemAmt1->Name = L"itemAmt1";
			this->itemAmt1->Size = System::Drawing::Size(27, 13);
			this->itemAmt1->TabIndex = 160;
			this->itemAmt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// headerItemWeight
			// 
			this->headerItemWeight->AutoSize = true;
			this->headerItemWeight->BackColor = System::Drawing::SystemColors::Window;
			this->headerItemWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headerItemWeight->Location = System::Drawing::Point(482, 790);
			this->headerItemWeight->Name = L"headerItemWeight";
			this->headerItemWeight->Size = System::Drawing::Size(28, 13);
			this->headerItemWeight->TabIndex = 159;
			this->headerItemWeight->Text = L"WT.";
			// 
			// headerItemName
			// 
			this->headerItemName->AutoSize = true;
			this->headerItemName->BackColor = System::Drawing::SystemColors::Window;
			this->headerItemName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headerItemName->Location = System::Drawing::Point(399, 790);
			this->headerItemName->Name = L"headerItemName";
			this->headerItemName->Size = System::Drawing::Size(67, 13);
			this->headerItemName->TabIndex = 158;
			this->headerItemName->Text = L"ITEM NAME";
			// 
			// headerItemAmt
			// 
			this->headerItemAmt->AutoSize = true;
			this->headerItemAmt->BackColor = System::Drawing::SystemColors::Window;
			this->headerItemAmt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headerItemAmt->Location = System::Drawing::Point(369, 790);
			this->headerItemAmt->Name = L"headerItemAmt";
			this->headerItemAmt->Size = System::Drawing::Size(14, 13);
			this->headerItemAmt->TabIndex = 157;
			this->headerItemAmt->Text = L"#";
			// 
			// profLangProficiency7
			// 
			this->profLangProficiency7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangProficiency7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangProficiency7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangProficiency7->Location = System::Drawing::Point(182, 973);
			this->profLangProficiency7->Name = L"profLangProficiency7";
			this->profLangProficiency7->Size = System::Drawing::Size(85, 13);
			this->profLangProficiency7->TabIndex = 156;
			// 
			// profLangAttribute7
			// 
			this->profLangAttribute7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangAttribute7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangAttribute7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangAttribute7->Location = System::Drawing::Point(98, 973);
			this->profLangAttribute7->Name = L"profLangAttribute7";
			this->profLangAttribute7->Size = System::Drawing::Size(80, 13);
			this->profLangAttribute7->TabIndex = 155;
			this->profLangAttribute7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// profLangType7
			// 
			this->profLangType7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangType7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangType7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profLangType7->Location = System::Drawing::Point(44, 973);
			this->profLangType7->Name = L"profLangType7";
			this->profLangType7->Size = System::Drawing::Size(50, 13);
			this->profLangType7->TabIndex = 154;
			// 
			// profLangProficiency6
			// 
			this->profLangProficiency6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangProficiency6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangProficiency6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangProficiency6->Location = System::Drawing::Point(182, 953);
			this->profLangProficiency6->Name = L"profLangProficiency6";
			this->profLangProficiency6->Size = System::Drawing::Size(85, 13);
			this->profLangProficiency6->TabIndex = 153;
			// 
			// profLangAttribute6
			// 
			this->profLangAttribute6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangAttribute6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangAttribute6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangAttribute6->Location = System::Drawing::Point(98, 953);
			this->profLangAttribute6->Name = L"profLangAttribute6";
			this->profLangAttribute6->Size = System::Drawing::Size(80, 13);
			this->profLangAttribute6->TabIndex = 152;
			this->profLangAttribute6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// profLangType6
			// 
			this->profLangType6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangType6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangType6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profLangType6->Location = System::Drawing::Point(44, 953);
			this->profLangType6->Name = L"profLangType6";
			this->profLangType6->Size = System::Drawing::Size(50, 13);
			this->profLangType6->TabIndex = 151;
			// 
			// profLangProficiency5
			// 
			this->profLangProficiency5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangProficiency5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangProficiency5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangProficiency5->Location = System::Drawing::Point(182, 933);
			this->profLangProficiency5->Name = L"profLangProficiency5";
			this->profLangProficiency5->Size = System::Drawing::Size(85, 13);
			this->profLangProficiency5->TabIndex = 150;
			// 
			// profLangAttribute5
			// 
			this->profLangAttribute5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangAttribute5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangAttribute5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangAttribute5->Location = System::Drawing::Point(98, 933);
			this->profLangAttribute5->Name = L"profLangAttribute5";
			this->profLangAttribute5->Size = System::Drawing::Size(80, 13);
			this->profLangAttribute5->TabIndex = 149;
			this->profLangAttribute5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// profLangType5
			// 
			this->profLangType5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangType5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangType5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profLangType5->Location = System::Drawing::Point(44, 933);
			this->profLangType5->Name = L"profLangType5";
			this->profLangType5->Size = System::Drawing::Size(50, 13);
			this->profLangType5->TabIndex = 148;
			// 
			// profLangProficiency4
			// 
			this->profLangProficiency4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangProficiency4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangProficiency4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangProficiency4->Location = System::Drawing::Point(182, 913);
			this->profLangProficiency4->Name = L"profLangProficiency4";
			this->profLangProficiency4->Size = System::Drawing::Size(85, 13);
			this->profLangProficiency4->TabIndex = 147;
			// 
			// profLangAttribute4
			// 
			this->profLangAttribute4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangAttribute4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangAttribute4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangAttribute4->Location = System::Drawing::Point(98, 913);
			this->profLangAttribute4->Name = L"profLangAttribute4";
			this->profLangAttribute4->Size = System::Drawing::Size(80, 13);
			this->profLangAttribute4->TabIndex = 146;
			this->profLangAttribute4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// profLangType4
			// 
			this->profLangType4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangType4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangType4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profLangType4->Location = System::Drawing::Point(44, 913);
			this->profLangType4->Name = L"profLangType4";
			this->profLangType4->Size = System::Drawing::Size(50, 13);
			this->profLangType4->TabIndex = 145;
			// 
			// profLangProficiency3
			// 
			this->profLangProficiency3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangProficiency3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangProficiency3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangProficiency3->Location = System::Drawing::Point(182, 893);
			this->profLangProficiency3->Name = L"profLangProficiency3";
			this->profLangProficiency3->Size = System::Drawing::Size(85, 13);
			this->profLangProficiency3->TabIndex = 144;
			// 
			// profLangAttribute3
			// 
			this->profLangAttribute3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangAttribute3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangAttribute3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangAttribute3->Location = System::Drawing::Point(98, 893);
			this->profLangAttribute3->Name = L"profLangAttribute3";
			this->profLangAttribute3->Size = System::Drawing::Size(80, 13);
			this->profLangAttribute3->TabIndex = 143;
			this->profLangAttribute3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// profLangType3
			// 
			this->profLangType3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangType3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangType3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profLangType3->Location = System::Drawing::Point(44, 893);
			this->profLangType3->Name = L"profLangType3";
			this->profLangType3->Size = System::Drawing::Size(50, 13);
			this->profLangType3->TabIndex = 142;
			// 
			// profLangProficiency2
			// 
			this->profLangProficiency2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangProficiency2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangProficiency2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangProficiency2->Location = System::Drawing::Point(182, 873);
			this->profLangProficiency2->Name = L"profLangProficiency2";
			this->profLangProficiency2->Size = System::Drawing::Size(85, 13);
			this->profLangProficiency2->TabIndex = 141;
			// 
			// profLangAttribute2
			// 
			this->profLangAttribute2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangAttribute2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangAttribute2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangAttribute2->Location = System::Drawing::Point(98, 873);
			this->profLangAttribute2->Name = L"profLangAttribute2";
			this->profLangAttribute2->Size = System::Drawing::Size(80, 13);
			this->profLangAttribute2->TabIndex = 140;
			this->profLangAttribute2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// profLangType2
			// 
			this->profLangType2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangType2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangType2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profLangType2->Location = System::Drawing::Point(44, 873);
			this->profLangType2->Name = L"profLangType2";
			this->profLangType2->Size = System::Drawing::Size(50, 13);
			this->profLangType2->TabIndex = 139;
			// 
			// profLangProficiency1
			// 
			this->profLangProficiency1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangProficiency1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangProficiency1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangProficiency1->Location = System::Drawing::Point(182, 853);
			this->profLangProficiency1->Name = L"profLangProficiency1";
			this->profLangProficiency1->Size = System::Drawing::Size(85, 13);
			this->profLangProficiency1->TabIndex = 138;
			// 
			// profLangAttribute1
			// 
			this->profLangAttribute1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangAttribute1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangAttribute1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->profLangAttribute1->Location = System::Drawing::Point(98, 853);
			this->profLangAttribute1->Name = L"profLangAttribute1";
			this->profLangAttribute1->Size = System::Drawing::Size(80, 13);
			this->profLangAttribute1->TabIndex = 137;
			this->profLangAttribute1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// profLangType1
			// 
			this->profLangType1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profLangType1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->profLangType1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profLangType1->Location = System::Drawing::Point(44, 853);
			this->profLangType1->Name = L"profLangType1";
			this->profLangType1->Size = System::Drawing::Size(50, 13);
			this->profLangType1->TabIndex = 136;
			// 
			// headerProfLangProficiency
			// 
			this->headerProfLangProficiency->AutoSize = true;
			this->headerProfLangProficiency->BackColor = System::Drawing::SystemColors::Window;
			this->headerProfLangProficiency->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->headerProfLangProficiency->Location = System::Drawing::Point(184, 836);
			this->headerProfLangProficiency->Name = L"headerProfLangProficiency";
			this->headerProfLangProficiency->Size = System::Drawing::Size(76, 13);
			this->headerProfLangProficiency->TabIndex = 135;
			this->headerProfLangProficiency->Text = L"PROFICIENCY";
			// 
			// headerProfLangAttribute
			// 
			this->headerProfLangAttribute->AutoSize = true;
			this->headerProfLangAttribute->BackColor = System::Drawing::SystemColors::Window;
			this->headerProfLangAttribute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->headerProfLangAttribute->Location = System::Drawing::Point(103, 836);
			this->headerProfLangAttribute->Name = L"headerProfLangAttribute";
			this->headerProfLangAttribute->Size = System::Drawing::Size(60, 13);
			this->headerProfLangAttribute->TabIndex = 134;
			this->headerProfLangAttribute->Text = L"ATTRIBUTE";
			// 
			// headerProfLangType
			// 
			this->headerProfLangType->AutoSize = true;
			this->headerProfLangType->BackColor = System::Drawing::SystemColors::Window;
			this->headerProfLangType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->headerProfLangType->Location = System::Drawing::Point(52, 836);
			this->headerProfLangType->Name = L"headerProfLangType";
			this->headerProfLangType->Size = System::Drawing::Size(33, 13);
			this->headerProfLangType->TabIndex = 133;
			this->headerProfLangType->Text = L"TYPE";
			// 
			// attackDamageType11
			// 
			this->attackDamageType11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType11->Location = System::Drawing::Point(437, 723);
			this->attackDamageType11->Name = L"attackDamageType11";
			this->attackDamageType11->Size = System::Drawing::Size(80, 13);
			this->attackDamageType11->TabIndex = 53;
			// 
			// attackBonus11
			// 
			this->attackBonus11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus11->Location = System::Drawing::Point(386, 723);
			this->attackBonus11->Name = L"attackBonus11";
			this->attackBonus11->Size = System::Drawing::Size(43, 13);
			this->attackBonus11->TabIndex = 52;
			this->attackBonus11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName11
			// 
			this->attackName11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName11->Location = System::Drawing::Point(296, 723);
			this->attackName11->Name = L"attackName11";
			this->attackName11->Size = System::Drawing::Size(79, 13);
			this->attackName11->TabIndex = 51;
			// 
			// attackDamageType10
			// 
			this->attackDamageType10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType10->Location = System::Drawing::Point(437, 703);
			this->attackDamageType10->Name = L"attackDamageType10";
			this->attackDamageType10->Size = System::Drawing::Size(80, 13);
			this->attackDamageType10->TabIndex = 50;
			// 
			// attackBonus10
			// 
			this->attackBonus10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus10->Location = System::Drawing::Point(386, 703);
			this->attackBonus10->Name = L"attackBonus10";
			this->attackBonus10->Size = System::Drawing::Size(43, 13);
			this->attackBonus10->TabIndex = 49;
			this->attackBonus10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName10
			// 
			this->attackName10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName10->Location = System::Drawing::Point(296, 703);
			this->attackName10->Name = L"attackName10";
			this->attackName10->Size = System::Drawing::Size(79, 13);
			this->attackName10->TabIndex = 48;
			// 
			// attackDamageType9
			// 
			this->attackDamageType9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType9->Location = System::Drawing::Point(437, 683);
			this->attackDamageType9->Name = L"attackDamageType9";
			this->attackDamageType9->Size = System::Drawing::Size(80, 13);
			this->attackDamageType9->TabIndex = 47;
			// 
			// attackBonus9
			// 
			this->attackBonus9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus9->Location = System::Drawing::Point(386, 683);
			this->attackBonus9->Name = L"attackBonus9";
			this->attackBonus9->Size = System::Drawing::Size(43, 13);
			this->attackBonus9->TabIndex = 46;
			this->attackBonus9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName9
			// 
			this->attackName9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName9->Location = System::Drawing::Point(296, 683);
			this->attackName9->Name = L"attackName9";
			this->attackName9->Size = System::Drawing::Size(79, 13);
			this->attackName9->TabIndex = 45;
			// 
			// attackDamageType8
			// 
			this->attackDamageType8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType8->Location = System::Drawing::Point(437, 663);
			this->attackDamageType8->Name = L"attackDamageType8";
			this->attackDamageType8->Size = System::Drawing::Size(80, 13);
			this->attackDamageType8->TabIndex = 44;
			// 
			// attackBonus8
			// 
			this->attackBonus8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus8->Location = System::Drawing::Point(386, 663);
			this->attackBonus8->Name = L"attackBonus8";
			this->attackBonus8->Size = System::Drawing::Size(43, 13);
			this->attackBonus8->TabIndex = 43;
			this->attackBonus8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName8
			// 
			this->attackName8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName8->Location = System::Drawing::Point(296, 663);
			this->attackName8->Name = L"attackName8";
			this->attackName8->Size = System::Drawing::Size(79, 13);
			this->attackName8->TabIndex = 42;
			// 
			// attackDamageType7
			// 
			this->attackDamageType7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType7->Location = System::Drawing::Point(437, 643);
			this->attackDamageType7->Name = L"attackDamageType7";
			this->attackDamageType7->Size = System::Drawing::Size(80, 13);
			this->attackDamageType7->TabIndex = 41;
			// 
			// attackBonus7
			// 
			this->attackBonus7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus7->Location = System::Drawing::Point(386, 643);
			this->attackBonus7->Name = L"attackBonus7";
			this->attackBonus7->Size = System::Drawing::Size(43, 13);
			this->attackBonus7->TabIndex = 40;
			this->attackBonus7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName7
			// 
			this->attackName7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName7->Location = System::Drawing::Point(296, 643);
			this->attackName7->Name = L"attackName7";
			this->attackName7->Size = System::Drawing::Size(79, 13);
			this->attackName7->TabIndex = 39;
			// 
			// attackDamageType6
			// 
			this->attackDamageType6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType6->Location = System::Drawing::Point(437, 623);
			this->attackDamageType6->Name = L"attackDamageType6";
			this->attackDamageType6->Size = System::Drawing::Size(80, 13);
			this->attackDamageType6->TabIndex = 38;
			// 
			// attackBonus6
			// 
			this->attackBonus6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus6->Location = System::Drawing::Point(386, 623);
			this->attackBonus6->Name = L"attackBonus6";
			this->attackBonus6->Size = System::Drawing::Size(43, 13);
			this->attackBonus6->TabIndex = 37;
			this->attackBonus6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName6
			// 
			this->attackName6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName6->Location = System::Drawing::Point(296, 623);
			this->attackName6->Name = L"attackName6";
			this->attackName6->Size = System::Drawing::Size(79, 13);
			this->attackName6->TabIndex = 36;
			// 
			// attackDamageType5
			// 
			this->attackDamageType5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackDamageType5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackDamageType5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attackDamageType5->Location = System::Drawing::Point(437, 603);
			this->attackDamageType5->Name = L"attackDamageType5";
			this->attackDamageType5->Size = System::Drawing::Size(80, 13);
			this->attackDamageType5->TabIndex = 35;
			// 
			// attackBonus5
			// 
			this->attackBonus5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackBonus5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackBonus5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackBonus5->Location = System::Drawing::Point(386, 603);
			this->attackBonus5->Name = L"attackBonus5";
			this->attackBonus5->Size = System::Drawing::Size(43, 13);
			this->attackBonus5->TabIndex = 34;
			this->attackBonus5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// attackName5
			// 
			this->attackName5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->attackName5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->attackName5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackName5->Location = System::Drawing::Point(296, 603);
			this->attackName5->Name = L"attackName5";
			this->attackName5->Size = System::Drawing::Size(79, 13);
			this->attackName5->TabIndex = 33;
			// 
			// tabs
			// 
			this->tabs->Controls->Add(this->tabPage1);
			this->tabs->Controls->Add(this->tabPage2);
			this->tabs->Controls->Add(this->tabPage3);
			this->tabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabs->Location = System::Drawing::Point(1, 2);
			this->tabs->Multiline = true;
			this->tabs->Name = L"tabs";
			this->tabs->SelectedIndex = 0;
			this->tabs->Size = System::Drawing::Size(821, 1082);
			this->tabs->TabIndex = 113;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->sheetBackground1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(813, 1053);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"CORE";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->sheetBackground2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(813, 1053);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"BIO";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// sheetBackground2
			// 
			this->sheetBackground2->AutoScroll = true;
			this->sheetBackground2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sheetBackground2.BackgroundImage")));
			this->sheetBackground2->Controls->Add(this->charTreasure);
			this->sheetBackground2->Controls->Add(this->charAdditionalFeaturesTraits);
			this->sheetBackground2->Controls->Add(this->charBackstory);
			this->sheetBackground2->Controls->Add(this->charAppearance);
			this->sheetBackground2->Controls->Add(this->charAlliesOrganizations);
			this->sheetBackground2->Controls->Add(this->charHair);
			this->sheetBackground2->Controls->Add(this->charSkin);
			this->sheetBackground2->Controls->Add(this->charEyes);
			this->sheetBackground2->Controls->Add(this->charWeight);
			this->sheetBackground2->Controls->Add(this->charHeight);
			this->sheetBackground2->Controls->Add(this->charAge);
			this->sheetBackground2->Controls->Add(this->charNameBIO);
			this->sheetBackground2->Location = System::Drawing::Point(-2, -1);
			this->sheetBackground2->Name = L"sheetBackground2";
			this->sheetBackground2->Size = System::Drawing::Size(816, 1047);
			this->sheetBackground2->TabIndex = 113;
			// 
			// charTreasure
			// 
			this->charTreasure->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charTreasure->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charTreasure->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charTreasure->Location = System::Drawing::Point(301, 808);
			this->charTreasure->Margin = System::Windows::Forms::Padding(2);
			this->charTreasure->Multiline = true;
			this->charTreasure->Name = L"charTreasure";
			this->charTreasure->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->charTreasure->Size = System::Drawing::Size(466, 199);
			this->charTreasure->TabIndex = 101;
			// 
			// charAdditionalFeaturesTraits
			// 
			this->charAdditionalFeaturesTraits->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charAdditionalFeaturesTraits->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charAdditionalFeaturesTraits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->charAdditionalFeaturesTraits->Location = System::Drawing::Point(301, 504);
			this->charAdditionalFeaturesTraits->Margin = System::Windows::Forms::Padding(2);
			this->charAdditionalFeaturesTraits->Multiline = true;
			this->charAdditionalFeaturesTraits->Name = L"charAdditionalFeaturesTraits";
			this->charAdditionalFeaturesTraits->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->charAdditionalFeaturesTraits->Size = System::Drawing::Size(466, 269);
			this->charAdditionalFeaturesTraits->TabIndex = 100;
			// 
			// charBackstory
			// 
			this->charBackstory->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charBackstory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charBackstory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charBackstory->Location = System::Drawing::Point(52, 516);
			this->charBackstory->Margin = System::Windows::Forms::Padding(2);
			this->charBackstory->Multiline = true;
			this->charBackstory->Name = L"charBackstory";
			this->charBackstory->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->charBackstory->Size = System::Drawing::Size(209, 491);
			this->charBackstory->TabIndex = 99;
			// 
			// charAppearance
			// 
			this->charAppearance->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charAppearance->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charAppearance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charAppearance->Location = System::Drawing::Point(52, 175);
			this->charAppearance->Margin = System::Windows::Forms::Padding(2);
			this->charAppearance->Multiline = true;
			this->charAppearance->Name = L"charAppearance";
			this->charAppearance->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->charAppearance->Size = System::Drawing::Size(209, 291);
			this->charAppearance->TabIndex = 98;
			// 
			// charAlliesOrganizations
			// 
			this->charAlliesOrganizations->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charAlliesOrganizations->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charAlliesOrganizations->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->charAlliesOrganizations->Location = System::Drawing::Point(301, 175);
			this->charAlliesOrganizations->Margin = System::Windows::Forms::Padding(2);
			this->charAlliesOrganizations->Multiline = true;
			this->charAlliesOrganizations->Name = L"charAlliesOrganizations";
			this->charAlliesOrganizations->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->charAlliesOrganizations->Size = System::Drawing::Size(466, 291);
			this->charAlliesOrganizations->TabIndex = 97;
			// 
			// charHair
			// 
			this->charHair->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charHair->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charHair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charHair->Location = System::Drawing::Point(637, 105);
			this->charHair->Name = L"charHair";
			this->charHair->Size = System::Drawing::Size(100, 15);
			this->charHair->TabIndex = 7;
			this->charHair->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charSkin
			// 
			this->charSkin->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charSkin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charSkin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charSkin->Location = System::Drawing::Point(509, 105);
			this->charSkin->Name = L"charSkin";
			this->charSkin->Size = System::Drawing::Size(100, 15);
			this->charSkin->TabIndex = 6;
			this->charSkin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charEyes
			// 
			this->charEyes->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charEyes->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charEyes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charEyes->Location = System::Drawing::Point(358, 105);
			this->charEyes->Name = L"charEyes";
			this->charEyes->Size = System::Drawing::Size(100, 15);
			this->charEyes->TabIndex = 5;
			this->charEyes->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charWeight
			// 
			this->charWeight->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charWeight->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charWeight->Location = System::Drawing::Point(637, 70);
			this->charWeight->Name = L"charWeight";
			this->charWeight->Size = System::Drawing::Size(100, 15);
			this->charWeight->TabIndex = 4;
			this->charWeight->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charHeight
			// 
			this->charHeight->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charHeight->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charHeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charHeight->Location = System::Drawing::Point(509, 70);
			this->charHeight->Name = L"charHeight";
			this->charHeight->Size = System::Drawing::Size(100, 15);
			this->charHeight->TabIndex = 3;
			this->charHeight->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charAge
			// 
			this->charAge->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charAge->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charAge->Location = System::Drawing::Point(358, 70);
			this->charAge->Name = L"charAge";
			this->charAge->Size = System::Drawing::Size(100, 15);
			this->charAge->TabIndex = 1;
			this->charAge->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charNameBIO
			// 
			this->charNameBIO->BackColor = System::Drawing::SystemColors::ControlLight;
			this->charNameBIO->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->charNameBIO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charNameBIO->Location = System::Drawing::Point(86, 90);
			this->charNameBIO->Name = L"charNameBIO";
			this->charNameBIO->Size = System::Drawing::Size(199, 22);
			this->charNameBIO->TabIndex = 0;
			this->charNameBIO->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->panel1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(813, 1053);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"SPELLS";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->spellAttackBonus);
			this->panel1->Controls->Add(this->spellSaveDC);
			this->panel1->Controls->Add(this->spellcastAbility);
			this->panel1->Controls->Add(this->spellcastClass);
			this->panel1->Controls->Add(this->list9thLevelSpells);
			this->panel1->Controls->Add(this->list8thLevelSpells);
			this->panel1->Controls->Add(this->list7thLevelSpells);
			this->panel1->Controls->Add(this->list6thLevelSpells);
			this->panel1->Controls->Add(this->list5thLevelSpells);
			this->panel1->Controls->Add(this->list4thLevelSpells);
			this->panel1->Controls->Add(this->list3rdLevelSpells);
			this->panel1->Controls->Add(this->list2ndLevelSpells);
			this->panel1->Controls->Add(this->list1stLevelSpells);
			this->panel1->Controls->Add(this->listCantrips);
			this->panel1->Controls->Add(this->remainingLevel9Slots);
			this->panel1->Controls->Add(this->remainingLevel8Slots);
			this->panel1->Controls->Add(this->remainingLevel7Slots);
			this->panel1->Controls->Add(this->remainingLevel6Slots);
			this->panel1->Controls->Add(this->remainingLevel5Slots);
			this->panel1->Controls->Add(this->remainingLevel4Slots);
			this->panel1->Controls->Add(this->remainingLevel3Slots);
			this->panel1->Controls->Add(this->remainingLevel2Slots);
			this->panel1->Controls->Add(this->remainingLevel1Slots);
			this->panel1->Controls->Add(this->totalLevel5Slots);
			this->panel1->Controls->Add(this->totalLevel9Slots);
			this->panel1->Controls->Add(this->totalLevel8Slots);
			this->panel1->Controls->Add(this->totalLevel7Slots);
			this->panel1->Controls->Add(this->totalLevel6Slots);
			this->panel1->Controls->Add(this->totalLevel3Slots);
			this->panel1->Controls->Add(this->totalLevel4Slots);
			this->panel1->Controls->Add(this->totalLevel2Slots);
			this->panel1->Controls->Add(this->totalLevel1Slots);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->buttonAddSpell);
			this->panel1->Controls->Add(this->buttonExpandSpells);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(816, 1047);
			this->panel1->TabIndex = 114;
			// 
			// spellAttackBonus
			// 
			this->spellAttackBonus->BackColor = System::Drawing::SystemColors::ControlLight;
			this->spellAttackBonus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->spellAttackBonus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spellAttackBonus->Location = System::Drawing::Point(655, 74);
			this->spellAttackBonus->Name = L"spellAttackBonus";
			this->spellAttackBonus->Size = System::Drawing::Size(75, 31);
			this->spellAttackBonus->TabIndex = 73;
			this->spellAttackBonus->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// spellSaveDC
			// 
			this->spellSaveDC->BackColor = System::Drawing::SystemColors::ControlLight;
			this->spellSaveDC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->spellSaveDC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellSaveDC->Location = System::Drawing::Point(517, 74);
			this->spellSaveDC->Name = L"spellSaveDC";
			this->spellSaveDC->Size = System::Drawing::Size(75, 31);
			this->spellSaveDC->TabIndex = 72;
			this->spellSaveDC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// spellcastAbility
			// 
			this->spellcastAbility->BackColor = System::Drawing::SystemColors::ControlLight;
			this->spellcastAbility->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->spellcastAbility->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spellcastAbility->Location = System::Drawing::Point(383, 74);
			this->spellcastAbility->Name = L"spellcastAbility";
			this->spellcastAbility->Size = System::Drawing::Size(75, 31);
			this->spellcastAbility->TabIndex = 71;
			this->spellcastAbility->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// spellcastClass
			// 
			this->spellcastClass->BackColor = System::Drawing::SystemColors::ControlLight;
			this->spellcastClass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->spellcastClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellcastClass->Location = System::Drawing::Point(87, 87);
			this->spellcastClass->Name = L"spellcastClass";
			this->spellcastClass->Size = System::Drawing::Size(199, 22);
			this->spellcastClass->TabIndex = 70;
			this->spellcastClass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// list9thLevelSpells
			// 
			this->list9thLevelSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list9thLevelSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->list9thLevelSpells->FormattingEnabled = true;
			this->list9thLevelSpells->ItemHeight = 16;
			this->list9thLevelSpells->Location = System::Drawing::Point(536, 876);
			this->list9thLevelSpells->Name = L"list9thLevelSpells";
			this->list9thLevelSpells->Size = System::Drawing::Size(241, 112);
			this->list9thLevelSpells->TabIndex = 69;
			// 
			// list8thLevelSpells
			// 
			this->list8thLevelSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list8thLevelSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->list8thLevelSpells->FormattingEnabled = true;
			this->list8thLevelSpells->ItemHeight = 16;
			this->list8thLevelSpells->Location = System::Drawing::Point(537, 688);
			this->list8thLevelSpells->Name = L"list8thLevelSpells";
			this->list8thLevelSpells->Size = System::Drawing::Size(247, 96);
			this->list8thLevelSpells->TabIndex = 68;
			// 
			// list7thLevelSpells
			// 
			this->list7thLevelSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list7thLevelSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->list7thLevelSpells->FormattingEnabled = true;
			this->list7thLevelSpells->ItemHeight = 16;
			this->list7thLevelSpells->Location = System::Drawing::Point(537, 462);
			this->list7thLevelSpells->Name = L"list7thLevelSpells";
			this->list7thLevelSpells->Size = System::Drawing::Size(247, 160);
			this->list7thLevelSpells->TabIndex = 67;
			// 
			// list6thLevelSpells
			// 
			this->list6thLevelSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list6thLevelSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->list6thLevelSpells->FormattingEnabled = true;
			this->list6thLevelSpells->ItemHeight = 16;
			this->list6thLevelSpells->Location = System::Drawing::Point(537, 234);
			this->list6thLevelSpells->Name = L"list6thLevelSpells";
			this->list6thLevelSpells->Size = System::Drawing::Size(247, 160);
			this->list6thLevelSpells->TabIndex = 67;
			// 
			// list5thLevelSpells
			// 
			this->list5thLevelSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list5thLevelSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->list5thLevelSpells->FormattingEnabled = true;
			this->list5thLevelSpells->ItemHeight = 16;
			this->list5thLevelSpells->Location = System::Drawing::Point(285, 838);
			this->list5thLevelSpells->Name = L"list5thLevelSpells";
			this->list5thLevelSpells->Size = System::Drawing::Size(244, 160);
			this->list5thLevelSpells->TabIndex = 67;
			// 
			// list4thLevelSpells
			// 
			this->list4thLevelSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list4thLevelSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->list4thLevelSpells->FormattingEnabled = true;
			this->list4thLevelSpells->ItemHeight = 16;
			this->list4thLevelSpells->Location = System::Drawing::Point(285, 536);
			this->list4thLevelSpells->Name = L"list4thLevelSpells";
			this->list4thLevelSpells->Size = System::Drawing::Size(244, 240);
			this->list4thLevelSpells->TabIndex = 69;
			// 
			// list3rdLevelSpells
			// 
			this->list3rdLevelSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list3rdLevelSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->list3rdLevelSpells->FormattingEnabled = true;
			this->list3rdLevelSpells->ItemHeight = 16;
			this->list3rdLevelSpells->Location = System::Drawing::Point(285, 234);
			this->list3rdLevelSpells->Name = L"list3rdLevelSpells";
			this->list3rdLevelSpells->Size = System::Drawing::Size(244, 240);
			this->list3rdLevelSpells->TabIndex = 68;
			// 
			// list2ndLevelSpells
			// 
			this->list2ndLevelSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list2ndLevelSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->list2ndLevelSpells->FormattingEnabled = true;
			this->list2ndLevelSpells->ItemHeight = 16;
			this->list2ndLevelSpells->Location = System::Drawing::Point(34, 764);
			this->list2ndLevelSpells->Name = L"list2ndLevelSpells";
			this->list2ndLevelSpells->Size = System::Drawing::Size(244, 240);
			this->list2ndLevelSpells->TabIndex = 68;
			// 
			// list1stLevelSpells
			// 
			this->list1stLevelSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list1stLevelSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->list1stLevelSpells->FormattingEnabled = true;
			this->list1stLevelSpells->ItemHeight = 16;
			this->list1stLevelSpells->Location = System::Drawing::Point(34, 459);
			this->list1stLevelSpells->Name = L"list1stLevelSpells";
			this->list1stLevelSpells->Size = System::Drawing::Size(244, 240);
			this->list1stLevelSpells->TabIndex = 67;
			// 
			// listCantrips
			// 
			this->listCantrips->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listCantrips->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listCantrips->FormattingEnabled = true;
			this->listCantrips->ItemHeight = 16;
			this->listCantrips->Location = System::Drawing::Point(33, 234);
			this->listCantrips->Name = L"listCantrips";
			this->listCantrips->Size = System::Drawing::Size(245, 128);
			this->listCantrips->TabIndex = 66;
			// 
			// remainingLevel9Slots
			// 
			this->remainingLevel9Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->remainingLevel9Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remainingLevel9Slots->Location = System::Drawing::Point(653, 836);
			this->remainingLevel9Slots->Name = L"remainingLevel9Slots";
			this->remainingLevel9Slots->Size = System::Drawing::Size(110, 22);
			this->remainingLevel9Slots->TabIndex = 65;
			this->remainingLevel9Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// remainingLevel8Slots
			// 
			this->remainingLevel8Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->remainingLevel8Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remainingLevel8Slots->Location = System::Drawing::Point(653, 648);
			this->remainingLevel8Slots->Name = L"remainingLevel8Slots";
			this->remainingLevel8Slots->Size = System::Drawing::Size(110, 22);
			this->remainingLevel8Slots->TabIndex = 64;
			this->remainingLevel8Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// remainingLevel7Slots
			// 
			this->remainingLevel7Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->remainingLevel7Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remainingLevel7Slots->Location = System::Drawing::Point(653, 422);
			this->remainingLevel7Slots->Name = L"remainingLevel7Slots";
			this->remainingLevel7Slots->Size = System::Drawing::Size(110, 22);
			this->remainingLevel7Slots->TabIndex = 63;
			this->remainingLevel7Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// remainingLevel6Slots
			// 
			this->remainingLevel6Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->remainingLevel6Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remainingLevel6Slots->Location = System::Drawing::Point(653, 195);
			this->remainingLevel6Slots->Name = L"remainingLevel6Slots";
			this->remainingLevel6Slots->Size = System::Drawing::Size(110, 22);
			this->remainingLevel6Slots->TabIndex = 62;
			this->remainingLevel6Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// remainingLevel5Slots
			// 
			this->remainingLevel5Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->remainingLevel5Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remainingLevel5Slots->Location = System::Drawing::Point(401, 799);
			this->remainingLevel5Slots->Name = L"remainingLevel5Slots";
			this->remainingLevel5Slots->Size = System::Drawing::Size(110, 22);
			this->remainingLevel5Slots->TabIndex = 61;
			this->remainingLevel5Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// remainingLevel4Slots
			// 
			this->remainingLevel4Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->remainingLevel4Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remainingLevel4Slots->Location = System::Drawing::Point(401, 496);
			this->remainingLevel4Slots->Name = L"remainingLevel4Slots";
			this->remainingLevel4Slots->Size = System::Drawing::Size(110, 22);
			this->remainingLevel4Slots->TabIndex = 60;
			this->remainingLevel4Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// remainingLevel3Slots
			// 
			this->remainingLevel3Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->remainingLevel3Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remainingLevel3Slots->Location = System::Drawing::Point(401, 195);
			this->remainingLevel3Slots->Name = L"remainingLevel3Slots";
			this->remainingLevel3Slots->Size = System::Drawing::Size(110, 22);
			this->remainingLevel3Slots->TabIndex = 59;
			this->remainingLevel3Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// remainingLevel2Slots
			// 
			this->remainingLevel2Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->remainingLevel2Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remainingLevel2Slots->Location = System::Drawing::Point(148, 724);
			this->remainingLevel2Slots->Name = L"remainingLevel2Slots";
			this->remainingLevel2Slots->Size = System::Drawing::Size(110, 22);
			this->remainingLevel2Slots->TabIndex = 58;
			this->remainingLevel2Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// remainingLevel1Slots
			// 
			this->remainingLevel1Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->remainingLevel1Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remainingLevel1Slots->Location = System::Drawing::Point(150, 419);
			this->remainingLevel1Slots->Name = L"remainingLevel1Slots";
			this->remainingLevel1Slots->Size = System::Drawing::Size(110, 22);
			this->remainingLevel1Slots->TabIndex = 57;
			this->remainingLevel1Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// totalLevel5Slots
			// 
			this->totalLevel5Slots->BackColor = System::Drawing::SystemColors::ControlLight;
			this->totalLevel5Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalLevel5Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLevel5Slots->Location = System::Drawing::Point(326, 798);
			this->totalLevel5Slots->Name = L"totalLevel5Slots";
			this->totalLevel5Slots->Size = System::Drawing::Size(43, 22);
			this->totalLevel5Slots->TabIndex = 56;
			this->totalLevel5Slots->Text = L"0";
			this->totalLevel5Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalLevel5Slots->TextChanged += gcnew System::EventHandler(this, &MyForm::totalLevel5Slots_TextChanged);
			// 
			// totalLevel9Slots
			// 
			this->totalLevel9Slots->BackColor = System::Drawing::SystemColors::ControlLight;
			this->totalLevel9Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalLevel9Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLevel9Slots->Location = System::Drawing::Point(574, 836);
			this->totalLevel9Slots->Name = L"totalLevel9Slots";
			this->totalLevel9Slots->Size = System::Drawing::Size(43, 22);
			this->totalLevel9Slots->TabIndex = 55;
			this->totalLevel9Slots->Text = L"0";
			this->totalLevel9Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalLevel9Slots->TextChanged += gcnew System::EventHandler(this, &MyForm::totalLevel9Slots_TextChanged);
			// 
			// totalLevel8Slots
			// 
			this->totalLevel8Slots->BackColor = System::Drawing::SystemColors::ControlLight;
			this->totalLevel8Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalLevel8Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLevel8Slots->Location = System::Drawing::Point(574, 648);
			this->totalLevel8Slots->Name = L"totalLevel8Slots";
			this->totalLevel8Slots->Size = System::Drawing::Size(43, 22);
			this->totalLevel8Slots->TabIndex = 54;
			this->totalLevel8Slots->Text = L"0";
			this->totalLevel8Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalLevel8Slots->TextChanged += gcnew System::EventHandler(this, &MyForm::totalLevel8Slots_TextChanged);
			// 
			// totalLevel7Slots
			// 
			this->totalLevel7Slots->BackColor = System::Drawing::SystemColors::ControlLight;
			this->totalLevel7Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalLevel7Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLevel7Slots->Location = System::Drawing::Point(574, 422);
			this->totalLevel7Slots->Name = L"totalLevel7Slots";
			this->totalLevel7Slots->Size = System::Drawing::Size(43, 22);
			this->totalLevel7Slots->TabIndex = 53;
			this->totalLevel7Slots->Text = L"0";
			this->totalLevel7Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalLevel7Slots->TextChanged += gcnew System::EventHandler(this, &MyForm::totalLevel7Slots_TextChanged);
			// 
			// totalLevel6Slots
			// 
			this->totalLevel6Slots->BackColor = System::Drawing::SystemColors::ControlLight;
			this->totalLevel6Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalLevel6Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLevel6Slots->Location = System::Drawing::Point(574, 196);
			this->totalLevel6Slots->Name = L"totalLevel6Slots";
			this->totalLevel6Slots->Size = System::Drawing::Size(43, 22);
			this->totalLevel6Slots->TabIndex = 52;
			this->totalLevel6Slots->Text = L"0";
			this->totalLevel6Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalLevel6Slots->TextChanged += gcnew System::EventHandler(this, &MyForm::totalLevel6Slots_TextChanged);
			// 
			// totalLevel3Slots
			// 
			this->totalLevel3Slots->BackColor = System::Drawing::SystemColors::ControlLight;
			this->totalLevel3Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalLevel3Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLevel3Slots->Location = System::Drawing::Point(326, 195);
			this->totalLevel3Slots->Name = L"totalLevel3Slots";
			this->totalLevel3Slots->Size = System::Drawing::Size(43, 22);
			this->totalLevel3Slots->TabIndex = 51;
			this->totalLevel3Slots->Text = L"0";
			this->totalLevel3Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalLevel3Slots->TextChanged += gcnew System::EventHandler(this, &MyForm::totalLevel3Slots_TextChanged);
			// 
			// totalLevel4Slots
			// 
			this->totalLevel4Slots->BackColor = System::Drawing::SystemColors::ControlLight;
			this->totalLevel4Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalLevel4Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLevel4Slots->Location = System::Drawing::Point(326, 496);
			this->totalLevel4Slots->Name = L"totalLevel4Slots";
			this->totalLevel4Slots->Size = System::Drawing::Size(43, 22);
			this->totalLevel4Slots->TabIndex = 50;
			this->totalLevel4Slots->Text = L"0";
			this->totalLevel4Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalLevel4Slots->TextChanged += gcnew System::EventHandler(this, &MyForm::totalLevel4Slots_TextChanged);
			// 
			// totalLevel2Slots
			// 
			this->totalLevel2Slots->BackColor = System::Drawing::SystemColors::ControlLight;
			this->totalLevel2Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalLevel2Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLevel2Slots->Location = System::Drawing::Point(72, 724);
			this->totalLevel2Slots->Name = L"totalLevel2Slots";
			this->totalLevel2Slots->Size = System::Drawing::Size(43, 22);
			this->totalLevel2Slots->TabIndex = 49;
			this->totalLevel2Slots->Text = L"0";
			this->totalLevel2Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalLevel2Slots->TextChanged += gcnew System::EventHandler(this, &MyForm::totalLevel2Slots_TextChanged);
			// 
			// totalLevel1Slots
			// 
			this->totalLevel1Slots->BackColor = System::Drawing::SystemColors::ControlLight;
			this->totalLevel1Slots->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalLevel1Slots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLevel1Slots->Location = System::Drawing::Point(72, 419);
			this->totalLevel1Slots->Name = L"totalLevel1Slots";
			this->totalLevel1Slots->Size = System::Drawing::Size(43, 22);
			this->totalLevel1Slots->TabIndex = 48;
			this->totalLevel1Slots->Text = L"0";
			this->totalLevel1Slots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalLevel1Slots->TextChanged += gcnew System::EventHandler(this, &MyForm::totalLevel1Slots_TextChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(112, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 21);
			this->label2->TabIndex = 47;
			this->label2->Text = L"CANTRIPS";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonAddSpell
			// 
			this->buttonAddSpell->Location = System::Drawing::Point(478, 11);
			this->buttonAddSpell->Name = L"buttonAddSpell";
			this->buttonAddSpell->Size = System::Drawing::Size(134, 23);
			this->buttonAddSpell->TabIndex = 12;
			this->buttonAddSpell->Text = L"Add New Spell";
			this->buttonAddSpell->UseVisualStyleBackColor = true;
			this->buttonAddSpell->Click += gcnew System::EventHandler(this, &MyForm::buttonAddSpell_Click);
			// 
			// buttonExpandSpells
			// 
			this->buttonExpandSpells->Location = System::Drawing::Point(618, 11);
			this->buttonExpandSpells->Name = L"buttonExpandSpells";
			this->buttonExpandSpells->Size = System::Drawing::Size(166, 23);
			this->buttonExpandSpells->TabIndex = 11;
			this->buttonExpandSpells->Text = L"Expand Spells List";
			this->buttonExpandSpells->UseVisualStyleBackColor = true;
			this->buttonExpandSpells->Click += gcnew System::EventHandler(this, &MyForm::buttonExpandCantrips_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(822, 765);
			this->Controls->Add(this->tabs);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->currentHitPoints))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->charLevel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->currentNumHitDie))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tempHitPoints))->EndInit();
			this->sheetBackground1->ResumeLayout(false);
			this->sheetBackground1->PerformLayout();
			this->tabs->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->sheetBackground2->ResumeLayout(false);
			this->sheetBackground2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel9Slots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel8Slots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel7Slots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel6Slots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel5Slots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel4Slots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel3Slots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel2Slots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remainingLevel1Slots))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//
		// Load previously saved data.
		//
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

			// Create temporary directories and copy saved data to them.
			createTempData();

			//
			// *** CORE CHARACTER SHEET ***
			//

			//
			// Basic character details
			//
			readSingleLineTextboxFromCSV("Character_Info/temp/CORE/Base_Details.txt", charNameCORE, charClass, charBackground, playerName, charRace, charAlignment, charExp);
			readNumericUpdownFromCSV("Character_Info/temp/CORE/Character_Level.txt", charLevel);

			//
			// Ability scores and saving throw proficiencies
			//
			readSingleLineTextboxFromCSV("Character_Info/temp/CORE/Ability_Scores.txt", scoreSTR, scoreDEX, scoreCON, scoreINT, scoreWIS, scoreCHA);
			readCheckboxFromCSV("Character_Info/temp/CORE/Saving_Throw_Proficiencies.txt", saveProfSTR, saveProfDEX, saveProfCON, saveProfINT, saveProfWIS, saveProfCHA);

			//
			// Skill proficiencies
			//
			readCheckboxFromCSV("Character_Info/temp/CORE/Skill_Proficiencies.txt", profAcrobatics, profAnimalHandling, profArcana, profAthletics,
				profDeception, profHistory, profInsight, profIntimidation, profInvestigation, profMedicine, profNature, profPerception,
				profPerformance, profPersuasion, profReligion, profSleightOfHand, profStealth, profSurvival);

			//
			// Combat stats
			//
			readComboboxFromCSV("Character_Info/temp/CORE/Combat_Stats_Hit_Die_Type.txt", hitDieType);
			readSingleLineTextboxFromCSV("Character_Info/temp/CORE/Combat_Stats_Text.txt", armorClass, initiative, speed, maxHitPoints);
			readNumericUpdownFromCSV("Character_Info/temp/CORE/Combat_Stats_HitPoints_HitDie.txt", currentHitPoints, tempHitPoints, currentNumHitDie);
			readCheckboxFromCSV("Character_Info/temp/CORE/Death_Saves.txt", deathSuccess1, deathSuccess2, deathSuccess3, deathFailure1, deathFailure2, deathFailure3);
			charLevel->Maximum = 20;

			//
			// Character traits
			//
			readMultiTextboxFromCSV("Character_Info/temp/CORE/Personality_Traits.txt", personalityTraitsTextBox);
			readMultiTextboxFromCSV("Character_Info/temp/CORE/Ideals.txt", idealsTextBox);
			readMultiTextboxFromCSV("Character_Info/temp/CORE/Bonds.txt", bondsTextBox);
			readMultiTextboxFromCSV("Character_Info/temp/CORE/Flaws.txt", flawsTextBox);

			//
			// Features & traits
			//
			readMultiTextboxFromCSV("Character_Info/temp/CORE/Features_and_Traits.txt", featuresAndTraits);

			//
			// Attacks & spellcasting
			//
			readSingleLineTextboxFromCSV("Character_Info/temp/CORE/Attacks_&_Spellcasting.txt",
				attackName1, attackBonus1, attackDamageType1,
				attackName2, attackBonus2, attackDamageType2,
				attackName3, attackBonus3, attackDamageType3,
				attackName4, attackBonus4, attackDamageType4,
				attackName5, attackBonus5, attackDamageType5,
				attackName6, attackBonus6, attackDamageType6,
				attackName7, attackBonus7, attackDamageType7,
				attackName8, attackBonus8, attackDamageType8,
				attackName9, attackBonus9, attackDamageType9,
				attackName10, attackBonus10, attackDamageType10,
				attackName11, attackBonus11, attackDamageType11);

			//
			// Other proficiencies & languages
			//
			readSingleLineTextboxFromCSV("Character_Info/temp/CORE/Other_Proficiencies_and_Languages.txt",
				profLangType1, profLangAttribute1, profLangProficiency1,
				profLangType2, profLangAttribute2, profLangProficiency2,
				profLangType3, profLangAttribute3, profLangProficiency3,
				profLangType4, profLangAttribute4, profLangProficiency4,
				profLangType5, profLangAttribute5, profLangProficiency5,
				profLangType6, profLangAttribute6, profLangProficiency6,
				profLangType7, profLangAttribute7, profLangProficiency7);

			//
			// Equipment
			//
			readSingleLineTextboxFromCSV("Character_Info/temp/CORE/Currency.txt", numCopperPieces, numSilverPieces, numElectrumPieces, numGoldPieces, numPlatinumPieces);
			readSingleLineTextboxFromCSV("Character_Info/temp/CORE/Equipment.txt",
				itemAmt1, itemName1, itemWeight1,
				itemAmt2, itemName2, itemWeight2,
				itemAmt3, itemName3, itemWeight3,
				itemAmt4, itemName4, itemWeight4,
				itemAmt5, itemName5, itemWeight5,
				itemAmt6, itemName6, itemWeight6,
				itemAmt7, itemName7, itemWeight7,
				itemAmt8, itemName8, itemWeight8,
				itemAmt9, itemName9, itemWeight9,
				itemAmt10, itemName10, itemWeight10);

			//
			// *** BIO CHARACTER SHEET **
			//

			//
			// Physical traits
			//
			readSingleLineTextboxFromCSV("Character_Info/temp/BIO/Physical_Traits.txt", charNameBIO, charAge, charHeight, charWeight, charEyes, charSkin, charHair);

			//
			// Other traits
			//
			readMultiTextboxFromCSV("Character_Info/temp/BIO/Appearance.txt", charAppearance);
			readMultiTextboxFromCSV("Character_Info/temp/BIO/Allies_&_Organizations.txt", charAlliesOrganizations);
			readMultiTextboxFromCSV("Character_Info/temp/BIO/Backstory.txt", charBackstory);
			readMultiTextboxFromCSV("Character_Info/temp/BIO/Additional_Features_&_Traits.txt", charAdditionalFeaturesTraits);
			readMultiTextboxFromCSV("Character_Info/temp/BIO/Treasure.txt", charTreasure);

			//
			// *** SPELLS CHARACTER SHEET ***
			//

			//
			// Read spell casting details back into sheet.
			//
			readSingleLineTextboxFromCSV("Character_Info/temp/SPELLS/Spell_Casting_Details.txt", spellcastClass, spellcastAbility, spellSaveDC, spellAttackBonus);

			//
			// Read spells back into sheet.
			//
			readSpellToListFromCSV("Spells/temp/Cantrips/Cantrip Spells.txt", listCantrips);
			readSpellToListFromCSV("Spells/temp/1st_Level_Spells/1st Level Spells.txt", list1stLevelSpells);
			readSpellToListFromCSV("Spells/temp/2nd_Level_Spells/2nd Level Spells.txt", list2ndLevelSpells);
			readSpellToListFromCSV("Spells/temp/3rd_Level_Spells/3rd Level Spells.txt", list3rdLevelSpells);
			readSpellToListFromCSV("Spells/temp/4th_Level_Spells/4th Level Spells.txt", list4thLevelSpells);
			readSpellToListFromCSV("Spells/temp/5th_Level_Spells/5th Level Spells.txt", list5thLevelSpells);
			readSpellToListFromCSV("Spells/temp/6th_Level_Spells/6th Level Spells.txt", list6thLevelSpells);
			readSpellToListFromCSV("Spells/temp/7th_Level_Spells/7th Level Spells.txt", list7thLevelSpells);
			readSpellToListFromCSV("Spells/temp/8th_Level_Spells/8th Level Spells.txt", list8thLevelSpells);
			readSpellToListFromCSV("Spells/temp/9th_Level_Spells/9th Level Spells.txt", list9thLevelSpells);
		}
	//
	// Function for sheet changes due to character level change.
	//
		private: System::Void charLevel_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

			// Update maximum allowable number of hit die, then set current available hit die to maximum value.
			setMaxNumberHitDie(hitDieType, charLevel, currentNumHitDie);

			// Update maximum number of hit points, and set current HP to its maximum value.
			setMaxHitPoints(hitDieType, charLevel, modCON, maxHitPoints);
			setCurrentHitPointsToMax(currentHitPoints, maxHitPoints);

			// Get character's current level.
			setProfBonus(profBonus, charLevel);

			// Change proficiency bonus border.
			setLabelBorderNone(profBonus);
		}
	//
	// Functions for ability score changes.
	//
		private: System::Void scoreSTR_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			
			// Initialize array of ability score-related labels.
			array<Label^>^ labelsSTR = { modSTR, saveSTR, skillAthletics };

			// Check for text in ability score.
			if (scoreSTR->Text == "")
			{
				for (int i = 0; i < 3; i++)
				{
					setLabelContentsBlank(labelsSTR[i]);
				}
			}
			else
			{
				// Update ability modifier and saving throw.
				setAbilityMod(scoreSTR, modSTR);
				
				// Check if saving throw is proficient, then update saving throw value.
				setSaveMod(modSTR, saveSTR, saveProfSTR, profBonus);

				// Create arrays of ability score-based skills, and their proficiency status.
				array<Label^>^ skillsSTR = { skillAthletics };
				array<CheckBox^>^ skillsProfSTR = { profAthletics };

				// Loop through ability score-related skills and update their modifiers.
				for (int i = 0; i < 1; i++)
				{
					setSkillMod(skillsSTR[i], skillsProfSTR[i], modSTR, profBonus);
				}

				// Make border for ability score unable to be seen.
				setTextBorderNone(scoreSTR);

				// Make border unable to be seen for fields related to ability score.
				for (int i = 0; i < 3; i++)
				{
					setLabelBorderNone(labelsSTR[i]);
				}
			}
		}
		private: System::Void scoreDEX_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			
			// Initialize array of ability score-related labels.
			array<Label^>^ labelsDEX = { modDEX, saveDEX, skillAcrobatics, skillSleightOfHand, skillStealth };

			// Initialize array of ability score-related textboxes.
			array<TextBox^>^ textsDEX = { scoreDEX, initiative };

			// Check for text in ability score.
			if (scoreDEX->Text == "")
			{
				for (int i = 0; i < labelsDEX->Length; i++)
				{
					setLabelContentsBlank(labelsDEX[i]);
				}
				for (int i = 0; i < textsDEX->Length; i++)
				{
					setTextBoxContentsBlank(textsDEX[i]);
				}
			}
			else
			{
				// Update ability modifier and saving throw.
				setAbilityMod(scoreDEX, modDEX);

				// Check if saving throw is proficient, then update saving throw value.
				setSaveMod(modDEX, saveDEX, saveProfDEX, profBonus);

				// Create arrays of ability score-related skills and proficiencies
				array<Label^>^ skillsDEX = { skillAcrobatics, skillSleightOfHand, skillStealth };
				array<CheckBox^>^ skillsProfDEX = { profAcrobatics, profSleightOfHand, profStealth };

				// Loop through array and update modifiers.
				for (int i = 0; i < 3; i++)
				{
					setSkillMod(skillsDEX[i], skillsProfDEX[i], modDEX, profBonus);
				}

				// Update character's initiative modifier.
				setInitiative(initiative, modDEX);
				setTextBorderNone(initiative);

				// Make border for ability score unable to be seen.
				setTextBorderNone(scoreDEX);

				// Make border unable to be seen for fields related to ability score.
				for (int i = 0; i < 5; i++)
				{
					setLabelBorderNone(labelsDEX[i]);
				}
			}
		}
		private: System::Void scoreCON_TextChanged(System::Object^ sender, System::EventArgs^ e) {

			// No skills require constitution, so no arrays initialized.

			// Initialize array of ability score-related labels.
			array<Label^>^ labelsCON = { modCON, saveCON };

			// Check for text in ability score.
			if (scoreCON->Text == "")
			{
				// Set max hit points field blank and make border visible.
				setTextBoxContentsBlank(maxHitPoints);

				// Set current hit points field to zero.
				setNumericUpDownZero(currentHitPoints);

				// Make fields w/in array blank w/ visible border.
				for (int i = 0; i < 2; i++)
				{
					setLabelContentsBlank(labelsCON[i]);
				}
			}
			else
			{
				// Update ability modifier and saving throw.
				setAbilityMod(scoreCON, modCON);

				// Check if saving throw is proficient, then update saving throw value.
				setSaveMod(modCON, saveCON, saveProfCON, profBonus);

				// Make border for ability score unable to be seen.
				setTextBorderNone(scoreCON);

				// Make border unable to be seen for fields related to ability score.
				for(int i = 0; i < 2; i++)
				{
					setLabelBorderNone(labelsCON[i]);
				}

				// Set max hit points, and set current hit points to max value.
				setMaxHitPoints(hitDieType, charLevel, modCON, maxHitPoints);
				setCurrentHitPointsToMax(currentHitPoints, maxHitPoints);

			}
		}
		private: System::Void scoreINT_TextChanged(System::Object^ sender, System::EventArgs^ e) {

			// Initialize array of ability score-related labels.
			array<Label^>^ labelsINT = { modINT, saveINT, skillArcana, skillHistory, skillInvestigation, skillNature, skillReligion};

			// Check for text in ability score.
			if (scoreINT->Text == "")
			{
				for (int i = 0; i < 7; i++)
				{
					setLabelContentsBlank(labelsINT[i]);
				}
			}
			else
			{
				// Update ability modifier and saving throw.
				setAbilityMod(scoreINT, modINT);

				// Check if saving throw is proficient, then update saving throw value.
				setSaveMod(modINT, saveINT, saveProfINT, profBonus);

				// Create arrays of ability score-related skills and proficiencies
				array<Label^>^ skillsINT = { skillArcana, skillHistory, skillInvestigation, skillNature, skillReligion };
				array<CheckBox^>^ skillsProfINT = { profArcana, profHistory, profInvestigation, profNature, profReligion };

				// Loop through array and update modifiers.
				for (int i = 0; i < 5; i++)
				{
					setSkillMod(skillsINT[i], skillsProfINT[i], modINT, profBonus);
				}

				// Make border for ability score unable to be seen.
				setTextBorderNone(scoreINT);

				// Make border unable to be seen for fields related to ability score.
				for (int i = 0; i < 7; i++)
				{
					setLabelBorderNone(labelsINT[i]);
				}
			}
		}
		private: System::Void scoreWIS_TextChanged(System::Object^ sender, System::EventArgs^ e) {

			// Initialize array of ability score-related labels.
			array<Label^>^ labelsWIS = { modWIS, saveWIS, skillAnimalHandling, passPerception, skillInsight, skillMedicine, skillPerception, skillSurvival };

			// Check for text in ability score.
			if (scoreWIS->Text == "")
			{
				for (int i = 0; i < 8; i++)
				{
					setLabelContentsBlank(labelsWIS[i]);
				}
			}
			else
			{
				// Update ability modifier and saving throw.
				setAbilityMod(scoreWIS, modWIS);

				// Check if saving throw is proficient, then update saving throw value.
				setSaveMod(modWIS, saveWIS, saveProfWIS, profBonus);

				// Create arrays of ability score-related skills and proficiencies
				array<Label^>^ skillsWIS = { skillAnimalHandling, skillInsight, skillMedicine, skillPerception, skillSurvival };
				array<CheckBox^>^ skillsProfWIS = { profAnimalHandling, profInsight, profMedicine, profPerception, profSurvival };

				// Loop through array and update modifiers.
				for (int i = 0; i < 5; i++)
				{
					setSkillMod(skillsWIS[i], skillsProfWIS[i], modWIS, profBonus);
				}

				// Make border for ability score unable to be seen.
				setTextBorderNone(scoreWIS);

				// Make border unable to be seen for fields related to ability score.
				for (int i = 0; i < 8; i++)
				{
					setLabelBorderNone(labelsWIS[i]);
				}

				// Update passive perception.
				setPassPerception(passPerception, skillPerception);
			}
		}
		private: System::Void scoreCHA_TextChanged(System::Object^ sender, System::EventArgs^ e) {

			// Initialize array of ability score-related labels.
			array<Label^>^ labelsCHA = { modCHA, saveCHA, skillDeception, skillIntimidation, skillPerformance, skillPersuasion };

			// Check for text in ability score.
			if (scoreCHA->Text == "")
			{
				for (int i = 0; i < 6; i++)
				{
					setLabelContentsBlank(labelsCHA[i]);
				}
			}
			else
			{
				// Update ability modifier and saving throw.
				setAbilityMod(scoreCHA, modCHA);

				// Check if saving throw is proficient, then update saving throw value.
				setSaveMod(modCHA, saveCHA, saveProfCHA, profBonus);

				// Create arrays of ability score-related skills and proficiencies
				array<Label^>^ skillsCHA = { skillDeception, skillIntimidation, skillPerformance, skillPersuasion };
				array<CheckBox^>^ skillsProfCHA = { profDeception, profIntimidation, profPerformance, profPersuasion };

				// Loop through array and update modifiers.
				for (int i = 0; i < 4; i++)
				{
					setSkillMod(skillsCHA[i], skillsProfCHA[i], modCHA, profBonus);
				}

				// Make border for ability score unable to be seen.
				setTextBorderNone(scoreCHA);

				// Make border unable to be seen for fields related to ability score.
				for (int i = 0; i < 6; i++)
				{
					setLabelBorderNone(labelsCHA[i]);
				}
			}
		}	
	//
	// Functions for saving throw proficiency.
	//
		private: System::Void saveProfSTR_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			
			// Call function for updating save modifier.
			profSaveUpdated(saveProfSTR, saveSTR, profBonus);
		}
		private: System::Void saveProfDEX_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for setting save modifier.
			profSaveUpdated(saveProfDEX, saveDEX, profBonus);
		}
		private: System::Void saveProfCON_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for updating save modifier.
			profSaveUpdated(saveProfCON, saveCON, profBonus);
		}
		private: System::Void saveProfINT_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for setting save modifier.
			profSaveUpdated(saveProfINT, saveINT, profBonus);
		}
		private: System::Void saveProfWIS_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for setting save modifier.
			profSaveUpdated(saveProfWIS, saveWIS, profBonus);
		}
		private: System::Void saveProfCHA_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for setting save modifier.
			profSaveUpdated(saveProfCHA, saveCHA, profBonus);
		}
	//
	// Functions for skill proficiency changes.
	//

		// STR-based skills.
		private: System::Void profAthletics_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			
			// Call function for skill proficiency update.
			profSkillCheckUpdated(profAthletics, skillAthletics, profBonus);
		}

		// DEX-based skills.
		private: System::Void profAcrobatics_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			
			// Call function for skill proficiency update.
			profSkillCheckUpdated(profAcrobatics, skillAcrobatics, profBonus);
		}
		private: System::Void profSleightOfHand_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profSleightOfHand, skillSleightOfHand, profBonus);
		}
		private: System::Void profStealth_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profStealth, skillStealth, profBonus);
		}

		// INT-based skills.
		private: System::Void profArcana_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profArcana, skillArcana, profBonus);
		}
		private: System::Void profHistory_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			// Call function for skill proficiency update.
			profSkillCheckUpdated(profHistory, skillHistory, profBonus);
		}
		private: System::Void profInvestigation_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			// Call function for skill proficiency update.
			profSkillCheckUpdated(profInvestigation, skillInvestigation, profBonus);
		}
		private: System::Void profNature_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			// Call function for skill proficiency update.
			profSkillCheckUpdated(profNature, skillNature, profBonus);
		}
		private: System::Void profReligion_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			// Call function for skill proficiency update.
			profSkillCheckUpdated(profReligion, skillReligion, profBonus);
		}

		// WIS-based skills.
		private: System::Void profAnimimalHandling_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profAnimalHandling, skillAnimalHandling, profBonus);
		}
		private: System::Void profInsight_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profInsight, skillInsight, profBonus);
		}
		private: System::Void profMedicine_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			
			// Call function for skill proficiency update.
			profSkillCheckUpdated(profMedicine, skillMedicine, profBonus);
		}
		private: System::Void profPerception_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profPerception, skillPerception, profBonus);

			// Update passive perception.
			if (skillPerception->Text == "")
			{
				return;
			}
			else
			{
				passPerception->Text = System::Convert::ToString(System::Convert::ToInt16(skillPerception->Text));
			}
		}
		private: System::Void profSurvival_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profSurvival, skillSurvival, profBonus);
		}

		// CHA-based skills.
		private: System::Void profDeception_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profDeception, skillDeception, profBonus);
		}
		private: System::Void profIntimidation_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profIntimidation, skillIntimidation, profBonus);
		}
		private: System::Void profPerformance_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			// Call function for skill proficiency update.
			profSkillCheckUpdated(profPerformance, skillPerformance, profBonus);
		}
		private: System::Void profPersuasion_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			profSkillCheckUpdated(profPersuasion, skillPersuasion, profBonus);
		}
		private: System::Void hitDieType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			// Set max hit points, and set current hit points to max value.
			setMaxHitPoints(hitDieType, charLevel, modCON, maxHitPoints);
			setCurrentHitPointsToMax(currentHitPoints, maxHitPoints);
		}

		//
		// Controls for SPELLS sheet.
		//

		// Add spell to list.
		private: System::Void buttonAddSpell_Click(System::Object^ sender, System::EventArgs^ e) {

			// Create object for form used to add spells to spell list.
			CharacterSheet::spellAddPopUp spellAddPopUpForm;

			// Display form for entering spell details.
			spellAddPopUpForm.ShowDialog();

			// Retrieve spell name from Header.h
			System::String^ tempSpell = gcnew String(currentSpellName.c_str());
			
			// Implement new spell to the appropriate spell list using info from Header.h.
			addSpellToList(listToAddSpell, tempSpell, listCantrips, list1stLevelSpells, list2ndLevelSpells, list3rdLevelSpells, list4thLevelSpells, list5thLevelSpells, list6thLevelSpells, list7thLevelSpells, list8thLevelSpells, list9thLevelSpells);

			// Delete temp spells object.
			delete tempSpell;
		}

		private: System::Void totalLevel1Slots_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ num = System::Convert::ToString(totalLevel1Slots->Text);
			String^ one{ "1" }; String^ two{ "2" }; String^ three{ "3" }; String^ four{ "4" }; String^ five{ "5" }; String^ six{ "6" }; String^ seven{ "7" }; String^ eight{ "8" }; String^ nine{ "9" };

			if (num == one || num == two || num == three || num == four || num == five || num == six || num == seven || num == eight || num == nine)
			{
				remainingLevel1Slots->Value = System::Convert::ToInt16(totalLevel1Slots->Text);
			}
			else
			{
				remainingLevel1Slots->Value = 0;
			}
		}
		private: System::Void totalLevel2Slots_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ num = System::Convert::ToString(totalLevel2Slots->Text);
			String^ one{ "1" }; String^ two{ "2" }; String^ three{ "3" }; String^ four{ "4" }; String^ five{ "5" }; String^ six{ "6" }; String^ seven{ "7" }; String^ eight{ "8" }; String^ nine{ "9" };

			if (num == one || num == two || num == three || num == four || num == five || num == six || num == seven || num == eight || num == nine)
			{
				remainingLevel2Slots->Value = System::Convert::ToInt16(totalLevel2Slots->Text);
			}
			else
			{
				remainingLevel2Slots->Value = 0;
			}
		}
		private: System::Void totalLevel3Slots_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ num = System::Convert::ToString(totalLevel3Slots->Text);
			String^ one{ "1" }; String^ two{ "2" }; String^ three{ "3" }; String^ four{ "4" }; String^ five{ "5" }; String^ six{ "6" }; String^ seven{ "7" }; String^ eight{ "8" }; String^ nine{ "9" };

			if (num == one || num == two || num == three || num == four || num == five || num == six || num == seven || num == eight || num == nine)
			{
				remainingLevel3Slots->Value = System::Convert::ToInt16(totalLevel3Slots->Text);
			}
			else
			{
				remainingLevel3Slots->Value = 0;
			}
		}
		private: System::Void totalLevel4Slots_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ num = System::Convert::ToString(totalLevel4Slots->Text);
			String^ one{ "1" }; String^ two{ "2" }; String^ three{ "3" }; String^ four{ "4" }; String^ five{ "5" }; String^ six{ "6" }; String^ seven{ "7" }; String^ eight{ "8" }; String^ nine{ "9" };

			if (num == one || num == two || num == three || num == four || num == five || num == six || num == seven || num == eight || num == nine)
			{
				remainingLevel4Slots->Value = System::Convert::ToInt16(totalLevel4Slots->Text);
			}
			else
			{
				remainingLevel4Slots->Value = 0;
			}
		}
		private: System::Void totalLevel5Slots_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ num = System::Convert::ToString(totalLevel5Slots->Text);
			String^ one{ "1" }; String^ two{ "2" }; String^ three{ "3" }; String^ four{ "4" }; String^ five{ "5" }; String^ six{ "6" }; String^ seven{ "7" }; String^ eight{ "8" }; String^ nine{ "9" };

			if (num == one || num == two || num == three || num == four || num == five || num == six || num == seven || num == eight || num == nine)
			{
				remainingLevel5Slots->Value = System::Convert::ToInt16(totalLevel5Slots->Text);
			}
			else
			{
				remainingLevel5Slots->Value = 0;
			}
		}
		private: System::Void totalLevel6Slots_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ num = System::Convert::ToString(totalLevel6Slots->Text);
			String^ one{ "1" }; String^ two{ "2" }; String^ three{ "3" }; String^ four{ "4" }; String^ five{ "5" }; String^ six{ "6" }; String^ seven{ "7" }; String^ eight{ "8" }; String^ nine{ "9" };

			if (num == one || num == two || num == three || num == four || num == five || num == six || num == seven || num == eight || num == nine)
			{
				remainingLevel6Slots->Value = System::Convert::ToInt16(totalLevel6Slots->Text);
			}
			else
			{
				remainingLevel6Slots->Value = 0;
			}
		}
		private: System::Void totalLevel7Slots_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ num = System::Convert::ToString(totalLevel7Slots->Text);
			String^ one{ "1" }; String^ two{ "2" }; String^ three{ "3" }; String^ four{ "4" }; String^ five{ "5" }; String^ six{ "6" }; String^ seven{ "7" }; String^ eight{ "8" }; String^ nine{ "9" };

			if (num == one || num == two || num == three || num == four || num == five || num == six || num == seven || num == eight || num == nine)
			{
				remainingLevel7Slots->Value = System::Convert::ToInt16(totalLevel7Slots->Text);
			}
			else
			{
				remainingLevel7Slots->Value = 0;
			}
		}
		private: System::Void totalLevel8Slots_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ num = System::Convert::ToString(totalLevel8Slots->Text);
			String^ one{ "1" }; String^ two{ "2" }; String^ three{ "3" }; String^ four{ "4" }; String^ five{ "5" }; String^ six{ "6" }; String^ seven{ "7" }; String^ eight{ "8" }; String^ nine{ "9" };

			if (num == one || num == two || num == three || num == four || num == five || num == six || num == seven || num == eight || num == nine)
			{
				remainingLevel8Slots->Value = System::Convert::ToInt16(totalLevel8Slots->Text);
			}
			else
			{
				remainingLevel8Slots->Value = 0;
			}
		}
		private: System::Void totalLevel9Slots_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ num = System::Convert::ToString(totalLevel9Slots->Text);
			String^ one{ "1" }; String^ two{ "2" }; String^ three{ "3" }; String^ four{ "4" }; String^ five{ "5" }; String^ six{ "6" }; String^ seven{ "7" }; String^ eight{ "8" }; String^ nine{ "9" };

			if (num == one || num == two || num == three || num == four || num == five || num == six || num == seven || num == eight || num == nine)
			{
				remainingLevel9Slots->Value = System::Convert::ToInt16(totalLevel9Slots->Text);
			}
			else
			{
				remainingLevel9Slots->Value = 0;
			}
		}
		
		//
		// Save data.
		//
		private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {

					// Create object for form used to confirm character sheet changes.
					CharacterSheet::SaveConfirm SaveConfirmPopUpForm;

					// Display form for confirming saving changes.
					SaveConfirmPopUpForm.ShowDialog();

					// Check if character sheet should be saved.
					if (saveCharacterChanges == true)
					{
						
						//
						// *** CORE CHARACTER SHEET ***
						//

						//
						// Basic character details
						//
						writeSingleLineTextboxToCSV("Character_Info/temp/CORE/Base_Details.txt", charNameCORE, charClass, charBackground, playerName, charRace, charAlignment, charExp);
						writeNumericUpdownToCSV("Character_Info/temp/CORE/Character_Level.txt", charLevel);

						//
						// Ability scores and saving throw proficiencies
						//
						writeSingleLineTextboxToCSV("Character_Info/temp/CORE/Ability_Scores.txt", scoreSTR, scoreDEX, scoreCON, scoreINT, scoreWIS, scoreCHA);
						writeCheckboxToCSV("Character_Info/temp/CORE/Saving_Throw_Proficiencies.txt", saveProfSTR, saveProfDEX, saveProfCON, saveProfINT, saveProfWIS, saveProfCHA);

						//
						// Skill proficiencies
						//
						writeCheckboxToCSV("Character_Info/temp/CORE/Skill_Proficiencies.txt", profAcrobatics, profAnimalHandling, profArcana, profAthletics,
							profDeception, profHistory, profInsight, profIntimidation, profInvestigation, profMedicine, profNature, profPerception,
							profPerformance, profPersuasion, profReligion, profSleightOfHand, profStealth, profSurvival);

						//
						// Combat stats
						//
						writeSingleLineTextboxToCSV("Character_Info/temp/CORE/Combat_Stats_Text.txt", armorClass, initiative, speed, maxHitPoints);
						writeNumericUpdownToCSV("Character_Info/temp/CORE/Combat_Stats_HitPoints_HitDie.txt", currentHitPoints, tempHitPoints, currentNumHitDie);
						writeComboboxToCSV("Character_Info/temp/CORE/Combat_Stats_Hit_Die_Type.txt", hitDieType);
						writeCheckboxToCSV("Character_Info/temp/CORE/Death_Saves.txt", deathSuccess1, deathSuccess2, deathSuccess3, deathFailure1, deathFailure2, deathFailure3);

						//
						// Character traits
						//
						writeMultiTextboxToCSV("Character_Info/temp/CORE/Personality_Traits.txt", personalityTraitsTextBox);
						writeMultiTextboxToCSV("Character_Info/temp/CORE/Ideals.txt", idealsTextBox);
						writeMultiTextboxToCSV("Character_Info/temp/CORE/Bonds.txt", bondsTextBox);
						writeMultiTextboxToCSV("Character_Info/temp/CORE/Flaws.txt", flawsTextBox);

						//
						// Features & Traits
						//
						writeMultiTextboxToCSV("Character_Info/temp/CORE/Features_and_Traits.txt", featuresAndTraits);

						//
						// Attacks & spellcasting
						//
						writeSingleLineTextboxToCSV("Character_Info/temp/CORE/Attacks_&_Spellcasting.txt",
							attackName1, attackBonus1, attackDamageType1,
							attackName2, attackBonus2, attackDamageType2,
							attackName3, attackBonus3, attackDamageType3,
							attackName4, attackBonus4, attackDamageType4,
							attackName5, attackBonus5, attackDamageType5,
							attackName6, attackBonus6, attackDamageType6,
							attackName7, attackBonus7, attackDamageType7,
							attackName8, attackBonus8, attackDamageType8,
							attackName9, attackBonus9, attackDamageType9,
							attackName10, attackBonus10, attackDamageType10,
							attackName11, attackBonus11, attackDamageType11);

						//
						// Other proficiencies & languages
						//
						writeSingleLineTextboxToCSV("Character_Info/temp/CORE/Other_Proficiencies_and_Languages.txt",
							profLangType1, profLangAttribute1, profLangProficiency1,
							profLangType2, profLangAttribute2, profLangProficiency2,
							profLangType3, profLangAttribute3, profLangProficiency3,
							profLangType4, profLangAttribute4, profLangProficiency4,
							profLangType5, profLangAttribute5, profLangProficiency5,
							profLangType6, profLangAttribute6, profLangProficiency6,
							profLangType7, profLangAttribute7, profLangProficiency7);

						//
						// Equipment
						//
						writeSingleLineTextboxToCSV("Character_Info/temp/CORE/Currency.txt", numCopperPieces, numSilverPieces, numElectrumPieces, numGoldPieces, numPlatinumPieces);
						writeSingleLineTextboxToCSV("Character_Info/temp/CORE/Equipment.txt",
							itemAmt1, itemName1, itemWeight1,
							itemAmt2, itemName2, itemWeight2,
							itemAmt3, itemName3, itemWeight3,
							itemAmt4, itemName4, itemWeight4,
							itemAmt5, itemName5, itemWeight5,
							itemAmt6, itemName6, itemWeight6,
							itemAmt7, itemName7, itemWeight7,
							itemAmt8, itemName8, itemWeight8,
							itemAmt9, itemName9, itemWeight9,
							itemAmt10, itemName10, itemWeight10);

						//
						// *** BIO CHARACTER SHEET ***
						//

						//
						// Physical traits
						//
						writeSingleLineTextboxToCSV("Character_Info/temp/BIO/Physical_Traits.txt", charNameBIO, charAge, charHeight, charWeight, charEyes, charSkin, charHair);

						//
						// Other traits
						//
						writeMultiTextboxToCSV("Character_Info/temp/BIO/Appearance.txt", charAppearance);
						writeMultiTextboxToCSV("Character_Info/temp/BIO/Allies_&_Organizations.txt", charAlliesOrganizations);
						writeMultiTextboxToCSV("Character_Info/temp/BIO/Backstory.txt", charBackstory);
						writeMultiTextboxToCSV("Character_Info/temp/BIO/Additional_Features_&_Traits.txt", charAdditionalFeaturesTraits);
						writeMultiTextboxToCSV("Character_Info/temp/BIO/Treasure.txt", charTreasure);

						//
						// *** SPELLS CHARACTER SHEET ***
						//

						//
						// Basic spell casting details.
						//
						writeSingleLineTextboxToCSV("Character_Info/temp/SPELLS/Spell_Casting_Details.txt", spellcastClass, spellcastAbility, spellSaveDC, spellAttackBonus);

						//
						// Copy all info from <temp> to <saved> directories.
						//
						createSavedData();

						saveCharacterChanges = false;
					}
				}

		private: System::Void buttonExpandCantrips_Click(System::Object^ sender, System::EventArgs^ e) {
		
			CharacterSheet::ExpandListSpells expandSpells;

			expandSpells.ShowDialog();
		
			// Read all spell lists back into form to reflect any changes made in ExpandListSpells form.
			std::vector<std::string> spellsListFilepath {
				"Spells/temp/Cantrips/Cantrip Spells.txt",
				"Spells/temp/1st_Level_Spells/1st Level Spells.txt",
				"Spells/temp/2nd_Level_Spells/2nd Level Spells.txt",
				"Spells/temp/3rd_Level_Spells/3rd Level Spells.txt",
				"Spells/temp/4th_Level_Spells/4th Level Spells.txt",
				"Spells/temp/5th_Level_Spells/5th Level Spells.txt",
				"Spells/temp/6th_Level_Spells/6th Level Spells.txt",
				"Spells/temp/7th_Level_Spells/7th Level Spells.txt",
				"Spells/temp/8th_Level_Spells/8th Level Spells.txt",
				"Spells/temp/9th_Level_Spells/9th Level Spells.txt"
			};
			cli::array<System::Windows::Forms::ListBox^>^ spellListBox = gcnew array<System::Windows::Forms::ListBox^>(10);
			spellListBox[0] = listCantrips;
			spellListBox[1] = list1stLevelSpells;
			spellListBox[2] = list2ndLevelSpells;
			spellListBox[3] = list3rdLevelSpells;
			spellListBox[4] = list4thLevelSpells;
			spellListBox[5] = list5thLevelSpells;
			spellListBox[6] = list6thLevelSpells;
			spellListBox[7] = list7thLevelSpells;
			spellListBox[8] = list8thLevelSpells;
			spellListBox[9] = list9thLevelSpells;

			// Clear spell lists, then write updated spells list CSVs into each list.

			for (int i = 0; i < spellsListFilepath.size(); i++)
			{
				clearSpellsList(spellListBox[i]);
				readSpellToListFromCSV(spellsListFilepath[i], spellListBox[i]);
			}
		}
		private: System::Void buttonClearSheet_Click(System::Object^ sender, System::EventArgs^ e) {
			
			// Create object for new form.
			CharacterSheet::clearSheetContentsConfirm clearSheetContentsConfirmPopup;

			clearSheetContentsConfirmPopup.ShowDialog();

			if (clearSheetContents == true)
			{
				// Set all fields to their default values.

				//
				// *** TEXTBOXES ***
				//
				setTextboxBlank(charNameCORE, charClass, charBackground, playerName, charRace, charAlignment, charExp,
					scoreSTR, scoreDEX, scoreCON, scoreINT, scoreWIS, scoreCHA,
					armorClass, initiative, speed,
					personalityTraitsTextBox, idealsTextBox, bondsTextBox, flawsTextBox, featuresAndTraits,
					attackName1, attackName2, attackName3, attackName4, attackName5, attackName6, attackName7, attackName8, attackName9, attackName10, attackName11,
					attackBonus1, attackBonus2, attackBonus3, attackBonus4, attackBonus5, attackBonus6, attackBonus7, attackBonus8, attackBonus9, attackBonus10, attackBonus11,
					attackDamageType1, attackDamageType2, attackDamageType3, attackDamageType4, attackDamageType5, attackDamageType6, attackDamageType7, attackDamageType8, attackDamageType9, attackDamageType10, attackDamageType11,
					profLangType1, profLangType2, profLangType3, profLangType4, profLangType5, profLangType6, profLangType7,
					profLangAttribute1, profLangAttribute2, profLangAttribute3, profLangAttribute4, profLangAttribute5, profLangAttribute6, profLangAttribute7,
					profLangProficiency1, profLangProficiency2, profLangProficiency3, profLangProficiency4, profLangProficiency5, profLangProficiency6, profLangProficiency7,
					itemAmt1, itemAmt2, itemAmt3, itemAmt4, itemAmt5, itemAmt6, itemAmt7, itemAmt8, itemAmt9, itemAmt10,
					itemName1, itemName2, itemName3, itemName4, itemName5, itemName6, itemName7, itemName8, itemName9, itemName10,
					itemWeight1, itemWeight2, itemWeight3, itemWeight4, itemWeight5, itemWeight6, itemWeight7, itemWeight8, itemWeight9, itemWeight10,
					numCopperPieces, numSilverPieces, numElectrumPieces, numGoldPieces, numPlatinumPieces,
					charNameBIO, charAge, charHeight, charWeight, charEyes, charSkin, charHair,
					charAppearance, charAlliesOrganizations, charBackstory, charAdditionalFeaturesTraits, charTreasure,
					spellcastClass, spellcastAbility, spellSaveDC, spellAttackBonus,
					totalLevel1Slots, totalLevel2Slots, totalLevel3Slots, totalLevel4Slots, totalLevel5Slots, totalLevel6Slots, totalLevel7Slots, totalLevel8Slots, totalLevel9Slots);

				//
				// *** NUMERIC UPDOWNS ***
				//
				charLevel->Value = 1;
				tempHitPoints->Value = 0;

				//
				// *** COMBOBOXES ***
				//
				hitDieType->Text = "D4";

				//
				// *** CHECKBOXES ***
				//
				setCheckboxesUnchecked(saveProfSTR, saveProfDEX, saveProfCON, saveProfINT, saveProfWIS, saveProfCHA,
					profAcrobatics, profAnimalHandling, profArcana, profAthletics, profDeception,
					profHistory, profInsight, profIntimidation, profInvestigation,
					profMedicine, profNature, profPerception, profPersuasion,
					profReligion, profSleightOfHand, profStealth, profSurvival,
					deathSuccess1, deathSuccess2, deathSuccess3, deathFailure1, deathFailure2, deathFailure3);

				// Clear spells from temp directory.
				resetTempSpellDirectory();

				// Update spells lists in main form.
				readSpellListCSV_ToProperList("Spells/temp/Cantrips/Cantrip Spells.txt", listCantrips);
				readSpellListCSV_ToProperList("Spells/temp/1st_Level_Spells/1st Level Spells.txt", list1stLevelSpells);
				readSpellListCSV_ToProperList("Spells/temp/2nd_Level_Spells/2nd Level Spells.txt", list2ndLevelSpells);
				readSpellListCSV_ToProperList("Spells/temp/3rd_Level_Spells/3rd Level Spells.txt", list3rdLevelSpells);
				readSpellListCSV_ToProperList("Spells/temp/4th_Level_Spells/4th Level Spells.txt", list4thLevelSpells);
				readSpellListCSV_ToProperList("Spells/temp/5th_Level_Spells/5th Level Spells.txt", list5thLevelSpells);
				readSpellListCSV_ToProperList("Spells/temp/6th_Level_Spells/6th Level Spells.txt", list6thLevelSpells);
				readSpellListCSV_ToProperList("Spells/temp/7th_Level_Spells/7th Level Spells.txt", list7thLevelSpells);
				readSpellListCSV_ToProperList("Spells/temp/8th_Level_Spells/8th Level Spells.txt", list8thLevelSpells);
				readSpellListCSV_ToProperList("Spells/temp/9th_Level_Spells/9th Level Spells.txt", list9thLevelSpells);

			}
			else { return; }
		}
	};
}


// Open new pop up window.
void openPopup(CharacterSheet::Form popup)
{
	popup.ShowDialog();
}




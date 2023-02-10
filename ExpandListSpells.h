#pragma once

#include "Header.h"
#include "DeleteSpellConfirm.h"
#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace CharacterSheet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExpandListSpells
	/// </summary>
	public ref class ExpandListSpells : public System::Windows::Forms::Form
	{
	public:
		ExpandListSpells(void)
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
		~ExpandListSpells()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelAddNewSpell;
	private: System::Windows::Forms::Label^ headerDetails;
	private: System::Windows::Forms::TextBox^ textAtHigherLevels;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ labelSpellcastingAbility;
	private: System::Windows::Forms::Label^ labelTarget;
	private: System::Windows::Forms::Label^ labelDuration;
	private: System::Windows::Forms::Label^ labelSpellName;
	private: System::Windows::Forms::Label^ labelRange;
	private: System::Windows::Forms::Label^ labelSpellLevel;
	private: System::Windows::Forms::Label^ labelSchool;
	private: System::Windows::Forms::Label^ labelCastingTime;
	private: System::Windows::Forms::Label^ labelAtHigherLevels;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelMaterials;
	private: System::Windows::Forms::TextBox^ textMaterialComponents;
	private: System::Windows::Forms::Label^ labelComponents;
	private: System::Windows::Forms::TextBox^ textDescription;
	private: System::Windows::Forms::Label^ labelRequirements;
	private: System::Windows::Forms::Label^ labelDescription;
	private: System::Windows::Forms::ListBox^ listSpells;
	private: System::Windows::Forms::Label^ spellNameLabel;
	private: System::Windows::Forms::Label^ spellLevelLabel;
	private: System::Windows::Forms::Label^ spellDurationLabel;
	private: System::Windows::Forms::Label^ spellRangeLabel;
	private: System::Windows::Forms::Label^ spellCastingTimeLabel;
	private: System::Windows::Forms::Label^ spellRitualLabel;
	private: System::Windows::Forms::Label^ spellCastingAbilityLabel;
	private: System::Windows::Forms::Label^ spellSchoolLabel;
	private: System::Windows::Forms::Label^ spellTargetLabel;
	private: System::Windows::Forms::Label^ spellVerbalLabel;
	private: System::Windows::Forms::Label^ spellSemanticLabel;
	private: System::Windows::Forms::Label^ spellMaterialLabel;
	private: System::Windows::Forms::Label^ spellConcentrationLabel;
	private: System::Windows::Forms::Label^ labelSpellLevelList;
	private: System::Windows::Forms::ComboBox^ comboboxSpellLevelList;
	private: System::Windows::Forms::Button^ buttonDeleteSpell;
	private: System::Windows::Forms::Panel^ panelListSpells;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ExpandListSpells::typeid));
			this->panelAddNewSpell = (gcnew System::Windows::Forms::Panel());
			this->headerDetails = (gcnew System::Windows::Forms::Label());
			this->textAtHigherLevels = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->spellTargetLabel = (gcnew System::Windows::Forms::Label());
			this->spellDurationLabel = (gcnew System::Windows::Forms::Label());
			this->spellRangeLabel = (gcnew System::Windows::Forms::Label());
			this->spellCastingTimeLabel = (gcnew System::Windows::Forms::Label());
			this->spellRitualLabel = (gcnew System::Windows::Forms::Label());
			this->spellCastingAbilityLabel = (gcnew System::Windows::Forms::Label());
			this->spellSchoolLabel = (gcnew System::Windows::Forms::Label());
			this->spellLevelLabel = (gcnew System::Windows::Forms::Label());
			this->spellNameLabel = (gcnew System::Windows::Forms::Label());
			this->labelSpellcastingAbility = (gcnew System::Windows::Forms::Label());
			this->labelTarget = (gcnew System::Windows::Forms::Label());
			this->labelDuration = (gcnew System::Windows::Forms::Label());
			this->labelSpellName = (gcnew System::Windows::Forms::Label());
			this->labelRange = (gcnew System::Windows::Forms::Label());
			this->labelSpellLevel = (gcnew System::Windows::Forms::Label());
			this->labelSchool = (gcnew System::Windows::Forms::Label());
			this->labelCastingTime = (gcnew System::Windows::Forms::Label());
			this->labelAtHigherLevels = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->spellVerbalLabel = (gcnew System::Windows::Forms::Label());
			this->spellSemanticLabel = (gcnew System::Windows::Forms::Label());
			this->spellMaterialLabel = (gcnew System::Windows::Forms::Label());
			this->spellConcentrationLabel = (gcnew System::Windows::Forms::Label());
			this->labelMaterials = (gcnew System::Windows::Forms::Label());
			this->textMaterialComponents = (gcnew System::Windows::Forms::TextBox());
			this->labelComponents = (gcnew System::Windows::Forms::Label());
			this->textDescription = (gcnew System::Windows::Forms::TextBox());
			this->labelRequirements = (gcnew System::Windows::Forms::Label());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->listSpells = (gcnew System::Windows::Forms::ListBox());
			this->labelSpellLevelList = (gcnew System::Windows::Forms::Label());
			this->comboboxSpellLevelList = (gcnew System::Windows::Forms::ComboBox());
			this->buttonDeleteSpell = (gcnew System::Windows::Forms::Button());
			this->panelListSpells = (gcnew System::Windows::Forms::Panel());
			this->panelAddNewSpell->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelListSpells->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelAddNewSpell
			// 
			this->panelAddNewSpell->AutoScroll = true;
			this->panelAddNewSpell->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelAddNewSpell->Controls->Add(this->headerDetails);
			this->panelAddNewSpell->Controls->Add(this->textAtHigherLevels);
			this->panelAddNewSpell->Controls->Add(this->panel2);
			this->panelAddNewSpell->Controls->Add(this->labelAtHigherLevels);
			this->panelAddNewSpell->Controls->Add(this->panel1);
			this->panelAddNewSpell->Controls->Add(this->textDescription);
			this->panelAddNewSpell->Controls->Add(this->labelRequirements);
			this->panelAddNewSpell->Controls->Add(this->labelDescription);
			this->panelAddNewSpell->Dock = System::Windows::Forms::DockStyle::Right;
			this->panelAddNewSpell->Location = System::Drawing::Point(333, 0);
			this->panelAddNewSpell->Name = L"panelAddNewSpell";
			this->panelAddNewSpell->Size = System::Drawing::Size(540, 857);
			this->panelAddNewSpell->TabIndex = 28;
			// 
			// headerDetails
			// 
			this->headerDetails->AutoSize = true;
			this->headerDetails->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->headerDetails->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->headerDetails->Location = System::Drawing::Point(32, 9);
			this->headerDetails->Name = L"headerDetails";
			this->headerDetails->Size = System::Drawing::Size(93, 25);
			this->headerDetails->TabIndex = 20;
			this->headerDetails->Text = L"Details";
			// 
			// textAtHigherLevels
			// 
			this->textAtHigherLevels->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textAtHigherLevels->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textAtHigherLevels->Location = System::Drawing::Point(37, 854);
			this->textAtHigherLevels->Multiline = true;
			this->textAtHigherLevels->Name = L"textAtHigherLevels";
			this->textAtHigherLevels->ReadOnly = true;
			this->textAtHigherLevels->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textAtHigherLevels->Size = System::Drawing::Size(448, 140);
			this->textAtHigherLevels->TabIndex = 25;
			this->textAtHigherLevels->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->spellTargetLabel);
			this->panel2->Controls->Add(this->spellDurationLabel);
			this->panel2->Controls->Add(this->spellRangeLabel);
			this->panel2->Controls->Add(this->spellCastingTimeLabel);
			this->panel2->Controls->Add(this->spellRitualLabel);
			this->panel2->Controls->Add(this->spellCastingAbilityLabel);
			this->panel2->Controls->Add(this->spellSchoolLabel);
			this->panel2->Controls->Add(this->spellLevelLabel);
			this->panel2->Controls->Add(this->spellNameLabel);
			this->panel2->Controls->Add(this->labelSpellcastingAbility);
			this->panel2->Controls->Add(this->labelTarget);
			this->panel2->Controls->Add(this->labelDuration);
			this->panel2->Controls->Add(this->labelSpellName);
			this->panel2->Controls->Add(this->labelRange);
			this->panel2->Controls->Add(this->labelSpellLevel);
			this->panel2->Controls->Add(this->labelSchool);
			this->panel2->Controls->Add(this->labelCastingTime);
			this->panel2->Location = System::Drawing::Point(37, 37);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(448, 285);
			this->panel2->TabIndex = 19;
			// 
			// spellTargetLabel
			// 
			this->spellTargetLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spellTargetLabel->Location = System::Drawing::Point(208, 241);
			this->spellTargetLabel->Name = L"spellTargetLabel";
			this->spellTargetLabel->Size = System::Drawing::Size(161, 22);
			this->spellTargetLabel->TabIndex = 34;
			this->spellTargetLabel->Text = L"spellTarget";
			// 
			// spellDurationLabel
			// 
			this->spellDurationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spellDurationLabel->Location = System::Drawing::Point(20, 241);
			this->spellDurationLabel->Name = L"spellDurationLabel";
			this->spellDurationLabel->Size = System::Drawing::Size(161, 22);
			this->spellDurationLabel->TabIndex = 33;
			this->spellDurationLabel->Text = L"spellDuration";
			// 
			// spellRangeLabel
			// 
			this->spellRangeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellRangeLabel->Location = System::Drawing::Point(208, 175);
			this->spellRangeLabel->Name = L"spellRangeLabel";
			this->spellRangeLabel->Size = System::Drawing::Size(161, 22);
			this->spellRangeLabel->TabIndex = 32;
			this->spellRangeLabel->Text = L"spellRange";
			// 
			// spellCastingTimeLabel
			// 
			this->spellCastingTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spellCastingTimeLabel->Location = System::Drawing::Point(20, 175);
			this->spellCastingTimeLabel->Name = L"spellCastingTimeLabel";
			this->spellCastingTimeLabel->Size = System::Drawing::Size(161, 22);
			this->spellCastingTimeLabel->TabIndex = 31;
			this->spellCastingTimeLabel->Text = L"spellCastingTime";
			// 
			// spellRitualLabel
			// 
			this->spellRitualLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellRitualLabel->Location = System::Drawing::Point(19, 66);
			this->spellRitualLabel->Name = L"spellRitualLabel";
			this->spellRitualLabel->Size = System::Drawing::Size(105, 22);
			this->spellRitualLabel->TabIndex = 30;
			this->spellRitualLabel->Text = L"spellRitual";
			// 
			// spellCastingAbilityLabel
			// 
			this->spellCastingAbilityLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spellCastingAbilityLabel->Location = System::Drawing::Point(264, 108);
			this->spellCastingAbilityLabel->Name = L"spellCastingAbilityLabel";
			this->spellCastingAbilityLabel->Size = System::Drawing::Size(166, 22);
			this->spellCastingAbilityLabel->TabIndex = 29;
			this->spellCastingAbilityLabel->Text = L"spellCastingAbility";
			// 
			// spellSchoolLabel
			// 
			this->spellSchoolLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spellSchoolLabel->Location = System::Drawing::Point(142, 109);
			this->spellSchoolLabel->Name = L"spellSchoolLabel";
			this->spellSchoolLabel->Size = System::Drawing::Size(105, 22);
			this->spellSchoolLabel->TabIndex = 28;
			this->spellSchoolLabel->Text = L"spellSchool";
			// 
			// spellLevelLabel
			// 
			this->spellLevelLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellLevelLabel->Location = System::Drawing::Point(19, 109);
			this->spellLevelLabel->Name = L"spellLevelLabel";
			this->spellLevelLabel->Size = System::Drawing::Size(105, 22);
			this->spellLevelLabel->TabIndex = 27;
			this->spellLevelLabel->Text = L"spellLevel";
			// 
			// spellNameLabel
			// 
			this->spellNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellNameLabel->Location = System::Drawing::Point(19, 43);
			this->spellNameLabel->Name = L"spellNameLabel";
			this->spellNameLabel->Size = System::Drawing::Size(284, 22);
			this->spellNameLabel->TabIndex = 26;
			this->spellNameLabel->Text = L"spellName";
			// 
			// labelSpellcastingAbility
			// 
			this->labelSpellcastingAbility->AutoSize = true;
			this->labelSpellcastingAbility->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSpellcastingAbility->ForeColor = System::Drawing::Color::Firebrick;
			this->labelSpellcastingAbility->Location = System::Drawing::Point(262, 88);
			this->labelSpellcastingAbility->Name = L"labelSpellcastingAbility";
			this->labelSpellcastingAbility->Size = System::Drawing::Size(168, 18);
			this->labelSpellcastingAbility->TabIndex = 25;
			this->labelSpellcastingAbility->Text = L"Spellcasting Ability";
			// 
			// labelTarget
			// 
			this->labelTarget->AutoSize = true;
			this->labelTarget->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelTarget->ForeColor = System::Drawing::Color::Firebrick;
			this->labelTarget->Location = System::Drawing::Point(205, 220);
			this->labelTarget->Name = L"labelTarget";
			this->labelTarget->Size = System::Drawing::Size(68, 18);
			this->labelTarget->TabIndex = 23;
			this->labelTarget->Text = L"Target";
			// 
			// labelDuration
			// 
			this->labelDuration->AutoSize = true;
			this->labelDuration->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDuration->ForeColor = System::Drawing::Color::Firebrick;
			this->labelDuration->Location = System::Drawing::Point(17, 220);
			this->labelDuration->Name = L"labelDuration";
			this->labelDuration->Size = System::Drawing::Size(84, 18);
			this->labelDuration->TabIndex = 21;
			this->labelDuration->Text = L"Duration";
			// 
			// labelSpellName
			// 
			this->labelSpellName->AutoSize = true;
			this->labelSpellName->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSpellName->ForeColor = System::Drawing::Color::Firebrick;
			this->labelSpellName->Location = System::Drawing::Point(17, 22);
			this->labelSpellName->Name = L"labelSpellName";
			this->labelSpellName->Size = System::Drawing::Size(105, 18);
			this->labelSpellName->TabIndex = 9;
			this->labelSpellName->Text = L"Spell Name";
			// 
			// labelRange
			// 
			this->labelRange->AutoSize = true;
			this->labelRange->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRange->ForeColor = System::Drawing::Color::Firebrick;
			this->labelRange->Location = System::Drawing::Point(205, 154);
			this->labelRange->Name = L"labelRange";
			this->labelRange->Size = System::Drawing::Size(64, 18);
			this->labelRange->TabIndex = 18;
			this->labelRange->Text = L"Range";
			// 
			// labelSpellLevel
			// 
			this->labelSpellLevel->AutoSize = true;
			this->labelSpellLevel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSpellLevel->ForeColor = System::Drawing::Color::Firebrick;
			this->labelSpellLevel->Location = System::Drawing::Point(17, 88);
			this->labelSpellLevel->Name = L"labelSpellLevel";
			this->labelSpellLevel->Size = System::Drawing::Size(100, 18);
			this->labelSpellLevel->TabIndex = 14;
			this->labelSpellLevel->Text = L"Spell Level";
			// 
			// labelSchool
			// 
			this->labelSchool->AutoSize = true;
			this->labelSchool->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSchool->ForeColor = System::Drawing::Color::Firebrick;
			this->labelSchool->Location = System::Drawing::Point(140, 88);
			this->labelSchool->Name = L"labelSchool";
			this->labelSchool->Size = System::Drawing::Size(65, 18);
			this->labelSchool->TabIndex = 15;
			this->labelSchool->Text = L"School";
			// 
			// labelCastingTime
			// 
			this->labelCastingTime->AutoSize = true;
			this->labelCastingTime->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCastingTime->ForeColor = System::Drawing::Color::Firebrick;
			this->labelCastingTime->Location = System::Drawing::Point(17, 154);
			this->labelCastingTime->Name = L"labelCastingTime";
			this->labelCastingTime->Size = System::Drawing::Size(121, 18);
			this->labelCastingTime->TabIndex = 16;
			this->labelCastingTime->Text = L"Casting Time";
			// 
			// labelAtHigherLevels
			// 
			this->labelAtHigherLevels->AutoSize = true;
			this->labelAtHigherLevels->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAtHigherLevels->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->labelAtHigherLevels->Location = System::Drawing::Point(32, 826);
			this->labelAtHigherLevels->Name = L"labelAtHigherLevels";
			this->labelAtHigherLevels->Size = System::Drawing::Size(205, 25);
			this->labelAtHigherLevels->TabIndex = 26;
			this->labelAtHigherLevels->Text = L"At Higher Levels";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->spellVerbalLabel);
			this->panel1->Controls->Add(this->spellSemanticLabel);
			this->panel1->Controls->Add(this->spellMaterialLabel);
			this->panel1->Controls->Add(this->spellConcentrationLabel);
			this->panel1->Controls->Add(this->labelMaterials);
			this->panel1->Controls->Add(this->textMaterialComponents);
			this->panel1->Controls->Add(this->labelComponents);
			this->panel1->Location = System::Drawing::Point(37, 383);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(448, 139);
			this->panel1->TabIndex = 21;
			// 
			// spellVerbalLabel
			// 
			this->spellVerbalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellVerbalLabel->Location = System::Drawing::Point(20, 106);
			this->spellVerbalLabel->Name = L"spellVerbalLabel";
			this->spellVerbalLabel->Size = System::Drawing::Size(133, 22);
			this->spellVerbalLabel->TabIndex = 38;
			this->spellVerbalLabel->Text = L"spellVerbal";
			// 
			// spellSemanticLabel
			// 
			this->spellSemanticLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellSemanticLabel->Location = System::Drawing::Point(20, 85);
			this->spellSemanticLabel->Name = L"spellSemanticLabel";
			this->spellSemanticLabel->Size = System::Drawing::Size(133, 22);
			this->spellSemanticLabel->TabIndex = 37;
			this->spellSemanticLabel->Text = L"spellSemantic";
			// 
			// spellMaterialLabel
			// 
			this->spellMaterialLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellMaterialLabel->Location = System::Drawing::Point(20, 64);
			this->spellMaterialLabel->Name = L"spellMaterialLabel";
			this->spellMaterialLabel->Size = System::Drawing::Size(133, 22);
			this->spellMaterialLabel->TabIndex = 36;
			this->spellMaterialLabel->Text = L"spellMaterial";
			// 
			// spellConcentrationLabel
			// 
			this->spellConcentrationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spellConcentrationLabel->Location = System::Drawing::Point(20, 43);
			this->spellConcentrationLabel->Name = L"spellConcentrationLabel";
			this->spellConcentrationLabel->Size = System::Drawing::Size(150, 22);
			this->spellConcentrationLabel->TabIndex = 35;
			this->spellConcentrationLabel->Text = L"spellConcentration";
			// 
			// labelMaterials
			// 
			this->labelMaterials->AutoSize = true;
			this->labelMaterials->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelMaterials->ForeColor = System::Drawing::Color::Firebrick;
			this->labelMaterials->Location = System::Drawing::Point(185, 22);
			this->labelMaterials->Name = L"labelMaterials";
			this->labelMaterials->Size = System::Drawing::Size(194, 18);
			this->labelMaterials->TabIndex = 27;
			this->labelMaterials->Text = L"Material Components";
			this->labelMaterials->Visible = false;
			// 
			// textMaterialComponents
			// 
			this->textMaterialComponents->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textMaterialComponents->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textMaterialComponents->Location = System::Drawing::Point(187, 43);
			this->textMaterialComponents->Multiline = true;
			this->textMaterialComponents->Name = L"textMaterialComponents";
			this->textMaterialComponents->ReadOnly = true;
			this->textMaterialComponents->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textMaterialComponents->Size = System::Drawing::Size(243, 84);
			this->textMaterialComponents->TabIndex = 26;
			this->textMaterialComponents->TabStop = false;
			this->textMaterialComponents->Visible = false;
			// 
			// labelComponents
			// 
			this->labelComponents->AutoSize = true;
			this->labelComponents->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelComponents->ForeColor = System::Drawing::Color::Firebrick;
			this->labelComponents->Location = System::Drawing::Point(17, 22);
			this->labelComponents->Name = L"labelComponents";
			this->labelComponents->Size = System::Drawing::Size(118, 18);
			this->labelComponents->TabIndex = 26;
			this->labelComponents->Text = L"Components";
			// 
			// textDescription
			// 
			this->textDescription->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDescription->Location = System::Drawing::Point(37, 583);
			this->textDescription->Multiline = true;
			this->textDescription->Name = L"textDescription";
			this->textDescription->ReadOnly = true;
			this->textDescription->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textDescription->Size = System::Drawing::Size(448, 210);
			this->textDescription->TabIndex = 0;
			this->textDescription->TabStop = false;
			// 
			// labelRequirements
			// 
			this->labelRequirements->AutoSize = true;
			this->labelRequirements->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRequirements->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->labelRequirements->Location = System::Drawing::Point(32, 355);
			this->labelRequirements->Name = L"labelRequirements";
			this->labelRequirements->Size = System::Drawing::Size(176, 25);
			this->labelRequirements->TabIndex = 22;
			this->labelRequirements->Text = L"Requirements";
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDescription->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->labelDescription->Location = System::Drawing::Point(32, 555);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(145, 25);
			this->labelDescription->TabIndex = 24;
			this->labelDescription->Text = L"Description";
			// 
			// listSpells
			// 
			this->listSpells->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listSpells->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listSpells->FormattingEnabled = true;
			this->listSpells->ItemHeight = 20;
			this->listSpells->Location = System::Drawing::Point(0, 0);
			this->listSpells->MultiColumn = true;
			this->listSpells->Name = L"listSpells";
			this->listSpells->Size = System::Drawing::Size(312, 80);
			this->listSpells->TabIndex = 28;
			this->listSpells->SelectedIndexChanged += gcnew System::EventHandler(this, &ExpandListSpells::listSpells_SelectedIndexChanged);
			// 
			// labelSpellLevelList
			// 
			this->labelSpellLevelList->AutoSize = true;
			this->labelSpellLevelList->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSpellLevelList->ForeColor = System::Drawing::Color::Firebrick;
			this->labelSpellLevelList->Location = System::Drawing::Point(16, 9);
			this->labelSpellLevelList->Name = L"labelSpellLevelList";
			this->labelSpellLevelList->Size = System::Drawing::Size(135, 18);
			this->labelSpellLevelList->TabIndex = 35;
			this->labelSpellLevelList->Text = L"Spell Level List";
			// 
			// comboboxSpellLevelList
			// 
			this->comboboxSpellLevelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboboxSpellLevelList->FormattingEnabled = true;
			this->comboboxSpellLevelList->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Cantrips", L"1st Level Spells",
					L"2nd Level Spells", L"3rd Level Spells", L"4th Level Spells", L"5th Level Spells", L"6th Level Spells", L"7th Level Spells",
					L"8th Level Spells", L"9th Level Spells"
			});
			this->comboboxSpellLevelList->Location = System::Drawing::Point(19, 31);
			this->comboboxSpellLevelList->Name = L"comboboxSpellLevelList";
			this->comboboxSpellLevelList->Size = System::Drawing::Size(152, 24);
			this->comboboxSpellLevelList->TabIndex = 36;
			this->comboboxSpellLevelList->Text = L"Cantrips";
			this->comboboxSpellLevelList->SelectedIndexChanged += gcnew System::EventHandler(this, &ExpandListSpells::comboboxSpellLevelList_SelectedIndexChanged);
			// 
			// buttonDeleteSpell
			// 
			this->buttonDeleteSpell->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDeleteSpell->Location = System::Drawing::Point(190, 31);
			this->buttonDeleteSpell->Margin = System::Windows::Forms::Padding(2);
			this->buttonDeleteSpell->Name = L"buttonDeleteSpell";
			this->buttonDeleteSpell->Size = System::Drawing::Size(137, 24);
			this->buttonDeleteSpell->TabIndex = 37;
			this->buttonDeleteSpell->Text = L"Delete Spell";
			this->buttonDeleteSpell->UseVisualStyleBackColor = true;
			this->buttonDeleteSpell->Click += gcnew System::EventHandler(this, &ExpandListSpells::buttonDeleteSpell_Click);
			// 
			// panelListSpells
			// 
			this->panelListSpells->AutoScroll = true;
			this->panelListSpells->BackColor = System::Drawing::SystemColors::Window;
			this->panelListSpells->Controls->Add(this->listSpells);
			this->panelListSpells->Location = System::Drawing::Point(12, 71);
			this->panelListSpells->Name = L"panelListSpells";
			this->panelListSpells->Size = System::Drawing::Size(312, 333);
			this->panelListSpells->TabIndex = 38;
			// 
			// ExpandListSpells
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(873, 857);
			this->Controls->Add(this->panelListSpells);
			this->Controls->Add(this->buttonDeleteSpell);
			this->Controls->Add(this->comboboxSpellLevelList);
			this->Controls->Add(this->labelSpellLevelList);
			this->Controls->Add(this->panelAddNewSpell);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ExpandListSpells";
			this->Text = L"ExpandListSpells";
			this->Load += gcnew System::EventHandler(this, &ExpandListSpells::ExpandListSpells_Load);
			this->panelAddNewSpell->ResumeLayout(false);
			this->panelAddNewSpell->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelListSpells->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void ExpandListSpells_Load(System::Object^ sender, System::EventArgs^ e) {
		
			// Initialize all fields of spell list form.
			initializeSpellsList(listSpells, comboboxSpellLevelList, textMaterialComponents, textDescription, textAtHigherLevels, spellNameLabel, spellRitualLabel, spellLevelLabel, spellSchoolLabel, spellCastingAbilityLabel, spellCastingTimeLabel, spellRangeLabel, spellDurationLabel, spellTargetLabel, spellConcentrationLabel, spellMaterialLabel, spellSemanticLabel, spellVerbalLabel);
		
			// Dynamically change size of spells list based on number of items in list.
			adjustSizeSpellsList(listSpells);
		}
		private: System::Void comboboxSpellLevelList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			// Clear all items from spell list.
			clearSpellsList(listSpells);

			// Get current filepath for current spell level list.
			std::string filepath = getSpellListFilepath(comboboxSpellLevelList);

			// Update spell list within form.
			readSpellToListFromCSV(filepath, listSpells);

			// Dynamically change size of spells list based on number of items in list.
			adjustSizeSpellsList(listSpells);
		}
		private: System::Void listSpells_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			// Fill spell labels in form using CSV file contents.
			readSpellLabelFromCSV(System::Convert::ToString(listSpells->SelectedItem), comboboxSpellLevelList, textMaterialComponents, textDescription, textAtHigherLevels, spellLevelLabel, spellSchoolLabel, spellCastingAbilityLabel, spellRitualLabel, spellVerbalLabel, spellSemanticLabel, spellMaterialLabel, spellConcentrationLabel, spellNameLabel, spellCastingTimeLabel, spellRangeLabel, spellDurationLabel, spellTargetLabel);

			// Change checkbox-based labels based on whether they are true or not.
			modifySpellLabel(spellRitualLabel, "Ritual");
			modifySpellLabel(spellConcentrationLabel, "Concentration");
			modifySpellLabel(spellMaterialLabel, "Material");
			modifySpellLabel(spellSemanticLabel, "Semantic");
			modifySpellLabel(spellVerbalLabel, "Verbal");
		}
		private: System::Void buttonDeleteSpell_Click(System::Object^ sender, System::EventArgs^ e) {

			// Create form used to confirm spell deletion.
			CharacterSheet::DeleteSpellConfirm deleteSpellConfirmForm;
			deleteSpellConfirmForm.ShowDialog();

			if (spellDeleteConfirm == true)
			{
				// Get file path for spell level list CSV file.
				// Delete all files/folders associated with spell.
				// Delete selected spell from spell level list CSV file.
				std::string filepath = getSpellListFilepath(comboboxSpellLevelList);
				deleteSpellInfo(comboboxSpellLevelList, MarshalString(System::Convert::ToString(listSpells->SelectedItem)));
				deleteSpellFromCharacter(filepath, MarshalString(System::Convert::ToString(listSpells->SelectedItem)));

				// Clear all existing items from spell list.
				// Populate spell list with new spell list for the selected spell level.
				clearSpellsList(listSpells);
				readSpellToListFromCSV(filepath, listSpells);

				// Dynamically change size of spells list based on number of items in list.
				adjustSizeSpellsList(listSpells);

				spellDeleteConfirm = false;

				clearSpellsList(listSpells);
				initializeSpellsList(listSpells, comboboxSpellLevelList, textMaterialComponents, textDescription, textAtHigherLevels, spellNameLabel, spellRitualLabel, spellLevelLabel, spellSchoolLabel, spellCastingAbilityLabel, spellCastingTimeLabel, spellRangeLabel, spellDurationLabel, spellTargetLabel, spellConcentrationLabel, spellMaterialLabel, spellSemanticLabel, spellVerbalLabel);
				adjustSizeSpellsList(listSpells);

			}
			else { return; }
		}
	};
}
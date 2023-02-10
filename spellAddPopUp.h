#pragma once

#include "Header.h"
#include <iostream>
#include <fstream>
#include <array>
#include <string>

#pragma once

namespace CharacterSheet
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for spellAddPopUp
	/// </summary>
	public ref class spellAddPopUp : public System::Windows::Forms::Form
	{
	public:
		spellAddPopUp(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~spellAddPopUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Label^ labelSpellName;
	private: System::Windows::Forms::TextBox^ textSpellName;
	private: System::Windows::Forms::Label^ labelSpellLevel;
	private: System::Windows::Forms::Label^ labelSchool;
	private: System::Windows::Forms::ComboBox^ dropdownSpellLevel;
	private: System::Windows::Forms::ComboBox^ dropdownSchool;
	private: System::Windows::Forms::Label^ labelCastingTime;
	private: System::Windows::Forms::TextBox^ textCastingTime;
	private: System::Windows::Forms::TextBox^ textRange;
	private: System::Windows::Forms::Label^ labelRange;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBoxRitual;
	private: System::Windows::Forms::Label^ headerDetails;
	private: System::Windows::Forms::Label^ labelSpellcastingAbility;
	private: System::Windows::Forms::ComboBox^ dropdownSpellcastingAbility;
	private: System::Windows::Forms::TextBox^ textTarget;
	private: System::Windows::Forms::Label^ labelTarget;
	private: System::Windows::Forms::TextBox^ textDuration;
	private: System::Windows::Forms::Label^ labelDuration;
	private: System::Windows::Forms::Label^ labelRequirements;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textMaterialComponents;
	private: System::Windows::Forms::Label^ labelComponents;

	private: System::Windows::Forms::Label^ labelDescription;
	private: System::Windows::Forms::TextBox^ textDescription;
	private: System::Windows::Forms::TextBox^ textAtHigherLevels;
	private: System::Windows::Forms::Label^ labelAtHigherLevels;
	private: System::Windows::Forms::Panel^ panelAddNewSpell;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Label^ labelMaterials;
	private: System::Windows::Forms::CheckBox^ checkBoxConcentration;
	private: System::Windows::Forms::CheckBox^ checkBoxMaterial;
	private: System::Windows::Forms::CheckBox^ checkBoxSemantic;
	private: System::Windows::Forms::CheckBox^ checkBoxVerbal;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(spellAddPopUp::typeid));
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->labelSpellName = (gcnew System::Windows::Forms::Label());
			this->textSpellName = (gcnew System::Windows::Forms::TextBox());
			this->labelSpellLevel = (gcnew System::Windows::Forms::Label());
			this->labelSchool = (gcnew System::Windows::Forms::Label());
			this->dropdownSpellLevel = (gcnew System::Windows::Forms::ComboBox());
			this->dropdownSchool = (gcnew System::Windows::Forms::ComboBox());
			this->labelCastingTime = (gcnew System::Windows::Forms::Label());
			this->textCastingTime = (gcnew System::Windows::Forms::TextBox());
			this->textRange = (gcnew System::Windows::Forms::TextBox());
			this->labelRange = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->labelSpellcastingAbility = (gcnew System::Windows::Forms::Label());
			this->dropdownSpellcastingAbility = (gcnew System::Windows::Forms::ComboBox());
			this->textTarget = (gcnew System::Windows::Forms::TextBox());
			this->labelTarget = (gcnew System::Windows::Forms::Label());
			this->textDuration = (gcnew System::Windows::Forms::TextBox());
			this->labelDuration = (gcnew System::Windows::Forms::Label());
			this->checkBoxRitual = (gcnew System::Windows::Forms::CheckBox());
			this->headerDetails = (gcnew System::Windows::Forms::Label());
			this->labelRequirements = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxConcentration = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxMaterial = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxSemantic = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxVerbal = (gcnew System::Windows::Forms::CheckBox());
			this->labelMaterials = (gcnew System::Windows::Forms::Label());
			this->textMaterialComponents = (gcnew System::Windows::Forms::TextBox());
			this->labelComponents = (gcnew System::Windows::Forms::Label());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->textDescription = (gcnew System::Windows::Forms::TextBox());
			this->textAtHigherLevels = (gcnew System::Windows::Forms::TextBox());
			this->labelAtHigherLevels = (gcnew System::Windows::Forms::Label());
			this->panelAddNewSpell = (gcnew System::Windows::Forms::Panel());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelAddNewSpell->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonCancel
			// 
			this->buttonCancel->AutoSize = true;
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancel->Location = System::Drawing::Point(294, 1017);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(84, 35);
			this->buttonCancel->TabIndex = 4;
			this->buttonCancel->TabStop = false;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &spellAddPopUp::buttonCancel_Click);
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
			// textSpellName
			// 
			this->textSpellName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textSpellName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textSpellName->Location = System::Drawing::Point(20, 43);
			this->textSpellName->Name = L"textSpellName";
			this->textSpellName->Size = System::Drawing::Size(283, 22);
			this->textSpellName->TabIndex = 1;
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
			// dropdownSpellLevel
			// 
			this->dropdownSpellLevel->FormattingEnabled = true;
			this->dropdownSpellLevel->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Cantrip", L"1st Level", L"2nd Level",
					L"3rd Level", L"4th Level", L"5th Level", L"6th Level", L"7th Level", L"8th Level", L"9th Level"
			});
			this->dropdownSpellLevel->Location = System::Drawing::Point(20, 109);
			this->dropdownSpellLevel->Name = L"dropdownSpellLevel";
			this->dropdownSpellLevel->Size = System::Drawing::Size(104, 21);
			this->dropdownSpellLevel->TabIndex = 13;
			this->dropdownSpellLevel->TabStop = false;
			this->dropdownSpellLevel->Text = L"Cantrip";
			// 
			// dropdownSchool
			// 
			this->dropdownSchool->FormattingEnabled = true;
			this->dropdownSchool->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Abjuration", L"Conjuration", L"Divination",
					L"Enchantment", L"Evocation", L"Illusion", L"Necromancy", L"Transmutation"
			});
			this->dropdownSchool->Location = System::Drawing::Point(143, 109);
			this->dropdownSchool->Name = L"dropdownSchool";
			this->dropdownSchool->Size = System::Drawing::Size(104, 21);
			this->dropdownSchool->TabIndex = 13;
			this->dropdownSchool->TabStop = false;
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
			// textCastingTime
			// 
			this->textCastingTime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textCastingTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCastingTime->Location = System::Drawing::Point(20, 175);
			this->textCastingTime->Name = L"textCastingTime";
			this->textCastingTime->Size = System::Drawing::Size(161, 22);
			this->textCastingTime->TabIndex = 2;
			// 
			// textRange
			// 
			this->textRange->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textRange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textRange->Location = System::Drawing::Point(208, 175);
			this->textRange->Name = L"textRange";
			this->textRange->Size = System::Drawing::Size(161, 22);
			this->textRange->TabIndex = 3;
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
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->labelSpellcastingAbility);
			this->panel2->Controls->Add(this->dropdownSpellcastingAbility);
			this->panel2->Controls->Add(this->textTarget);
			this->panel2->Controls->Add(this->labelTarget);
			this->panel2->Controls->Add(this->textDuration);
			this->panel2->Controls->Add(this->labelDuration);
			this->panel2->Controls->Add(this->checkBoxRitual);
			this->panel2->Controls->Add(this->textSpellName);
			this->panel2->Controls->Add(this->textRange);
			this->panel2->Controls->Add(this->labelSpellName);
			this->panel2->Controls->Add(this->labelRange);
			this->panel2->Controls->Add(this->labelSpellLevel);
			this->panel2->Controls->Add(this->textCastingTime);
			this->panel2->Controls->Add(this->labelSchool);
			this->panel2->Controls->Add(this->labelCastingTime);
			this->panel2->Controls->Add(this->dropdownSpellLevel);
			this->panel2->Controls->Add(this->dropdownSchool);
			this->panel2->Location = System::Drawing::Point(17, 37);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(448, 285);
			this->panel2->TabIndex = 19;
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
			// dropdownSpellcastingAbility
			// 
			this->dropdownSpellcastingAbility->FormattingEnabled = true;
			this->dropdownSpellcastingAbility->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Strength", L"Dexterity", L"Constitution",
					L"Intelligence", L"Wisdom", L"Charisma"
			});
			this->dropdownSpellcastingAbility->Location = System::Drawing::Point(265, 109);
			this->dropdownSpellcastingAbility->Name = L"dropdownSpellcastingAbility";
			this->dropdownSpellcastingAbility->Size = System::Drawing::Size(165, 21);
			this->dropdownSpellcastingAbility->TabIndex = 24;
			this->dropdownSpellcastingAbility->TabStop = false;
			// 
			// textTarget
			// 
			this->textTarget->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textTarget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textTarget->Location = System::Drawing::Point(208, 241);
			this->textTarget->Name = L"textTarget";
			this->textTarget->Size = System::Drawing::Size(161, 22);
			this->textTarget->TabIndex = 5;
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
			// textDuration
			// 
			this->textDuration->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textDuration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDuration->Location = System::Drawing::Point(20, 241);
			this->textDuration->Name = L"textDuration";
			this->textDuration->Size = System::Drawing::Size(161, 22);
			this->textDuration->TabIndex = 4;
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
			// checkBoxRitual
			// 
			this->checkBoxRitual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxRitual->Location = System::Drawing::Point(311, 41);
			this->checkBoxRitual->Name = L"checkBoxRitual";
			this->checkBoxRitual->Size = System::Drawing::Size(74, 24);
			this->checkBoxRitual->TabIndex = 19;
			this->checkBoxRitual->TabStop = false;
			this->checkBoxRitual->Text = L"Ritual";
			this->checkBoxRitual->UseVisualStyleBackColor = true;
			// 
			// headerDetails
			// 
			this->headerDetails->AutoSize = true;
			this->headerDetails->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->headerDetails->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->headerDetails->Location = System::Drawing::Point(12, 9);
			this->headerDetails->Name = L"headerDetails";
			this->headerDetails->Size = System::Drawing::Size(93, 25);
			this->headerDetails->TabIndex = 20;
			this->headerDetails->Text = L"Details";
			// 
			// labelRequirements
			// 
			this->labelRequirements->AutoSize = true;
			this->labelRequirements->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRequirements->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->labelRequirements->Location = System::Drawing::Point(12, 355);
			this->labelRequirements->Name = L"labelRequirements";
			this->labelRequirements->Size = System::Drawing::Size(176, 25);
			this->labelRequirements->TabIndex = 22;
			this->labelRequirements->Text = L"Requirements";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->checkBoxConcentration);
			this->panel1->Controls->Add(this->checkBoxMaterial);
			this->panel1->Controls->Add(this->checkBoxSemantic);
			this->panel1->Controls->Add(this->checkBoxVerbal);
			this->panel1->Controls->Add(this->labelMaterials);
			this->panel1->Controls->Add(this->textMaterialComponents);
			this->panel1->Controls->Add(this->labelComponents);
			this->panel1->Location = System::Drawing::Point(17, 383);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(448, 139);
			this->panel1->TabIndex = 21;
			// 
			// checkBoxConcentration
			// 
			this->checkBoxConcentration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBoxConcentration->Location = System::Drawing::Point(20, 107);
			this->checkBoxConcentration->Name = L"checkBoxConcentration";
			this->checkBoxConcentration->Size = System::Drawing::Size(133, 24);
			this->checkBoxConcentration->TabIndex = 30;
			this->checkBoxConcentration->TabStop = false;
			this->checkBoxConcentration->Text = L"Concentration";
			this->checkBoxConcentration->UseVisualStyleBackColor = true;
			// 
			// checkBoxMaterial
			// 
			this->checkBoxMaterial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxMaterial->Location = System::Drawing::Point(20, 86);
			this->checkBoxMaterial->Name = L"checkBoxMaterial";
			this->checkBoxMaterial->Size = System::Drawing::Size(133, 24);
			this->checkBoxMaterial->TabIndex = 29;
			this->checkBoxMaterial->TabStop = false;
			this->checkBoxMaterial->Text = L"Material";
			this->checkBoxMaterial->UseVisualStyleBackColor = true;
			this->checkBoxMaterial->CheckedChanged += gcnew System::EventHandler(this, &spellAddPopUp::checkBoxMaterial_CheckedChanged);
			// 
			// checkBoxSemantic
			// 
			this->checkBoxSemantic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxSemantic->Location = System::Drawing::Point(20, 64);
			this->checkBoxSemantic->Name = L"checkBoxSemantic";
			this->checkBoxSemantic->Size = System::Drawing::Size(133, 24);
			this->checkBoxSemantic->TabIndex = 28;
			this->checkBoxSemantic->TabStop = false;
			this->checkBoxSemantic->Text = L"Semantic";
			this->checkBoxSemantic->UseVisualStyleBackColor = true;
			// 
			// checkBoxVerbal
			// 
			this->checkBoxVerbal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxVerbal->Location = System::Drawing::Point(20, 43);
			this->checkBoxVerbal->Name = L"checkBoxVerbal";
			this->checkBoxVerbal->Size = System::Drawing::Size(133, 24);
			this->checkBoxVerbal->TabIndex = 26;
			this->checkBoxVerbal->TabStop = false;
			this->checkBoxVerbal->Text = L"Verbal";
			this->checkBoxVerbal->UseVisualStyleBackColor = true;
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
			this->textMaterialComponents->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textMaterialComponents->Size = System::Drawing::Size(243, 84);
			this->textMaterialComponents->TabIndex = 6;
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
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDescription->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->labelDescription->Location = System::Drawing::Point(12, 555);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(145, 25);
			this->labelDescription->TabIndex = 24;
			this->labelDescription->Text = L"Description";
			// 
			// textDescription
			// 
			this->textDescription->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDescription->Location = System::Drawing::Point(17, 583);
			this->textDescription->Multiline = true;
			this->textDescription->Name = L"textDescription";
			this->textDescription->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textDescription->Size = System::Drawing::Size(448, 210);
			this->textDescription->TabIndex = 7;
			// 
			// textAtHigherLevels
			// 
			this->textAtHigherLevels->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textAtHigherLevels->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textAtHigherLevels->Location = System::Drawing::Point(17, 854);
			this->textAtHigherLevels->Multiline = true;
			this->textAtHigherLevels->Name = L"textAtHigherLevels";
			this->textAtHigherLevels->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textAtHigherLevels->Size = System::Drawing::Size(448, 140);
			this->textAtHigherLevels->TabIndex = 8;
			// 
			// labelAtHigherLevels
			// 
			this->labelAtHigherLevels->AutoSize = true;
			this->labelAtHigherLevels->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAtHigherLevels->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->labelAtHigherLevels->Location = System::Drawing::Point(12, 826);
			this->labelAtHigherLevels->Name = L"labelAtHigherLevels";
			this->labelAtHigherLevels->Size = System::Drawing::Size(205, 25);
			this->labelAtHigherLevels->TabIndex = 26;
			this->labelAtHigherLevels->Text = L"At Higher Levels";
			// 
			// panelAddNewSpell
			// 
			this->panelAddNewSpell->Controls->Add(this->buttonSave);
			this->panelAddNewSpell->Controls->Add(this->headerDetails);
			this->panelAddNewSpell->Controls->Add(this->buttonCancel);
			this->panelAddNewSpell->Controls->Add(this->textAtHigherLevels);
			this->panelAddNewSpell->Controls->Add(this->panel2);
			this->panelAddNewSpell->Controls->Add(this->labelAtHigherLevels);
			this->panelAddNewSpell->Controls->Add(this->panel1);
			this->panelAddNewSpell->Controls->Add(this->textDescription);
			this->panelAddNewSpell->Controls->Add(this->labelRequirements);
			this->panelAddNewSpell->Controls->Add(this->labelDescription);
			this->panelAddNewSpell->Location = System::Drawing::Point(0, 0);
			this->panelAddNewSpell->Name = L"panelAddNewSpell";
			this->panelAddNewSpell->Size = System::Drawing::Size(482, 1061);
			this->panelAddNewSpell->TabIndex = 27;
			// 
			// buttonSave
			// 
			this->buttonSave->AutoSize = true;
			this->buttonSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSave->Location = System::Drawing::Point(113, 1017);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 35);
			this->buttonSave->TabIndex = 27;
			this->buttonSave->TabStop = false;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &spellAddPopUp::buttonSave_Click);
			// 
			// spellAddPopUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(601, 653);
			this->Controls->Add(this->panelAddNewSpell);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"spellAddPopUp";
			this->Text = L"Add New Spell";
			this->Load += gcnew System::EventHandler(this, &spellAddPopUp::spellAddPopUp_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelAddNewSpell->ResumeLayout(false);
			this->panelAddNewSpell->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: System::Void spellAddPopUp_Load(System::Object^ sender, System::EventArgs^ e) {
			this->VerticalScroll->Value = 0;
			this->ActiveControl = textSpellName;
		}
		private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
			
			writeSpellToCSV(getSpellLevelFilePath(dropdownSpellLevel), dropdownSpellLevel, dropdownSchool,
				dropdownSpellcastingAbility, checkBoxRitual, checkBoxVerbal, checkBoxSemantic, checkBoxMaterial,
				checkBoxConcentration, textSpellName, textCastingTime, textRange, textDuration, textTarget,
				textMaterialComponents, textDescription, textAtHigherLevels);

			listToAddSpell = MarshalString(dropdownSpellLevel->Text);
			currentSpellName = MarshalString(textSpellName->Text);
			this->Close();
		}
		private: System::Void checkBoxMaterial_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			if (checkBoxMaterial->Checked == true)
			{
				labelMaterials->Visible = true;
				textMaterialComponents->Visible = true;
			}
			else
			{
				labelMaterials->Visible = false;
				textMaterialComponents->Visible = false;
			}
		}
	};
}
#pragma once

#include "Header.h"

namespace CharacterSheet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SaveConfirm
	/// </summary>
	public ref class SaveConfirm : public System::Windows::Forms::Form
	{
	public:
		SaveConfirm(void)
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
		~SaveConfirm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonConfirm;
	private: System::Windows::Forms::Button^ buttonCancel;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SaveConfirm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(411, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Are you sure you would like to save your changes\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Changes cannot be undone once saved";
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConfirm->Location = System::Drawing::Point(104, 129);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(68, 23);
			this->buttonConfirm->TabIndex = 2;
			this->buttonConfirm->Text = L"Save";
			this->buttonConfirm->UseVisualStyleBackColor = true;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &SaveConfirm::buttonConfirm_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancel->Location = System::Drawing::Point(278, 129);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(68, 23);
			this->buttonCancel->TabIndex = 3;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &SaveConfirm::button1_Click);
			// 
			// SaveConfirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(454, 197);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SaveConfirm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SaveConfirm";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Confirm saving changes to character sheet.
		private: System::Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) {

			// Change saveCharacterChanges to true in Header.h.
			saveCharacterChanges = true;
			
			// Close form.
			this->Close();
		}

		// Cancel saving changes to character sheet.
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			// Close form.
			this->Close();
		}
	};
}

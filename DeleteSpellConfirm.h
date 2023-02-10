#pragma once

#include "Header.h"
#include "ExpandListSpells.h"

namespace CharacterSheet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteSpellConfirm
	/// </summary>
	public ref class DeleteSpellConfirm : public System::Windows::Forms::Form
	{
	public:
		DeleteSpellConfirm(void)
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
		~DeleteSpellConfirm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Button^ buttonDelete;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteSpellConfirm::typeid));
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancel->Location = System::Drawing::Point(278, 127);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(68, 23);
			this->buttonCancel->TabIndex = 7;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &DeleteSpellConfirm::buttonCancel_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDelete->Location = System::Drawing::Point(104, 127);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(68, 23);
			this->buttonDelete->TabIndex = 6;
			this->buttonDelete->Text = L"Delete";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &DeleteSpellConfirm::buttonDelete_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Changes cannot be undone once saved";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(388, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Are you sure you would like to delete this spell\?";
			// 
			// DeleteSpellConfirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 197);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DeleteSpellConfirm";
			this->Text = L"DeleteSpellConfirm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		
			// Set bool used to evaluate whether to delete spell to true.
			// Close form.
			spellDeleteConfirm = true;
			this->Close();
		}
		private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {

			this->Close();
		}
	};
}

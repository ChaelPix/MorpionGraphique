#pragma once

namespace MorpionGraphique {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ TLButton;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ LMButton;

	private: System::Windows::Forms::Button^ TButton;
	private: System::Windows::Forms::Button^ MButton;
	private: System::Windows::Forms::Button^ BMButton;



	private: System::Windows::Forms::Button^ BLButton;

	private: System::Windows::Forms::Button^ TRButton;
	private: System::Windows::Forms::Button^ MRButton;
	private: System::Windows::Forms::Button^ BRButton;




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TLButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LMButton = (gcnew System::Windows::Forms::Button());
			this->TButton = (gcnew System::Windows::Forms::Button());
			this->MButton = (gcnew System::Windows::Forms::Button());
			this->BMButton = (gcnew System::Windows::Forms::Button());
			this->BLButton = (gcnew System::Windows::Forms::Button());
			this->TRButton = (gcnew System::Windows::Forms::Button());
			this->MRButton = (gcnew System::Windows::Forms::Button());
			this->BRButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Noto Mono", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(524, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Joueur";
			// 
			// TLButton
			// 
			this->TLButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->TLButton->Location = System::Drawing::Point(46, 29);
			this->TLButton->Name = L"TLButton";
			this->TLButton->Size = System::Drawing::Size(130, 130);
			this->TLButton->TabIndex = 2;
			this->TLButton->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Noto Mono", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(492, 204);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 39);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ordinateur";
			// 
			// LMButton
			// 
			this->LMButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->LMButton->Location = System::Drawing::Point(46, 165);
			this->LMButton->Name = L"LMButton";
			this->LMButton->Size = System::Drawing::Size(130, 130);
			this->LMButton->TabIndex = 4;
			this->LMButton->UseVisualStyleBackColor = false;
			// 
			// TButton
			// 
			this->TButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->TButton->Location = System::Drawing::Point(182, 29);
			this->TButton->Name = L"TButton";
			this->TButton->Size = System::Drawing::Size(130, 130);
			this->TButton->TabIndex = 4;
			this->TButton->UseVisualStyleBackColor = false;
			// 
			// MButton
			// 
			this->MButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MButton->Location = System::Drawing::Point(182, 165);
			this->MButton->Name = L"MButton";
			this->MButton->Size = System::Drawing::Size(130, 130);
			this->MButton->TabIndex = 5;
			this->MButton->UseVisualStyleBackColor = false;
			// 
			// BMButton
			// 
			this->BMButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BMButton->Location = System::Drawing::Point(182, 301);
			this->BMButton->Name = L"BMButton";
			this->BMButton->Size = System::Drawing::Size(130, 130);
			this->BMButton->TabIndex = 6;
			this->BMButton->UseVisualStyleBackColor = false;
			// 
			// BLButton
			// 
			this->BLButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BLButton->Location = System::Drawing::Point(46, 301);
			this->BLButton->Name = L"BLButton";
			this->BLButton->Size = System::Drawing::Size(130, 130);
			this->BLButton->TabIndex = 7;
			this->BLButton->UseVisualStyleBackColor = false;
			// 
			// TRButton
			// 
			this->TRButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->TRButton->Location = System::Drawing::Point(318, 29);
			this->TRButton->Name = L"TRButton";
			this->TRButton->Size = System::Drawing::Size(130, 130);
			this->TRButton->TabIndex = 8;
			this->TRButton->UseVisualStyleBackColor = false;
			// 
			// MRButton
			// 
			this->MRButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MRButton->Location = System::Drawing::Point(318, 165);
			this->MRButton->Name = L"MRButton";
			this->MRButton->Size = System::Drawing::Size(130, 130);
			this->MRButton->TabIndex = 9;
			this->MRButton->UseVisualStyleBackColor = false;
			// 
			// BRButton
			// 
			this->BRButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BRButton->Location = System::Drawing::Point(318, 301);
			this->BRButton->Name = L"BRButton";
			this->BRButton->Size = System::Drawing::Size(130, 130);
			this->BRButton->TabIndex = 10;
			this->BRButton->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 461);
			this->Controls->Add(this->BRButton);
			this->Controls->Add(this->MRButton);
			this->Controls->Add(this->TRButton);
			this->Controls->Add(this->BLButton);
			this->Controls->Add(this->BMButton);
			this->Controls->Add(this->MButton);
			this->Controls->Add(this->TButton);
			this->Controls->Add(this->LMButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TLButton);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}

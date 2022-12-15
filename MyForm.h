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
	private: System::Windows::Forms::PictureBox^ MorpionGrid;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ TLButton;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

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
			this->MorpionGrid = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TLButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MorpionGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// MorpionGrid
			// 
			this->MorpionGrid->Location = System::Drawing::Point(46, 29);
			this->MorpionGrid->Name = L"MorpionGrid";
			this->MorpionGrid->Size = System::Drawing::Size(390, 390);
			this->MorpionGrid->TabIndex = 0;
			this->MorpionGrid->TabStop = false;
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(46, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 130);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(182, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 130);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(182, 165);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 130);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(182, 301);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 130);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(46, 301);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 130);
			this->button5->TabIndex = 7;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(318, 29);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 130);
			this->button6->TabIndex = 8;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(318, 165);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 130);
			this->button7->TabIndex = 9;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(318, 301);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 130);
			this->button8->TabIndex = 10;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 461);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TLButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MorpionGrid);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MorpionGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}

#pragma once
#include "MorpionCalculs.h"

#define Player 1
#define AI 2
#define Draw 3

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
	private: System::Windows::Forms::Label^ TxtPlayer;
	protected:

	protected:

	private: System::Windows::Forms::Button^ TLButton;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ MLButton;


	private: System::Windows::Forms::Button^ TButton;
	private: System::Windows::Forms::Button^ MButton;
	private: System::Windows::Forms::Button^ BButton;




	private: System::Windows::Forms::Button^ BLButton;

	private: System::Windows::Forms::Button^ TRButton;
	private: System::Windows::Forms::Button^ MRButton;
	private: System::Windows::Forms::Button^ BRButton;
	private: System::Windows::Forms::PictureBox^ playerImg;
	private: System::Windows::Forms::PictureBox^ aiImg;
	private: System::Windows::Forms::Label^ TxtScore;
	private: System::Windows::Forms::Label^ TxtDraws;
	private: System::Windows::Forms::Button^ ButtonReplay;
	private: System::Windows::Forms::Button^ ButtonQuitter;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ TxtVictory;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TxtPlayer = (gcnew System::Windows::Forms::Label());
			this->TLButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MLButton = (gcnew System::Windows::Forms::Button());
			this->TButton = (gcnew System::Windows::Forms::Button());
			this->MButton = (gcnew System::Windows::Forms::Button());
			this->BButton = (gcnew System::Windows::Forms::Button());
			this->BLButton = (gcnew System::Windows::Forms::Button());
			this->TRButton = (gcnew System::Windows::Forms::Button());
			this->MRButton = (gcnew System::Windows::Forms::Button());
			this->BRButton = (gcnew System::Windows::Forms::Button());
			this->playerImg = (gcnew System::Windows::Forms::PictureBox());
			this->aiImg = (gcnew System::Windows::Forms::PictureBox());
			this->TxtScore = (gcnew System::Windows::Forms::Label());
			this->TxtDraws = (gcnew System::Windows::Forms::Label());
			this->ButtonReplay = (gcnew System::Windows::Forms::Button());
			this->ButtonQuitter = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TxtVictory = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aiImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TxtPlayer
			// 
			this->TxtPlayer->AutoSize = true;
			this->TxtPlayer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TxtPlayer->Location = System::Drawing::Point(523, 29);
			this->TxtPlayer->Name = L"TxtPlayer";
			this->TxtPlayer->Size = System::Drawing::Size(125, 44);
			this->TxtPlayer->TabIndex = 1;
			this->TxtPlayer->Text = L"Joueur";
			// 
			// TLButton
			// 
			this->TLButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->TLButton->CausesValidation = false;
			this->TLButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TLButton->Location = System::Drawing::Point(46, 29);
			this->TLButton->Name = L"TLButton";
			this->TLButton->Size = System::Drawing::Size(130, 130);
			this->TLButton->TabIndex = 0;
			this->TLButton->TabStop = false;
			this->TLButton->UseMnemonic = false;
			this->TLButton->UseVisualStyleBackColor = false;
			this->TLButton->Click += gcnew System::EventHandler(this, &MyForm::CaseClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(662, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 38);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ordinateur";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MLButton
			// 
			this->MLButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MLButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MLButton->Location = System::Drawing::Point(46, 165);
			this->MLButton->Name = L"MLButton";
			this->MLButton->Size = System::Drawing::Size(130, 130);
			this->MLButton->TabIndex = 3;
			this->MLButton->TabStop = false;
			this->MLButton->UseVisualStyleBackColor = false;
			this->MLButton->Click += gcnew System::EventHandler(this, &MyForm::CaseClick);
			// 
			// TButton
			// 
			this->TButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->TButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TButton->Location = System::Drawing::Point(182, 29);
			this->TButton->Name = L"TButton";
			this->TButton->Size = System::Drawing::Size(130, 130);
			this->TButton->TabIndex = 1;
			this->TButton->TabStop = false;
			this->TButton->UseVisualStyleBackColor = false;
			this->TButton->Click += gcnew System::EventHandler(this, &MyForm::CaseClick);
			// 
			// MButton
			// 
			this->MButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MButton->Location = System::Drawing::Point(182, 165);
			this->MButton->Name = L"MButton";
			this->MButton->Size = System::Drawing::Size(130, 130);
			this->MButton->TabIndex = 4;
			this->MButton->TabStop = false;
			this->MButton->UseVisualStyleBackColor = false;
			this->MButton->Click += gcnew System::EventHandler(this, &MyForm::CaseClick);
			// 
			// BButton
			// 
			this->BButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BButton->Location = System::Drawing::Point(182, 301);
			this->BButton->Name = L"BButton";
			this->BButton->Size = System::Drawing::Size(130, 130);
			this->BButton->TabIndex = 7;
			this->BButton->TabStop = false;
			this->BButton->UseVisualStyleBackColor = false;
			this->BButton->Click += gcnew System::EventHandler(this, &MyForm::CaseClick);
			// 
			// BLButton
			// 
			this->BLButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BLButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BLButton->Location = System::Drawing::Point(46, 301);
			this->BLButton->Name = L"BLButton";
			this->BLButton->Size = System::Drawing::Size(130, 130);
			this->BLButton->TabIndex = 6;
			this->BLButton->TabStop = false;
			this->BLButton->UseVisualStyleBackColor = false;
			this->BLButton->Click += gcnew System::EventHandler(this, &MyForm::CaseClick);
			// 
			// TRButton
			// 
			this->TRButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->TRButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TRButton->Location = System::Drawing::Point(318, 29);
			this->TRButton->Name = L"TRButton";
			this->TRButton->Size = System::Drawing::Size(130, 130);
			this->TRButton->TabIndex = 2;
			this->TRButton->TabStop = false;
			this->TRButton->UseVisualStyleBackColor = false;
			this->TRButton->Click += gcnew System::EventHandler(this, &MyForm::CaseClick);
			// 
			// MRButton
			// 
			this->MRButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MRButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MRButton->Location = System::Drawing::Point(318, 165);
			this->MRButton->Name = L"MRButton";
			this->MRButton->Size = System::Drawing::Size(130, 130);
			this->MRButton->TabIndex = 5;
			this->MRButton->TabStop = false;
			this->MRButton->UseVisualStyleBackColor = false;
			this->MRButton->Click += gcnew System::EventHandler(this, &MyForm::CaseClick);
			// 
			// BRButton
			// 
			this->BRButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BRButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BRButton->Location = System::Drawing::Point(318, 301);
			this->BRButton->Name = L"BRButton";
			this->BRButton->Size = System::Drawing::Size(130, 130);
			this->BRButton->TabIndex = 8;
			this->BRButton->TabStop = false;
			this->BRButton->UseVisualStyleBackColor = false;
			this->BRButton->Click += gcnew System::EventHandler(this, &MyForm::CaseClick);
			// 
			// playerImg
			// 
			this->playerImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playerImg.Image")));
			this->playerImg->Location = System::Drawing::Point(531, 78);
			this->playerImg->Name = L"playerImg";
			this->playerImg->Size = System::Drawing::Size(100, 100);
			this->playerImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->playerImg->TabIndex = 9;
			this->playerImg->TabStop = false;
			// 
			// aiImg
			// 
			this->aiImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aiImg.Image")));
			this->aiImg->Location = System::Drawing::Point(691, 78);
			this->aiImg->Name = L"aiImg";
			this->aiImg->Size = System::Drawing::Size(100, 100);
			this->aiImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->aiImg->TabIndex = 10;
			this->aiImg->TabStop = false;
			// 
			// TxtScore
			// 
			this->TxtScore->AutoSize = true;
			this->TxtScore->Font = (gcnew System::Drawing::Font(L"Times New Roman", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtScore->Location = System::Drawing::Point(627, 181);
			this->TxtScore->Name = L"TxtScore";
			this->TxtScore->Size = System::Drawing::Size(73, 46);
			this->TxtScore->TabIndex = 11;
			this->TxtScore->Text = L"0-0";
			// 
			// TxtDraws
			// 
			this->TxtDraws->AutoSize = true;
			this->TxtDraws->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtDraws->Location = System::Drawing::Point(605, 227);
			this->TxtDraws->Name = L"TxtDraws";
			this->TxtDraws->Size = System::Drawing::Size(114, 22);
			this->TxtDraws->TabIndex = 12;
			this->TxtDraws->Text = L"Égalité(s) : 0";
			// 
			// ButtonReplay
			// 
			this->ButtonReplay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonReplay->FlatAppearance->BorderSize = 0;
			this->ButtonReplay->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ButtonFace;
			this->ButtonReplay->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ButtonFace;
			this->ButtonReplay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonReplay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonReplay->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ButtonReplay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonReplay.Image")));
			this->ButtonReplay->Location = System::Drawing::Point(587, 390);
			this->ButtonReplay->Name = L"ButtonReplay";
			this->ButtonReplay->Size = System::Drawing::Size(150, 50);
			this->ButtonReplay->TabIndex = 13;
			this->ButtonReplay->Text = L"Rejouer";
			this->ButtonReplay->UseVisualStyleBackColor = true;
			this->ButtonReplay->Visible = false;
			this->ButtonReplay->Click += gcnew System::EventHandler(this, &MyForm::Replay);
			// 
			// ButtonQuitter
			// 
			this->ButtonQuitter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonQuitter->FlatAppearance->BorderSize = 0;
			this->ButtonQuitter->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ButtonFace;
			this->ButtonQuitter->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ButtonFace;
			this->ButtonQuitter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonQuitter->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonQuitter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonQuitter.Image")));
			this->ButtonQuitter->Location = System::Drawing::Point(587, 446);
			this->ButtonQuitter->Name = L"ButtonQuitter";
			this->ButtonQuitter->Size = System::Drawing::Size(150, 50);
			this->ButtonQuitter->TabIndex = 14;
			this->ButtonQuitter->Text = L"Quitter";
			this->ButtonQuitter->UseVisualStyleBackColor = true;
			this->ButtonQuitter->Click += gcnew System::EventHandler(this, &MyForm::ExitGame);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(71, 437);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 125);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// TxtVictory
			// 
			this->TxtVictory->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtVictory->Location = System::Drawing::Point(478, 267);
			this->TxtVictory->Name = L"TxtVictory";
			this->TxtVictory->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TxtVictory->Size = System::Drawing::Size(363, 102);
			this->TxtVictory->TabIndex = 16;
			this->TxtVictory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(841, 561);
			this->Controls->Add(this->TxtVictory);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ButtonQuitter);
			this->Controls->Add(this->ButtonReplay);
			this->Controls->Add(this->TxtDraws);
			this->Controls->Add(this->TxtScore);
			this->Controls->Add(this->aiImg);
			this->Controls->Add(this->playerImg);
			this->Controls->Add(this->BRButton);
			this->Controls->Add(this->MRButton);
			this->Controls->Add(this->TRButton);
			this->Controls->Add(this->BLButton);
			this->Controls->Add(this->BButton);
			this->Controls->Add(this->MButton);
			this->Controls->Add(this->TButton);
			this->Controls->Add(this->MLButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TLButton);
			this->Controls->Add(this->TxtPlayer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MxrpiOn";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aiImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void GameFinished(int playerId)
		{
			switch (playerId)
			{
				case Player: TxtVictory->Text = "Vous remportez la partie !"; break;
				case AI: TxtVictory->Text = "L'ordinateur remporte la partie !"; break;
				default: TxtVictory->Text = "Égalité !";
			}

			//Scores
			SaveScore(playerId);
			TxtScore->Text = GetScore(Player) + "-" + GetScore(AI);
			TxtDraws->Text = "Égalité(s) : " + GetScore(Draw);

			ButtonReplay->Visible = true;
		}

		void TurnToAI()
		{
			std::string s = AITurn();	//Recupere le nom de la case choisie par l'AI
			String^ AICaseName = gcnew String(s.c_str());
			Object^ aiCase = this->Controls->Find(AICaseName, true)[0];
			Button^ button = safe_cast<Button^>(aiCase);
			button->Image = aiImg->Image;

			if (HasSomeoneWon(AI))	//Check si l'ordinateur a gagné
			{
				GameFinished(AI);
				return;
			}

			if (isDraw())	//Sinon check s'il y a égalité
				GameFinished(Draw);
		}

		void ResetUI()
		{
			Image^ defautImg = TxtPlayer->Image;
			TLButton->Image = defautImg;
			TButton->Image = defautImg;
			TRButton->Image = defautImg;
			MLButton->Image = defautImg;
			MButton->Image = defautImg;
			MRButton->Image = defautImg;
			BLButton->Image = defautImg;
			BButton->Image = defautImg;
			BRButton->Image = defautImg;
			TxtVictory->Text = "";
			ButtonReplay->Visible = false;
		}

	private: System::Void CaseClick(System::Object^ sender, System::EventArgs^ e) {
		
		Button^ button = safe_cast<Button^>(sender);
		int buttonId = button->TabIndex;

		if (!IsCaseEmpty(buttonId) || isGameOver()) return; //ne fait rien si la case est déjà prise ou si partie finie

		button->Image = playerImg->Image;	//Set la case du joueur
		SetCase(buttonId, Player);

		if (HasSomeoneWon(Player))	//Check si le joueur a gagné
		{
			GameFinished(Player);
			return;
		}
			
		if(isDraw()) //Sinon check s'il y a égalité
		{
			GameFinished(Draw);
			return;
		}

		TurnToAI();	//Sinon, au tour de l'AI de jouer
	}
	private: System::Void ExitGame(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void Replay(System::Object^ sender, System::EventArgs^ e) {
		ResetUI();
		ResetGrid();
	}
};
}

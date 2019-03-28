

namespace EyeTracking {

#pragma once
	#include <Windows.h>
	//#include <string>
	#pragma comment(lib, "Winmm.lib")
#include "MyForm2.h"




	//using namespace std;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;

	//#include "MyForm.h"

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
			//SpeechSynthesizer^synth = gcnew SpeechSynthesizer();
			//synth->Speak("Hello World");
			Cursor->Hide();
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnEmail;
	private: System::Windows::Forms::Button^  btnTextToSpeech;
	private: System::Windows::Forms::Button^  btnSettings;
	private: System::Windows::Forms::Button^  btnQuit;
	private: System::Windows::Forms::Button^  btnRing;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		int timerCounter;
	private: System::Windows::Forms::TextBox^  txtTextToSpeech;
	private: System::Windows::Forms::Label^  lblTextToSpeech;
	private: System::Windows::Forms::TableLayoutPanel^  layoutMainForm;
	private: System::Windows::Forms::TableLayoutPanel^  layoutNestedTextToSpeech;
			 int selectedButton;
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnEmail = (gcnew System::Windows::Forms::Button());
			this->btnTextToSpeech = (gcnew System::Windows::Forms::Button());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnQuit = (gcnew System::Windows::Forms::Button());
			this->btnRing = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtTextToSpeech = (gcnew System::Windows::Forms::TextBox());
			this->lblTextToSpeech = (gcnew System::Windows::Forms::Label());
			this->layoutMainForm = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->layoutNestedTextToSpeech = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->layoutMainForm->SuspendLayout();
			this->layoutNestedTextToSpeech->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnEmail
			// 
			this->btnEmail->AutoEllipsis = true;
			this->btnEmail->BackColor = System::Drawing::Color::Transparent;
			this->btnEmail->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnEmail->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnEmail->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEmail->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmail->ForeColor = System::Drawing::Color::White;
			this->btnEmail->Location = System::Drawing::Point(4, 5);
			this->btnEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEmail->Name = L"btnEmail";
			this->btnEmail->Size = System::Drawing::Size(421, 227);
			this->btnEmail->TabIndex = 0;
			this->btnEmail->Text = L"Email";
			this->btnEmail->UseVisualStyleBackColor = false;
			this->btnEmail->Click += gcnew System::EventHandler(this, &MyForm::btnEmail_Click);
			this->btnEmail->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnEmail_MouseEnter);
			this->btnEmail->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnEmail_Leave);
			this->btnEmail->MouseHover += gcnew System::EventHandler(this, &MyForm::btnEmail_Hover);
			// 
			// btnTextToSpeech
			// 
			this->btnTextToSpeech->BackColor = System::Drawing::Color::Transparent;
			this->btnTextToSpeech->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTextToSpeech->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTextToSpeech->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTextToSpeech->ForeColor = System::Drawing::Color::White;
			this->btnTextToSpeech->Location = System::Drawing::Point(433, 5);
			this->btnTextToSpeech->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnTextToSpeech->Name = L"btnTextToSpeech";
			this->btnTextToSpeech->Size = System::Drawing::Size(421, 227);
			this->btnTextToSpeech->TabIndex = 1;
			this->btnTextToSpeech->Text = L"Text to Speech";
			this->btnTextToSpeech->UseVisualStyleBackColor = false;
			this->btnTextToSpeech->Click += gcnew System::EventHandler(this, &MyForm::btnTextToSpeech_Click);
			this->btnTextToSpeech->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnTextToSpeech_MouseEnter);
			this->btnTextToSpeech->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnTextToSpeech_MouseLeave);
			this->btnTextToSpeech->MouseHover += gcnew System::EventHandler(this, &MyForm::btnTextToSpeech_MouseHover);
			// 
			// btnSettings
			// 
			this->btnSettings->BackColor = System::Drawing::Color::Transparent;
			this->btnSettings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnSettings->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSettings->ForeColor = System::Drawing::Color::White;
			this->btnSettings->Location = System::Drawing::Point(4, 242);
			this->btnSettings->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Size = System::Drawing::Size(421, 228);
			this->btnSettings->TabIndex = 2;
			this->btnSettings->Text = L"Settings";
			this->btnSettings->UseVisualStyleBackColor = false;
			this->btnSettings->Click += gcnew System::EventHandler(this, &MyForm::btnSettings_Click);
			this->btnSettings->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnSettings_MouseEnter);
			this->btnSettings->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnSettings_MouseLeave);
			this->btnSettings->MouseHover += gcnew System::EventHandler(this, &MyForm::btnSettings_MouseHover);
			// 
			// btnQuit
			// 
			this->btnQuit->BackColor = System::Drawing::Color::Transparent;
			this->btnQuit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnQuit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnQuit->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuit->ForeColor = System::Drawing::Color::White;
			this->btnQuit->Location = System::Drawing::Point(862, 242);
			this->btnQuit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnQuit->Name = L"btnQuit";
			this->btnQuit->Size = System::Drawing::Size(421, 228);
			this->btnQuit->TabIndex = 3;
			this->btnQuit->Text = L"Quit";
			this->btnQuit->UseVisualStyleBackColor = false;
			this->btnQuit->Click += gcnew System::EventHandler(this, &MyForm::btnQuit_Click);
			this->btnQuit->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnQuit_MouseEnter);
			this->btnQuit->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnQuit_MouseLeave);
			this->btnQuit->MouseHover += gcnew System::EventHandler(this, &MyForm::btnQuit_MouseHover);
			// 
			// btnRing
			// 
			this->btnRing->BackColor = System::Drawing::Color::Transparent;
			this->btnRing->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnRing->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRing->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRing->ForeColor = System::Drawing::Color::White;
			this->btnRing->Location = System::Drawing::Point(862, 5);
			this->btnRing->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnRing->Name = L"btnRing";
			this->btnRing->Size = System::Drawing::Size(421, 227);
			this->btnRing->TabIndex = 4;
			this->btnRing->Text = L"Ring";
			this->btnRing->UseVisualStyleBackColor = false;
			this->btnRing->Click += gcnew System::EventHandler(this, &MyForm::btnRing_Click);
			this->btnRing->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnRing_MouseEnter);
			this->btnRing->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnRing_MouseLeave);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// txtTextToSpeech
			// 
			this->txtTextToSpeech->BackColor = System::Drawing::Color::Black;
			this->txtTextToSpeech->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTextToSpeech->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtTextToSpeech->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTextToSpeech->ForeColor = System::Drawing::Color::White;
			this->txtTextToSpeech->Location = System::Drawing::Point(4, 119);
			this->txtTextToSpeech->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTextToSpeech->Multiline = true;
			this->txtTextToSpeech->Name = L"txtTextToSpeech";
			this->txtTextToSpeech->Size = System::Drawing::Size(413, 104);
			this->txtTextToSpeech->TabIndex = 5;
			this->txtTextToSpeech->Text = L"Type Your Text Here";
			this->txtTextToSpeech->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblTextToSpeech
			// 
			this->lblTextToSpeech->AutoSize = true;
			this->lblTextToSpeech->BackColor = System::Drawing::Color::Transparent;
			this->lblTextToSpeech->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblTextToSpeech->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTextToSpeech->ForeColor = System::Drawing::Color::White;
			this->lblTextToSpeech->Location = System::Drawing::Point(4, 0);
			this->lblTextToSpeech->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTextToSpeech->Name = L"lblTextToSpeech";
			this->lblTextToSpeech->Size = System::Drawing::Size(413, 114);
			this->lblTextToSpeech->TabIndex = 6;
			this->lblTextToSpeech->Text = L"Type text here in this box";
			// 
			// layoutMainForm
			// 
			this->layoutMainForm->AutoSize = true;
			this->layoutMainForm->BackColor = System::Drawing::Color::Transparent;
			this->layoutMainForm->ColumnCount = 3;
			this->layoutMainForm->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->layoutMainForm->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->layoutMainForm->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->layoutMainForm->Controls->Add(this->layoutNestedTextToSpeech, 1, 1);
			this->layoutMainForm->Controls->Add(this->btnEmail, 0, 0);
			this->layoutMainForm->Controls->Add(this->btnTextToSpeech, 1, 0);
			this->layoutMainForm->Controls->Add(this->btnRing, 2, 0);
			this->layoutMainForm->Controls->Add(this->btnSettings, 0, 1);
			this->layoutMainForm->Controls->Add(this->btnQuit, 2, 1);
			this->layoutMainForm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->layoutMainForm->Location = System::Drawing::Point(0, 0);
			this->layoutMainForm->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->layoutMainForm->Name = L"layoutMainForm";
			this->layoutMainForm->RowCount = 2;
			this->layoutMainForm->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->layoutMainForm->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->layoutMainForm->Size = System::Drawing::Size(1287, 475);
			this->layoutMainForm->TabIndex = 7;
			// 
			// layoutNestedTextToSpeech
			// 
			this->layoutNestedTextToSpeech->BackColor = System::Drawing::Color::Transparent;
			this->layoutNestedTextToSpeech->ColumnCount = 1;
			this->layoutNestedTextToSpeech->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->layoutNestedTextToSpeech->Controls->Add(this->lblTextToSpeech, 0, 0);
			this->layoutNestedTextToSpeech->Controls->Add(this->txtTextToSpeech, 0, 1);
			this->layoutNestedTextToSpeech->Dock = System::Windows::Forms::DockStyle::Fill;
			this->layoutNestedTextToSpeech->Location = System::Drawing::Point(433, 242);
			this->layoutNestedTextToSpeech->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->layoutNestedTextToSpeech->Name = L"layoutNestedTextToSpeech";
			this->layoutNestedTextToSpeech->RowCount = 2;
			this->layoutNestedTextToSpeech->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->layoutNestedTextToSpeech->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->layoutNestedTextToSpeech->Size = System::Drawing::Size(421, 228);
			this->layoutNestedTextToSpeech->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1287, 475);
			this->Controls->Add(this->layoutMainForm);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Eye Tracking";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->layoutMainForm->ResumeLayout(false);
			this->layoutNestedTextToSpeech->ResumeLayout(false);
			this->layoutNestedTextToSpeech->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
//---------------------------------------------------------------------------------------

	private: System::Void btnEmail_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		btnEmail->BackColor = BackColor.PaleVioletRed;
		selectedButton = 1;
		PlaySound(TEXT("MenuSelect.wav"), NULL, SND_ASYNC);
		timer1->Start();
	}
	private: System::Void btnTextToSpeech_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		btnTextToSpeech->BackColor = BackColor.PaleVioletRed;
		selectedButton = 2;
		PlaySound(TEXT("MenuSelect.wav"), NULL, SND_ASYNC);
		timer1->Start();
	}
	private: System::Void btnSettings_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		btnSettings->BackColor = BackColor.PaleVioletRed;
		selectedButton = 3;
		PlaySound(TEXT("MenuSelect.wav"), NULL, SND_ASYNC);
		timer1->Start();
	}
	private: System::Void btnQuit_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		btnQuit->BackColor = BackColor.PaleVioletRed;
		selectedButton = -1;
		PlaySound(TEXT("MenuSelect.wav"), NULL, SND_ASYNC);
		timer1->Start();
	}
	private: System::Void btnRing_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		btnRing->BackColor = BackColor.PaleVioletRed;
		selectedButton = 4;
		PlaySound(TEXT("MenuSelect.wav"), NULL, SND_ASYNC);
		timer1->Start();
	}

//---------------------------------------------------------------------------------------

	private: System::Void btnEmail_Click(System::Object^  sender, System::EventArgs^  e) {
		btnEmail->ForeColor = ForeColor.Lime;
		PlaySound(TEXT("MenuClick.wav"), NULL, SND_ASYNC);
	}
	private: System::Void btnQuit_Click(System::Object^  sender, System::EventArgs^  e) {
		PlaySound(TEXT("MenuClick.wav"), NULL, SND_ASYNC);
		btnQuit->ForeColor = ForeColor.Lime;
		MessageBox::Show("Program Will Now Close");
		MyForm::Close();
	}
	private: System::Void btnTextToSpeech_Click(System::Object^  sender, System::EventArgs^  e) {
		btnTextToSpeech->ForeColor = ForeColor.Lime;
		PlaySound(TEXT("MenuClick.wav"), NULL, SND_SYNC);

		SpeechSynthesizer^synth = gcnew SpeechSynthesizer();
		synth->Speak(txtTextToSpeech->Text);

	}
	private: System::Void btnSettings_Click(System::Object^  sender, System::EventArgs^  e) {
		btnSettings->ForeColor = ForeColor.Lime;
		PlaySound(TEXT("MenuClick.wav"), NULL, SND_ASYNC);

		
		
		MyForm2^ frm = gcnew MyForm2();
		frm->Show();
		txtTextToSpeech->Text = frm->returnVal;
		
	}
	private: System::Void btnRing_Click(System::Object^  sender, System::EventArgs^  e) {
		btnRing->ForeColor = ForeColor.Lime;
		PlaySound(TEXT("RingBeep.wav"), NULL, SND_SYNC);
		btnRing->Text = "Ring Again";
		resetTimerCounter();
	}
//---------------------------------------------------------------------------------------

	private: System::Void btnEmail_Leave(System::Object^  sender, System::EventArgs^  e) {
		btnEmail->BackColor = BackColor.Transparent;
		selectedButton = 0;
		timer1->Stop();
		resetTimerCounter();
	}
	private: System::Void btnTextToSpeech_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		btnTextToSpeech->BackColor = BackColor.Transparent;
		selectedButton = 0;
		timer1->Stop();
		resetTimerCounter();
	}
	private: System::Void btnSettings_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		btnSettings->BackColor = BackColor.Transparent;
		selectedButton = 0;
		timer1->Stop();
		resetTimerCounter();
	}
	private: System::Void btnQuit_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		btnQuit->BackColor = BackColor.Transparent;
		selectedButton = 0;
		timer1->Stop();
		resetTimerCounter();
	}
	private: System::Void btnRing_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		btnRing->BackColor = BackColor.Transparent;
		selectedButton = 0;
		timer1->Stop();
		resetTimerCounter();
	}
//---------------------------------------------------------------------------------------

	private: System::Void btnEmail_Hover(System::Object^  sender, System::EventArgs^  e) {
	}	
	private: System::Void btnTextToSpeech_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnSettings_MouseHover(System::Object^  sender, System::EventArgs^  e) {	
	}
	private: System::Void btnQuit_MouseHover(System::Object^  sender, System::EventArgs^  e) {	
	}

//---------------------------------------------------------------------------------------

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		timerCounter++;

		if (timerCounter == 2)
		{
			switch (selectedButton)
			{
			case -1:
				btnQuit->PerformClick();
				break;
			case 1:
				btnEmail->PerformClick();
				break;
			case 2:
				btnTextToSpeech->PerformClick();
				break;
			case 3:
				btnSettings->PerformClick();
				break;
			case 4:
				btnRing->PerformClick();
				break;
			case 0:
				break;
			default:
				break;
			}
		}
	}
//---------------------------------------------------------------------------------------
	private: Void resetTimerCounter() {
		timerCounter = 0;
	}
};
}

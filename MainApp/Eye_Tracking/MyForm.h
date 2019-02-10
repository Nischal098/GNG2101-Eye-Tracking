#pragma once

namespace EyeTracking {

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
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnEmail;
	private: System::Windows::Forms::Button^  btnTextToSpeech;
	private: System::Windows::Forms::Button^  btnSettings;
	private: System::Windows::Forms::Button^  btnQuit;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnEmail = (gcnew System::Windows::Forms::Button());
			this->btnTextToSpeech = (gcnew System::Windows::Forms::Button());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnQuit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnEmail
			// 
			this->btnEmail->BackColor = System::Drawing::Color::Transparent;
			this->btnEmail->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnEmail->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEmail->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmail->ForeColor = System::Drawing::Color::White;
			this->btnEmail->Location = System::Drawing::Point(12, 12);
			this->btnEmail->Name = L"btnEmail";
			this->btnEmail->Size = System::Drawing::Size(490, 309);
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
			this->btnTextToSpeech->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTextToSpeech->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTextToSpeech->ForeColor = System::Drawing::Color::White;
			this->btnTextToSpeech->Location = System::Drawing::Point(528, 12);
			this->btnTextToSpeech->Name = L"btnTextToSpeech";
			this->btnTextToSpeech->Size = System::Drawing::Size(486, 309);
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
			this->btnSettings->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSettings->ForeColor = System::Drawing::Color::White;
			this->btnSettings->Location = System::Drawing::Point(12, 337);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Size = System::Drawing::Size(490, 299);
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
			this->btnQuit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnQuit->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuit->ForeColor = System::Drawing::Color::White;
			this->btnQuit->Location = System::Drawing::Point(528, 337);
			this->btnQuit->Name = L"btnQuit";
			this->btnQuit->Size = System::Drawing::Size(486, 299);
			this->btnQuit->TabIndex = 3;
			this->btnQuit->Text = L"Quit";
			this->btnQuit->UseVisualStyleBackColor = false;
			this->btnQuit->Click += gcnew System::EventHandler(this, &MyForm::btnQuit_Click);
			this->btnQuit->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnQuit_MouseEnter);
			this->btnQuit->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnQuit_MouseLeave);
			this->btnQuit->MouseHover += gcnew System::EventHandler(this, &MyForm::btnQuit_MouseHover);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1026, 666);
			this->Controls->Add(this->btnQuit);
			this->Controls->Add(this->btnSettings);
			this->Controls->Add(this->btnTextToSpeech);
			this->Controls->Add(this->btnEmail);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Eye Tracking";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
//---------------------------------------------------------------------------------------

	private: System::Void btnEmail_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		btnEmail->BackColor = BackColor.PaleVioletRed;
	}
	private: System::Void btnTextToSpeech_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		btnTextToSpeech->BackColor = BackColor.PaleVioletRed;
	}
	private: System::Void btnSettings_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		btnSettings->BackColor = BackColor.PaleVioletRed;
	}
	private: System::Void btnQuit_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		btnQuit->BackColor = BackColor.PaleVioletRed;
	}
//---------------------------------------------------------------------------------------

	private: System::Void btnEmail_Click(System::Object^  sender, System::EventArgs^  e) {
		btnEmail->ForeColor = ForeColor.Lime;
	}
	private: System::Void btnQuit_Click(System::Object^  sender, System::EventArgs^  e) {
		btnQuit->ForeColor = ForeColor.Lime;
		MessageBox::Show("Program Will Now Close");
		MyForm::Close();
	}
	private: System::Void btnTextToSpeech_Click(System::Object^  sender, System::EventArgs^  e) {
		btnTextToSpeech->ForeColor = ForeColor.Lime;
	}
	private: System::Void btnSettings_Click(System::Object^  sender, System::EventArgs^  e) {
		btnSettings->ForeColor = ForeColor.Lime;
	}
//---------------------------------------------------------------------------------------

	private: System::Void btnEmail_Leave(System::Object^  sender, System::EventArgs^  e) {
		btnEmail->BackColor = BackColor.Transparent;
	}
	private: System::Void btnTextToSpeech_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		btnTextToSpeech->BackColor = BackColor.Transparent;
	}
	private: System::Void btnSettings_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		btnSettings->BackColor = BackColor.Transparent;
	}
	private: System::Void btnQuit_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		btnQuit->BackColor = BackColor.Transparent;
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
	};
}

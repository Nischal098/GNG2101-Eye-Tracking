#pragma once

namespace EyeTracking {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn1;
	protected:
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn5;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TableLayoutPanel^  layoutMainForm;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn7;


	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn6;







	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  lblOutput;

	private:
		/// <summary>
		/// Required designer variable.
		bool isClicked = false;
		

		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->layoutMainForm = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->layoutMainForm->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->AutoEllipsis = true;
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::White;
			this->btn1->Location = System::Drawing::Point(3, 3);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(232, 254);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"A-G";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm2::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Transparent;
			this->btn2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::White;
			this->btn2->Location = System::Drawing::Point(241, 3);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(232, 254);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"H-N";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm2::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Transparent;
			this->btn3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::White;
			this->btn3->Location = System::Drawing::Point(479, 3);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(232, 254);
			this->btn3->TabIndex = 4;
			this->btn3->Text = L"O-U";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm2::btn3_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Transparent;
			this->btn5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::White;
			this->btn5->Location = System::Drawing::Point(3, 263);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(232, 254);
			this->btn5->TabIndex = 2;
			this->btn5->Text = L"0-6";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm2::btn5_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			// 
			// layoutMainForm
			// 
			this->layoutMainForm->AutoSize = true;
			this->layoutMainForm->BackColor = System::Drawing::Color::Transparent;
			this->layoutMainForm->ColumnCount = 4;
			this->layoutMainForm->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->layoutMainForm->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->layoutMainForm->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->layoutMainForm->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->layoutMainForm->Controls->Add(this->btn6, 0, 1);
			this->layoutMainForm->Controls->Add(this->btn4, 3, 0);
			this->layoutMainForm->Controls->Add(this->btn7, 0, 1);
			this->layoutMainForm->Controls->Add(this->btn8, 0, 1);
			this->layoutMainForm->Controls->Add(this->btn1, 0, 0);
			this->layoutMainForm->Controls->Add(this->btn2, 1, 0);
			this->layoutMainForm->Controls->Add(this->btn3, 2, 0);
			this->layoutMainForm->Controls->Add(this->btn5, 0, 1);
			this->layoutMainForm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->layoutMainForm->Location = System::Drawing::Point(0, 0);
			this->layoutMainForm->Name = L"layoutMainForm";
			this->layoutMainForm->RowCount = 2;
			this->layoutMainForm->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->layoutMainForm->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->layoutMainForm->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->layoutMainForm->Size = System::Drawing::Size(953, 520);
			this->layoutMainForm->TabIndex = 8;
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Transparent;
			this->btn6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::White;
			this->btn6->Location = System::Drawing::Point(241, 263);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(232, 254);
			this->btn6->TabIndex = 12;
			this->btn6->Text = L"7-9";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm2::btn6_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Transparent;
			this->btn4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::White;
			this->btn4->Location = System::Drawing::Point(717, 3);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(233, 254);
			this->btn4->TabIndex = 9;
			this->btn4->Text = L"V-Z";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm2::btn4_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Transparent;
			this->btn7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::Color::White;
			this->btn7->Location = System::Drawing::Point(479, 263);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(232, 254);
			this->btn7->TabIndex = 11;
			this->btn7->Text = L"Specials";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm2::btn6_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Transparent;
			this->btn8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::Color::White;
			this->btn8->Location = System::Drawing::Point(717, 263);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(233, 254);
			this->btn8->TabIndex = 10;
			this->btn8->Text = L"Specials 2";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm2::btn7_Click);
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->BackColor = System::Drawing::Color::Transparent;
			this->lblOutput->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOutput->ForeColor = System::Drawing::Color::White;
			this->lblOutput->Location = System::Drawing::Point(0, 0);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(100, 25);
			this->lblOutput->TabIndex = 9;
			this->lblOutput->Text = L"Output = ";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(953, 520);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->layoutMainForm);
			this->DoubleBuffered = true;
			this->Name = L"MyForm2";
			this->Text = L"Keyboard";
			this->layoutMainForm->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (isClicked) { 
			setDefaultKeys();
			isClicked = false;
		}
		else {
			isClicked = true;
			btn1->Text = "Back";
			btn2->Text = "A";
			btn3->Text = "B";
			btn4->Text = "C";
			btn5->Text = "D";
			btn6->Text = "E";
			btn7->Text = "F";
			btn8->Text = "G";

		}
		

	}
	private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (isClicked) {
			lblOutput->Text += btn2->Text->ToString();
		}
		else {
			isClicked = true;
			btn1->Text = "Back";
			btn2->Text = "H";
			btn3->Text = "I";
			btn4->Text = "J";
			btn5->Text = "K";
			btn6->Text = "L";
			btn7->Text = "M";
			btn8->Text = "N";
		}
	

	}
	private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
		isClicked = true; btn1->Text = "Back";
		btn2->Text = "O";
		btn3->Text = "P";
		btn4->Text = "Q";
		btn5->Text = "R";
		btn6->Text = "S";
		btn7->Text = "T";
		btn8->Text = "U";
	}
	private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
		isClicked = true; btn1->Text = "Back";
		btn2->Text = "V";
		btn3->Text = "W";
		btn4->Text = "X";
		btn5->Text = "Y";
		btn6->Text = "Z";
		btn7->Text = " ";
		btn8->Text = " ";
	}
	private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
		isClicked = true; btn1->Text = "Back";
		btn2->Text = "0";
		btn3->Text = "1";
		btn4->Text = "2";
		btn5->Text = "3";
		btn6->Text = "4";
		btn7->Text = "5";
		btn8->Text = "6";
	}
	private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
		isClicked = true; btn1->Text = "Back";
		btn2->Text = "7";
		btn3->Text = "8";
		btn4->Text = "9";
		btn5->Text = " ";
		btn6->Text = " ";
		btn7->Text = " ";
		btn8->Text = " ";
	}
	private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
		isClicked = true; btn1->Text = "Back";
		btn2->Text = ".";
		btn3->Text = ",";
		btn4->Text = "$";
		btn5->Text = "!";
		btn6->Text = "+";
		btn7->Text = "-";
		btn8->Text = "'";
	}
	private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
		isClicked = true; btn1->Text = "Back";
		btn2->Text = "@";
		btn3->Text = "#";
		btn4->Text = "%";
		btn5->Text = "^";
		btn6->Text = "&";
		btn7->Text = "(";
		btn8->Text = ")";
	}

	private: void setDefaultKeys() {
		btn1->Text = "A-G";
		btn2->Text = "H-N";
		btn3->Text = "O-U";
		btn4->Text = "V-Z";
		btn5->Text = "0-6";
		btn6->Text = "7-9";
		btn7->Text = "Specials";
		btn8->Text = "Specials 2";
	}
};
}

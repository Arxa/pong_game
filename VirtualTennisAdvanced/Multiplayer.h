#pragma once
#include "Form1.h"
#include "GlobalVariables.h"

namespace VirtualTennisAdvanced {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Multiplayer
	/// </summary>
	public ref class Multiplayer : public System::Windows::Forms::Form
	{
	public:
		Multiplayer(System::Windows::Forms::Form ^ frm1) //part of viewing previous forms 
		{
			otherform = frm1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Select();
			eraseText1=0; 
			eraseText2=0;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Multiplayer()
		{
			if (components)
			{
				delete components;
			}
		}
	//variables
	private: System::Windows::Forms::Form ^ otherform;
	private:	static int eraseText1;
	private:	static int eraseText2;


	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(77, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Left side";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(275, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Right side";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Red;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(65, 63);
			this->textBox1->MaxLength = 14;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 18);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Type name:";
			this->textBox1->Click += gcnew System::EventHandler(this, &Multiplayer::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Multiplayer::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Red;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(266, 63);
			this->textBox2->MaxLength = 14;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 18);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Type name:";
			this->textBox2->Click += gcnew System::EventHandler(this, &Multiplayer::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Multiplayer::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button1->Location = System::Drawing::Point(80, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"GO";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Multiplayer::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button2->Location = System::Drawing::Point(278, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Multiplayer::button2_Click);
			// 
			// Multiplayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(448, 254);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Multiplayer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Multiplayer";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Multiplayer::Multiplayer_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				 static_cast<System::Byte>(161)));
				 this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
				 if (eraseText1==0)
				 {
					 textBox1->Text="";
					 eraseText1=1;
				 }
			 }

	private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
				this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
				if (eraseText2==0)
				{
					 textBox2->Text="";
					 eraseText2=1;
				}
			}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				 static_cast<System::Byte>(161)));
				 this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
				 eraseText1=1;
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
				this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
				eraseText2=1;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Form1 ^frm=gcnew Form1(this);
			 frm->label8->Show();
			 frm->label9->Show();
			 frm->label10->Show();
			 frm->label11->Show();
			 frm->label8->Text=this->textBox1->Text;
			 frm->label9->Text=this->textBox2->Text;
			 GlobalVariables::multiplayer=true;
			 this->Hide();
			 frm->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->Hide();
			 otherform->Show();
		 }

private: System::Void Multiplayer_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
		 {
			 array<Process^>^ Processes = Process::GetProcessesByName("VirtualTennisAdvanced");
			 for each (Process^ P in Processes)
			 {
				 P->Kill();
			 }
		 }
};
}

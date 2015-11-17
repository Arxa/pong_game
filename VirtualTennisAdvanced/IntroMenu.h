#pragma once
#include "Form1.h"
#include "Multiplayer.h"
#include "About.h"

namespace VirtualTennisAdvanced {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for IntroMenu
	/// </summary>
	public ref class IntroMenu : public System::Windows::Forms::Form
	{
	public:
		IntroMenu(void)
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
		~IntroMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(183, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SOLO";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &IntroMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Cyan;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(146, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(182, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2 PLAYERS";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &IntroMenu::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Cyan;
			this->label1->Location = System::Drawing::Point(68, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Welcome to the Virtual Tennis";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Cyan;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(401, 378);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &IntroMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Cyan;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button4->Location = System::Drawing::Point(12, 378);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"\?";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &IntroMenu::button4_Click);
			// 
			// IntroMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(488, 415);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"IntroMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &IntroMenu::IntroMenu_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 GlobalVariables::multiplayer=false; //Player chose single mode
				 Form1 ^frm = gcnew Form1(this);
				 frm->button1->Select();
				 this->Hide();
				 frm->ShowDialog(); //open Form1
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Multiplayer ^frm=gcnew Multiplayer(this);
				 this->Hide();
				 frm->ShowDialog(); //open multiplayer window
			 }

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				Application::Exit();
			 }

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				About ^frm=gcnew About();
				frm->ShowDialog(); //open about window
			 }
private: System::Void IntroMenu_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
		 {
			 array<Process^>^ Processes = Process::GetProcessesByName("VirtualTennisAdvanced");
			 for each (Process^ P in Processes)
			 {
				 P->Kill();
			 }
			 Application::Exit();
		 }
};
}

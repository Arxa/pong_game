#pragma once
#include <ctime>
#include <cstdlib>
#include "Finale.h"
#include "GlobalVariables.h"
#include "Winner.h"

namespace VirtualTennisAdvanced {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(System::Windows::Forms::Form ^ frm2) //View previous forms
		{
			otherform = frm2;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			srand(time(NULL));
			initializeLocations(); //
			label13->Text=Convert::ToString(lives);
			doNotKillProcess=false;
			firstSleepTime=15;
			normalSleepTime=10;
			seconds=30;
			racketSpeed=40; 
			levelNumber=0;
			gameLost=false;
			leftGoalsCounter=0;
			rightGoalsCounter=0;
			firstMultiRound=true;
			lives=5;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	//
	private: System::Windows::Forms::Form ^ otherform;
	//
	private: System::Windows::Forms::RadioButton^  radioButton1;
	public:  System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


    // ------------------MY CLASS VARIABLES-------------------
	private: 
			static const double speed=1; //speed of radiobutton

			/*Horizontial Law - Vertical Law, Plysical Laws of ball, 
			if ball hits racket, it goes opposite of its horizontial direction/if ball hits up-down limits it goes
			opposite of its vertical direction*/
			static bool horLaw,verLaw;

			static bool goesRight,goesLeft; //horizontial directions of ball
			static int sleepTime;
			static int firstSleepTime; //starting speed of ball ex.when you loose
			static int normalSleepTime; //general spped of ball
			static int seconds; //duration of levels + also change this value at the level change part
			static int racketSpeed; 
			static int levelNumber;
			static bool gameLost;
			static int leftGoalsCounter;
			static int rightGoalsCounter;
			static bool firstMultiRound;
			static int lives;
			static bool pauseStatus;
			static bool doNotKillProcess;

	//
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Label^  label8;
	private: 
	public: System::Windows::Forms::Label^  label9;
	public: System::Windows::Forms::Label^  label10;
	public: System::Windows::Forms::Label^  label11;
	public: System::Windows::Forms::Label^  label12;
	public: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label14;
	public: 

	public: 
	private: System::ComponentModel::IContainer^  components;
			 
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoCheck = false;
			this->radioButton1->BackColor = System::Drawing::Color::Black;
			this->radioButton1->Enabled = false;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->radioButton1->Location = System::Drawing::Point(97, 337);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 15);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(848, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(10, 108);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::button1_KeyDown);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(32, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(10, 108);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(306, 98);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 29);
			this->button3->TabIndex = 3;
			this->button3->Text = L"START";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(387, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 22);
			this->label3->TabIndex = 13;
			this->label3->Text = L"LEVEL 1";
			this->label3->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(358, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 19);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Starting in ";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(475, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 19);
			this->label2->TabIndex = 15;
			this->label2->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(56, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(210, 44);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Use \'W\' to Move Up\r\nUse \'S\' to Move Down";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(606, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 44);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Use \'O\' to Move Up\r\nUse \'L\' to Move Down";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(371, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 57);
			this->label6->TabIndex = 18;
			this->label6->Text = L"  You Lost\r\n\r\n Play again\?";
			this->label6->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button4->Location = System::Drawing::Point(351, 278);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 31);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Yes";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button5->Location = System::Drawing::Point(450, 278);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 31);
			this->button5->TabIndex = 20;
			this->button5->Text = L"No";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(416, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 15);
			this->label7->TabIndex = 21;
			this->label7->Text = L"00";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(267, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Player 1";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(538, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Player 2";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(267, 20);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"0";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(538, 25);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"0";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(145, 7);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 19);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Lives:";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(205, 7);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(18, 19);
			this->label13->TabIndex = 27;
			this->label13->Text = L"0";
			this->label13->Visible = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(464, 98);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 29);
			this->button6->TabIndex = 28;
			this->button6->Text = L"BACK";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Black;
			this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(372, 47);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(103, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"T Pause/Y Resume";
			this->label14->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(890, 468);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"VirtualTennis";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		//-----------------------------FUNCTIONS------------------------------------------
#pragma endregion

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 label14->Show();
				 button6->Hide();
				 label12->Show();
				 label13->Show();
				 if (GlobalVariables::multiplayer) 
				 {
					 label12->Hide();
					 label13->Hide();
					 static int multi=0;
					 if (multi==0)
					 {
						 firstMultiRound=true;
						 multi=1;
					 }
					 else
					 {
						 firstMultiRound=false;
					 }
				 }

				 radioButton1->Show();
				 label4->Hide();
				 label5->Hide();
				 button3->Hide();
				 if (firstMultiRound==false) {goto multiplayer;}  //Do not show "starting in..." if its multimode
				 label1->Show();
				 label2->Show();
				 for (int i=3;i>=0;i--) //Starting in..3
				 {
					 Application::DoEvents();
					 label2->Text=Convert::ToString(i);
					 System::Threading::Thread::Sleep(1000);
				 }

				 multiplayer:

				 label1->Hide();
				 label2->Hide();
				 label3->Show();
				 button1->Select();
				 label7->Show();
				 timer1->Enabled=true;
				 
				 horLaw=false;
				 verLaw=false;

				 
				sleepTime=firstSleepTime;
			 //First random move, 4 cases
				if (rand()%100<25)
				{
					moveUpRight();
				}
				else if (rand()%100<50)
				{
					moveDownRight();
				}
				else if (rand()%100<75)
				{
					moveUpLeft();
				}
				else 
				{
					moveDownLeft();
				}
				sleepTime=normalSleepTime;
			 //----------------------
				
				do
				{
					if (verLaw==true)
					{
						if (String::Compare(GlobalVariables::verDirection,"up")==0)
						{
							if (rand()%100<90 && goesRight==true)
							{
								moveDownRight();
							}
							else
							{
								moveDownLeft();
							}
						}
						else
						{
							if (rand()%100<90 && goesRight==true)
							{
								moveUpRight();
							}
							else
							{
								moveUpLeft();
							}
						}
					}
					else if (horLaw==true)
					{
						if (String::Compare(GlobalVariables::horDirection,"right")==0)
						{
							if (rand()%100<50)
							{
								moveUpLeft();
							}
							else
							{
								moveDownLeft();
							}
						}
						else
						{
							if (rand()%100<50)
							{
								moveUpRight();
							}
							else
							{
								moveDownRight();
							}
						}
					}
					
				}while(1>0);
			 }



			// When someone looses
			void checkPlayerSides()
			{
				if (radioButton1->Left<=-8) 
				{
					if (GlobalVariables::multiplayer==true)
					{
						leftGoalsCounter++;
						label11->Text=Convert::ToString(leftGoalsCounter);
						radioButton1->Left=422;
						radioButton1->Top=202;
						if (sleepTime!=firstSleepTime) {normalSleepTime=sleepTime;}
						System::Threading::Thread::Sleep(500);
						button3_Click(this,gcnew System::EventArgs());
					}
					else
					{
						lives--;
						label13->Text=Convert::ToString(lives);
						firstMultiRound=false; // still single mode, but I use this variable for practical reasons
				
						if (lives>=0)
						{
							radioButton1->Left=422;
							radioButton1->Top=202;
							if (sleepTime!=firstSleepTime) {normalSleepTime=sleepTime;}
							System::Threading::Thread::Sleep(500);
							button3_Click(this,gcnew System::EventArgs());
						}
						else
						{
							label14->Hide();
							label12->Hide();
							label13->Hide();
							gameLost=true;
							radioButton1->Hide();
							label7->Hide();
							button1->Hide();
							button2->Hide();
							label6->Show();
							button4->Show();
							button5->Show();
						}
					}
				}
				else if (radioButton1->Left>=880)
				{
					if (GlobalVariables::multiplayer)
					{
						rightGoalsCounter++;
						label10->Text=Convert::ToString(rightGoalsCounter);
						radioButton1->Left=422;
						radioButton1->Top=202;
						if (sleepTime!=firstSleepTime) {normalSleepTime=sleepTime;}
						System::Threading::Thread::Sleep(500);
						button3_Click(this,gcnew System::EventArgs());
					}
					else
					{
						lives--;
						label13->Text=Convert::ToString(lives);
						firstMultiRound=false; // still single mode, but I use this variable for practical reasons
						if (lives>=0)
						{
							radioButton1->Left=422;
							radioButton1->Top=202;
							if (sleepTime!=firstSleepTime) {normalSleepTime=sleepTime;}
							System::Threading::Thread::Sleep(500);
							button3_Click(this,gcnew System::EventArgs());
						}
						else
						{
							label14->Hide();
							label12->Hide();
							label13->Hide();
							gameLost=true;
							radioButton1->Hide();
							label7->Hide();
							button1->Hide();
							button2->Hide();
							label6->Show();
							button4->Show();
							button5->Show();
						}
					}
				}
			}

			 
			// Check if ball hits the Left Racket
			 bool checkLeftRacket()
			 {
				 bool racketHit=false;
				 if (radioButton1->Left<=41 && radioButton1->Left>=37 && radioButton1->Top>button2->Top-10 && radioButton1->Top<button2->Top+button2->Height-2)
				 {
					 racketHit=true;
					 horLaw=true;
					 GlobalVariables::horDirection="left";
				 }
				 else
				 {
					 racketHit=false;
					 horLaw=false;
				 }
				 return racketHit;
			 }

			 // Check if ball hits the Right Racket
			 bool checkRightRacket()
			 {
				 bool racketHit=false;
				 if (radioButton1->Left<=837 && radioButton1->Left>=834 && radioButton1->Top>button1->Top-7 && radioButton1->Top<button1->Top+button1->Height-2)
				 {
					 racketHit=true;
					 horLaw=true;
					 GlobalVariables::horDirection="right";
				 }
				 else
				 {
					 racketHit=false;
					 horLaw=false;
				 }

				 return racketHit;
			 }
				 
			 bool bordersOk() //Check if ball hits updown limits
			 {
				 bool bordersOk;
				 if (radioButton1->Top<0)
				 {
					 bordersOk=false;
					 verLaw=true;
					 GlobalVariables::verDirection="up";
				 }
				 else if (radioButton1->Top>456)
				 {
					 bordersOk=false;
					 verLaw=true;
					 GlobalVariables::verDirection="down";
				 }
				 else
				 {
					 bordersOk=true;
					 verLaw=false;
				 }

				 return bordersOk;
			 }

			 bool touchRackets() //inified function for rackets
			 {
				 bool strike;
				 if (checkLeftRacket()==false && checkRightRacket()==false)
				 {
					 strike=false;
				 }
				 else
				 {
					 strike=true;
				 }
				 return strike;
			 }


			 void moveUpRight()
			 {
				 do
				 {
					goesRight=true;
					goesLeft=false;
					radioButton1->Top-=speed;
					radioButton1->Left+=speed+2;
					System::Threading::Thread::Sleep(sleepTime);
					checkPlayerSides();
					Application::DoEvents();
			   	 }while(touchRackets()==false && bordersOk()==true);
			 }


			 void moveDownRight()
			 {
				 do
				 {
					goesRight=true;
					goesLeft=false;
					radioButton1->Left+=speed+2;
					radioButton1->Top+=speed;
					System::Threading::Thread::Sleep(sleepTime);
					checkPlayerSides();
					Application::DoEvents();
			   	 }while(touchRackets()==false && bordersOk()==true);
			 }

			 void moveUpLeft()
			 {
				 do
				 {
					goesRight=false;
					goesLeft=true;
					radioButton1->Top-=speed;
					radioButton1->Left-=speed+2;
					System::Threading::Thread::Sleep(sleepTime);
					checkPlayerSides();
					Application::DoEvents();
			   	 }while(touchRackets()==false && bordersOk()==true);
			 }

			 void moveDownLeft()
			 {
				 do
				 {
					goesRight=false;
					goesLeft=true;
					radioButton1->Left-=speed+2;
					radioButton1->Top+=speed;
					System::Threading::Thread::Sleep(sleepTime);
					checkPlayerSides();
					Application::DoEvents();
			   	 }while(touchRackets()==false && bordersOk()==true);
			 }

			 

			void initializeLocations()
			 {
				gameLost=false;
				levelNumber=0;
				label3->Text="LEVEL "+Convert::ToString(levelNumber+1);
				button1->Width=10;
				button1->Height=108;
				button2->Width=10;
				button2->Height=108;
				button1->Left=848;
				button1->Top=190;
				button2->Left=32;
				button2->Top=190;
				radioButton1->Left=422;
				radioButton1->Top=202;
			 }
		 
private: System::Void button1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 int static pause=0;
			 if (e->KeyCode == Keys::T) //My algorith for pausing and resuming the game
			 {
				 pause=0;
				 pause:
				 pauseStatus=true;
				 Application::DoEvents();
				 if (e->KeyCode == Keys::T && pause==0) 
				 {
					 goto pause;
				 }
				 else
				 {
					 goto resume;
				 }
			 }
			 else if (e->KeyCode == Keys::Y)
			 {
				 pauseStatus=false;;
				 pause=1;
			 }

			 resume:

			 
			 if (e->KeyCode == Keys::O)
			 {
				if (button1->Top>=racketSpeed)
				{
					button1->Top-=racketSpeed;
				}
				else
				{
					button1->Top-=button1->Top;
				} 
			 }
			 else if (e->KeyCode == Keys::L)
			 {
				if ( 470-button1->Height-button1->Top >= racketSpeed)
				{
					button1->Top+=racketSpeed;
				}
				else
				{
					button1->Top += 470-button1->Height-button1->Top;
				} 
			 }
			 else if (e->KeyCode == Keys::W)
			 {
				if (button2->Top>=racketSpeed)
				{
					button2->Top-=racketSpeed;
				}
				else
				{
					button2->Top-=button2->Top;
				} 
			 }
			 else if (e->KeyCode == Keys::S)
			 {
				if ( 470-button2->Height-button2->Top >= racketSpeed)
				{
					button2->Top+=racketSpeed;
				}
				else
				{
					button2->Top += 470-button2->Height-button2->Top;
				} 
			 }
			 
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Application::Exit();
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) //player wants to play again
		 {
			 seconds=45;
			 lives=8;
			 label13->Text=Convert::ToString(lives);
			 initializeLocations();
			 label6->Hide();
			 button4->Hide();
			 button5->Hide();
			 button1->Show();
			 button2->Show();
			 button3_Click(sender,e);
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) //Timer countdown
		 {
			 static bool finale=false;
			 static int repeat=0;
			 if (repeat==0)
			 {
				 if (!pauseStatus)
				 {
					 seconds--; //countdown seconds
				 }
			 }
			 label7->Text=Convert::ToString(seconds);
			 Application::DoEvents();
			 
			 if (seconds==0)
			 {
				 if (finale && repeat==0)
				 {
					 if (GlobalVariables::multiplayer)
					 {
						 Winner ^cls=gcnew Winner();
						 if ( Convert::ToInt32(label10->Text) > Convert::ToInt32(label11->Text) ) //display results at Winner window
						 {
							 cls->label1->Text=label8->Text;
							 cls->label4->Text=label10->Text;
							 cls->label5->Text=label11->Text;
						 }
						 else if ( Convert::ToInt32(label10->Text) < Convert::ToInt32(label11->Text) )
						 {
							 cls->label1->Text=label9->Text;
							 cls->label4->Text=label10->Text;
							 cls->label5->Text=label11->Text;
						 }
						 else
						 {
							 cls->label1->Text="It's a Draw !";
							 label2->Hide();
							 cls->label4->Text=label10->Text;
							 cls->label5->Text=label11->Text;
						 }
						 this->Hide();
						 cls->ShowDialog();
						 repeat=1;
					 }
					 else
					 {
						 Finale ^frm = gcnew Finale(); //display solo victory
						 this->Hide();
						 frm->ShowDialog();
						 repeat=1;
					 }
				 }
				 if (!gameLost) //Charge level visually
				 {
					 levelNumber++;
					 label3->Text="LEVEL "+Convert::ToString(levelNumber+1);
					 this->label3->ForeColor = System::Drawing::Color::White;
					 Application::DoEvents();
					 System::Threading::Thread::Sleep(2000);
					 this->label3->ForeColor = System::Drawing::Color::Red;
				 }
				 seconds=30;
				 if (sleepTime>4 && sleepTime!=firstSleepTime)
				 {
					 sleepTime-=2;
				 }
				 else
				 {
					 if (button1->Height>48 && button2->Height>48 && sleepTime!=firstSleepTime)
					 {
						 button1->Height-=12;
						 button2->Height-=12;
					 }
					 if (button1->Height==48 && button2->Height==48)
					 {
						 label3->Text="FINAL LEVEL";
						 finale=true;
					 }
				 }
			 }

		 }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 doNotKillProcess=true;
			 if (GlobalVariables::multiplayer) //otherform here is part of viewing previous forms *see constructor
			 {
				 this->Hide();
				 otherform->Show();
			 }
			 else
			 {
				 this->Hide();
				 otherform->Show();
			 }
		 }

private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
		 {
			 array<Process^>^ Processes = Process::GetProcessesByName("VirtualTennisAdvanced");
			 for each (Process^ P in Processes)
			 {
				 P->Kill();
			 }
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
		 {
			 if (!doNotKillProcess)
			 {
				 array<Process^>^ Processes = Process::GetProcessesByName("VirtualTennisAdvanced");
				 for each (Process^ P in Processes)
				 {
					 P->Kill();
				 }
				 Application::Exit();
			 }
		 }
};
}


#pragma once
#include <iostream>
#include <string>


int Experience = 0;
int experiance_judge = 0;
int level = 1;
int MAXHt = 50;
int yut = 0;
int Skill;
int boss_hp, boss_def, boss_att, boss_iq;
int player_hp, player_def, player_att, player_iq;
int layer = 1;
//int lifemyself,lifeboss, bossblood;
//[0]吳信德老師招式
//[1]吳汶捐老師招式
//[2]彭老師招式
//[3]陳翊文
//[4]朱志明老師招式
//[5]朱志明老師招式

std::string boss_skill[5][5] = {
	{"殺球","點名","把你當掉","講故事","看球賽"},
	{"zuvio點名","zuvio上傳練習畫面","教coffee(柴柴)握手好乖","coffee(柴柴)咬他","口交"},
	{"什麼都沒做","什麼都沒做","什麼都沒做","什麼都沒做","什麼都沒做"},
	{"去接女兒","抓你抄襲","把你當掉","今天的人怎麼這麼少","你寫的程式碼很爛"},
	{"我要錄影","叫舍監來","嘔......","我想跟妹子聊天","電玩成影"}
};
//[0]帥隆
//[1]帥郭
//[2]帥誠
//[3]帥泓
std::string player_skill[4][4]{
	{"睡之波動","睡之呼吸","撞擊","睡龍斬"},
	{"霸道震波","雷神天明閃","飛龍在天梭利給痛","哈賽一下很舒服~"},
	{"鯊鯊攻擊","抱鯊攻擊","手扒雞攻擊","30cm甩攻擊"},
	{"泡妞攻擊","震驚說唱攻擊","智商輾壓攻擊","碰碰撞公雞"}
};

//攻擊失敗
std::string fail[2]{
	"閃躲",""
};

int blood;
int attack;
int defend;
int iq;

namespace MyNIU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;













	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TableLayoutPanel^ Role;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;



	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox24;



	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;



private: System::Windows::Forms::TextBox^ textBox33;


private: System::Windows::Forms::Button^ button13;

private: System::Windows::Forms::Timer^ timer1;

private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox32;

































































































































	private: System::ComponentModel::IContainer^ components;

	protected:


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->Role = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->Role->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(113, 133);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(792, 230);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 35));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(341, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 47);
			this->label1->TabIndex = 2;
			this->label1->Text = L"我的宜蘭大學";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 30));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(305, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(377, 40);
			this->label2->TabIndex = 3;
			this->label2->Text = L"遊玩前請先點擊快篩";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->label7, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label6, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label5, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox6, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox5, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button4, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(34, 80);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(855, 392);
			this->tableLayoutPanel1->TabIndex = 5;
			this->tableLayoutPanel1->Visible = false;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 30));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(698, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 40);
			this->label7->TabIndex = 11;
			this->label7->Text = L"帥泓";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 30));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(484, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 40);
			this->label6->TabIndex = 10;
			this->label6->Text = L"帥誠";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 30));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(271, 234);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 40);
			this->label5->TabIndex = 9;
			this->label5->Text = L"帥廷";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(642, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(210, 190);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 3;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(429, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(207, 190);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 2;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(216, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(198, 183);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(198, 183);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(7, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 66);
			this->button1->TabIndex = 4;
			this->button1->Text = L"選我";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(220, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 67);
			this->button2->TabIndex = 5;
			this->button2->Text = L"選我";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(433, 318);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(198, 69);
			this->button3->TabIndex = 6;
			this->button3->Text = L"選我";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Location = System::Drawing::Point(642, 316);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(210, 73);
			this->button4->TabIndex = 7;
			this->button4->Text = L"選我";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 30));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(58, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 40);
			this->label4->TabIndex = 8;
			this->label4->Text = L"帥隆";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 35));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(406, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 47);
			this->label3->TabIndex = 6;
			this->label3->Text = L"選擇角色";
			this->label3->Visible = false;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox7->Location = System::Drawing::Point(585, 70);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(271, 221);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 19;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			this->pictureBox7->WaitOnLoad = true;
			// 
			// textBox12
			// 
			this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox12->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox12->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox12->Location = System::Drawing::Point(219, 240);
			this->textBox12->Margin = System::Windows::Forms::Padding(0);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(122, 23);
			this->textBox12->TabIndex = 11;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox11->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox11->Location = System::Drawing::Point(219, 296);
			this->textBox11->Margin = System::Windows::Forms::Padding(0);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(122, 23);
			this->textBox11->TabIndex = 10;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox10->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox10->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox10->Location = System::Drawing::Point(219, 182);
			this->textBox10->Margin = System::Windows::Forms::Padding(0);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(122, 23);
			this->textBox10->TabIndex = 9;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox9->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox9->Location = System::Drawing::Point(219, 127);
			this->textBox9->Margin = System::Windows::Forms::Padding(0);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(122, 23);
			this->textBox9->TabIndex = 8;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox8->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox8->Location = System::Drawing::Point(219, 72);
			this->textBox8->Margin = System::Windows::Forms::Padding(0);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(122, 23);
			this->textBox8->TabIndex = 7;
			this->textBox8->Text = L"1";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(219, 16);
			this->textBox2->Margin = System::Windows::Forms::Padding(0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 23);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox6->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox6->Location = System::Drawing::Point(18, 240);
			this->textBox6->Margin = System::Windows::Forms::Padding(0);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(67, 23);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"防禦力";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox5->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox5->Location = System::Drawing::Point(18, 182);
			this->textBox5->Margin = System::Windows::Forms::Padding(0);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(67, 23);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"攻擊力";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(18, 72);
			this->textBox3->Margin = System::Windows::Forms::Padding(0);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(67, 23);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"等級";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(18, 16);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(67, 23);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"暱稱";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(18, 127);
			this->textBox4->Margin = System::Windows::Forms::Padding(0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(67, 23);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"HP";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox7->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox7->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox7->Location = System::Drawing::Point(18, 355);
			this->textBox7->Margin = System::Windows::Forms::Padding(0);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(67, 23);
			this->textBox7->TabIndex = 6;
			this->textBox7->Text = L"經驗";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox14->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox14->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox14->Location = System::Drawing::Point(1, 296);
			this->textBox14->Margin = System::Windows::Forms::Padding(0);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(101, 23);
			this->textBox14->TabIndex = 13;
			this->textBox14->Text = L"智商";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Role
			// 
			this->Role->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->Role->ColumnCount = 3;
			this->Role->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 101)));
			this->Role->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 355)));
			this->Role->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 471)));
			this->Role->Controls->Add(this->textBox4, 0, 2);
			this->Role->Controls->Add(this->textBox1, 0, 0);
			this->Role->Controls->Add(this->textBox3, 0, 1);
			this->Role->Controls->Add(this->textBox5, 0, 3);
			this->Role->Controls->Add(this->textBox6, 0, 4);
			this->Role->Controls->Add(this->textBox2, 1, 0);
			this->Role->Controls->Add(this->textBox8, 1, 1);
			this->Role->Controls->Add(this->textBox9, 1, 2);
			this->Role->Controls->Add(this->textBox10, 1, 3);
			this->Role->Controls->Add(this->textBox11, 1, 5);
			this->Role->Controls->Add(this->textBox12, 1, 4);
			this->Role->Controls->Add(this->textBox13, 1, 6);
			this->Role->Controls->Add(this->textBox14, 0, 5);
			this->Role->Controls->Add(this->textBox7, 0, 6);
			this->Role->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Role->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Role->Location = System::Drawing::Point(122, 70);
			this->Role->Name = L"Role";
			this->Role->RowCount = 7;
			this->Role->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.88889F)));
			this->Role->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.11111F)));
			this->Role->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 51)));
			this->Role->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 58)));
			this->Role->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 55)));
			this->Role->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 56)));
			this->Role->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
			this->Role->Size = System::Drawing::Size(734, 398);
			this->Role->TabIndex = 18;
			this->Role->Visible = false;
			// 
			// textBox13
			// 
			this->textBox13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox13->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox13->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox13->Location = System::Drawing::Point(219, 355);
			this->textBox13->Margin = System::Windows::Forms::Padding(0);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(122, 23);
			this->textBox13->TabIndex = 14;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(122, 477);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 45);
			this->button5->TabIndex = 20;
			this->button5->Text = L"汁妹";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button6->Location = System::Drawing::Point(394, 475);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 45);
			this->button6->TabIndex = 21;
			this->button6->Text = L"讀書";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button7->Location = System::Drawing::Point(631, 475);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 45);
			this->button7->TabIndex = 22;
			this->button7->Text = L"玩社團";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			this->contextMenuStrip2->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip2_Opening);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button8->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(-578, 10917);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(126, 51);
			this->button8->TabIndex = 23;
			this->button8->Text = L"我的帥成員";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button9->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(-428, 10917);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(91, 51);
			this->button9->TabIndex = 24;
			this->button9->Text = L"BOSS";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			// 
			// textBox15
			// 
			this->textBox15->AcceptsReturn = true;
			this->textBox15->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox15->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox15->Location = System::Drawing::Point(121, 528);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(734, 50);
			this->textBox15->TabIndex = 25;
			this->textBox15->Text = L"行動紀錄";
			this->textBox15->Visible = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button10->Location = System::Drawing::Point(122, -1);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(130, 45);
			this->button10->TabIndex = 26;
			this->button10->Text = L"我的帥角色";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button11->Location = System::Drawing::Point(270, -1);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(130, 45);
			this->button11->TabIndex = 27;
			this->button11->Text = L"BOSS";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// textBox22
			// 
			this->textBox22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox22->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox22->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox22->Location = System::Drawing::Point(11, 248);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(89, 23);
			this->textBox22->TabIndex = 7;
			this->textBox22->Text = L"HP";
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox18->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox18->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox18->Location = System::Drawing::Point(11, 211);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(89, 23);
			this->textBox18->TabIndex = 5;
			this->textBox18->Text = L"等級";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox19
			// 
			this->textBox19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox19->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox19->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox19->Location = System::Drawing::Point(114, 5);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(298, 34);
			this->textBox19->TabIndex = 3;
			this->textBox19->Text = L"\r\n";
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox19_TextChanged);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.5F)));
			this->tableLayoutPanel2->Controls->Add(this->textBox19, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox17, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox18, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox22, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox21, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox20, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->textBox23, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox2, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox8, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBox16, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox24, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox25, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox26, 1, 5);
			this->tableLayoutPanel2->Controls->Add(this->textBox27, 1, 6);
			this->tableLayoutPanel2->Controls->Add(this->textBox28, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox29, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox30, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox31, 2, 5);
			this->tableLayoutPanel2->Controls->Add(this->textBox32, 2, 6);
			this->tableLayoutPanel2->Location = System::Drawing::Point(69, 85);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 7;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.3125F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 79.6875F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(724, 391);
			this->tableLayoutPanel2->TabIndex = 29;
			this->tableLayoutPanel2->Visible = false;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel2_Paint);
			// 
			// textBox17
			// 
			this->textBox17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox17->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox17->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox17->Location = System::Drawing::Point(469, 11);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(201, 21);
			this->textBox17->TabIndex = 1;
			this->textBox17->Text = L"第一層:微笑殺手";
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox17_TextChanged_1);
			// 
			// textBox21
			// 
			this->textBox21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox21->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox21->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox21->Location = System::Drawing::Point(11, 285);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(89, 23);
			this->textBox21->TabIndex = 6;
			this->textBox21->Text = L"攻擊力";
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox20
			// 
			this->textBox20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox20->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox20->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox20->Location = System::Drawing::Point(11, 322);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(89, 23);
			this->textBox20->TabIndex = 4;
			this->textBox20->Text = L"防禦力";
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox23
			// 
			this->textBox23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox23->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox23->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox23->Location = System::Drawing::Point(11, 359);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(89, 23);
			this->textBox23->TabIndex = 8;
			this->textBox23->Text = L"智商";
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox2->Location = System::Drawing::Point(114, 47);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(298, 153);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(420, 47);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(299, 153);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 10;
			this->pictureBox8->TabStop = false;
			// 
			// textBox16
			// 
			this->textBox16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox16->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox16->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox16->Location = System::Drawing::Point(218, 211);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(89, 23);
			this->textBox16->TabIndex = 11;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox24
			// 
			this->textBox24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox24->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox24->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox24->Location = System::Drawing::Point(218, 248);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(89, 23);
			this->textBox24->TabIndex = 11;
			this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox25
			// 
			this->textBox25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox25->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox25->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox25->Location = System::Drawing::Point(218, 285);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(89, 23);
			this->textBox25->TabIndex = 11;
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox26
			// 
			this->textBox26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox26->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox26->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox26->Location = System::Drawing::Point(218, 322);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(89, 23);
			this->textBox26->TabIndex = 11;
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox27
			// 
			this->textBox27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox27->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox27->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox27->Location = System::Drawing::Point(218, 359);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(89, 23);
			this->textBox27->TabIndex = 11;
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox28
			// 
			this->textBox28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox28->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox28->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox28->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox28->Location = System::Drawing::Point(525, 211);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(89, 23);
			this->textBox28->TabIndex = 12;
			this->textBox28->Text = L"2";
			this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox28->Visible = false;
			// 
			// textBox29
			// 
			this->textBox29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox29->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox29->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox29->Location = System::Drawing::Point(525, 248);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(89, 23);
			this->textBox29->TabIndex = 12;
			this->textBox29->Text = L"600";
			this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox29->Visible = false;
			// 
			// textBox30
			// 
			this->textBox30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox30->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox30->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox30->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox30->Location = System::Drawing::Point(525, 285);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(89, 23);
			this->textBox30->TabIndex = 12;
			this->textBox30->Text = L"999";
			this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox30->Visible = false;
			// 
			// textBox31
			// 
			this->textBox31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox31->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox31->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox31->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox31->Location = System::Drawing::Point(525, 322);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(89, 23);
			this->textBox31->TabIndex = 12;
			this->textBox31->Text = L"50";
			this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox31->Visible = false;
			// 
			// textBox32
			// 
			this->textBox32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox32->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox32->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox32->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox32->Location = System::Drawing::Point(525, 359);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(89, 23);
			this->textBox32->TabIndex = 12;
			this->textBox32->Text = L"20";
			this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox32->Visible = false;
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(61, 4);
			// 
			// textBox33
			// 
			this->textBox33->AcceptsReturn = true;
			this->textBox33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox33->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox33->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox33->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->textBox33->Location = System::Drawing::Point(-192, 6501);
			this->textBox33->Multiline = true;
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(734, 50);
			this->textBox33->TabIndex = 33;
			this->textBox33->Text = L"行動紀錄";
			this->textBox33->Visible = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button13->Location = System::Drawing::Point(304, 482);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(339, 53);
			this->button13->TabIndex = 32;
			this->button13->Text = L"挑戰!!!";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InfoText;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"戰鬥紀錄：" });
			this->listBox1->Location = System::Drawing::Point(133, 541);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(757, 137);
			this->listBox1->TabIndex = 35;
			this->listBox1->Visible = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button12->Location = System::Drawing::Point(716, 578);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(339, 213);
			this->button12->TabIndex = 36;
			this->button12->Text = L"挑戰!!!";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1725, 613);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Role);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->Role->ResumeLayout(false);
			this->Role->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//Random^ RandInt = gcnew Random();
	//int x = rand();
	int x = 0;
	if (x % 2) {
		MessageBox::Show("恭喜確診88");
		Application::Exit();
	}
	else
	{
		MessageBox::Show("陰莖");
		label1->Visible = false;
		tableLayoutPanel1->Visible = true;
		label3->Visible = true;
	}
	
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//第一個
	tableLayoutPanel1->Visible = false;
	label3->Visible = false;
	pictureBox1->Visible = false;
	label2->Visible = false;
	Role->Visible = true;
	pictureBox7->Visible = true;
	textBox2->Text = "帥隆";
	textBox9->Text = "500";
	textBox10->Text = "50";
	textBox11->Text = "50";
	textBox12->Text = "40";
	textBox13->Text = "0";
	button10->Visible = true;
	button11->Visible = true;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	pictureBox7->ImageLocation = "./image/6722.jpg";
	yut = 1;
	blood = 500;
	attack = 50;
	defend = 50;
	iq = 40;
	textBox15->Visible = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//第二個
	tableLayoutPanel1->Visible = false;
	label3->Visible = false;
	pictureBox1->Visible = false;
	label2->Visible = false;
	Role->Visible = true;
	pictureBox7->Visible = true;
	textBox2->Text = "帥廷";
	textBox9->Text = "450";
	textBox10->Text = "50";
	textBox11->Text = "40";
	textBox12->Text = "50";
	textBox13->Text = "0";
	button10->Visible = true;
	button11->Visible = true;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	pictureBox7->ImageLocation = "./image/57390.jpg";
	yut = 2;
	blood = 450;
	attack = 50;
	defend = 40;
	iq = 50;
	textBox15->Visible = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//第三個
	tableLayoutPanel1->Visible = false;
	label3->Visible = false;
	pictureBox1->Visible = false;
	label2->Visible = false;
	Role->Visible = true;
	pictureBox7->Visible = true;
	textBox2->Text = "帥誠";
	textBox9->Text = "500";
	textBox10->Text = "30";
	textBox11->Text = "40";
	textBox12->Text = "50";
	textBox13->Text = "0";
	button10->Visible = true;
	button11->Visible = true;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	pictureBox7->ImageLocation = "./image/S__114614276.jpg";
	yut = 3;
	blood = 500;
	attack = 30;
	defend = 40;
	iq = 50;
	textBox15->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//第四個
	tableLayoutPanel1->Visible = false;
	label3->Visible = false;
	pictureBox1->Visible = false;
	label2->Visible = false;
	Role->Visible = true;
	pictureBox7->Visible = true;
	pictureBox7->ImageLocation = "./image/43678.jpg";
	yut = 4;
	textBox2->Text = "帥泓";
	textBox9->Text = "500";
	textBox10->Text = "50";
	textBox11->Text = "30";
	textBox12->Text = "50";
	textBox13->Text = "0";
	button10->Visible = true;
	button11->Visible = true;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	blood = 500;
	attack = 50;
	defend = 30;
	iq = 50;
	textBox15->Visible = true;
}
private: System::Void picturebox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//汁妹
	Experience += 20;
	experiance_judge += 20;
	if (experiance_judge > level * 20) {
		level += 1;
		experiance_judge = 0;
		blood += 15;
		attack += 5;
		defend += 5;
		iq += 10;
		textBox9->Text = blood.ToString();//血量
		textBox10->Text = attack.ToString(); //攻擊力
		textBox12->Text = defend.ToString();//防禦力
		textBox11->Text = iq.ToString();//智商
	}//升級
	else {
		//顯示行動紀錄
	}
	textBox8->Text = level.ToString();
	textBox13->Text =Experience.ToString();
	//顯示行動紀錄
	MAXHt += 19;
	textBox15->Height = MAXHt;
	textBox15->Text += "\r\n汁妹成功！獲得了 20點經驗值";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//讀書
	Experience += 15;
	experiance_judge += 15;
	//listBox1->Items->Add("讀書成功！獲得了 15點經驗值");
	if (experiance_judge > level * 20) {
		level += 1;
		experiance_judge = 0;
		blood += 15;
		attack += 5;
		defend += 5;
		iq += 10;
		textBox9->Text = blood.ToString();//血量
		textBox10->Text = attack.ToString(); //攻擊力
		textBox12->Text = defend.ToString();//防禦力
		textBox11->Text = iq.ToString();//智商
	}//升級
	 //顯示行動紀錄
	MAXHt += 19;
	textBox15->Height = MAXHt;
	textBox15->Text += "\r\n讀書成功！獲得了 15點經驗值";
	textBox8->Text = level.ToString();
	textBox13->Text = Experience.ToString();
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//玩社團
	Experience += 17;
	experiance_judge += 17;
	//->Items->Add("玩社團成功！獲得了 17點經驗值");
	if (experiance_judge > level * 20) {
		level += 1;
		experiance_judge = 0;
		blood += 15;
		attack += 5;
		defend += 5;
		iq += 10;
		textBox9->Text = blood.ToString();//血量
		textBox10->Text = attack.ToString(); //攻擊力
		textBox12->Text = defend.ToString();//防禦力
		textBox11->Text = iq.ToString();//智商
	}//升級
	MAXHt += 19;
	textBox15->Height = MAXHt;
	textBox15->Text += "\r\n讀書成功！獲得了 17點經驗值";

	textBox8->Text = level.ToString();
	textBox13->Text = Experience.ToString();
}

private: System::Void contextMenuStrip2_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	
}


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	button13->Visible = false;
	textBox28->Visible = false;
	textBox29->Visible = false;
	textBox30->Visible = false;
	textBox31->Visible = false;
	textBox32->Visible = false;
	textBox33->Visible = false;
	Role->Visible = true;
	pictureBox7->Visible = true;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	textBox15->Visible = true;
	tableLayoutPanel2->Visible = false;
}
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	button13->Visible = true;
	textBox33->Visible = true;
	textBox28->Visible = true;
	textBox29->Visible = true;
	textBox30->Visible = true;
	textBox31->Visible = true;
	textBox32->Visible = true;
	textBox16->Text = level.ToString();
	textBox24->Text = blood.ToString();
	textBox25->Text = attack.ToString();
	textBox26->Text = defend.ToString();
	textBox27->Text = iq.ToString();
	Role->Visible = false;
	pictureBox7->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	textBox15->Visible = false;
	tableLayoutPanel2->Visible = true;
	MessageBox::Show("先發100顆球，發完加分!!!");
	if (yut == 1) {
		textBox19->Text = "帥隆";
		pictureBox2->ImageLocation = "./image/6722.jpg";
	}
	else if (yut == 2) {
		textBox19->Text = "帥郭";
		pictureBox2->ImageLocation = "./image/57390.jpg";
	}
	else if (yut == 3) {
		textBox19->Text = "帥誠";
		pictureBox2->ImageLocation = "./image/S__114614276.jpg";
	}
	else if (yut == 4) {
		textBox19->Text = "帥泓";
		pictureBox2->ImageLocation = "./image/43678.jpg";
	}
}
private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox17_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Visible = true;
	String^ blood = textBox9->Text;
	int size = blood->Length;
	int* blood_num = new int[size];
	int cot = 1;
	player_hp = 0;
	for (int i = 1; i < size; i++) {
		cot *= 10;
	}
	for (int i = size - 1; i >= 0; i--) {
		blood_num[i] = Convert::ToInt32(blood->Substring(size - i - 1, 1));
		player_hp += blood_num[i]*cot;
		cot /= 10;
	}//玩家血量

	String^ att = textBox10->Text;
	size = att->Length;
	int* att_num = new int[size];
	cot = 1;
	player_att = 0;
	for (int i = 1; i < size; i++) {
		cot *= 10;
	}
	for (int i = size - 1; i >= 0; i--) {
		att_num[i] = Convert::ToInt32(att->Substring(size - i - 1, 1));
		player_att += att_num[i] * cot;
		cot /= 10;
	}//玩家攻擊力

	String^ def = textBox12->Text;
	size = def->Length;
	int* def_num = new int[size];
	cot = 1;
	player_def = 0;
	for (int i = 1; i < size; i++) {
		cot *= 10;
	}
	for (int i = size - 1; i >= 0; i--) {
		def_num[i] = Convert::ToInt32(def->Substring(size - i - 1, 1));
		player_def += def_num[i] * cot;
		cot /= 10;
	}//玩家防禦力

	String^ iq = textBox11->Text;
	size = iq->Length;
	int* iq_num = new int[size];
	cot = 1;
	player_iq = 0;
	for (int i = 1; i < size; i++) {
		cot *= 10;
	}
	for (int i = size - 1; i >= 0; i--) {
		iq_num[i] = Convert::ToInt32(iq->Substring(size - i - 1, 1));
		player_iq += iq_num[i] * cot;
		cot /= 10;
	}//玩家智商
	//
	//
	//
	String^ b_blood = textBox29->Text;
	size = b_blood->Length;
	int* b_blood_num = new int[size];
	cot = 1;
	boss_iq = 0;
	for (int i = 1; i < size; i++) {
		cot *= 10;
	}
	for (int i = size - 1; i >= 0; i--) {
		b_blood_num[i] = Convert::ToInt32(b_blood->Substring(size - i - 1, 1));
		boss_hp += b_blood_num[i] * cot;
		cot /= 10;
	}
	//boss血量
	String^ b_att = textBox30->Text;
	size = b_att->Length;
	int* b_att_num = new int[size];
	cot = 1;
	boss_att = 0;
	for (int i = 1; i < size; i++) {
		cot *= 10;
	}
	for (int i = size - 1; i >= 0; i--) {
		b_att_num[i] = Convert::ToInt32(b_att->Substring(size - i - 1, 1));
		boss_att += b_att_num[i] * cot;
		cot /= 10;
	}
	//boss攻擊力
	String^ b_def = textBox31->Text;
	size = b_def->Length;
	int* b_def_num = new int[size];
	cot = 1;
	boss_def = 0;
	for (int i = 1; i < size; i++) {
		cot *= 10;
	}
	for (int i = size - 1; i >= 0; i--) {
		b_def_num[i] = Convert::ToInt32(b_def->Substring(size - i - 1, 1));
		boss_def += b_def_num[i] * cot;
		cot /= 10;
	}
	//boss防禦力
	String^ b_iq = textBox32->Text;
	size = b_iq->Length;
	int* b_iq_num = new int[size];
	cot = 1;
	boss_iq = 0;
	for (int i = 1; i < size; i++) {
		cot *= 10;
	}
	for (int i = size - 1; i >= 0; i--) {
		b_iq_num[i] = Convert::ToInt32(b_iq->Substring(size - i - 1, 1));
		boss_iq += b_iq_num[i] * cot;
		cot /= 10;
	}
	//boss智商

	timer1->Enabled = true;
}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (boss_hp < 0) {
		timer1->Enabled = false;
		MessageBox::Show("微笑殺手倒下了，玩家剩餘血量" + player_hp.ToString());
		layer += 1;
	}
	if (player_hp < 0) {
		timer1->Enabled = false;
		if (yut == 1) {
			MessageBox::Show("帥隆倒下了，Boss剩餘血量" + boss_hp.ToString());
		}
		if (yut == 2) {
			MessageBox::Show("帥廷倒下了，Boss剩餘血量" + boss_hp.ToString());
		}
		if (yut == 3) {
			MessageBox::Show("帥誠倒下了，Boss剩餘血量" + boss_hp.ToString());
		}
		if (yut == 4) {
			MessageBox::Show("帥泓倒下了，Boss剩餘血量" + boss_hp.ToString());
		}
		
		
	}
	
	/*
	player_hp = textbox9.Text;
	player_att = textbox10;
	player_def = textbox12;
	player_iq = textbox11;
	*/
	
	if (yut == 1) {
		if (player_iq/10 >= boss_iq/10) {
			int rd = rand() % 4;
			std::string str = player_skill[0][rd];
			String^ str2 = gcnew String(str.c_str());
			listBox1->Items->Add("\r\n帥隆使用" +str2+"造成了"+player_att.ToString()+"傷害");
			player_iq -= 10;
			boss_hp -= player_att;
		}//玩家攻擊
		else {
			int rd = rand() % 4;
			std::string str = boss_skill[0][rd];
			String^ str2 = gcnew String(str.c_str());
			listBox1->Items->Add("\r\n微笑殺手使用" + str2 + "造成了" + boss_att.ToString() + "傷害");
			boss_iq -= 10;
			player_hp -= boss_att;
		}//Boss攻擊
	}//隆
	if (yut == 2) {
		if (player_iq / 10 >= boss_iq / 10) {
			int rd = rand() % 4;
			std::string str = player_skill[1][rd];
			String^ str2 = gcnew String(str.c_str());
			listBox1->Items->Add("\r\n帥廷使用" + str2 + "造成了" + player_att.ToString() + "傷害");
			player_iq -= 10;
			boss_hp -= player_att;
		}//玩家攻擊
		else {
			int rd = rand() % 4;
			std::string str = boss_skill[0][rd];
			String^ str2 = gcnew String(str.c_str());
			listBox1->Items->Add("\r\n微笑殺手使用" + str2 + "造成了" + boss_att.ToString() + "傷害");
			boss_iq -= 10;
			player_hp -= boss_att;
		}//Boss攻擊
	}//廷
	if (yut == 3) {
		if (player_iq / 10 >= boss_iq / 10) {
			int rd = rand() % 4;
			std::string str = player_skill[2][rd];
			String^ str2 = gcnew String(str.c_str());
			listBox1->Items->Add("\r\n帥誠使用" + str2 + "造成了" + player_att.ToString() + "傷害");
			player_iq -= 10;
			boss_hp -= player_att;
		}//玩家攻擊
		else {
			int rd = rand() % 4;
			std::string str = boss_skill[0][rd];
			String^ str2 = gcnew String(str.c_str());
			listBox1->Items->Add("\r\n微笑殺手使用" + str2 + "造成了" + boss_att.ToString() + "傷害");
			boss_iq -= 10;
			player_hp -= boss_att;
		}//Boss攻擊
	}//誠
	if (yut == 4) {
		if (player_iq / 10 >= boss_iq / 10) {
			int rd = rand() % 4;
			std::string str = player_skill[3][rd];
			String^ str2 = gcnew String(str.c_str());
			listBox1->Items->Add("\r\n帥泓使用" + str2 + "造成了" + player_att.ToString() + "傷害");
			player_iq -= 10;
			boss_hp -= player_att;
		}//玩家攻擊
		else {
			int rd = rand() % 4;
			std::string str = boss_skill[0][rd];
			String^ str2 = gcnew String(str.c_str());
			listBox1->Items->Add("\r\n微笑殺手使用" + str2 + "造成了" + boss_att.ToString() + "傷害");
			boss_iq -= 10;
			player_hp -= boss_att;
		}//Boss攻擊
	}//泓
	//MAXHt += 19;
	//textBox33->Height = MAXHt;

	//boss_hp -= 100;
	//textBox33->Text += "\r\n微笑殺手使出";
	//int rd = rand() % 4;
	//std::string str = skil[1][rd];
	//String^ str2 = gcnew String(str.c_str());
	//textBox33->Text += str2;
	//listBox1->Items->Add("\r\n微笑殺手使出"+rd+str2);

	/*
	int tinder = rand() % 2+1;//攻擊
	int defense = rand() % 2 + 1;//防禦
	*/
	
	//1的是我們攻擊 2是boss攻擊
	//if (yut == 1) {
		/*String^ textgh = textBox25->Text;
		int size = textgh->Length;
		int* num = new int[size];
		for (int i = size - 1; i >= 0; i--) {
			num[i] = Convert::ToInt32(textgh->Substring(size - i - 1, 1));
			Skill = num[i];
		}
		textBox34->Text += Skill.ToString();*/

		/*
		String^ texthp = textBox24->Text;
		int sizehp = texthp->Length;
		int* num = new int[sizehp];
		for (int i = sizehp -1 ; i >= 0; i--) {
			lifemyself =num[i] = Convert::ToInt32(texthp->Substring(sizehp - i -1 , 1));
			lifemyself = num[i];//我的腳色生命值
		}
		//對戰中判斷雙方誰先歸零
		while (lifemyself >= 0)
		{
			int rd = rand() % 4;//rd要使用的技能
			String^ textgh = textBox25->Text;
			int size = textgh->Length;
			int* num = new int[size];
			int cot = 1;
			for (int i = size - 1; i >= 0; i--) {
				num[i] = Convert::ToInt32(textgh->Substring(size - i - 1, 1));
				Skill += num[i]*cot;//我的腳色攻擊力
				cot *= 10;
			}
			String^ textboshp = textBox29->Text;
			int sizeboshp = textgh->Length;
			int* numboshp = new int[sizeboshp];
			for (int i = sizeboshp - 1; i >= 0; i--) {
				numboshp[i] = Convert::ToInt32(textboshp->Substring(sizeboshp - i - 1, 1));
				lifeboss += numboshp[i];//boss生命值
			}
			String^ textblood = textBox30->Text;
			int sizeblood = textgh->Length;
			int* numblood = new int[sizeblood];
			for (int i = sizeblood - 1; i >= 0; i--) {
				numblood[i] = Convert::ToInt32(textblood->Substring(sizeboshp - i - 1, 1));
				bossblood = numblood[i];//boss攻擊力
			}
			
			//int ked = rand() % Skill + 10;//ked技能傷害
			if (tinder == 1) {
				int ked = rand() % 50 + 10;//ked技能傷害
				int rd = rand() % 4;
				std::string str = king[1][rd];
				String^ str2 = gcnew String(str.c_str());
				listBox1->Items->Add("\r\n帥隆使用"+ str2 + ked+"傷害");
				lifeboss -= ked;
			}
			else
			{
				listBox1->Text += "\r\nerror";
				textBox34->Text += "\r\nerror";
			}
		*/
		

		}


	
}
; }

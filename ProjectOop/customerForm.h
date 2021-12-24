#pragma once
#include"Customer.h"
#include"VipCustomer.h"
#include"Person.h"
#include<string>
#include "msclr\marshal.h"
#include <fstream>
#include <iostream>
#include "HelpForm.h"


namespace ProjectOop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for customer
	/// </summary>
	public ref class customerForm : public System::Windows::Forms::Form
	{
	public:
		customerForm(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		customerForm(String^ text)
		{
			InitializeComponent();
			this->textName = text;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~customerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ÓÔÓÏÓ„‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ÓÔÓÏÓ„‡ToolStripMenuItem1;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(customerForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(203, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(239, 68);
			this->button1->TabIndex = 0;
			this->button1->Text = L"œ≥‰Ú‚Â‰ËÚË Á‡ÏÓ‚ÎÂÌÌˇ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &customerForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(282, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(282, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 22);
			this->textBox2->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Building", L"Digging" });
			this->comboBox1->Location = System::Drawing::Point(282, 154);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(188, 24);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &customerForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectedValueChanged += gcnew System::EventHandler(this, &customerForm::comboBox1_SelectedValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(221, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"≤Ï\'ˇ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(226, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"¬≥Í";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(160, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"“ËÔ Ó·ÓÚË";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(73, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"÷≥Ì‡";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(73, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"◊‡Ò";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(138, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 19);
			this->label6->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(138, 227);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 19);
			this->label7->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(155, 227);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 19);
			this->label8->TabIndex = 12;
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::Color::LightGray;
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->‰ÓÔÓÏÓ„‡ToolStripMenuItem,
					this->‰ÓÔÓÏÓ„‡ToolStripMenuItem1
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(632, 28);
			this->menuStrip2->TabIndex = 13;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ‰ÓÔÓÏÓ„‡ToolStripMenuItem
			// 
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem->Name = L"‰ÓÔÓÏÓ„‡ToolStripMenuItem";
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem->Size = System::Drawing::Size(155, 24);
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem->Text = L"—Ú‡ÚÛÒ Á‡ÏÓ‚ÎÂÌÌˇ";
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &customerForm::‰ÓÔÓÏÓ„‡ToolStripMenuItem_Click);
			// 
			// ‰ÓÔÓÏÓ„‡ToolStripMenuItem1
			// 
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem1->Name = L"‰ÓÔÓÏÓ„‡ToolStripMenuItem1";
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem1->Size = System::Drawing::Size(94, 24);
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem1->Text = L"ƒÓÔÓÏÓ„‡";
			this->‰ÓÔÓÏÓ„‡ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &customerForm::‰ÓÔÓÏÓ„‡ToolStripMenuItem1_Click);
			// 
			// customerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(632, 370);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"customerForm";
			this->Text = L" ÓËÒÚÛ‚‡˜";
			this->Load += gcnew System::EventHandler(this, &customerForm::customer_Load);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int counter = 0;
		String^ textName;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string text;
		if (textBox1->Text == "" || textBox2->Text == "" || comboBox1->SelectedIndex == -1)
			MessageBox::Show("«‡ÔÓ‚Ì≥Ú¸ ‚Ò≥ ÔÓÎˇ!");
		else if (counter == 0)
		{
			VipCustomer<string, int, int> vipCustomer;
			vipCustomer.SetName((char*)(void*)Marshal::StringToHGlobalAnsi(textBox1->Text));
			try {
				vipCustomer.SetAge(Int32::Parse(textBox2->Text));
			}
			catch (FormatException^) {
			}
			vipCustomer.SetWorkType((char*)(void*)Marshal::StringToHGlobalAnsi(comboBox1->Text));
			vipCustomer.SetPrice(Int32::Parse(label6->Text));
			vipCustomer.SetDays(Int32::Parse(label7->Text));

			std::ofstream out("customer.txt", std::ios::app);
			if (out.is_open())
			{
				out << vipCustomer.GetName() << std::endl << vipCustomer.GetTypeOfWork() << std::endl
					<< vipCustomer.GetPrice() << std::endl << vipCustomer.GetDays() << std::endl;
			}
			out.close();
			std::ofstream outNick("nickName.txt", std::ios::app);
			if (outNick.is_open())
			{
				outNick << (char*)(void*)Marshal::StringToHGlobalAnsi(textName) << " " << vipCustomer.GetName() << endl;
			}
			outNick.close();
			counter++;
		}
		else if (counter > 0)
			MessageBox::Show("¬Ë ‚ÊÂ Ô≥‰Ú‚Â‰ËÎË Á‡ÏÓ‚ÎÂÌÌˇ!");
	}
	public: System::Void customer_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void comboBox1_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0)
		{
			label6->Text = "3600";
			label7->Text = "9";
			label8->Text = "‰Ì≥‚";
		}
		else if (comboBox1->SelectedIndex == 1)
		{
			label6->Text = "2460";
			label7->Text = "5";
			label8->Text = "‰Ì≥‚";
		}
	}
	private: System::Void ‰ÓÔÓÏÓ„‡ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string textForName;
		std::string textForCheck;
		bool ThereIs = false;
		std::ifstream in("customer.txt");
		std::fstream inNick("nickName.txt", std::fstream::in | std::fstream::out);
		if (inNick.is_open())
		{
			while (inNick >> textForName)
			{
				if (textForName == (char*)(void*)Marshal::StringToHGlobalAnsi(textName))
				{
					inNick >> textForName;
					break;
				}
			}
		}
		inNick.close();
		if (in.is_open())
		{
			while (in >> textForCheck)
			{
				if (textForCheck == textForName)
				{
					ThereIs = true;
					break;
				}
			}
		}
		in.close();
		if (ThereIs == true)
			MessageBox::Show("¬‡¯Â Á‡ÏÓ‚ÎÂÌÌˇ ÔËÈÌˇÚÓ, Ó·ÓÚ‡ ÒÍÓÓ ÓÁÔÓ˜ÌÂÚ¸Òˇ!");
		else
			MessageBox::Show("¬‡¯Â Á‡ÏÓ‚ÎÂÌÌˇ ‚≥‰ıËÎÂÌÓ, ˜ÂÂÁ ÌÂÒÚ‡˜Û Ó·≥ÚÌËÍ≥‚, ‡·Ó ‚Ë ÌÂ Ô≥‰Ú‚Â‰ËÎË ÈÓ„Ó!");
	}

	private: System::Void ‰ÓÔÓÏÓ„‡ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		HelpForm^ hForm = gcnew HelpForm;
		hForm->ShowDialog();
		hForm->Text = "ƒÓÔÓÏÓ„‡";
	}
	};
}

#pragma once
#include<string>
#include <fstream>
#include "msclr\marshal.h"
#include <iostream>
#include"Customer.h"
#include"Dispatcher.h"
#include"Order.h"
#include"OrderList.h"
#include"Worker.h"
#include"Team.h"
#include"VipCustomer.h"

static Dispatcher disp;
static Order order;
static OrderList orderList;
static vector<Worker> worker;
static Team team;
static VipCustomer<string, int, int> vipCustomer;

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
	/// Summary for admin
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	public:

		admin()
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
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(admin::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(191, 60);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 26);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &admin::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Список замовників";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(147, 189);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 24);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(87, 264);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 24);
			this->label3->TabIndex = 3;
			this->label3->Click += gcnew System::EventHandler(this, &admin::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(147, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 24);
			this->label4->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(234, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 55);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Показати інформацію";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &admin::button1_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(500, 60);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(172, 257);
			this->checkedListBox1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(509, 353);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 55);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Затвердити команду";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &admin::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(15, 353);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 55);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Відмінити замовлення";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &admin::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(35, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Тип роботи";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(35, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Час роботи";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(35, 264);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 24);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Ціна";
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(684, 420);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"admin";
			this->Text = L"Адмін";
			this->Load += gcnew System::EventHandler(this, &admin::admin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int counter = 0, counter2 = 0, counter3 = 0, counterForCheck = 0;
		bool FirstClick = true;
#pragma endregion
	private: System::Void admin_Load(System::Object^ sender, System::EventArgs^ e) {
		Worker miniWorker;
		std::string text;
		std::string buffer;
		System::String^ s;
		std::ifstream in("customer.txt");
		if (in.is_open())
		{
			while (in >> text)
			{
				if (counter == 0)
				{
					s = gcnew System::String(text.c_str());
					comboBox1->Items->Add(s);
				}
				else if (counter == counter2 + 4)
				{
					s = gcnew System::String(text.c_str());
					comboBox1->Items->Add(s);
					counter2 += 4;
				}
				counter++;
			}
		}
		in.close();
		std::ifstream in1("workers.txt");
		if (in1.is_open())
		{
			while (in1 >> text >> buffer)
			{
				if (buffer[0] == '1')
				{
					miniWorker.SetName(text);
					miniWorker.setBool();
					s = gcnew System::String(miniWorker.GetName().c_str());
					checkedListBox1->Items->Add(s);
					worker.push_back(miniWorker);
					checkedListBox1->SetItemChecked(counterForCheck, true);
					counterForCheck++;
				}
				else
				{
					miniWorker.SetName(text);
					s = gcnew System::String(miniWorker.GetName().c_str());
					checkedListBox1->Items->Add(s);
					worker.push_back(miniWorker);
					counterForCheck++;
				}
			}
		}
		in1.close();
		std::ifstream in2("Order.txt");
		if (in2.is_open())
		{
			int chek = 0, checkWhile = 0;

			while (in2 >> text)
			{
				while (checkWhile < checkedListBox1->Items->Count)
				{
					if (text == (char*)(void*)Marshal::StringToHGlobalAnsi(checkedListBox1->Items[chek]->ToString()))
					{
						checkedListBox1->SetItemChecked(chek, true);
						chek++;
						checkWhile++;
					}
					else
					{
						chek++;
						checkWhile++;
					}
				}
				chek = 0;
				checkWhile = 0;
			}
		}
		in2.close();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string text;
		if (FirstClick)
		{
			System::String^ s;
			std::ifstream in("customer.txt");
			if (in.is_open())
			{
				while (in >> text)
				{
					if ((char*)(void*)Marshal::StringToHGlobalAnsi(comboBox1->Text) == text)
					{
						vipCustomer.SetName(text);
						in >> text;
						vipCustomer.SetWorkType(text);
						in >> text;
						vipCustomer.SetPrice(std::stoi(text));
						in >> text;
						vipCustomer.SetDays(std::stoi(text));
					}
				}
			}
			in.close();
			label2->Text = gcnew System::String(vipCustomer.GetTypeOfWork().c_str());
			label3->Text = Convert::ToString(vipCustomer.GetPrice());
			label4->Text = Convert::ToString(vipCustomer.GetDays());
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string text;
		bool finder = false;
		std::ifstream in2("Order.txt");
		if (in2.is_open())
		{
			for (int i = 0, j = 0; i < checkedListBox1->CheckedItems->Count; i++) {
				while (worker[j].GetName() != (char*)(void*)Marshal::StringToHGlobalAnsi(checkedListBox1->CheckedItems[i]->ToString()))
					j++;
				while (in2 >> text)
				{
					if (worker[j].GetName() == text)
					{
						finder = true;
						break;
						j = 0;
					}
				}
				if (!finder)
					team.SetTeamMember(worker[j]);
				finder = false;
				in2.clear();
				in2.seekg(0);
			}
		}
		in2.close();

		disp.SetTeam(team);
		order.AddOrder(disp, &vipCustomer, orderList);
		order.addToList();
		orderList.WriteToFile();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string text;
		int counter = 0;
		std::ofstream out("NewCustomer.txt");
		std::ifstream in("customer.txt");

		if (in.is_open())
		{
			while (in >> text)
			{
				if (text == (char*)(void*)Marshal::StringToHGlobalAnsi(comboBox1->SelectedItem->ToString()))
				{
					counter = 3;
				}
				else if (counter == 0)
				{
					out << text << std::endl;
				}
				else if (counter > 0)
					counter--;
			}
		}
		out.close();
		in.close();
		std::ifstream inOrder("Order.txt");
		std::ofstream OutOrder("NewOrder.txt");
		if (inOrder.is_open())
		{
			while (inOrder >> text)
			{
				if (text == (char*)(void*)Marshal::StringToHGlobalAnsi(comboBox1->SelectedItem->ToString()))
				{
					counter = 6;
				}
				else if (counter == 0)
				{
					OutOrder << text << std::endl;
				}
				else if (counter > 0)
					counter--;
			}
		}
		inOrder.close();
		OutOrder.close();
		comboBox1->Items->Remove(comboBox1->SelectedItem);
		remove("customer.txt");
		remove("Order.txt");
		rename("NewCustomer.txt", "customer.txt");
		rename("NewOrder.txt", "Order.txt");
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

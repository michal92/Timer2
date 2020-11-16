#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
namespace Rachwalala {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;



	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		static int Sekundy = 0;
		static int seku=0;
		static int Minuty = 0;
		static int Godziny = 0;

		static int MinutyZad = 0;
		static int SekundyZad = 0;
		static int GodzinyZad = 0;
		String^ nazwPliku;
		String^ Sec;
		String^ Godz;
		MyForm1^ noweOkno = gcnew MyForm1();
	private: System::Windows::Forms::Button^  stop_btn;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Button^  Reset_btn;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  opcjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zmieñLinkToolStripMenuItem;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ToolStripMenuItem^  generatorDiscoToolStripMenuItem;


			 String^ min;
	
			
	public:
		MyForm(void)
		{
			InitializeComponent();
		/*	StreamWriter^ plik2 = gcnew StreamWriter("Link_do_muzyki.txt");
			plik2->Write("https://youtu.be/DnGdoEa1tPg?t=27s");
			plik2->Close(); */

			StreamReader^ plik= gcnew StreamReader("Link_do_muzyki.txt");
			//nazwPliku = Convert::ToString(plik->Read);
			
			nazwPliku = plik->ReadLine();
			plik->Close();

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->stop_btn = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Reset_btn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zmieñLinkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->generatorDiscoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(151, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"START";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(34, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"00 : 00 : 00";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// stop_btn
			// 
			this->stop_btn->Location = System::Drawing::Point(40, 150);
			this->stop_btn->Name = L"stop_btn";
			this->stop_btn->Size = System::Drawing::Size(92, 63);
			this->stop_btn->TabIndex = 2;
			this->stop_btn->Text = L"stop";
			this->stop_btn->UseVisualStyleBackColor = true;
			this->stop_btn->Click += gcnew System::EventHandler(this, &MyForm::stop_btn_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(40, 108);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 24, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(66, 20);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(112, 108);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(66, 20);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(184, 108);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(66, 20);
			this->numericUpDown3->TabIndex = 5;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// Reset_btn
			// 
			this->Reset_btn->Location = System::Drawing::Point(100, 230);
			this->Reset_btn->Name = L"Reset_btn";
			this->Reset_btn->Size = System::Drawing::Size(103, 46);
			this->Reset_btn->TabIndex = 6;
			this->Reset_btn->Text = L"Reset";
			this->Reset_btn->UseVisualStyleBackColor = true;
			this->Reset_btn->Click += gcnew System::EventHandler(this, &MyForm::Reset_btn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcjeToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(291, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// opcjeToolStripMenuItem
			// 
			this->opcjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zmieñLinkToolStripMenuItem,
					this->generatorDiscoToolStripMenuItem
			});
			this->opcjeToolStripMenuItem->Name = L"opcjeToolStripMenuItem";
			this->opcjeToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->opcjeToolStripMenuItem->Text = L"Opcje";
			this->opcjeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::opcjeToolStripMenuItem_Click);
			// 
			// zmieñLinkToolStripMenuItem
			// 
			this->zmieñLinkToolStripMenuItem->Name = L"zmieñLinkToolStripMenuItem";
			this->zmieñLinkToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->zmieñLinkToolStripMenuItem->Text = L"zmieñ link ";
			this->zmieñLinkToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zmieñLinkToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Godziny";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(120, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Minuty";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(191, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"sekundy";
			// 
			// generatorDiscoToolStripMenuItem
			// 
			this->generatorDiscoToolStripMenuItem->Name = L"generatorDiscoToolStripMenuItem";
			this->generatorDiscoToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->generatorDiscoToolStripMenuItem->Text = L"generator disco.fleo.se";
			this->generatorDiscoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generatorDiscoToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(291, 290);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Reset_btn);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->stop_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Timer -Developed M Czerniak";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//	Process::Start("http://www.pogodynka.pl/polska/16dni/klodzko_klodzko");
		try{
			StreamReader^ plik = gcnew StreamReader("Link_do_muzyki.txt");
			nazwPliku = plik->ReadLine();
			plik->Close();

			GodzinyZad = Convert::ToInt32(numericUpDown1->Text);
			MinutyZad = Convert::ToInt32(numericUpDown2->Text);
			SekundyZad = Convert::ToInt32(numericUpDown3->Text);
			timer1->Start();
			//	while (true){
			//	if (Sekundy == 10)
			//{
			//	Process::Start("http://www.pogodynka.pl/polska/16dni/klodzko_klodzko");
			//	//seku++;
			//	}
			//	this->timer1->Start();
			//		}
			//DataTime 
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("coœ posz³o nie tak :(");
		}

	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		
	//	seku++;
	//	if (seku==5)
	//		seku=0;
		if (Godziny == GodzinyZad) {
			if (Minuty == MinutyZad)
				if (Sekundy == SekundyZad) {
					Process::Start(nazwPliku); this->timer1->Stop();		MessageBox::Show("Odliczanie dobieg³o koñca!!!"); Sekundy = 0; Minuty = 0; Godziny = 0; }
		}
		if (Sekundy == 60)
		{
			Sekundy = 0;

			Minuty++;

			if (Godziny == GodzinyZad)
			{
				if (Minuty == MinutyZad)
					if (Sekundy == SekundyZad) {
						Process::Start(nazwPliku); this->timer1->Stop();	MessageBox::Show("Odliczanie dobieg³o koñca!!!"); Sekundy = 0; Minuty = 0; Godziny = 0;
					}
			}
		}

		if (Minuty == 60)
		{
			Sekundy = 0;
			Minuty = 0;

			Godziny++;

			if (Godziny == GodzinyZad)
				if (Minuty == MinutyZad)
					if (Sekundy == SekundyZad){
						Process::Start(nazwPliku); this->timer1->Stop(); 	MessageBox::Show("Odliczanie dobieg³o koñca!!!"); Sekundy = 0; Minuty = 0; Godziny = 0; }
		}

	
		if (Sekundy < 10){
			Sec ="0"+ Convert::ToString(Sekundy);
		}
		else{Sec = Convert::ToString(Sekundy);}
		if (Minuty < 10){
			min ="0"+ Convert::ToString(Minuty);
		}
		else{
			min = Convert::ToString(Minuty);
		}
		if (Godziny < 10){
			Godz ="0"+ Convert::ToString(Godziny);
		}
		else{
			Godz = Convert::ToString(Godziny);
		}
		label1->Text =Godz+" : "+ min + " : " + Sec;
		Sekundy++;
		
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void stop_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->timer1->Stop();
}
private: System::Void Reset_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	try{
		this->timer1->Stop();
		Sekundy = 0;
		Minuty = 0;
		Godziny = 0;
		if (Sekundy < 10){
			Sec = "0" + Convert::ToString(Sekundy);
		}
		else{ Sec = Convert::ToString(Sekundy); }
		if (Minuty < 10){
			min = "0" + Convert::ToString(Minuty);
		}
		else{
			min = Convert::ToString(Minuty);
		}
		if (Godziny < 10){
			Godz = "0" + Convert::ToString(Godziny);
		}
		else{
			Godz = Convert::ToString(Godziny);
		}
		label1->Text = Godz + " : " + min + " : " + Sec;
	//	label1->Text = Godz + " : " + min + " : " + Sec;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("coœ nie posz³o:(");
	}

}
private: System::Void opcjeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void zmieñLinkToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//this->Hide();
//	this->Close();
	MyForm1^ noweOkno = gcnew MyForm1();
	noweOkno->ShowDialog();
	noweOkno->Close();
	this->Show();
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void generatorDiscoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2^ noweOkno2 = gcnew MyForm2();
	noweOkno2->ShowDialog();
	noweOkno2->Close();
	this->Show();
}
};
}

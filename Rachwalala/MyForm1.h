#pragma once

namespace Rachwalala {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  zamknij_btn;
	private: System::Windows::Forms::Button^  zapisz_btn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  muzyka_z_komp_btn;

	private: System::Windows::Forms::Label^  label2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->zamknij_btn = (gcnew System::Windows::Forms::Button());
			this->zapisz_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->muzyka_z_komp_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AllowDrop = true;
			this->textBox1->Location = System::Drawing::Point(23, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// zamknij_btn
			// 
			this->zamknij_btn->Location = System::Drawing::Point(23, 71);
			this->zamknij_btn->Name = L"zamknij_btn";
			this->zamknij_btn->Size = System::Drawing::Size(146, 49);
			this->zamknij_btn->TabIndex = 1;
			this->zamknij_btn->Text = L"Zamknij (bez zapisu)";
			this->zamknij_btn->UseVisualStyleBackColor = true;
			this->zamknij_btn->Click += gcnew System::EventHandler(this, &MyForm1::zamknij_btn_Click);
			// 
			// zapisz_btn
			// 
			this->zapisz_btn->Location = System::Drawing::Point(194, 71);
			this->zapisz_btn->Name = L"zapisz_btn";
			this->zapisz_btn->Size = System::Drawing::Size(150, 49);
			this->zapisz_btn->TabIndex = 2;
			this->zapisz_btn->Text = L"Zapisz";
			this->zapisz_btn->UseVisualStyleBackColor = true;
			this->zapisz_btn->Click += gcnew System::EventHandler(this, &MyForm1::zapisz_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Link do strony www, która otworzy siê na koñcu odliczania:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// muzyka_z_komp_btn
			// 
			this->muzyka_z_komp_btn->Location = System::Drawing::Point(361, 71);
			this->muzyka_z_komp_btn->Name = L"muzyka_z_komp_btn";
			this->muzyka_z_komp_btn->Size = System::Drawing::Size(75, 49);
			this->muzyka_z_komp_btn->TabIndex = 4;
			this->muzyka_z_komp_btn->Text = L"muzykê z komputera";
			this->muzyka_z_komp_btn->UseVisualStyleBackColor = true;
			this->muzyka_z_komp_btn->Click += gcnew System::EventHandler(this, &MyForm1::muzyka_z_komp_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(358, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"lub wybierz";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 145);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->muzyka_z_komp_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->zapisz_btn);
			this->Controls->Add(this->zamknij_btn);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"Timer - edycja - developed by M Czerniak";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zamknij_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void zapisz_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		try{
			if ((textBox1->TextLength) > 0){
				StreamWriter^ plik2 = gcnew StreamWriter("Link_do_muzyki.txt");
				plik2->Write(textBox1->Text);
				plik2->Close();
				
			}
			else
			{
				MessageBox::Show("Nie poda³eœ nowego linku");
			}
			//this->Close()
			//this->Hide();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("coœ nie posz³o:(");
		}
		this->Hide();
		this->Close();
		//~MyForm1();
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void muzyka_z_komp_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->Filter = "pliki muzyczne (*.mp3, *.wma)|*mp3;*wma";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{

			String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ Readfile = File::ReadAllText(strfilename);
			//MessageBox::Show(Readfile);
			StreamWriter^ plik2 = gcnew StreamWriter("Link_do_muzyki.txt");
			//plik2->Write(Readfile);
			textBox1->Text = strfilename;
			plik2->Close();

			myStream->Close();
		}
	}
}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

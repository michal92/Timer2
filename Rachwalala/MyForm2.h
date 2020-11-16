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
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		String^ NazwaLinku;
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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Zamknij;
	private: System::Windows::Forms::Button^  Zapisz;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Zamknij = (gcnew System::Windows::Forms::Button());
			this->Zapisz = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(50, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(354, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Wpisz tutaj tekst jaki ma siê wyœwietliæ na stronie disco.fleo.se:";
			// 
			// Zamknij
			// 
			this->Zamknij->Location = System::Drawing::Point(62, 74);
			this->Zamknij->Name = L"Zamknij";
			this->Zamknij->Size = System::Drawing::Size(130, 40);
			this->Zamknij->TabIndex = 2;
			this->Zamknij->Text = L"Zamknij (bez zapisu)";
			this->Zamknij->UseVisualStyleBackColor = true;
			this->Zamknij->Click += gcnew System::EventHandler(this, &MyForm2::Zamknij_Click);
			// 
			// Zapisz
			// 
			this->Zapisz->Location = System::Drawing::Point(253, 74);
			this->Zapisz->Name = L"Zapisz";
			this->Zapisz->Size = System::Drawing::Size(134, 40);
			this->Zapisz->TabIndex = 1;
			this->Zapisz->Text = L"Zapisz";
			this->Zapisz->UseVisualStyleBackColor = true;
			this->Zapisz->Click += gcnew System::EventHandler(this, &MyForm2::Zapisz_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Np.: Parówki s¹ gotowe";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 175);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Zapisz);
			this->Controls->Add(this->Zamknij);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Text = L"Timer - edycja-generator disco.fleo.se - developed by M Czerniak";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Zamknij_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
private: System::Void Zapisz_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if ((textBox1->TextLength) > 0) {
			StreamWriter^ plik2 = gcnew StreamWriter("Link_do_muzyki.txt");
			NazwaLinku = "http://disco.fleo.se/?name=" + textBox1->Text;
			textBox1->Text = NazwaLinku;
			MessageBox::Show("wygenerowano stronê");
			plik2->Write( NazwaLinku);
			plik2->Close();

		}
		else
		{
			MessageBox::Show("Nie poda³eœ ¿adnego tekstu");
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
}
		 
private: System::Void Zapisz_Enter(System::Object^  sender, System::EventArgs^  e) {
	try {
		if ((textBox1->TextLength) > 0) {
			StreamWriter^ plik2 = gcnew StreamWriter("Link_do_muzyki.txt");
			NazwaLinku = "http://disco.fleo.se/?name=" + textBox1->Text;
			textBox1->Text = NazwaLinku;
			MessageBox::Show("wygenerowano stronê");
			plik2->Write(NazwaLinku);
			plik2->Close();

		}
		else
		{
			MessageBox::Show("Nie poda³eœ ¿adnego tekstu");
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

}


private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

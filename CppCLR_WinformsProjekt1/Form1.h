#pragma once
#include"Header.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class FIGURE : public System::Windows::Forms::Form
	{
		Graphics^ g;
		Tfigure **mas;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Timer^  timer1;
			 int size = 3;
	public:
		FIGURE(void)
		{
		
			InitializeComponent();
			tcircle *c1, *c2;
			c1 = new tcircle(100, 200, 30);
			c2 = new tcircle(200, 200, 30);
			Trectangle *trect;
			trect = new Trectangle(40, 20, 210, 150);
			mas = new Tfigure*[size];
			mas[0] = c1;
			mas[1] = c2;
			mas[2] = trect;

			g = CreateGraphics();

		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		/*FIGURE()
		{
			if (components)
			{
				delete components;
			}
		}*/

	private: System::Windows::Forms::Button^  button1;
	
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	
	
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(434, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Нарисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FIGURE::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 15;
			this->timer1->Tick += gcnew System::EventHandler(this, &FIGURE::timer1_Tick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(538, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Скрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FIGURE::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(650, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Сдвинуть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FIGURE::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(839, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Старт";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FIGURE::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(933, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Стоп";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FIGURE::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1087, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(66, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FIGURE::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1184, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(66, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &FIGURE::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1159, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"dx";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1256, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"dy";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1038, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Сдвиг :";
			this->label3->Click += gcnew System::EventHandler(this, &FIGURE::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(760, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Передвинуть";
			// 
			// FIGURE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1285, 758);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FIGURE";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &FIGURE::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {//нарисовать
		for (int i = 0; i < 3; i++)
		{
			mas[i]->show(g);
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		int a = Convert::ToInt32(textBox1->Text);//dx
		int b = Convert::ToInt32(textBox2->Text);//dy
		for (int i = 0; i < 3; i++)
		{
			mas[i]->move(g, a, b);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {//скрыть
		for (int i = 0; i < 3; i++)
		{
			mas[i]->hide(g);
		}
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {//сдвинуть
	int a = Convert::ToInt32(textBox1->Text);//dx
	int b = Convert::ToInt32(textBox2->Text);//dy
	for (int i = 0; i < 3; i++)
	{
		mas[i]->move(g,a,b);
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {//старт
	timer1->Enabled = true;

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {//стоп
	timer1->Enabled = false;
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
};
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}


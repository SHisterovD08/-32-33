#pragma once

namespace CALCULATE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//double a = Parse(TextBox1.Text.Replace(".", ","));

	/// <summary>
	/// Сводка для calculate
	/// </summary>
	
	public ref class calculate : public System::Windows::Forms::Form
	{
	public:
		calculate(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~calculate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ godMesLabel;
	private: System::Windows::Forms::Button^ godMesbutton;
		   System::Int32 sh=0;////////////////////////////////////////////
		   System::Double t1 = 0;
		   System::Double t2 = 0;
		   System::Double t3 = 0;
	private: System::Windows::Forms::Button^ Clearbutton;
	private: System::Windows::Forms::Button^ Changebutton;
	private: System::Windows::Forms::Button^ Cancelbutton;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->godMesLabel = (gcnew System::Windows::Forms::Label());
			this->godMesbutton = (gcnew System::Windows::Forms::Button());
			this->Clearbutton = (gcnew System::Windows::Forms::Button());
			this->Changebutton = (gcnew System::Windows::Forms::Button());
			this->Cancelbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 54);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 34);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &calculate::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &calculate::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 123);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(201, 34);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &calculate::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &calculate::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 190);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(201, 34);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &calculate::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &calculate::textBox3_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(39, 34);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Сумма кредита";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(39, 103);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Годовая ставка";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(39, 170);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Срок выплаты";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(421, 62);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(201, 34);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &calculate::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(421, 167);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(201, 34);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &calculate::textBox5_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(444, 42);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Общая сумма выплат";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(457, 147);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Сумма переплат";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Brown;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(297, 45);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &calculate::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(221, 62);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"руб.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(220, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"% в год";
			// 
			// godMesLabel
			// 
			this->godMesLabel->AutoSize = true;
			this->godMesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->godMesLabel->Location = System::Drawing::Point(220, 198);
			this->godMesLabel->Name = L"godMesLabel";
			this->godMesLabel->Size = System::Drawing::Size(41, 20);
			this->godMesLabel->TabIndex = 13;
			this->godMesLabel->Text = L"мес.";
			this->godMesLabel->Click += gcnew System::EventHandler(this, &calculate::godMesLabel_Click);
			// 
			// godMesbutton
			// 
			this->godMesbutton->Location = System::Drawing::Point(263, 198);
			this->godMesbutton->Name = L"godMesbutton";
			this->godMesbutton->Size = System::Drawing::Size(24, 23);
			this->godMesbutton->TabIndex = 14;
			this->godMesbutton->Text = L">";
			this->godMesbutton->UseVisualStyleBackColor = true;
			this->godMesbutton->Click += gcnew System::EventHandler(this, &calculate::godMesbutton_Click);
			// 
			// Clearbutton
			// 
			this->Clearbutton->BackColor = System::Drawing::Color::Brown;
			this->Clearbutton->Location = System::Drawing::Point(297, 193);
			this->Clearbutton->Name = L"Clearbutton";
			this->Clearbutton->Size = System::Drawing::Size(100, 25);
			this->Clearbutton->TabIndex = 15;
			this->Clearbutton->Text = L"Очистить";
			this->Clearbutton->UseVisualStyleBackColor = false;
			this->Clearbutton->Click += gcnew System::EventHandler(this, &calculate::Clearbutton_Click);
			// 
			// Changebutton
			// 
			this->Changebutton->BackColor = System::Drawing::Color::Brown;
			this->Changebutton->Location = System::Drawing::Point(297, 100);
			this->Changebutton->Name = L"Changebutton";
			this->Changebutton->Size = System::Drawing::Size(100, 23);
			this->Changebutton->TabIndex = 16;
			this->Changebutton->Text = L"Изменить";
			this->Changebutton->UseVisualStyleBackColor = false;
			this->Changebutton->Click += gcnew System::EventHandler(this, &calculate::Changebutton_Click);
			// 
			// Cancelbutton
			// 
			this->Cancelbutton->BackColor = System::Drawing::Color::Brown;
			this->Cancelbutton->Location = System::Drawing::Point(297, 147);
			this->Cancelbutton->Name = L"Cancelbutton";
			this->Cancelbutton->Size = System::Drawing::Size(100, 23);
			this->Cancelbutton->TabIndex = 17;
			this->Cancelbutton->Text = L"Отмена";
			this->Cancelbutton->UseVisualStyleBackColor = false;
			this->Cancelbutton->Click += gcnew System::EventHandler(this, &calculate::Cancelbutton_Click);
			// 
			// calculate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(639, 270);
			this->Controls->Add(this->Cancelbutton);
			this->Controls->Add(this->Changebutton);
			this->Controls->Add(this->Clearbutton);
			this->Controls->Add(this->godMesbutton);
			this->Controls->Add(this->godMesLabel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"calculate";
			this->Text = L"calculate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 ) //цифры, клавиша BackSpace и запятая а ASCII
	{
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 ) //цифры, клавиша BackSpace и запятая а ASCII
	{
		e->Handled = true;
	}
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 ) //цифры, клавиша BackSpace и запятая а ASCII
	{
		e->Handled = true;
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	
	
	
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::Double summ;
	System::Double stavka;
	System::Double srok;
	System::Double summv;
	System::Double summp;
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		return;
	}
	summ = System::Double::Parse(textBox1->Text);
	stavka = System::Double::Parse(textBox2->Text);
	srok = System::Double::Parse(textBox3->Text);
	if (sh == 0 || sh % 2 == 0)
	{
		summv = (summ * (stavka*srok/12) / 100 + summ) ;
		summp = summv - summ;
	}
	else
	{
		summv = (summ * stavka / 100) * srok + summ;
		summp = summv - summ;
	}
	
	textBox4->Text = Convert::ToString(summv);
	textBox5->Text = Convert::ToString(summp);
	textBox1->ReadOnly = true;
	textBox2->ReadOnly = true;
	textBox3->ReadOnly = true;
}
private: System::Void godMesLabel_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void godMesbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::String ^v;
	System::String^ w;
	if (sh == 0 || sh%2==0)
	{
		w = "г.";
		godMesLabel->Text = w;
		sh++;
	}
	else
	{
		v = "мес.";
		godMesLabel->Text = v;
		sh++;
	}
	
}
private: System::Void Clearbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
}
private: System::Void Changebutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		t1 = 0;
		t2 = 0;
		t3 = 0;
	}
	else
	{
		t1 = System::Double::Parse(textBox1->Text);
		t2 = System::Double::Parse(textBox2->Text);
		t3 = System::Double::Parse(textBox3->Text);
	}
	
	textBox1->ReadOnly = false;
	textBox2->ReadOnly = false;
	textBox3->ReadOnly = false;
}
private: System::Void Cancelbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = Convert::ToString(t1);
	textBox2->Text = Convert::ToString(t2);
	textBox3->Text = Convert::ToString(t3);
}
};
}

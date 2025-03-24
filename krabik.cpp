//#pragma once
//static int counter = 1;
//#include <iostream>
//
//namespace Крабик {
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//	/// <summary>
//	/// Сводка для aQuesy2
//	/// </summary>
//	public ref class aQuesy2 : public System::Windows::Forms::Form
//	{
//	public:
//		aQuesy2(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: добавьте код конструктора
//			//
//		}
//
//	protected:
//		/// <summary>
//		/// Освободить все используемые ресурсы.
//		/// </summary>
//		~aQuesy2()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Button^ button1;
//	private: System::Windows::Forms::Button^ button3;
//	private: System::Windows::Forms::Button^ button2;
//	private: System::Windows::Forms::RichTextBox^ richTextBox1;
//
//	private: System::ComponentModel::IContainer^ components;
//	protected:
//
//
//
//
//	private:
//		/// <summary>
//		/// Обязательная переменная конструктора.
//		/// </summary>
//
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// Требуемый метод для поддержки конструктора — не изменяйте 
//		/// содержимое этого метода с помощью редактора кода.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//
//			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(aQuesy2::typeid));
//			this->button1 = (gcnew System::Windows::Forms::Button());
//			this->button3 = (gcnew System::Windows::Forms::Button());
//			this->button2 = (gcnew System::Windows::Forms::Button());
//			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
//			this->SuspendLayout();
//			// 
//			// button1
//			// 
//			this->button1->Location = System::Drawing::Point(41, 253);
//			this->button1->Name = L"button1";
//			this->button1->Size = System::Drawing::Size(119, 49);
//			this->button1->TabIndex = 0;
//			if (counter == 1) this->button1->Text = L"a) Скалярия ";
//			else if (counter == 2) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 3) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 4) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 5) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 6) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 7) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 8) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 9) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 10) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 11) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 12) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 13) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 14) this->button1->Text = L"a) Скалярия  ";
//			else if (counter == 15) this->button1->Text = L"a) Скалярия  ";
//			else this->button1->Text = L"button1";
//
//			this->button1->UseVisualStyleBackColor = true;
//			// 
//			// button3
//			// 
//			this->button3->Location = System::Drawing::Point(335, 253);
//			this->button3->Name = L"button3";
//			this->button3->Size = System::Drawing::Size(119, 49);
//			this->button3->TabIndex = 2;
//			if (counter == 1) this->button3->Text = L"c) Золотая рыбка";
//			else if (counter == 2) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 3) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 4) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 5) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 6) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 7) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 8) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 9) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 10) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 11) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 12) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 13) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 14) this->button3->Text = L"a) Скалярия  ";
//			else if (counter == 15) this->button3->Text = L"a) Скалярия  ";
//			else this->button3->Text = L"button3";
//
//			this->button3->UseVisualStyleBackColor = true;
//			// 
//			// button2
//			// 
//			this->button2->Location = System::Drawing::Point(186, 253);
//			this->button2->Name = L"button2";
//			this->button2->Size = System::Drawing::Size(119, 49);
//			this->button2->TabIndex = 1;
//			if (counter == 1) this->button2->Text = L"b) Рыба-клоун  ";
//			else if (counter == 2) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 3) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 4) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 5) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 6) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 7) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 8) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 9) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 10) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 11) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 12) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 13) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 14) this->button2->Text = L"a) Скалярия  ";
//			else if (counter == 15) this->button2->Text = L"a) Скалярия  ";
//			else this->button2->Text = L"button2";
//			this->button2->UseVisualStyleBackColor = true;
//			// 
//			// richTextBox1
//			// 
//			this->richTextBox1->BackColor = System::Drawing::Color::AntiqueWhite;
//			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
//				static_cast<System::Byte>(204)));
//			this->richTextBox1->ForeColor = System::Drawing::Color::Navy;
//			this->richTextBox1->Location = System::Drawing::Point(77, 37);
//			this->richTextBox1->Name = L"richTextBox1";
//			this->richTextBox1->Size = System::Drawing::Size(335, 126);
//			this->richTextBox1->TabIndex = 3;
//			if (counter == 1) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 2) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 3) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 4) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 5) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 6) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 7) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 8) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 9) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 10) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 11) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 12) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 13) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 14) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else if (counter == 15) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			else  this->richTextBox1->Text = L"Небольшие технические шоколадки, поправь код ";
//
//
//			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &aQuesy2::richTextBox1_TextChanged);
//			// 
//			// aQuesy2
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
//			this->ClientSize = System::Drawing::Size(496, 331);
//			this->Controls->Add(this->richTextBox1);
//			this->Controls->Add(this->button3);
//			this->Controls->Add(this->button2);
//			this->Controls->Add(this->button1);
//			this->Name = L"aQuesy2";
//			this->Text = L"aQuesy2";
//			this->ResumeLayout(false);
//
//		}
//#pragma endregion
//	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//		std::cout << "Push" << std::endl;
//
//	}
//	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//		std::cout << "Push" << std::endl;
//		if (counter == 1) this->button1->BackColor = System::Drawing::Color::Green;
//		else if (counter == 2) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 3) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 4) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 5) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 6) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 7) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 8) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 9) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 10) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 11) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 12) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 13) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 14) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 15) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else  this->richTextBox1->Text = L"Небольшие технические шоколадки, поправь код ";
//	}
//	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//		std::cout << "Push" << std::endl;
//		if (counter == 1) this->button1->BackColor = System::Drawing::Color::Green;
//		else if (counter == 2) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 3) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 4) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 5) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 6) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 7) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 8) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 9) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 10) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 11) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 12) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 13) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 14) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 15) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else  this->richTextBox1->Text = L"Небольшие технические шоколадки, поправь код ";
//	}
//	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
//		std::cout << "Push" << std::endl;
//		if (counter == 1) this->button1->BackColor = System::Drawing::Color::Green;
//		else if (counter == 2) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 3) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 4) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 5) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 6) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 7) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 8) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 9) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 10) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 11) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 12) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 13) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 14) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else if (counter == 15) this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//		else  this->richTextBox1->Text = L"Небольшие технические шоколадки, поправь код ";
//	}
//
//	};
//}

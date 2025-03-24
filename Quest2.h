//#pragma once
//
//static int correctAnswers = 0;
//static int counter = 1;
//static int selectedButton = 1;
//
//#include "playMenu.h"
//#include <iostream>
//#include <thread>
//#include <chrono>
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
//	private: System::Windows::Forms::Button^ button4;
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
//			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(aQuesy2::typeid));
//			this->button1 = (gcnew System::Windows::Forms::Button());
//			this->button3 = (gcnew System::Windows::Forms::Button());
//			this->button2 = (gcnew System::Windows::Forms::Button());
//			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
//			this->button4 = (gcnew System::Windows::Forms::Button());
//			this->SuspendLayout();
//			// 
//			// button1
//			// 
//			this->button1->Location = System::Drawing::Point(41, 253);
//			this->button1->Name = L"button1";
//			this->button1->Size = System::Drawing::Size(119, 49);
//			this->button1->TabIndex = 0;
//			this->button1->Text = L"a) Скалярия ";
//			this->button1->UseVisualStyleBackColor = true;
//			this->button1->Click += gcnew System::EventHandler(this, &aQuesy2::button1_Click_1);
//			// 
//			// button3
//			// 
//			this->button3->Location = System::Drawing::Point(335, 253);
//			this->button3->Name = L"button3";
//			this->button3->Size = System::Drawing::Size(119, 49);
//			this->button3->TabIndex = 2;
//			this->button3->Text = L"c) Золотая рыбка";
//			this->button3->UseVisualStyleBackColor = true;
//			this->button3->Click += gcnew System::EventHandler(this, &aQuesy2::button3_Click_1);
//			// 
//			// button2
//			// 
//			this->button2->Location = System::Drawing::Point(186, 253);
//			this->button2->Name = L"button2";
//			this->button2->Size = System::Drawing::Size(119, 49);
//			this->button2->TabIndex = 1;
//			this->button2->Text = L"b) Рыба-клоун  ";
//			this->button2->UseVisualStyleBackColor = true;
//			this->button2->Click += gcnew System::EventHandler(this, &aQuesy2::button2_Click_1);
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
//			this->richTextBox1->Text = L"1. Какой вид рыб является Немо\?  ";
//			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &aQuesy2::richTextBox1_TextChanged);
//			// 
//			// button4
//			// 
//			this->button4->Location = System::Drawing::Point(394, 194);
//			this->button4->Name = L"button4";
//			this->button4->Size = System::Drawing::Size(75, 23);
//			this->button4->TabIndex = 4;
//			this->button4->Text = L"Дальше";
//			this->button4->UseVisualStyleBackColor = true;
//			this->button4->Click += gcnew System::EventHandler(this, &aQuesy2::button4_Click);
//			// 
//			// aQuesy2
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
//			this->ClientSize = System::Drawing::Size(496, 331);
//			this->Controls->Add(this->button4);
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
//	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
//	{
//		std::cout << "Push" << std::endl;
//
//	}
//	/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
//	}*/
//		void checker() {
//			if(counter == 1) {
//				if (selectedButton == 2) {  // Правильный ответ на кнопке 2
//					this->button1->BackColor = System::Drawing::Color::Red;
//					this->button2->BackColor = System::Drawing::Color::Green;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++; // Увеличиваем количество правильных ответов
//				}
//			}
//
//			// Для второго вопроса
//			if (counter == 2) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для третьего вопроса
//			if (counter == 3) {
//				if (selectedButton == 2) {  // Правильный ответ на кнопке 2
//					this->button1->BackColor = System::Drawing::Color::Red;
//					this->button2->BackColor = System::Drawing::Color::Green;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для четвертого вопроса
//			if (counter == 4) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для пятого вопроса
//			if (counter == 5) {
//				if (selectedButton == 2) {  // Правильный ответ на кнопке 2
//					this->button1->BackColor = System::Drawing::Color::Red;
//					this->button2->BackColor = System::Drawing::Color::Green;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для шестого вопроса
//			if (counter == 6) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для седьмого вопроса
//			if (counter == 7) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для восьмого вопроса
//			if (counter == 8) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для девятого вопроса
//			if (counter == 9) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для десятого вопроса
//			if (counter == 10) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для одиннадцатого вопроса
//			if (counter == 11) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для двенадцатого вопроса
//			if (counter == 12) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для тринадцатого вопроса
//			if (counter == 13) {
//				if (selectedButton == 1) {  // Правильный ответ на кнопке 1
//					this->button1->BackColor = System::Drawing::Color::Green;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Red;
//					correctAnswers++;
//				}
//			}
//
//			// Для четырнадцатого вопроса
//			if (counter == 14) {
//				if (selectedButton == 3) {  // Правильный ответ на кнопке 3
//					this->button1->BackColor = System::Drawing::Color::Red;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Green;
//					correctAnswers++;
//				}
//			}
//
//			// Для пятнадцатого вопроса
//			if (counter == 15) {
//				if (selectedButton == 3) {  // Правильный ответ на кнопке 3
//					this->button1->BackColor = System::Drawing::Color::Red;
//					this->button2->BackColor = System::Drawing::Color::Red;
//					this->button3->BackColor = System::Drawing::Color::Green;
//					correctAnswers++;
//				}
//			}
//
//		}
//		void timer() {
//			std::this_thread::sleep_for(std::chrono::seconds(1));
//		}
//		void update() 
//		{
//			counter++;
//			if (counter == 2) {
//				this->richTextBox1->Text = L"Как зовут отца Немо?";
//				this->button1->Text = L"Марлин";
//				this->button2->Text = L"Дори   ";
//				this->button3->Text = L"Гил  ";
//
//			}
//			else if (counter == 3) {
//				this->richTextBox1->Text = L"Какой недостаток у Дори?";
//				this->button1->Text = L"Она плохо плавает";
//				this->button2->Text = L"У неё проблемы с памятью";
//				this->button3->Text = L"Она боится глубины";
//			}
//			else if (counter == 4) {
//				this->richTextBox1->Text = L"Кто помогает Марлину и Дори найти Немо?";
//				this->button1->Text = L"Черепахи";
//				this->button2->Text = L"Акулы";
//				this->button3->Text = L"Медузы";
//			}
//			else if (counter == 5) {
//				this->richTextBox1->Text = L"Как зовут подружку Немо в аквариуме?";
//				this->button1->Text = L"Дори";
//				this->button2->Text = L"Жемчужинка";
//				this->button3->Text = L"Блонди";
//			}
//			else if (counter == 6) {
//				this->richTextBox1->Text = L"Кто такой Хэнк в мультфильме 'В поисках Дори'?";
//				this->button1->Text = L"Осьминог";
//				this->button2->Text = L"Краб";
//				this->button3->Text = L"Морской конёк";
//			}
//			else if (counter == 7) {
//				this->richTextBox1->Text = L"Как зовут акулу, которая дружит с Марлином и Дори?";
//				this->button1->Text = L"Брюс";
//				this->button2->Text = L"Чам";
//				this->button3->Text = L"Эндрю";
//			}
//			else if (counter == 8) {
//				this->richTextBox1->Text = L"Куда попадает Немо в начале мультфильма?";
//				this->button1->Text = L"В океанариум";
//				this->button2->Text = L"В пещеру";
//				this->button3->Text = L"На корабль";
//			}
//			else if (counter == 9) {
//				this->richTextBox1->Text = L"Как зовут морскую черепаху, которая помогает Марлину и Дори?";
//				this->button1->Text = L"Краш";
//				this->button2->Text = L"Сквоит";
//				this->button3->Text = L"Боб";
//			}
//			else if (counter == 10) {
//				this->richTextBox1->Text = L"Какой девиз у Дори?";
//				this->button1->Text = L"Просто плыви!";
//				this->button2->Text = L"Никогда не сдавайся!";
//				this->button3->Text = L"Доверяй себе!";
//			}
//			else if (counter == 11) {
//				this->richTextBox1->Text = L"Кто такой Гил в мультфильме?";
//				this->button1->Text = L"Рыба-хирург";
//				this->button2->Text = L"Рыба-клоун";
//				this->button3->Text = L"Рыба-ангел";
//			}
//			else if (counter == 12) {
//				this->richTextBox1->Text = L"Как зовут кита, который помогает Дори в мультфильме 'В поисках Дори'?";
//				this->button1->Text = L"Судьба";
//				this->button2->Text = L"Бэйли";
//				this->button3->Text = L"Рипли";
//			}
//			else if (counter == 13) {
//				this->richTextBox1->Text = L"Какой предмет Дори постоянно теряет?";
//				this->button1->Text = L"Ракушку";
//				this->button2->Text = L"Очки";
//				this->button3->Text = L"Ракушку с надписью";
//			}
//			else if (counter == 14) {
//				this->richTextBox1->Text = L"Кто такой Пескарь в мультфильме?";
//				this->button1->Text = L"Учитель Немо";
//				this->button2->Text = L"Друг Марлина";
//				this->button3->Text = L"Враг Дори";
//			}
//			else if (counter == 15) {
//				this->richTextBox1->Text = L"Как зовут птицу, которая помогает Дори в океанариуме?";
//				this->button1->Text = L"Бекки";
//				this->button2->Text = L"Джеральд";
//				this->button3->Text = L"Руди";
//			}
//			else {
//				/*playMenu^ f = gcnew playMenu();
//				f->Show();
//				this->Hide();*/
//			};
//		}
//	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
//		std::cout << "Push" << std::endl;
//		static int selectedButton = 1;
//
//		checker();
//		
//
//	}
//	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
//		std::cout << "Push" << std::endl;
//		selectedButton = 2;
//
//		checker();
//	}
//	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
//		std::cout << "Push" << std::endl;
//		selectedButton = 3;
//
//		checker();
//
//	}
//private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
//	update();
//	this->button1->BackColor = System::Drawing::Color::LightGray;
//	this->button2->BackColor = System::Drawing::Color::LightGray;
//	this->button3->BackColor = System::Drawing::Color::LightGray;
//}
//};
//}

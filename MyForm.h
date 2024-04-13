#pragma once
#include <cstdlib>
#include <iostream>
#include <cmath>

namespace Lab5two {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ îá÷èñëèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÀâòîğàToolStripMenuItem;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ îá÷èñëèòèToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÀâòîğàToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîãğàìóToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèToolStripMenuItem1;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->îá÷èñëèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÀâòîğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->îá÷èñëèòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÀâòîğàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(628, 526);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(620, 493);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Çàâäàííÿ ¹1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(35, 193);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(254, 26);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Ââåä³òü n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(157, 58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(274, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(355, 152);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(171, 247);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->îá÷èñëèòèToolStripMenuItem,
					this->î÷èñòèòèToolStripMenuItem, this->ïğîÀâòîğàToolStripMenuItem, this->ïğîÏğîãğàìóToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(614, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// îá÷èñëèòèToolStripMenuItem
			// 
			this->îá÷èñëèòèToolStripMenuItem->Name = L"îá÷èñëèòèToolStripMenuItem";
			this->îá÷èñëèòèToolStripMenuItem->Size = System::Drawing::Size(116, 29);
			this->îá÷èñëèòèToolStripMenuItem->Text = L"Îá÷èñëèòè";
			this->îá÷èñëèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îá÷èñëèòèToolStripMenuItem_Click);
			// 
			// î÷èñòèòèToolStripMenuItem
			// 
			this->î÷èñòèòèToolStripMenuItem->Name = L"î÷èñòèòèToolStripMenuItem";
			this->î÷èñòèòèToolStripMenuItem->Size = System::Drawing::Size(104, 29);
			this->î÷èñòèòèToolStripMenuItem->Text = L"Î÷èñòèòè";
			this->î÷èñòèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòèToolStripMenuItem_Click);
			// 
			// ïğîÀâòîğàToolStripMenuItem
			// 
			this->ïğîÀâòîğàToolStripMenuItem->Name = L"ïğîÀâòîğàToolStripMenuItem";
			this->ïğîÀâòîğàToolStripMenuItem->Size = System::Drawing::Size(125, 29);
			this->ïğîÀâòîğàToolStripMenuItem->Text = L"Ïğî àâòîğà";
			this->ïğîÀâòîğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîÀâòîğàToolStripMenuItem_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(149, 29);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->menuStrip2);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(620, 493);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Çàâäàííÿ ¹2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(187, 234);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(210, 199);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(78, 111);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(476, 70);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(183, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"«Òàáóëşâàííÿ ôóíêö³é»";
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->îá÷èñëèòèToolStripMenuItem1,
					this->î÷èñòèòèToolStripMenuItem1, this->ïğîÀâòîğàToolStripMenuItem1, this->ïğîÏğîãğàìóToolStripMenuItem1
			});
			this->menuStrip2->Location = System::Drawing::Point(3, 3);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(614, 33);
			this->menuStrip2->TabIndex = 0;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// îá÷èñëèòèToolStripMenuItem1
			// 
			this->îá÷èñëèòèToolStripMenuItem1->Name = L"îá÷èñëèòèToolStripMenuItem1";
			this->îá÷èñëèòèToolStripMenuItem1->Size = System::Drawing::Size(116, 29);
			this->îá÷èñëèòèToolStripMenuItem1->Text = L"Îá÷èñëèòè";
			this->îá÷èñëèòèToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::îá÷èñëèòèToolStripMenuItem1_Click);
			// 
			// ïğîÀâòîğàToolStripMenuItem1
			// 
			this->ïğîÀâòîğàToolStripMenuItem1->Name = L"ïğîÀâòîğàToolStripMenuItem1";
			this->ïğîÀâòîğàToolStripMenuItem1->Size = System::Drawing::Size(125, 29);
			this->ïğîÀâòîğàToolStripMenuItem1->Text = L"Ïğî àâòîğà";
			this->ïğîÀâòîğàToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ïğîÀâòîğàToolStripMenuItem1_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem1
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem1->Name = L"ïğîÏğîãğàìóToolStripMenuItem1";
			this->ïğîÏğîãğàìóToolStripMenuItem1->Size = System::Drawing::Size(149, 29);
			this->ïğîÏğîãğàìóToolStripMenuItem1->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ïğîÏğîãğàìóToolStripMenuItem1_Click);
			// 
			// î÷èñòèòèToolStripMenuItem1
			// 
			this->î÷èñòèòèToolStripMenuItem1->Name = L"î÷èñòèòèToolStripMenuItem1";
			this->î÷èñòèòèToolStripMenuItem1->Size = System::Drawing::Size(104, 29);
			this->î÷èñòèòèToolStripMenuItem1->Text = L"Î÷èñòèòè";
			this->î÷èñòèòèToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòèToolStripMenuItem1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 527);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
private: System::Void îá÷èñëèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = System::Convert::ToInt32(textBox1->Text);
	long long sum = 0;
	int k = 1;
	while (k <= n) {
		sum += pow(k, k);
		k++;
	}
	richTextBox1->Text = sum.ToString();
}
private: System::Void î÷èñòèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	richTextBox1->Clear();
}
private: System::Void îá÷èñëèòèToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox2->Clear();
	double x = 0.3;
	double h = 0.2;
	richTextBox2->Clear();
	while (x <= 7.3) {
		double result = cos(x / 2);

		richTextBox2->AppendText("f(" + x + ") = " + result.ToString("0.0000") + "\n");

		x += h;
}
};
private: System::Void ïğîÀâòîğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ïîøòàğóê Ñí³æàíà, ñòóäåíòêà 3ÑÎÌ");
}
private: System::Void ïğîÀâòîğàToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ïîøòàğóê Ñí³æàíà, ñòóäåíòêà 3ÑÎÌ");
}
private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Çíàõîäèòü ñóìó");
}
private: System::Void ïğîÏğîãğàìóToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Òàáóëşâàííÿ ôóíêö³¿");
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void î÷èñòèòèToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox2->Clear();
}
};
}
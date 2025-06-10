#pragma once
#include "sinhvien.h"
#include "Giangvien.h"
#using <System.Windows.Forms.dll>
#include "msclr/marshal_cppstd.h"

namespace quanlysv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for trangdangnhap
	/// </summary>
	public ref class trangdangnhap : public System::Windows::Forms::Form
	{
	public:
		trangdangnhap(void)
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
		~trangdangnhap()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panellogoandnameschool;
	protected:

	private: System::Windows::Forms::Label^ labelsystem;
	private: System::Windows::Forms::Label^ systemschool;

	private: System::Windows::Forms::Panel^ panelduoi;





	private: System::Windows::Forms::Label^ nameschool;
	private: System::Windows::Forms::Panel^ panelmain;
	private: System::Windows::Forms::Panel^ panelgiua;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ SV;
	private: System::Windows::Forms::Label^ BanLa;
	private: System::Windows::Forms::Button^ GV;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panelHoTro;
	private: System::Windows::Forms::Label^ labelHoTro;
	private: System::Windows::Forms::Label^ DT;
	private: System::Windows::Forms::Label^ DiaChi;





	protected:
























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(trangdangnhap::typeid));
			this->panellogoandnameschool = (gcnew System::Windows::Forms::Panel());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->labelsystem = (gcnew System::Windows::Forms::Label());
			this->systemschool = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelduoi = (gcnew System::Windows::Forms::Panel());
			this->nameschool = (gcnew System::Windows::Forms::Label());
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->panelgiua = (gcnew System::Windows::Forms::Panel());
			this->SV = (gcnew System::Windows::Forms::Button());
			this->BanLa = (gcnew System::Windows::Forms::Label());
			this->GV = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->DiaChi = (gcnew System::Windows::Forms::Label());
			this->DT = (gcnew System::Windows::Forms::Label());
			this->labelHoTro = (gcnew System::Windows::Forms::Label());
			this->panelHoTro = (gcnew System::Windows::Forms::Panel());
			this->panellogoandnameschool->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelduoi->SuspendLayout();
			this->panelmain->SuspendLayout();
			this->panelgiua->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelHoTro->SuspendLayout();
			this->SuspendLayout();
			// 
			// panellogoandnameschool
			// 
			this->panellogoandnameschool->Controls->Add(this->Exit);
			this->panellogoandnameschool->Controls->Add(this->labelsystem);
			this->panellogoandnameschool->Controls->Add(this->systemschool);
			this->panellogoandnameschool->Controls->Add(this->pictureBox1);
			this->panellogoandnameschool->Dock = System::Windows::Forms::DockStyle::Top;
			this->panellogoandnameschool->Location = System::Drawing::Point(0, 0);
			this->panellogoandnameschool->Name = L"panellogoandnameschool";
			this->panellogoandnameschool->Size = System::Drawing::Size(1674, 119);
			this->panellogoandnameschool->TabIndex = 0;
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Exit->BackColor = System::Drawing::Color::Red;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(1534, 3);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(140, 37);
			this->Exit->TabIndex = 4;
			this->Exit->Text = L"Thoát";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &trangdangnhap::Exit_Click);
			// 
			// labelsystem
			// 
			this->labelsystem->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelsystem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsystem->Location = System::Drawing::Point(165, 58);
			this->labelsystem->Name = L"labelsystem";
			this->labelsystem->Size = System::Drawing::Size(441, 47);
			this->labelsystem->TabIndex = 2;
			this->labelsystem->Text = L"Student information system";
			// 
			// systemschool
			// 
			this->systemschool->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->systemschool->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->systemschool->ForeColor = System::Drawing::Color::Blue;
			this->systemschool->Location = System::Drawing::Point(165, 9);
			this->systemschool->Name = L"systemschool";
			this->systemschool->Size = System::Drawing::Size(441, 48);
			this->systemschool->TabIndex = 1;
			this->systemschool->Text = L"Hệ thống thông tin sinh viên";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(159, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelduoi
			// 
			this->panelduoi->Controls->Add(this->panelHoTro);
			this->panelduoi->Controls->Add(this->nameschool);
			this->panelduoi->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelduoi->Location = System::Drawing::Point(0, 645);
			this->panelduoi->Name = L"panelduoi";
			this->panelduoi->Size = System::Drawing::Size(1674, 165);
			this->panelduoi->TabIndex = 1;
			// 
			// nameschool
			// 
			this->nameschool->BackColor = System::Drawing::Color::Navy;
			this->nameschool->Cursor = System::Windows::Forms::Cursors::Default;
			this->nameschool->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->nameschool->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameschool->ForeColor = System::Drawing::Color::White;
			this->nameschool->Location = System::Drawing::Point(0, 128);
			this->nameschool->Name = L"nameschool";
			this->nameschool->Size = System::Drawing::Size(1674, 37);
			this->nameschool->TabIndex = 0;
			this->nameschool->Text = L"Trường đại học đừng học lại";
			this->nameschool->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelmain
			// 
			this->panelmain->Controls->Add(this->panelgiua);
			this->panelmain->Controls->Add(this->panelduoi);
			this->panelmain->Controls->Add(this->panellogoandnameschool);
			this->panelmain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelmain->Location = System::Drawing::Point(0, 0);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(1674, 810);
			this->panelmain->TabIndex = 0;
			// 
			// panelgiua
			// 
			this->panelgiua->Controls->Add(this->SV);
			this->panelgiua->Controls->Add(this->BanLa);
			this->panelgiua->Controls->Add(this->GV);
			this->panelgiua->Controls->Add(this->pictureBox2);
			this->panelgiua->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelgiua->Location = System::Drawing::Point(0, 119);
			this->panelgiua->Name = L"panelgiua";
			this->panelgiua->Size = System::Drawing::Size(1674, 526);
			this->panelgiua->TabIndex = 3;
			// 
			// SV
			// 
			this->SV->BackColor = System::Drawing::Color::Aqua;
			this->SV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SV->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SV->Location = System::Drawing::Point(443, 243);
			this->SV->Name = L"SV";
			this->SV->Size = System::Drawing::Size(205, 43);
			this->SV->TabIndex = 3;
			this->SV->Text = L"Sinh viên";
			this->SV->UseVisualStyleBackColor = false;
			this->SV->Click += gcnew System::EventHandler(this, &trangdangnhap::SV_Click);
			// 
			// BanLa
			// 
			this->BanLa->AutoSize = true;
			this->BanLa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BanLa->Location = System::Drawing::Point(437, 103);
			this->BanLa->Name = L"BanLa";
			this->BanLa->Size = System::Drawing::Size(292, 34);
			this->BanLa->TabIndex = 2;
			this->BanLa->Text = L"Đăng nhập với tư cách:";
			// 
			// GV
			// 
			this->GV->BackColor = System::Drawing::Color::Aqua;
			this->GV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GV->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GV->Location = System::Drawing::Point(443, 167);
			this->GV->Name = L"GV";
			this->GV->Size = System::Drawing::Size(205, 43);
			this->GV->TabIndex = 1;
			this->GV->Text = L"Giảng viên";
			this->GV->UseVisualStyleBackColor = false;
			this->GV->Click += gcnew System::EventHandler(this, &trangdangnhap::GV_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(99, 66);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(257, 286);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// DiaChi
			// 
			this->DiaChi->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->DiaChi->AutoSize = true;
			this->DiaChi->BackColor = System::Drawing::Color::Blue;
			this->DiaChi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DiaChi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DiaChi->ForeColor = System::Drawing::Color::White;
			this->DiaChi->Location = System::Drawing::Point(-5, 26);
			this->DiaChi->Name = L"DiaChi";
			this->DiaChi->Size = System::Drawing::Size(170, 26);
			this->DiaChi->TabIndex = 3;
			this->DiaChi->Text = L"ĐC: Phòng A508";
			// 
			// DT
			// 
			this->DT->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->DT->AutoSize = true;
			this->DT->BackColor = System::Drawing::Color::Blue;
			this->DT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DT->ForeColor = System::Drawing::Color::White;
			this->DT->Location = System::Drawing::Point(-5, 52);
			this->DT->Name = L"DT";
			this->DT->Size = System::Drawing::Size(164, 26);
			this->DT->TabIndex = 5;
			this->DT->Text = L"ĐT: 0123456789";
			// 
			// labelHoTro
			// 
			this->labelHoTro->AutoSize = true;
			this->labelHoTro->BackColor = System::Drawing::Color::Blue;
			this->labelHoTro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelHoTro->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHoTro->ForeColor = System::Drawing::Color::White;
			this->labelHoTro->Location = System::Drawing::Point(-5, 0);
			this->labelHoTro->Name = L"labelHoTro";
			this->labelHoTro->Size = System::Drawing::Size(210, 26);
			this->labelHoTro->TabIndex = 4;
			this->labelHoTro->Text = L"Phòng hỗ trợ kĩ thuật";
			// 
			// panelHoTro
			// 
			this->panelHoTro->BackColor = System::Drawing::Color::Blue;
			this->panelHoTro->Controls->Add(this->labelHoTro);
			this->panelHoTro->Controls->Add(this->DT);
			this->panelHoTro->Controls->Add(this->DiaChi);
			this->panelHoTro->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelHoTro->Location = System::Drawing::Point(0, 0);
			this->panelHoTro->Name = L"panelHoTro";
			this->panelHoTro->Size = System::Drawing::Size(1674, 128);
			this->panelHoTro->TabIndex = 6;
			// 
			// trangdangnhap
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1674, 810);
			this->Controls->Add(this->panelmain);
			this->Name = L"trangdangnhap";
			this->Text = L"trangdangnhap";
			this->panellogoandnameschool->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelduoi->ResumeLayout(false);
			this->panelmain->ResumeLayout(false);
			this->panelgiua->ResumeLayout(false);
			this->panelgiua->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelHoTro->ResumeLayout(false);
			this->panelHoTro->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void SV_Click(System::Object^ sender, System::EventArgs^ e) {
	sinhvien^ sv = gcnew sinhvien(this);
	this->Hide();
	sv->Show();
}
private: System::Void GV_Click(System::Object^ sender, System::EventArgs^ e) {
	Giangvien^ gv = gcnew Giangvien(this);
	this->Hide();
	gv->Show();
}
};
}

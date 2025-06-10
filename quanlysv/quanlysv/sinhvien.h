#pragma once
#include "trangchusv.h"

using namespace System::IO;

namespace quanlysv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sinhvien
	/// </summary>
	public ref class sinhvien : public System::Windows::Forms::Form
	{
	private: 
		Form^ parentForm;
	public:
		sinhvien(void)
		{
			InitializeComponent();
			parentForm = nullptr;
			//
			//TODO: Add the constructor code here
			//
		}
		sinhvien(Form^ parent) {
			InitializeComponent();
			parentForm = parent;

			this->textMK->PasswordChar = '*';
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~sinhvien()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmain;
	private: System::Windows::Forms::Panel^ paneltren;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ systemschool;
	private: System::Windows::Forms::Panel^ panelduoi;
	private: System::Windows::Forms::Label^ labelsystem;
	private: System::Windows::Forms::Label^ nameschool;

	private: System::Windows::Forms::Button^ Exit;



	private: System::Windows::Forms::Panel^ panelgiua;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textMK;
	private: System::Windows::Forms::TextBox^ textTK;
	private: System::Windows::Forms::Label^ SV;
	private: System::Windows::Forms::Label^ MK;
	private: System::Windows::Forms::Label^ TK;
	private: System::Windows::Forms::Button^ quaylai;

	private: System::Windows::Forms::Panel^ panelHoTro;
	private: System::Windows::Forms::Label^ labelHoTro;
	private: System::Windows::Forms::Label^ DT;
	private: System::Windows::Forms::Label^ DiaChi;
	private: System::Windows::Forms::Button^ xacnhan;






	private: System::ComponentModel::IContainer^ components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sinhvien::typeid));
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->panelgiua = (gcnew System::Windows::Forms::Panel());
			this->xacnhan = (gcnew System::Windows::Forms::Button());
			this->textMK = (gcnew System::Windows::Forms::TextBox());
			this->textTK = (gcnew System::Windows::Forms::TextBox());
			this->SV = (gcnew System::Windows::Forms::Label());
			this->MK = (gcnew System::Windows::Forms::Label());
			this->TK = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panelduoi = (gcnew System::Windows::Forms::Panel());
			this->panelHoTro = (gcnew System::Windows::Forms::Panel());
			this->labelHoTro = (gcnew System::Windows::Forms::Label());
			this->DT = (gcnew System::Windows::Forms::Label());
			this->DiaChi = (gcnew System::Windows::Forms::Label());
			this->nameschool = (gcnew System::Windows::Forms::Label());
			this->paneltren = (gcnew System::Windows::Forms::Panel());
			this->quaylai = (gcnew System::Windows::Forms::Button());
			this->labelsystem = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->systemschool = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelmain->SuspendLayout();
			this->panelgiua->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelduoi->SuspendLayout();
			this->panelHoTro->SuspendLayout();
			this->paneltren->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmain
			// 
			this->panelmain->Controls->Add(this->panelgiua);
			this->panelmain->Controls->Add(this->panelduoi);
			this->panelmain->Controls->Add(this->paneltren);
			this->panelmain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelmain->Location = System::Drawing::Point(0, 0);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(1496, 789);
			this->panelmain->TabIndex = 0;
			// 
			// panelgiua
			// 
			this->panelgiua->Controls->Add(this->xacnhan);
			this->panelgiua->Controls->Add(this->textMK);
			this->panelgiua->Controls->Add(this->textTK);
			this->panelgiua->Controls->Add(this->SV);
			this->panelgiua->Controls->Add(this->MK);
			this->panelgiua->Controls->Add(this->TK);
			this->panelgiua->Controls->Add(this->pictureBox2);
			this->panelgiua->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelgiua->Location = System::Drawing::Point(0, 119);
			this->panelgiua->Name = L"panelgiua";
			this->panelgiua->Size = System::Drawing::Size(1496, 505);
			this->panelgiua->TabIndex = 5;
			// 
			// xacnhan
			// 
			this->xacnhan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->xacnhan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xacnhan->Location = System::Drawing::Point(539, 291);
			this->xacnhan->Name = L"xacnhan";
			this->xacnhan->Size = System::Drawing::Size(242, 52);
			this->xacnhan->TabIndex = 8;
			this->xacnhan->Text = L"Đăng nhập";
			this->xacnhan->UseVisualStyleBackColor = false;
			this->xacnhan->Click += gcnew System::EventHandler(this, &sinhvien::xacnhan_Click);
			// 
			// textMK
			// 
			this->textMK->Location = System::Drawing::Point(568, 238);
			this->textMK->Name = L"textMK";
			this->textMK->Size = System::Drawing::Size(213, 22);
			this->textMK->TabIndex = 6;
			// 
			// textTK
			// 
			this->textTK->Location = System::Drawing::Point(568, 194);
			this->textTK->Name = L"textTK";
			this->textTK->Size = System::Drawing::Size(213, 22);
			this->textTK->TabIndex = 5;
			// 
			// SV
			// 
			this->SV->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SV->Location = System::Drawing::Point(437, 103);
			this->SV->Name = L"SV";
			this->SV->Size = System::Drawing::Size(396, 31);
			this->SV->TabIndex = 4;
			this->SV->Text = L"Nhập tài khoản , mật khẩu sinh viên\r\n\r\n\r\n";
			// 
			// MK
			// 
			this->MK->AutoSize = true;
			this->MK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MK->Location = System::Drawing::Point(443, 234);
			this->MK->Name = L"MK";
			this->MK->Size = System::Drawing::Size(105, 26);
			this->MK->TabIndex = 3;
			this->MK->Text = L"Mật khẩu:";
			// 
			// TK
			// 
			this->TK->AutoSize = true;
			this->TK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TK->Location = System::Drawing::Point(443, 190);
			this->TK->Name = L"TK";
			this->TK->Size = System::Drawing::Size(112, 26);
			this->TK->TabIndex = 2;
			this->TK->Text = L"Tài khoản:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(99, 66);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(257, 286);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// panelduoi
			// 
			this->panelduoi->Controls->Add(this->panelHoTro);
			this->panelduoi->Controls->Add(this->nameschool);
			this->panelduoi->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelduoi->Location = System::Drawing::Point(0, 624);
			this->panelduoi->Name = L"panelduoi";
			this->panelduoi->Size = System::Drawing::Size(1496, 165);
			this->panelduoi->TabIndex = 4;
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
			this->panelHoTro->Size = System::Drawing::Size(1496, 128);
			this->panelHoTro->TabIndex = 7;
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
			this->nameschool->Size = System::Drawing::Size(1496, 37);
			this->nameschool->TabIndex = 1;
			this->nameschool->Text = L"Trường đại học đừng học lại";
			this->nameschool->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// paneltren
			// 
			this->paneltren->Controls->Add(this->quaylai);
			this->paneltren->Controls->Add(this->labelsystem);
			this->paneltren->Controls->Add(this->Exit);
			this->paneltren->Controls->Add(this->systemschool);
			this->paneltren->Controls->Add(this->pictureBox1);
			this->paneltren->Dock = System::Windows::Forms::DockStyle::Top;
			this->paneltren->Location = System::Drawing::Point(0, 0);
			this->paneltren->Name = L"paneltren";
			this->paneltren->Size = System::Drawing::Size(1496, 119);
			this->paneltren->TabIndex = 0;
			// 
			// quaylai
			// 
			this->quaylai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->quaylai->BackColor = System::Drawing::Color::Lime;
			this->quaylai->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->quaylai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quaylai->Location = System::Drawing::Point(1221, 0);
			this->quaylai->Name = L"quaylai";
			this->quaylai->Size = System::Drawing::Size(140, 37);
			this->quaylai->TabIndex = 5;
			this->quaylai->Text = L"Quay lại";
			this->quaylai->UseVisualStyleBackColor = false;
			this->quaylai->Click += gcnew System::EventHandler(this, &sinhvien::button1_Click);
			// 
			// labelsystem
			// 
			this->labelsystem->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelsystem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsystem->Location = System::Drawing::Point(181, 57);
			this->labelsystem->Name = L"labelsystem";
			this->labelsystem->Size = System::Drawing::Size(441, 47);
			this->labelsystem->TabIndex = 3;
			this->labelsystem->Text = L"Student information system";
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Exit->BackColor = System::Drawing::Color::Red;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(1356, 0);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(140, 37);
			this->Exit->TabIndex = 4;
			this->Exit->Text = L"Thoát";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &sinhvien::Exit_Click);
			// 
			// systemschool
			// 
			this->systemschool->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->systemschool->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->systemschool->ForeColor = System::Drawing::Color::Blue;
			this->systemschool->Location = System::Drawing::Point(181, 9);
			this->systemschool->Name = L"systemschool";
			this->systemschool->Size = System::Drawing::Size(441, 48);
			this->systemschool->TabIndex = 2;
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
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// sinhvien
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1496, 789);
			this->Controls->Add(this->panelmain);
			this->Name = L"sinhvien";
			this->Text = L"sinhvien";
			this->panelmain->ResumeLayout(false);
			this->panelgiua->ResumeLayout(false);
			this->panelgiua->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelduoi->ResumeLayout(false);
			this->panelHoTro->ResumeLayout(false);
			this->panelHoTro->PerformLayout();
			this->paneltren->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (parentForm != nullptr) {
		parentForm->Show();
	}
	this->Hide();
}
private: System::Void xacnhan_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = textTK->Text;
	String^ password = textMK->Text;

	try {
		cli::array<String^>^ lines = File::ReadAllLines("Sinhvien.txt");
		bool found = false;

		for each (String ^ line in lines) {
			cli::array<String^>^ parts = line->Split('|');
			if (parts->Length == 2 && parts[0] == username && parts[1] == password) {
				found = true;
				break;
			}
		}

		if (found) {
			MessageBox::Show(L"Đăng nhập thành công!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Hide();

			// Truyền username (mssv) vào form trangchusv
			trangchusv^ home = gcnew trangchusv(username);
			home->ShowDialog();

			this->Close();
		}
		else {
			MessageBox::Show(L"Tài khoản hoặc mật khẩu không đúng.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(L"Lỗi đọc file: " + ex->Message, L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}

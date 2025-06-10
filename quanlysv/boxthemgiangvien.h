#pragma once
#include "monhoc.h"
#include "vcclr.h"


namespace quanlysv {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for boxthemgiangvien
	/// </summary>
	public ref class boxthemgiangvien : public System::Windows::Forms::Form
	{
	private:
		Form^ parentForm; // Reference to the parent form
	public:
		boxthemgiangvien(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		boxthemgiangvien(Form^ parent) {
			InitializeComponent();
			parentForm = parent;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~boxthemgiangvien()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ThemMonHoc1;
	protected:
	private: System::Windows::Forms::Panel^ panelmain;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ email_box;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ sdt_box;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ code_box;

	private: System::Windows::Forms::Button^ QuayLai;
	private: System::Windows::Forms::Label^ Namesub;
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::TextBox^ name_box;


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
			this->ThemMonHoc1 = (gcnew System::Windows::Forms::Label());
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->email_box = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->sdt_box = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->code_box = (gcnew System::Windows::Forms::TextBox());
			this->QuayLai = (gcnew System::Windows::Forms::Button());
			this->Namesub = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->name_box = (gcnew System::Windows::Forms::TextBox());
			this->panelmain->SuspendLayout();
			this->SuspendLayout();
			// 
			// ThemMonHoc1
			// 
			this->ThemMonHoc1->BackColor = System::Drawing::Color::Blue;
			this->ThemMonHoc1->Dock = System::Windows::Forms::DockStyle::Top;
			this->ThemMonHoc1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ThemMonHoc1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ThemMonHoc1->ForeColor = System::Drawing::Color::Yellow;
			this->ThemMonHoc1->Location = System::Drawing::Point(0, 0);
			this->ThemMonHoc1->Name = L"ThemMonHoc1";
			this->ThemMonHoc1->Size = System::Drawing::Size(1148, 98);
			this->ThemMonHoc1->TabIndex = 1;
			this->ThemMonHoc1->Text = L"Thêm giảng viên mới";
			this->ThemMonHoc1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelmain
			// 
			this->panelmain->Controls->Add(this->label3);
			this->panelmain->Controls->Add(this->email_box);
			this->panelmain->Controls->Add(this->label2);
			this->panelmain->Controls->Add(this->sdt_box);
			this->panelmain->Controls->Add(this->label1);
			this->panelmain->Controls->Add(this->code_box);
			this->panelmain->Controls->Add(this->QuayLai);
			this->panelmain->Controls->Add(this->Namesub);
			this->panelmain->Controls->Add(this->save);
			this->panelmain->Controls->Add(this->name_box);
			this->panelmain->Controls->Add(this->ThemMonHoc1);
			this->panelmain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelmain->Location = System::Drawing::Point(0, 0);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(1148, 655);
			this->panelmain->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(646, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 34);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Email";
			// 
			// email_box
			// 
			this->email_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->email_box->Location = System::Drawing::Point(844, 229);
			this->email_box->Multiline = true;
			this->email_box->Name = L"email_box";
			this->email_box->Size = System::Drawing::Size(270, 38);
			this->email_box->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(646, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 34);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Số điện thoại";
			// 
			// sdt_box
			// 
			this->sdt_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->sdt_box->Location = System::Drawing::Point(844, 167);
			this->sdt_box->Multiline = true;
			this->sdt_box->Name = L"sdt_box";
			this->sdt_box->Size = System::Drawing::Size(270, 38);
			this->sdt_box->TabIndex = 10;
			this->sdt_box->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &boxthemgiangvien::sdt_box_KeyPress);

			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 233);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 34);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Mã";
			// 
			// code_box
			// 
			this->code_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->code_box->Location = System::Drawing::Point(260, 229);
			this->code_box->Multiline = true;
			this->code_box->Name = L"code_box";
			this->code_box->Size = System::Drawing::Size(270, 38);
			this->code_box->TabIndex = 8;
			// 
			// QuayLai
			// 
			this->QuayLai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->QuayLai->BackColor = System::Drawing::Color::Blue;
			this->QuayLai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuayLai->ForeColor = System::Drawing::Color::Yellow;
			this->QuayLai->Location = System::Drawing::Point(681, 587);
			this->QuayLai->Name = L"QuayLai";
			this->QuayLai->Size = System::Drawing::Size(192, 43);
			this->QuayLai->TabIndex = 4;
			this->QuayLai->Text = L"Trở về ";
			this->QuayLai->UseVisualStyleBackColor = false;
			this->QuayLai->Click += gcnew System::EventHandler(this, &boxthemgiangvien::QuayLai_Click);
			// 
			// Namesub
			// 
			this->Namesub->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Namesub->AutoSize = true;
			this->Namesub->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Namesub->Location = System::Drawing::Point(62, 171);
			this->Namesub->Name = L"Namesub";
			this->Namesub->Size = System::Drawing::Size(190, 34);
			this->Namesub->TabIndex = 7;
			this->Namesub->Text = L"Tên giảng viên";
			// 
			// save
			// 
			this->save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->save->BackColor = System::Drawing::Color::Yellow;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->ForeColor = System::Drawing::SystemColors::ControlText;
			this->save->Location = System::Drawing::Point(935, 587);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(192, 43);
			this->save->TabIndex = 6;
			this->save->Text = L"Xác nhận";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &boxthemgiangvien::save_Click);
			// 
			// name_box
			// 
			this->name_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->name_box->Location = System::Drawing::Point(260, 167);
			this->name_box->Multiline = true;
			this->name_box->Name = L"name_box";
			this->name_box->Size = System::Drawing::Size(270, 38);
			this->name_box->TabIndex = 5;
			// 
			// boxthemgiangvien
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 655);
			this->Controls->Add(this->panelmain);
			this->Name = L"boxthemgiangvien";
			this->Text = L"boxthemgiangvien";
			this->panelmain->ResumeLayout(false);
			this->panelmain->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void QuayLai_Click(System::Object^ sender, System::EventArgs^ e) {
		if (parentForm != nullptr) {
			parentForm->Show(); // Hiển thị lại form cha nếu cần
		}
		this->Close(); // Đóng form hiện tại
		// Có thể thêm logic để cập nhật dữ liệu nếu cần thiết
	}
		   System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
			   // 0) Lấy mã nhập vào và trim
			   String^ s_code = code_box->Text->Trim();
			   if (String::IsNullOrWhiteSpace(s_code)) {
				   MessageBox::Show(L"Vui lòng nhập mã giảng viên.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   return;
			   }

			   // 1) Kiểm tra trùng mã trong danh sách cũ
			   Danhsachgiangvien dsCheck;
			   dsCheck.docdanhsachgv();
			   for (int i = 0; i < dsCheck.n; ++i) {
				   String^ existing = gcnew String(dsCheck.ds[i].magv);
				   if (existing->Equals(s_code, StringComparison::OrdinalIgnoreCase)) {
					   MessageBox::Show(
						   L"Mã giảng viên '" + s_code + L"' đã tồn tại. Vui lòng chọn mã khác.",
						   L"Lỗi trùng mã",
						   MessageBoxButtons::OK,
						   MessageBoxIcon::Warning
					   );
					   return;
				   }
			   }

			   // 2) Tạo đối tượng giangvien C++ thuần
			   giangvien gv = {};
			   String^ s_name = name_box->Text->Trim();
			   String^ s_phone = sdt_box->Text->Trim();
			   String^ s_email = email_box->Text->Trim();

			   // Chuyển String^ -> wchar_t[] hoặc char[]
			   {
				   pin_ptr<const wchar_t> wname = PtrToStringChars(s_name);
				   wcsncpy(gv.hoten, wname, 29);
				   gv.hoten[29] = L'\0';
			   }
			   {
				   pin_ptr<const wchar_t> wphone = PtrToStringChars(s_phone);
				   wcsncpy(gv.sodienthoai, wphone, 14);
				   gv.sodienthoai[14] = L'\0';
			   }
			   {
				   pin_ptr<const wchar_t> wemail = PtrToStringChars(s_email);
				   wcsncpy(gv.email, wemail, 49);
				   gv.email[49] = L'\0';
			   }
			   {
				   pin_ptr<const wchar_t> wcode = PtrToStringChars(s_code);
				   char mbuf[10] = { 0 };
				   wcstombs(mbuf, wcode, 9);
				   strcpy(gv.magv, mbuf);
			   }

			   // 3) Đọc danh sách cũ, thêm vào, rồi lưu
			   Danhsachgiangvien ds;
			   ds.docdanhsachgv();    // đọc từ danhsachgiangvien.dat
			   ds.themGiangVien(gv);  // thêm giảng viên mới
			   ds.luudanhsachgv();    // lưu lại ra file

			   // 4) Tạo tài khoản mặc định vào giangvien.txt
			   String^ line = s_code + "|1" + Environment::NewLine;
			   File::AppendAllText("giangvien.txt", line);

			   MessageBox::Show(L"Đã lưu giảng viên và tạo tài khoản!", L"Thông báo",
				   MessageBoxButtons::OK, MessageBoxIcon::Information);

			   // 5) Quay về form cha
			   if (parentForm != nullptr) parentForm->Show();
			   this->DialogResult = System::Windows::Forms::DialogResult::OK;
			   this->Close();
		   }
		   // Cho phép chỉ các chữ số, dấu cộng và phím điều khiển (Backspace, Delete...)
private: System::Void sdt_box_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// nếu là số thì ok
	if (Char::IsDigit(e->KeyChar)) {
		return;
	}
	// cho phép dấu cộng nhưng chỉ ở vị trí đầu (nếu cần)
	if (e->KeyChar == '+' && ((TextBox^)sender)->SelectionStart == 0 && !((TextBox^)sender)->Text->Contains("+")) {
		return;
	}
	// cho phép phím điều khiển (Backspace,…)
	if (Char::IsControl(e->KeyChar)) {
		return;
	}
	// chặn các ký tự còn lại
	e->Handled = true;
}


};
}

#pragma once
#include "monhoc.h"
#include "vcclr.h"
#include <msclr/marshal_cppstd.h>


namespace quanlysv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for boxsuagiangvien
	/// </summary>
	public ref class boxsuagiangvien : public System::Windows::Forms::Form
	{
		System::IntPtr _nativePtr;  // holds the giangvien*
		int           _index;
	public:
		boxsuagiangvien(System::IntPtr nativePtr, int idx)
			: _nativePtr(nativePtr), _index(idx)
		{
			InitializeComponent();
			this->ThemMonHoc1->Text = L"Sửa giảng viên";
			this->code_box->ReadOnly = true;

			// unwrap and pre-fill:
			giangvien* p = reinterpret_cast<giangvien*>(_nativePtr.ToPointer());
			code_box->Text = gcnew String(p->getMagv());
			name_box->Text = gcnew String(p->getHoten());
			sdt_box->Text = gcnew String(p->getSodienthoai());
			email_box->Text = gcnew String(p->getEmail());
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~boxsuagiangvien()
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
			this->ThemMonHoc1->Size = System::Drawing::Size(1141, 98);
			this->ThemMonHoc1->TabIndex = 1;
			this->ThemMonHoc1->Text = L"Sửa giảng viên";
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
			this->panelmain->Size = System::Drawing::Size(1141, 748);
			this->panelmain->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(639, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 34);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Email";
			// 
			// email_box
			// 
			this->email_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->email_box->Location = System::Drawing::Point(837, 322);
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
			this->label2->Location = System::Drawing::Point(639, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 34);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Số điện thoại";
			// 
			// sdt_box
			// 
			this->sdt_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->sdt_box->Location = System::Drawing::Point(837, 260);
			this->sdt_box->Multiline = true;
			this->sdt_box->Name = L"sdt_box";
			this->sdt_box->Size = System::Drawing::Size(270, 38);
			this->sdt_box->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(55, 326);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 34);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Mã";
			// 
			// code_box
			// 
			this->code_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->code_box->Location = System::Drawing::Point(253, 322);
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
			this->QuayLai->Location = System::Drawing::Point(674, 680);
			this->QuayLai->Name = L"QuayLai";
			this->QuayLai->Size = System::Drawing::Size(192, 43);
			this->QuayLai->TabIndex = 4;
			this->QuayLai->Text = L"Trở về ";
			this->QuayLai->UseVisualStyleBackColor = false;
			this->QuayLai->Click += gcnew System::EventHandler(this, &boxsuagiangvien::QuayLai_Click);
			// 
			// Namesub
			// 
			this->Namesub->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Namesub->AutoSize = true;
			this->Namesub->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Namesub->Location = System::Drawing::Point(55, 264);
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
			this->save->Location = System::Drawing::Point(928, 680);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(192, 43);
			this->save->TabIndex = 6;
			this->save->Text = L"Xác nhận";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &boxsuagiangvien::save_Click);
			// 
			// name_box
			// 
			this->name_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->name_box->Location = System::Drawing::Point(253, 260);
			this->name_box->Multiline = true;
			this->name_box->Name = L"name_box";
			this->name_box->Size = System::Drawing::Size(270, 38);
			this->name_box->TabIndex = 5;
			// 
			// boxsuagiangvien
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1141, 748);
			this->Controls->Add(this->panelmain);
			this->Name = L"boxsuagiangvien";
			this->Text = L"boxsuagiangvien";
			this->panelmain->ResumeLayout(false);
			this->panelmain->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lấy con trỏ native từ IntPtr
		giangvien* p = reinterpret_cast<giangvien*>(_nativePtr.ToPointer());
		if (p == nullptr) {
			// Không có đối tượng native, không làm gì
			return;
		}

		// 1) Cập nhật thông tin từ các TextBox vào đối tượng giangvien *p qua setter
		// Name
		String^ s_name = name_box->Text->Trim();
		if (!String::IsNullOrWhiteSpace(s_name)) {
			pin_ptr<const wchar_t> wname = PtrToStringChars(s_name);
			p->setHoten(wname);
		}
		else {
			// Nếu cần, có thể xóa hoặc giữ nguyên: tuỳ nghiệp vụ. Ở đây giữ nguyên nếu rỗng.
		}

		// Số điện thoại
		String^ s_phone = sdt_box->Text->Trim();
		if (!String::IsNullOrWhiteSpace(s_phone)) {
			pin_ptr<const wchar_t> wphone = PtrToStringChars(s_phone);
			p->setSodienthoai(wphone);
		}

		// Email
		String^ s_email = email_box->Text->Trim();
		if (!String::IsNullOrWhiteSpace(s_email)) {
			pin_ptr<const wchar_t> wemail = PtrToStringChars(s_email);
			p->setEmail(wemail);
		}

		// Nếu muốn cập nhật mã giảng viên ở đây (nếu mã cho phép chỉnh sửa), có thể làm tương tự:
		// Nhưng thường mã là khóa chính, không đổi. Nếu cần đổi:
		// String^ s_code = code_box->Text->Trim();
		// try {
		//     std::string codeStd = msclr::interop::marshal_as<std::string>(s_code);
		//     p->setMagv(codeStd.c_str());
		// }
		// catch (Exception^) {
		//     MessageBox::Show(L"Không thể chuyển mã giảng viên sang định dạng ký tự hợp lệ.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//     return;
		// }

		// 2) Đọc danh sách giảng viên hiện có và cập nhật
		Danhsachgiangvien ds;
		ds.docdanhsachgv();  // đọc từ file

		// Tìm giảng viên hiện tại trong danh sách, dựa vào mã (magv) của *p
		const char* magv_cur = p->getMagv();
		giangvien* existing = ds.timKiemGiangVien(magv_cur);
		if (existing != nullptr) {
			// Gán lại toàn bộ thông tin
			*existing = *p;
			ds.luudanhsachgv();
		}
		else {
			// Nếu không tìm thấy, có thể thông báo hoặc thêm mới, tuỳ nghiệp vụ:
			MessageBox::Show(
				L"Không tìm thấy giảng viên với mã hiện tại trong danh sách. Không thể cập nhật.",
				L"Lỗi",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning
			);
			// Hoặc: ds.themGiangVien(*p); ds.luudanhsachgv();
		}

		// 3) Đóng form hiện tại, trả về DialogResult OK
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}


	private: System::Void QuayLai_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}

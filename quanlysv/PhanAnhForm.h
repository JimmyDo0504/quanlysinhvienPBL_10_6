#pragma once
#include <msclr/marshal_cppstd.h>
#include "monhoc.h"

namespace quanlysv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PhanAnhForm1
	/// </summary>
	public ref class PhanAnhForm : public System::Windows::Forms::Form
	{
	public:
		String^ currentMSSV;
		List<String^>^ courseList;
		PhanAnhForm(String^ mssv, List<String^>^ courses)
		{
			InitializeComponent();

			currentMSSV = mssv;
			courseList = courses;

			// Hiển thị MSSV lên label
			this->maso->Text = L"MSSV: " + currentMSSV;

			// Điền comboBox với tên môn
			this->comboBox1->Items->Clear();
			for each (String ^ mon in courseList) {
				if (!String::IsNullOrEmpty(mon) && !this->comboBox1->Items->Contains(mon)) {
					this->comboBox1->Items->Add(mon);
				}
			}
			if (this->comboBox1->Items->Count > 0) {
				this->comboBox1->SelectedIndex = 0;
			}
		}
		PhanAnhForm(void)
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
		~PhanAnhForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ maso;
	private: System::Windows::Forms::Label^ mon;
	private: System::Windows::Forms::Label^ ThemMonHoc1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ QuayLai;
	private: System::Windows::Forms::Button^ save;
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
			this->maso = (gcnew System::Windows::Forms::Label());
			this->mon = (gcnew System::Windows::Forms::Label());
			this->ThemMonHoc1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->QuayLai = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// maso
			// 
			this->maso->AutoSize = true;
			this->maso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maso->Location = System::Drawing::Point(68, 128);
			this->maso->Name = L"maso";
			this->maso->Size = System::Drawing::Size(70, 22);
			this->maso->TabIndex = 0;
			this->maso->Text = L"MSSV:";
			this->maso->Click += gcnew System::EventHandler(this, &PhanAnhForm::label1_Click);
			// 
			// mon
			// 
			this->mon->AutoSize = true;
			this->mon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mon->Location = System::Drawing::Point(436, 128);
			this->mon->Name = L"mon";
			this->mon->Size = System::Drawing::Size(196, 22);
			this->mon->TabIndex = 1;
			this->mon->Text = L"Môn muốn phản ánh:";
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
			this->ThemMonHoc1->Size = System::Drawing::Size(980, 98);
			this->ThemMonHoc1->TabIndex = 2;
			this->ThemMonHoc1->Text = L"Phản ánh, ý kiến";
			this->ThemMonHoc1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(658, 125);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(229, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nội dung phản ánh:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 215);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(815, 265);
			this->textBox1->TabIndex = 5;
			// 
			// QuayLai
			// 
			this->QuayLai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->QuayLai->BackColor = System::Drawing::Color::Blue;
			this->QuayLai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuayLai->ForeColor = System::Drawing::Color::Yellow;
			this->QuayLai->Location = System::Drawing::Point(267, 491);
			this->QuayLai->Name = L"QuayLai";
			this->QuayLai->Size = System::Drawing::Size(192, 43);
			this->QuayLai->TabIndex = 7;
			this->QuayLai->Text = L"Trở về ";
			this->QuayLai->UseVisualStyleBackColor = false;
			this->QuayLai->Click += gcnew System::EventHandler(this, &PhanAnhForm::QuayLai_Click);
			// 
			// save
			// 
			this->save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->save->BackColor = System::Drawing::Color::Yellow;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->ForeColor = System::Drawing::SystemColors::ControlText;
			this->save->Location = System::Drawing::Point(521, 491);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(192, 43);
			this->save->TabIndex = 8;
			this->save->Text = L"Xác nhận";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &PhanAnhForm::save_Click);
			// 
			// PhanAnhForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 543);
			this->Controls->Add(this->QuayLai);
			this->Controls->Add(this->save);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->ThemMonHoc1);
			this->Controls->Add(this->mon);
			this->Controls->Add(this->maso);
			this->Name = L"PhanAnhForm";
			this->Text = L"PhanAnhForm";
			this->Load += gcnew System::EventHandler(this, &PhanAnhForm::PhanAnhForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PhanAnhForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void QuayLai_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
	// Kiểm tra chọn môn
	if (comboBox1->SelectedItem == nullptr) {
		MessageBox::Show(L"Vui lòng chọn môn muốn phản ánh.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	String^ tenMon = comboBox1->SelectedItem->ToString()->Trim();
	if (String::IsNullOrEmpty(tenMon)) {
		MessageBox::Show(L"Tên môn không hợp lệ.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	// Kiểm tra nội dung
	String^ noiDung = textBox1->Text->Trim();
	if (String::IsNullOrEmpty(noiDung)) {
		MessageBox::Show(L"Vui lòng nhập nội dung phản ánh.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Chuẩn bị nội dung native
	msclr::interop::marshal_context context;
	// Lấy MSSV native
	std::string mssv_native = context.marshal_as<std::string>(currentMSSV);
	// Lấy tên môn native
	std::string tenMon_native = context.marshal_as<std::string>(tenMon);
	// Tìm SinhVien trong file môn học để lấy hoTen nếu có
	std::string filename = tenMon_native + ".dat";
	monhoc mh;
	strcpy(mh.tenmonhoc, filename.c_str());
	mh.doc();
	SinhVien tempSV;
	SinhVien* svptr = mh.timKiemSV(mssv_native.c_str());
	if (svptr) {
		tempSV = *svptr;
	}
	else {
		// Nếu không tìm được (SV chưa có trong môn), chỉ gán MSSV, để hoTen rỗng
		strncpy(tempSV.mssv, mssv_native.c_str(), sizeof(tempSV.mssv) - 1);
		tempSV.mssv[sizeof(tempSV.mssv) - 1] = '\0';
		tempSV.hoTen[0] = L'\0';
		// Các điểm khác bỏ mặc định
		tempSV.lab1 = tempSV.lab2 = tempSV.pt1 = tempSV.pt2 = tempSV.presentation = tempSV.final = -1.0f;
		tempSV.trung_binh = 0.0f;
		tempSV.diemchu = 'F';
		tempSV.gpa = 0.0f;
	}

	// Tạo đối tượng phan_anh
	phan_anh pa;
	pa.nguoi_goi = tempSV;

	// Copy nội dung phản ánh vào pa.noi_dung
	std::wstring wnoi = context.marshal_as<std::wstring>(noiDung);
	wcsncpy(pa.noi_dung, wnoi.c_str(), sizeof(pa.noi_dung) / sizeof(wchar_t) - 1);
	pa.noi_dung[sizeof(pa.noi_dung) / sizeof(wchar_t) - 1] = L'\0';

	// Copy thời gian hiện tại
	String^ strTime = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");
	std::wstring wtime = context.marshal_as<std::wstring>(strTime);
	wcsncpy(pa.thoi_gian, wtime.c_str(), sizeof(pa.thoi_gian) / sizeof(wchar_t) - 1);
	pa.thoi_gian[sizeof(pa.thoi_gian) / sizeof(wchar_t) - 1] = L'\0';

	// Copy tên môn vào pa.tenmonhoc (wide char)
	std::wstring wtenMon = context.marshal_as<std::wstring>(tenMon);
	wcsncpy(pa.tenmonhoc, wtenMon.c_str(), sizeof(pa.tenmonhoc) / sizeof(wchar_t) - 1);
	pa.tenmonhoc[sizeof(pa.tenmonhoc) / sizeof(wchar_t) - 1] = L'\0';

	// Đọc và lưu vào danhsachphananh
	danhsachphananh dsPA;
	dsPA.doc();   // load hiện có, nếu file chưa tồn tại thì doc() khởi n=0
	dsPA.themPhanAnh(pa);
	dsPA.luu();

	MessageBox::Show(L"Gửi phản ánh thành công!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Close();
}
};
}

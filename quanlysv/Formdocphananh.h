#pragma once
#include "monhoc.h"
#include <msclr/marshal_cppstd.h>

namespace quanlysv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Formdocphananh
	/// </summary>
	public ref class Formdocphananh : public System::Windows::Forms::Form
	{
	public:
		Formdocphananh(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		Formdocphananh(String^ mssv,
			String^ subject,
			String^ content,
			String^ time)
		{
			InitializeComponent();
			// Gán vào các biến thành viên
			this->currentMSSV = mssv;
			this->currentSubject = subject;
			this->currentContent = content;
			this->currentTime = time;

			this->maso->Text = L"MSSV: " + mssv;
			this->mon->Text = L"Môn muốn phản ánh: " + subject;
			this->textBox1->Text = content;
			this->label3->Text = L"Thời gian gửi: " + time;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Formdocphananh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ QuayLai;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ ThemMonHoc1;
	private: System::Windows::Forms::Label^ mon;
	private: System::Windows::Forms::Label^ maso;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ delPA;
	private:
		String^ currentMSSV;
		String^ currentSubject;
		String^ currentContent;
		String^ currentTime;



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
			this->QuayLai = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ThemMonHoc1 = (gcnew System::Windows::Forms::Label());
			this->mon = (gcnew System::Windows::Forms::Label());
			this->maso = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->delPA = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// QuayLai
			// 
			this->QuayLai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->QuayLai->BackColor = System::Drawing::Color::Blue;
			this->QuayLai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuayLai->ForeColor = System::Drawing::Color::Yellow;
			this->QuayLai->Location = System::Drawing::Point(695, 558);
			this->QuayLai->Name = L"QuayLai";
			this->QuayLai->Size = System::Drawing::Size(192, 43);
			this->QuayLai->TabIndex = 15;
			this->QuayLai->Text = L"Trở về ";
			this->QuayLai->UseVisualStyleBackColor = false;
			this->QuayLai->Click += gcnew System::EventHandler(this, &Formdocphananh::QuayLai_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 213);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(815, 265);
			this->textBox1->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 22);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Nội dung phản ánh:";
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
			this->ThemMonHoc1->Size = System::Drawing::Size(944, 98);
			this->ThemMonHoc1->TabIndex = 11;
			this->ThemMonHoc1->Text = L"Phản ánh, ý kiến";
			this->ThemMonHoc1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mon
			// 
			this->mon->AutoSize = true;
			this->mon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mon->Location = System::Drawing::Point(436, 126);
			this->mon->Name = L"mon";
			this->mon->Size = System::Drawing::Size(196, 22);
			this->mon->TabIndex = 10;
			this->mon->Text = L"Môn muốn phản ánh:";
			// 
			// maso
			// 
			this->maso->AutoSize = true;
			this->maso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maso->Location = System::Drawing::Point(68, 126);
			this->maso->Name = L"maso";
			this->maso->Size = System::Drawing::Size(70, 22);
			this->maso->TabIndex = 9;
			this->maso->Text = L"MSSV:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(68, 558);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 22);
			this->label3->TabIndex = 19;
			this->label3->Text = L"-";
			// 
			// delPA
			// 
			this->delPA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->delPA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delPA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delPA->ForeColor = System::Drawing::Color::Yellow;
			this->delPA->Location = System::Drawing::Point(470, 558);
			this->delPA->Name = L"delPA";
			this->delPA->Size = System::Drawing::Size(192, 43);
			this->delPA->TabIndex = 20;
			this->delPA->Text = L"Xóa";
			this->delPA->UseVisualStyleBackColor = false;
			this->delPA->Click += gcnew System::EventHandler(this, &Formdocphananh::delPA_Click);
			// 
			// Formdocphananh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 627);
			this->Controls->Add(this->delPA);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->QuayLai);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ThemMonHoc1);
			this->Controls->Add(this->mon);
			this->Controls->Add(this->maso);
			this->Name = L"Formdocphananh";
			this->Text = L"Formdocphananh";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
private: System::Void QuayLai_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void delPA_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1) Đọc lại toàn bộ danh sách phản ánh
	danhsachphananh ds;
	ds.doc();  // từ monhoc.h

	// 2) Tìm phần tử trùng với MSSV & môn & nội dung & thời gian
	//    (giả sử bạn đã lưu currentMSSV, currentSubject, currentContent, currentTime)
	for (int i = 0; i < ds.getSoLuongPA(); i++) {
		// chuyển native -> managed để so sánh
		String^ mssv_native = gcnew String(ds.getPhanAnhList()[i].nguoi_goi.getMssv());
		String^ subj_native = gcnew String(ds.getPhanAnhList()[i].tenmonhoc);
		String^ content_native = gcnew String(ds.getPhanAnhList()[i].noi_dung);
		String^ time_native = gcnew String(ds.getPhanAnhList()[i].thoi_gian);

		if (mssv_native == currentMSSV
			&& subj_native == currentSubject
			&& content_native == currentContent
			&& time_native == currentTime)
		{
			// 3) Xóa tại vị trí i và lưu file
			ds.xoaPhanAnh(i);
			MessageBox::Show(L"Đã xóa phản ánh này.", L"Thông báo",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
			break;
		}
	}

	// 4) Đóng form con
	this->Close();
}
};
}

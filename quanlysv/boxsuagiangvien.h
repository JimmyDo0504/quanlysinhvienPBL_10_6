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
			code_box->Text = gcnew String(p->magv);
			name_box->Text = gcnew String(p->hoten);
			sdt_box->Text = gcnew String(p->sodienthoai);
			email_box->Text = gcnew String(p->email);
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
		giangvien* p = reinterpret_cast<giangvien*>(_nativePtr.ToPointer());
		if (!p) return;

		// update native struct from textboxes
		pin_ptr<const wchar_t> pn = PtrToStringChars(name_box->Text);
		wcsncpy(p->hoten, pn, 29); p->hoten[29] = L'\0';
		pin_ptr<const wchar_t> pp = PtrToStringChars(sdt_box->Text);
		wcsncpy(p->sodienthoai, pp, 14); p->sodienthoai[14] = L'\0';
		pin_ptr<const wchar_t> pe = PtrToStringChars(email_box->Text);
		wcsncpy(p->email, pe, 49); p->email[49] = L'\0';

		// persist back to file
		Danhsachgiangvien ds; ds.docdanhsachgv();
		if (_index >= 0 && _index < ds.n) {
			ds.ds[_index] = *p;
			ds.luudanhsachgv();
		}

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}


	private: System::Void QuayLai_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}

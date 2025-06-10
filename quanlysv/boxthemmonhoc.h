#pragma once
#using < Microsoft.VisualBasic.dll >
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include "monhoc.h"

namespace quanlysv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for boxthemmonhoc
	/// </summary>
	public ref class boxthemmonhoc : public System::Windows::Forms::Form
	{
	private:
		String^ currentMaGV;
	public:
		boxthemmonhoc(String^ maGV){
			InitializeComponent();
			currentMaGV = maGV;
		}
		boxthemmonhoc(void)
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
		~boxthemmonhoc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmain;
	protected:
	private: System::Windows::Forms::Button^ QuayLai;
	private: System::Windows::Forms::Label^ Namesub;
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::TextBox^ Addsub;
	private: System::Windows::Forms::Label^ ThemMonHoc1;

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
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->QuayLai = (gcnew System::Windows::Forms::Button());
			this->Namesub = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->Addsub = (gcnew System::Windows::Forms::TextBox());
			this->ThemMonHoc1 = (gcnew System::Windows::Forms::Label());
			this->panelmain->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelmain
			// 
			this->panelmain->Controls->Add(this->QuayLai);
			this->panelmain->Controls->Add(this->Namesub);
			this->panelmain->Controls->Add(this->save);
			this->panelmain->Controls->Add(this->Addsub);
			this->panelmain->Controls->Add(this->ThemMonHoc1);
			this->panelmain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelmain->Location = System::Drawing::Point(0, 0);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(1187, 677);
			this->panelmain->TabIndex = 0;
			// 
			// QuayLai
			// 
			this->QuayLai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->QuayLai->BackColor = System::Drawing::Color::Blue;
			this->QuayLai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuayLai->ForeColor = System::Drawing::Color::Yellow;
			this->QuayLai->Location = System::Drawing::Point(720, 609);
			this->QuayLai->Name = L"QuayLai";
			this->QuayLai->Size = System::Drawing::Size(192, 43);
			this->QuayLai->TabIndex = 4;
			this->QuayLai->Text = L"Trở về ";
			this->QuayLai->UseVisualStyleBackColor = false;
			this->QuayLai->Click += gcnew System::EventHandler(this, &boxthemmonhoc::QuayLai_Click);
			// 
			// Namesub
			// 
			this->Namesub->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Namesub->AutoSize = true;
			this->Namesub->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Namesub->Location = System::Drawing::Point(714, 553);
			this->Namesub->Name = L"Namesub";
			this->Namesub->Size = System::Drawing::Size(236, 34);
			this->Namesub->TabIndex = 7;
			this->Namesub->Text = L"Tên môn học mới:";
			// 
			// save
			// 
			this->save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->save->BackColor = System::Drawing::Color::Yellow;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->ForeColor = System::Drawing::SystemColors::ControlText;
			this->save->Location = System::Drawing::Point(974, 609);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(192, 43);
			this->save->TabIndex = 6;
			this->save->Text = L"Xác nhận";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &boxthemmonhoc::save_Click);
			// 
			// Addsub
			// 
			this->Addsub->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Addsub->Location = System::Drawing::Point(974, 553);
			this->Addsub->Multiline = true;
			this->Addsub->Name = L"Addsub";
			this->Addsub->Size = System::Drawing::Size(192, 38);
			this->Addsub->TabIndex = 5;
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
			this->ThemMonHoc1->Size = System::Drawing::Size(1187, 98);
			this->ThemMonHoc1->TabIndex = 1;
			this->ThemMonHoc1->Text = L"Thêm môn học mới";
			this->ThemMonHoc1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// boxthemmonhoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1187, 677);
			this->Controls->Add(this->panelmain);
			this->Name = L"boxthemmonhoc";
			this->Text = L"boxthemmonhoc";
			this->panelmain->ResumeLayout(false);
			this->panelmain->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ newSubject = Addsub->Text->Trim();
		if (String::IsNullOrWhiteSpace(newSubject)) {
			MessageBox::Show(L"Vui lòng nhập tên môn học mới!");
			return;
		}

		// Ghi vào subjects.txt dưới dạng "MAGV|TenMon"
		{
			auto sw = gcnew IO::StreamWriter("subjects.txt", true);
			sw->WriteLine(currentMaGV + L"|" + newSubject);
			sw->Close();
		}

		// ... phần cập nhật ds giảng viên và tạo file .dat như bạn đã có ...

		MessageBox::Show(L"Thêm môn học thành công!", L"Thông báo",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}




	private: System::Void QuayLai_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		this->Close();
	}
};
}

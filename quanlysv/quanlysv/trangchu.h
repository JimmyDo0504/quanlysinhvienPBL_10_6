#pragma once
#include "DSMon.h"
#include "boxthemmonhoc.h"
#using <Microsoft.VisualBasic.dll>
#using <System.Windows.Forms.dll>
#include "msclr/marshal_cppstd.h"

using namespace Microsoft::VisualBasic;

namespace quanlysv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for trangchu
	/// </summary>
	public ref class trangchu : public System::Windows::Forms::Form
	{
	public:
		trangchu(void)
		{
			InitializeComponent();
			LoadSubjects();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~trangchu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmain;
	protected:
	private: System::Windows::Forms::PictureBox^ picschool;
	private: System::Windows::Forms::Panel^ panelbottom;
	private: System::Windows::Forms::Button^ Them;
	private: System::Windows::Forms::Button^ XacNhan;
	private: System::Windows::Forms::ComboBox^ ChonLop;

	private: System::Windows::Forms::Label^ DsLop;



	private: System::Windows::Forms::Panel^ HeThongQuanLy;
	private: System::Windows::Forms::Label^ XinChao;
	private: System::Windows::Forms::PictureBox^ Logoschool;
	private: System::Windows::Forms::Label^ DaiHocDungHocLai;
	private: System::Windows::Forms::Panel^ menu;



	private: System::Windows::Forms::Label^ DHLschool;
	private: System::Windows::Forms::Label^ welcome;
	private: System::Windows::Forms::Label^ DHL;
	private: System::Windows::Forms::Button^ Exit;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(trangchu::typeid));
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->picschool = (gcnew System::Windows::Forms::PictureBox());
			this->panelbottom = (gcnew System::Windows::Forms::Panel());
			this->Them = (gcnew System::Windows::Forms::Button());
			this->XacNhan = (gcnew System::Windows::Forms::Button());
			this->ChonLop = (gcnew System::Windows::Forms::ComboBox());
			this->DsLop = (gcnew System::Windows::Forms::Label());
			this->HeThongQuanLy = (gcnew System::Windows::Forms::Panel());
			this->XinChao = (gcnew System::Windows::Forms::Label());
			this->Logoschool = (gcnew System::Windows::Forms::PictureBox());
			this->DaiHocDungHocLai = (gcnew System::Windows::Forms::Label());
			this->menu = (gcnew System::Windows::Forms::Panel());
			this->DHLschool = (gcnew System::Windows::Forms::Label());
			this->welcome = (gcnew System::Windows::Forms::Label());
			this->DHL = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->panelmain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picschool))->BeginInit();
			this->panelbottom->SuspendLayout();
			this->HeThongQuanLy->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logoschool))->BeginInit();
			this->menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelmain
			// 
			this->panelmain->Controls->Add(this->picschool);
			this->panelmain->Controls->Add(this->panelbottom);
			this->panelmain->Controls->Add(this->HeThongQuanLy);
			this->panelmain->Controls->Add(this->DaiHocDungHocLai);
			this->panelmain->Controls->Add(this->menu);
			this->panelmain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelmain->Location = System::Drawing::Point(0, 0);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(1154, 718);
			this->panelmain->TabIndex = 0;
			// 
			// picschool
			// 
			this->picschool->Dock = System::Windows::Forms::DockStyle::Fill;
			this->picschool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picschool.Image")));
			this->picschool->Location = System::Drawing::Point(195, 165);
			this->picschool->Name = L"picschool";
			this->picschool->Size = System::Drawing::Size(959, 445);
			this->picschool->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picschool->TabIndex = 10;
			this->picschool->TabStop = false;
			// 
			// panelbottom
			// 
			this->panelbottom->BackColor = System::Drawing::Color::Blue;
			this->panelbottom->Controls->Add(this->Them);
			this->panelbottom->Controls->Add(this->XacNhan);
			this->panelbottom->Controls->Add(this->ChonLop);
			this->panelbottom->Controls->Add(this->DsLop);
			this->panelbottom->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelbottom->Location = System::Drawing::Point(195, 610);
			this->panelbottom->Name = L"panelbottom";
			this->panelbottom->Size = System::Drawing::Size(959, 108);
			this->panelbottom->TabIndex = 4;
			// 
			// Them
			// 
			this->Them->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Them->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Them->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Them->ForeColor = System::Drawing::Color::White;
			this->Them->Location = System::Drawing::Point(503, 62);
			this->Them->Name = L"Them";
			this->Them->Size = System::Drawing::Size(87, 34);
			this->Them->TabIndex = 7;
			this->Them->Text = L"Thêm";
			this->Them->UseVisualStyleBackColor = true;
			this->Them->Click += gcnew System::EventHandler(this, &trangchu::Them_Click);
			// 
			// XacNhan
			// 
			this->XacNhan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->XacNhan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->XacNhan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XacNhan->ForeColor = System::Drawing::Color::White;
			this->XacNhan->Location = System::Drawing::Point(605, 62);
			this->XacNhan->Name = L"XacNhan";
			this->XacNhan->Size = System::Drawing::Size(120, 34);
			this->XacNhan->TabIndex = 6;
			this->XacNhan->Text = L"Xác nhận";
			this->XacNhan->UseVisualStyleBackColor = true;
			this->XacNhan->Click += gcnew System::EventHandler(this, &trangchu::XacNhan_Click);
			// 
			// ChonLop
			// 
			this->ChonLop->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->ChonLop->FormattingEnabled = true;
			this->ChonLop->Location = System::Drawing::Point(521, 18);
			this->ChonLop->Name = L"ChonLop";
			this->ChonLop->Size = System::Drawing::Size(204, 24);
			this->ChonLop->TabIndex = 5;
			// 
			// DsLop
			// 
			this->DsLop->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->DsLop->AutoSize = true;
			this->DsLop->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DsLop->ForeColor = System::Drawing::Color::White;
			this->DsLop->Location = System::Drawing::Point(386, 23);
			this->DsLop->Name = L"DsLop";
			this->DsLop->Size = System::Drawing::Size(129, 22);
			this->DsLop->TabIndex = 3;
			this->DsLop->Text = L"Danh sách lớp:";
			// 
			// HeThongQuanLy
			// 
			this->HeThongQuanLy->BackColor = System::Drawing::Color::Blue;
			this->HeThongQuanLy->Controls->Add(this->XinChao);
			this->HeThongQuanLy->Controls->Add(this->Logoschool);
			this->HeThongQuanLy->Dock = System::Windows::Forms::DockStyle::Top;
			this->HeThongQuanLy->Location = System::Drawing::Point(195, 66);
			this->HeThongQuanLy->Name = L"HeThongQuanLy";
			this->HeThongQuanLy->Size = System::Drawing::Size(959, 99);
			this->HeThongQuanLy->TabIndex = 3;
			// 
			// XinChao
			// 
			this->XinChao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->XinChao->AutoEllipsis = true;
			this->XinChao->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XinChao->ForeColor = System::Drawing::Color::Yellow;
			this->XinChao->Location = System::Drawing::Point(7, 3);
			this->XinChao->Name = L"XinChao";
			this->XinChao->Size = System::Drawing::Size(846, 96);
			this->XinChao->TabIndex = 9;
			this->XinChao->Text = L"HỆ THỐNG QUẢN LÍ";
			this->XinChao->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Logoschool
			// 
			this->Logoschool->Dock = System::Windows::Forms::DockStyle::Right;
			this->Logoschool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logoschool.Image")));
			this->Logoschool->Location = System::Drawing::Point(859, 0);
			this->Logoschool->Name = L"Logoschool";
			this->Logoschool->Size = System::Drawing::Size(100, 99);
			this->Logoschool->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logoschool->TabIndex = 1;
			this->Logoschool->TabStop = false;
			// 
			// DaiHocDungHocLai
			// 
			this->DaiHocDungHocLai->Dock = System::Windows::Forms::DockStyle::Top;
			this->DaiHocDungHocLai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DaiHocDungHocLai->ForeColor = System::Drawing::Color::Red;
			this->DaiHocDungHocLai->Location = System::Drawing::Point(195, 0);
			this->DaiHocDungHocLai->Name = L"DaiHocDungHocLai";
			this->DaiHocDungHocLai->Size = System::Drawing::Size(959, 66);
			this->DaiHocDungHocLai->TabIndex = 2;
			this->DaiHocDungHocLai->Text = L"Đại Học Đừng Học Lại";
			this->DaiHocDungHocLai->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// menu
			// 
			this->menu->AutoScroll = true;
			this->menu->BackColor = System::Drawing::Color::Blue;
			this->menu->Controls->Add(this->DHLschool);
			this->menu->Controls->Add(this->welcome);
			this->menu->Controls->Add(this->DHL);
			this->menu->Controls->Add(this->Exit);
			this->menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(195, 718);
			this->menu->TabIndex = 1;
			// 
			// DHLschool
			// 
			this->DHLschool->AutoSize = true;
			this->DHLschool->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DHLschool->ForeColor = System::Drawing::Color::White;
			this->DHLschool->Location = System::Drawing::Point(23, 98);
			this->DHLschool->Name = L"DHLschool";
			this->DHLschool->Size = System::Drawing::Size(154, 26);
			this->DHLschool->TabIndex = 7;
			this->DHLschool->Text = L"DHL university";
			// 
			// welcome
			// 
			this->welcome->AutoSize = true;
			this->welcome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome->ForeColor = System::Drawing::Color::White;
			this->welcome->Location = System::Drawing::Point(3, 63);
			this->welcome->Name = L"welcome";
			this->welcome->Size = System::Drawing::Size(103, 26);
			this->welcome->TabIndex = 6;
			this->welcome->Text = L"Welcome ";
			// 
			// DHL
			// 
			this->DHL->AutoSize = true;
			this->DHL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DHL->ForeColor = System::Drawing::Color::White;
			this->DHL->Location = System::Drawing::Point(39, 12);
			this->DHL->Name = L"DHL";
			this->DHL->Size = System::Drawing::Size(98, 43);
			this->DHL->TabIndex = 5;
			this->DHL->Text = L"DHL";
			// 
			// Exit
			// 
			this->Exit->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->ForeColor = System::Drawing::Color::White;
			this->Exit->Location = System::Drawing::Point(0, 673);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(195, 45);
			this->Exit->TabIndex = 0;
			this->Exit->Text = L"Thoát";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &trangchu::Exit_Click);
			// 
			// trangchu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1154, 718);
			this->Controls->Add(this->panelmain);
			this->Name = L"trangchu";
			this->Text = L"trangchu";
			this->panelmain->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picschool))->EndInit();
			this->panelbottom->ResumeLayout(false);
			this->panelbottom->PerformLayout();
			this->HeThongQuanLy->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logoschool))->EndInit();
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void LoadSubjects() {
			ChonLop->Items->Clear();
			if (System::IO::File::Exists("subjects.txt")) {
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("subjects.txt");
				String^ line;
				while ((line = sr->ReadLine()) != nullptr) {
					if (line == "") continue;
					ChonLop->Items->Add(line);
				}
				sr->Close();
			}
		}

	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void XacNhan_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ChonLop->SelectedItem == nullptr) {
		MessageBox::Show(L"Vui lòng chọn môn học.");
		return;
	}
	// Lấy tên môn học đã chọn
	String^ subjectName = ChonLop->SelectedItem->ToString();
	// Chuyển đổi tên môn học thành tên file dữ liệu (ví dụ: "Vật Lý" -> "vatly.dat")
	String^ subjectFile = ConvertSubjectNameToFileName(subjectName);

	// Khởi tạo DSMon
	quanlysv::DSMon^ dsForm = gcnew quanlysv::DSMon(subjectFile);

	// Thiết lập các thuộc tính để nhúng form con
	dsForm->TopLevel = false;                          // Cho phép nhúng vào form cha
	dsForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; // Bỏ đường viền
	dsForm->Dock = System::Windows::Forms::DockStyle::Fill;                  // Để chiếm toàn bộ không gian cho container

	// Giả sử bạn có một panel (ví dụ panelContainer) trên form trang chủ để chứa các form con
	// Nếu chưa có, bạn có thể dùng this->Controls trực tiếp nhưng nên tạo một panel riêng để dễ quản lý.
	this->Controls->Add(dsForm);
	dsForm->BringToFront();
	dsForm->Show();
}
	   private: String^ ConvertSubjectNameToFileName(String^ subjectName) {
		   String^ lowerName = subjectName->ToLower();
		   lowerName = lowerName->Replace(" ", "");
		   return lowerName + ".dat";
	   }
private: System::Void Them_Click(System::Object^ sender, System::EventArgs^ e) {
	// Ẩn giao diện trang chủ
	this->Hide();

	// Tạo và hiển thị form boxthemmonhoc
	quanlysv::boxthemmonhoc^ formThem = gcnew boxthemmonhoc();
	formThem->ShowDialog();

	// Sau khi form boxthemmonhoc đóng lại, nạp lại danh sách môn học và hiển thị lại trang chủ
	LoadSubjects();
	this->Show();
}
};
}

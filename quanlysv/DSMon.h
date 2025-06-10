#pragma once
#using < Microsoft.VisualBasic.dll >
#include <msclr/marshal_cppstd.h>
#include "monhoc.h"
#include "DSMon.h"



namespace quanlysv {

	using namespace System;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class EditForm : public Form {
	public:
		bool isSubmitted;
		property String^ MSSV;
		property String^ HoTen;
		property float Lab1;
		property float Lab2;
		property float Pt1;
		property float Pt2;
		property float Presentation;
		property float Final;

		// Constructor nhận vào SinhVien ban đầu để khởi tạo các giá trị
		EditForm(SinhVien sv) {
			InitializeComponent();
			isSubmitted = false;
			txtMSSV->Text = gcnew String(sv.mssv);
			txtHoTen->Text = gcnew String(sv.hoTen);
			txtLab1->Text = (sv.lab1 == -1.0f) ? "" : sv.lab1.ToString();
			txtLab2->Text = (sv.lab2 == -1.0f) ? "" : sv.lab2.ToString();
			txtPt1->Text = (sv.pt1 == -1.0f) ? "" : sv.pt1.ToString();
			txtPt2->Text = (sv.pt2 == -1.0f) ? "" : sv.pt2.ToString();
			txtPresentation->Text = (sv.presentation == -1.0f) ? "" : sv.presentation.ToString();
			txtFinal->Text = (sv.final == -1.0f) ? "" : sv.final.ToString();
		}

	private:
		TextBox^ txtMSSV;
		TextBox^ txtHoTen;
		TextBox^ txtLab1;
		TextBox^ txtLab2;
		TextBox^ txtPt1;
		TextBox^ txtPt2;
		TextBox^ txtPresentation;
		TextBox^ txtFinal;
		Button^ btnOK;
		Button^ btnCancel;

		void InitializeComponent(void) {
			this->Text = L"Chỉnh sửa sinh viên";
			this->Size = System::Drawing::Size(300, 350);
			int labelX = 10, txtX = 120, y = 10, yStep = 30;

			// MSSV
			Label^ lblMSSV = gcnew Label();
			lblMSSV->Text = "MSSV:";
			lblMSSV->Location = Point(labelX, y);
			lblMSSV->Size = Drawing::Size(100, 20);
			this->Controls->Add(lblMSSV);

			txtMSSV = gcnew TextBox();
			txtMSSV->Location = Point(txtX, y);
			txtMSSV->Size = Drawing::Size(150, 20);
			this->Controls->Add(txtMSSV);

			y += yStep;
			// Họ tên
			Label^ lblHoTen = gcnew Label();
			lblHoTen->Text = "Name:";
			lblHoTen->Location = Point(labelX, y);
			lblHoTen->Size = Drawing::Size(100, 20);
			this->Controls->Add(lblHoTen);

			txtHoTen = gcnew TextBox();
			txtHoTen->Location = Point(txtX, y);
			txtHoTen->Size = Drawing::Size(150, 20);
			this->Controls->Add(txtHoTen);

			y += yStep;
			// Lab1
			Label^ lblLab1 = gcnew Label();
			lblLab1->Text = "Lab1:";
			lblLab1->Location = Point(labelX, y);
			lblLab1->Size = Drawing::Size(100, 20);
			this->Controls->Add(lblLab1);

			txtLab1 = gcnew TextBox();
			txtLab1->Location = Point(txtX, y);
			txtLab1->Size = Drawing::Size(150, 20);
			this->Controls->Add(txtLab1);

			y += yStep;
			// Lab2
			Label^ lblLab2 = gcnew Label();
			lblLab2->Text = "Lab2:";
			lblLab2->Location = Point(labelX, y);
			lblLab2->Size = Drawing::Size(100, 20);
			this->Controls->Add(lblLab2);

			txtLab2 = gcnew TextBox();
			txtLab2->Location = Point(txtX, y);
			txtLab2->Size = Drawing::Size(150, 20);
			this->Controls->Add(txtLab2);

			y += yStep;
			// Pt1
			Label^ lblPt1 = gcnew Label();
			lblPt1->Text = "Pt1:";
			lblPt1->Location = Point(labelX, y);
			lblPt1->Size = Drawing::Size(100, 20);
			this->Controls->Add(lblPt1);

			txtPt1 = gcnew TextBox();
			txtPt1->Location = Point(txtX, y);
			txtPt1->Size = Drawing::Size(150, 20);
			this->Controls->Add(txtPt1);

			y += yStep;
			// Pt2
			Label^ lblPt2 = gcnew Label();
			lblPt2->Text = "Pt2:";
			lblPt2->Location = Point(labelX, y);
			lblPt2->Size = Drawing::Size(100, 20);
			this->Controls->Add(lblPt2);

			txtPt2 = gcnew TextBox();
			txtPt2->Location = Point(txtX, y);
			txtPt2->Size = Drawing::Size(150, 20);
			this->Controls->Add(txtPt2);

			y += yStep;
			// Presentation
			Label^ lblPresentation = gcnew Label();
			lblPresentation->Text = "Presentation:";
			lblPresentation->Location = Point(labelX, y);
			lblPresentation->Size = Drawing::Size(100, 20);
			this->Controls->Add(lblPresentation);

			txtPresentation = gcnew TextBox();
			txtPresentation->Location = Point(txtX, y);
			txtPresentation->Size = Drawing::Size(150, 20);
			this->Controls->Add(txtPresentation);

			y += yStep;
			// Final
			Label^ lblFinal = gcnew Label();
			lblFinal->Text = "Final:";
			lblFinal->Location = Point(labelX, y);
			lblFinal->Size = Drawing::Size(100, 20);
			this->Controls->Add(lblFinal);

			txtFinal = gcnew TextBox();
			txtFinal->Location = Point(txtX, y);
			txtFinal->Size = Drawing::Size(150, 20);
			this->Controls->Add(txtFinal);

			y += yStep + 10;
			// Nút OK
			btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = Point(40, y);
			btnOK->Size = Drawing::Size(80, 30);
			btnOK->Click += gcnew EventHandler(this, &EditForm::btnOK_Click);
			this->Controls->Add(btnOK);

			// Nút Cancel
			btnCancel = gcnew Button();
			btnCancel->Text = "Cancel";
			btnCancel->Location = Point(150, y);
			btnCancel->Size = Drawing::Size(80, 30);
			btnCancel->Click += gcnew EventHandler(this, &EditForm::btnCancel_Click);
			this->Controls->Add(btnCancel);
		}

		void btnOK_Click(Object^ sender, EventArgs^ e) {
			MSSV = txtMSSV->Text;
			HoTen = txtHoTen->Text;
			// Check required fields
			if (String::IsNullOrWhiteSpace(MSSV) || String::IsNullOrWhiteSpace(HoTen)) {
				MessageBox::Show(L"MSSV và Họ tên là các trường bắt buộc!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Validate MSSV - must contain only digits
			for each (wchar_t c in MSSV) {
				if (!Char::IsDigit(c)) {
					MessageBox::Show(L"MSSV chỉ được chứa các chữ số!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}

			// Validate HoTen - must contain only letters and spaces
			for each (wchar_t c in HoTen) {
				if (!Char::IsLetter(c) && !Char::IsWhiteSpace(c)) {
					MessageBox::Show(L"Họ tên chỉ được chứa chữ cái và khoảng trắng!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}

			try {
				Lab1 = String::IsNullOrWhiteSpace(txtLab1->Text) ? -1.0f : System::Single::Parse(txtLab1->Text);
				Lab2 = String::IsNullOrWhiteSpace(txtLab2->Text) ? -1.0f : System::Single::Parse(txtLab2->Text);
				Pt1 = String::IsNullOrWhiteSpace(txtPt1->Text) ? -1.0f : System::Single::Parse(txtPt1->Text);
				Pt2 = String::IsNullOrWhiteSpace(txtPt2->Text) ? -1.0f : System::Single::Parse(txtPt2->Text);
				Presentation = String::IsNullOrWhiteSpace(txtPresentation->Text) ? -1.0f : System::Single::Parse(txtPresentation->Text);
				Final = String::IsNullOrWhiteSpace(txtFinal->Text) ? -1.0f : System::Single::Parse(txtFinal->Text);
			}
			catch (Exception^) {
				MessageBox::Show(L"Giá trị điểm không hợp lệ.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			isSubmitted = true;
			this->Close();
		}
		void btnCancel_Click(Object^ sender, EventArgs^ e) {
			isSubmitted = false;
			this->Close();
		}
	};
	/// <summary>
	/// Summary for DSMon
	/// </summary>

	public ref class DSMon : public System::Windows::Forms::Form
	{
	private: String^ tenmonhoc;
	public:
		monhoc* nativeMonHoc;
	private: System::Windows::Forms::Button^ xuatfileexcel;
	public:

	public:
		int studentIndex;
		DSMon(String^ subjectFile)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			tenmonhoc = subjectFile;
			// Chuyển đổi String^ sang std::string để lấy tên file cho đối tượng native
			std::string nativeFile = msclr::interop::marshal_as<std::string>(subjectFile);
			nativeMonHoc = new monhoc;
			strcpy(nativeMonHoc->tenmonhoc, nativeFile.c_str());
			// Đọc dữ liệu từ file
			nativeMonHoc->doc();
			// Tải dữ liệu hiển thị lên DataGridView
			LoadData();
			// Đặt tiêu đề cho form
			if (tenmonhoc->EndsWith(".dat")) {
				textmonhoc->Text = tenmonhoc->Substring(0, tenmonhoc->Length - 4);
			}
			else
				textmonhoc->Text = tenmonhoc;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DSMon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmain;
	private: System::Windows::Forms::Panel^ panelcover2;
	protected:






	private: System::Windows::Forms::Label^ Mon;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Them;
	private: System::Windows::Forms::Button^ Xoa;
	private: System::Windows::Forms::Button^ update;
	private: System::Windows::Forms::Button^ XacNhan;
	private: System::Windows::Forms::Label^ DanhSachMon;












	private: System::Windows::Forms::Panel^ panelgiua;
	private: System::Windows::Forms::DataGridView^ dataMon;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MaSv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TenSV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lab1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lab2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ bt1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ bt2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ presentation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ final;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ diemtb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DiemChu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GPA;
	private: System::Windows::Forms::TextBox^ textmonhoc;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->panelgiua = (gcnew System::Windows::Forms::Panel());
			this->dataMon = (gcnew System::Windows::Forms::DataGridView());
			this->MaSv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TenSV = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lab1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lab2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bt1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bt2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->presentation = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->final = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->diemtb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DiemChu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GPA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelcover2 = (gcnew System::Windows::Forms::Panel());
			this->textmonhoc = (gcnew System::Windows::Forms::TextBox());
			this->Mon = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->xuatfileexcel = (gcnew System::Windows::Forms::Button());
			this->Them = (gcnew System::Windows::Forms::Button());
			this->Xoa = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->XacNhan = (gcnew System::Windows::Forms::Button());
			this->DanhSachMon = (gcnew System::Windows::Forms::Label());
			this->panelmain->SuspendLayout();
			this->panelgiua->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMon))->BeginInit();
			this->panelcover2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelmain
			// 
			this->panelmain->Controls->Add(this->panelgiua);
			this->panelmain->Controls->Add(this->panelcover2);
			this->panelmain->Controls->Add(this->panel1);
			this->panelmain->Controls->Add(this->DanhSachMon);
			this->panelmain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelmain->Location = System::Drawing::Point(0, 0);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(1290, 774);
			this->panelmain->TabIndex = 0;
			// 
			// panelgiua
			// 
			this->panelgiua->Controls->Add(this->dataMon);
			this->panelgiua->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelgiua->Location = System::Drawing::Point(0, 147);
			this->panelgiua->Name = L"panelgiua";
			this->panelgiua->Size = System::Drawing::Size(1290, 492);
			this->panelgiua->TabIndex = 4;
			// 
			// dataMon
			// 
			this->dataMon->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataMon->BackgroundColor = System::Drawing::Color::White;
			this->dataMon->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataMon->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->MaSv, this->TenSV,
					this->lab1, this->lab2, this->bt1, this->bt2, this->presentation, this->final, this->diemtb, this->DiemChu, this->GPA
			});
			this->dataMon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataMon->Location = System::Drawing::Point(0, 0);
			this->dataMon->Name = L"dataMon";
			this->dataMon->RowHeadersWidth = 51;
			this->dataMon->RowTemplate->Height = 24;
			this->dataMon->Size = System::Drawing::Size(1290, 492);
			this->dataMon->TabIndex = 9;
			// 
			// MaSv
			// 
			this->MaSv->HeaderText = L"Mã SV";
			this->MaSv->MinimumWidth = 6;
			this->MaSv->Name = L"MaSv";
			// 
			// TenSV
			// 
			this->TenSV->HeaderText = L"Họ và tên sinh viên";
			this->TenSV->MinimumWidth = 6;
			this->TenSV->Name = L"TenSV";
			// 
			// lab1
			// 
			this->lab1->HeaderText = L"lab1";
			this->lab1->MinimumWidth = 6;
			this->lab1->Name = L"lab1";
			// 
			// lab2
			// 
			this->lab2->HeaderText = L"lab2";
			this->lab2->MinimumWidth = 6;
			this->lab2->Name = L"lab2";
			// 
			// bt1
			// 
			this->bt1->HeaderText = L"bt1";
			this->bt1->MinimumWidth = 6;
			this->bt1->Name = L"bt1";
			// 
			// bt2
			// 
			this->bt2->HeaderText = L"bt2";
			this->bt2->MinimumWidth = 6;
			this->bt2->Name = L"bt2";
			// 
			// presentation
			// 
			this->presentation->HeaderText = L"presentation";
			this->presentation->MinimumWidth = 6;
			this->presentation->Name = L"presentation";
			// 
			// final
			// 
			this->final->HeaderText = L"final";
			this->final->MinimumWidth = 6;
			this->final->Name = L"final";
			// 
			// diemtb
			// 
			this->diemtb->HeaderText = L"Điểm TB";
			this->diemtb->MinimumWidth = 6;
			this->diemtb->Name = L"diemtb";
			// 
			// DiemChu
			// 
			this->DiemChu->HeaderText = L"Điểm chữ";
			this->DiemChu->MinimumWidth = 6;
			this->DiemChu->Name = L"DiemChu";
			// 
			// GPA
			// 
			this->GPA->HeaderText = L"GPA (hệ 4)";
			this->GPA->MinimumWidth = 6;
			this->GPA->Name = L"GPA";
			// 
			// panelcover2
			// 
			this->panelcover2->Controls->Add(this->textmonhoc);
			this->panelcover2->Controls->Add(this->Mon);
			this->panelcover2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelcover2->Location = System::Drawing::Point(0, 89);
			this->panelcover2->Name = L"panelcover2";
			this->panelcover2->Size = System::Drawing::Size(1290, 58);
			this->panelcover2->TabIndex = 3;
			// 
			// textmonhoc
			// 
			this->textmonhoc->Location = System::Drawing::Point(100, 20);
			this->textmonhoc->Name = L"textmonhoc";
			this->textmonhoc->Size = System::Drawing::Size(173, 22);
			this->textmonhoc->TabIndex = 3;
			// 
			// Mon
			// 
			this->Mon->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Mon->AutoSize = true;
			this->Mon->Enabled = false;
			this->Mon->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mon->Location = System::Drawing::Point(24, 16);
			this->Mon->Name = L"Mon";
			this->Mon->Size = System::Drawing::Size(61, 26);
			this->Mon->TabIndex = 2;
			this->Mon->Text = L"Môn:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->xuatfileexcel);
			this->panel1->Controls->Add(this->Them);
			this->panel1->Controls->Add(this->Xoa);
			this->panel1->Controls->Add(this->update);
			this->panel1->Controls->Add(this->XacNhan);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 639);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1290, 135);
			this->panel1->TabIndex = 2;
			// 
			// xuatfileexcel
			// 
			this->xuatfileexcel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->xuatfileexcel->BackColor = System::Drawing::Color::MediumVioletRed;
			this->xuatfileexcel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xuatfileexcel->ForeColor = System::Drawing::Color::White;
			this->xuatfileexcel->Location = System::Drawing::Point(404, 63);
			this->xuatfileexcel->Name = L"xuatfileexcel";
			this->xuatfileexcel->Size = System::Drawing::Size(133, 41);
			this->xuatfileexcel->TabIndex = 15;
			this->xuatfileexcel->Text = L"Xuất file";
			this->xuatfileexcel->UseVisualStyleBackColor = false;
			this->xuatfileexcel->Click += gcnew System::EventHandler(this, &DSMon::xuatfileexcel_Click);
			// 
			// Them
			// 
			this->Them->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Them->BackColor = System::Drawing::Color::Fuchsia;
			this->Them->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Them->ForeColor = System::Drawing::Color::White;
			this->Them->Location = System::Drawing::Point(561, 63);
			this->Them->Name = L"Them";
			this->Them->Size = System::Drawing::Size(133, 41);
			this->Them->TabIndex = 14;
			this->Them->Text = L"Thêm";
			this->Them->UseVisualStyleBackColor = false;
			this->Them->Click += gcnew System::EventHandler(this, &DSMon::Them_Click);
			// 
			// Xoa
			// 
			this->Xoa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Xoa->BackColor = System::Drawing::Color::Red;
			this->Xoa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Xoa->ForeColor = System::Drawing::Color::White;
			this->Xoa->Location = System::Drawing::Point(718, 63);
			this->Xoa->Name = L"Xoa";
			this->Xoa->Size = System::Drawing::Size(133, 41);
			this->Xoa->TabIndex = 13;
			this->Xoa->Text = L"Xóa";
			this->Xoa->UseVisualStyleBackColor = false;
			this->Xoa->Click += gcnew System::EventHandler(this, &DSMon::Xoa_Click);
			// 
			// update
			// 
			this->update->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->update->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::White;
			this->update->Location = System::Drawing::Point(867, 63);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(133, 41);
			this->update->TabIndex = 12;
			this->update->Text = L"Chỉnh sửa";
			this->update->UseVisualStyleBackColor = false;
			this->update->Click += gcnew System::EventHandler(this, &DSMon::update_Click);
			// 
			// XacNhan
			// 
			this->XacNhan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->XacNhan->BackColor = System::Drawing::Color::Blue;
			this->XacNhan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XacNhan->ForeColor = System::Drawing::Color::White;
			this->XacNhan->Location = System::Drawing::Point(1026, 63);
			this->XacNhan->Name = L"XacNhan";
			this->XacNhan->Size = System::Drawing::Size(239, 41);
			this->XacNhan->TabIndex = 11;
			this->XacNhan->Text = L"Xác nhận và quay lại";
			this->XacNhan->UseVisualStyleBackColor = false;
			this->XacNhan->Click += gcnew System::EventHandler(this, &DSMon::XacNhan_Click);
			// 
			// DanhSachMon
			// 
			this->DanhSachMon->BackColor = System::Drawing::Color::Blue;
			this->DanhSachMon->Dock = System::Windows::Forms::DockStyle::Top;
			this->DanhSachMon->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DanhSachMon->ForeColor = System::Drawing::Color::Yellow;
			this->DanhSachMon->Location = System::Drawing::Point(0, 0);
			this->DanhSachMon->Name = L"DanhSachMon";
			this->DanhSachMon->Size = System::Drawing::Size(1290, 89);
			this->DanhSachMon->TabIndex = 1;
			this->DanhSachMon->Text = L"Danh Sách Môn";
			this->DanhSachMon->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DSMon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1290, 774);
			this->Controls->Add(this->panelmain);
			this->Name = L"DSMon";
			this->Text = L"DSMon";
			this->panelmain->ResumeLayout(false);
			this->panelgiua->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMon))->EndInit();
			this->panelcover2->ResumeLayout(false);
			this->panelcover2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ ConvertSubjectNameToFile(String^ subjectName) {
			String^ lowerName = subjectName->ToLower();
			lowerName = lowerName->Replace(" ", "");
			return lowerName + ".dat";
		}
		void LoadData() {
			dataMon->Rows->Clear();
			for (int i = 0; i < nativeMonHoc->n; i++) {
				SinhVien sv = nativeMonHoc->sv[i];
				bool allScoresEmpty = (sv.lab1 == -1.0f || sv.lab2 == -1.0f ||
					sv.pt1 == -1.0f || sv.pt2 == -1.0f ||
					sv.presentation == -1.0f || sv.final == -1.0f);

				int rowIndex = dataMon->Rows->Add(
					gcnew String(sv.mssv),
					gcnew String(sv.hoTen),
					(sv.lab1 == -1.0f) ? "" : sv.lab1.ToString(),
					(sv.lab2 == -1.0f) ? "" : sv.lab2.ToString(),
					(sv.pt1 == -1.0f) ? "" : sv.pt1.ToString(),
					(sv.pt2 == -1.0f) ? "" : sv.pt2.ToString(),
					(sv.presentation == -1.0f) ? "" : sv.presentation.ToString(),
					(sv.final == -1.0f) ? "" : sv.final.ToString(),
					allScoresEmpty ? "" : sv.trung_binh.ToString("F1"),
					allScoresEmpty ? "" : gcnew String(sv.diemchu, 1),
					allScoresEmpty ? "" : sv.gpa.ToString("F1")
				);
				bool hasAllScores = (sv.lab1 >= 0 && sv.lab2 >= 0 &&
					sv.pt1 >= 0 && sv.pt2 >= 0 &&
					sv.presentation >= 0 && sv.final >= 0);

				DataGridViewRow^ row = dataMon->Rows[rowIndex];
				// Đặt màu nền cho hàng dựa trên điểm trung bình
				if (hasAllScores) {
					if (sv.trung_binh < 4.0f) {
						row->DefaultCellStyle->BackColor = System::Drawing::Color::LightCoral; // Màu đỏ nhạt cho điểm dưới 5
					}
					else if (sv.trung_binh > 8.0f) {
						row->DefaultCellStyle->BackColor = System::Drawing::Color::LightGreen; // Màu xanh nhạt cho điểm từ 8 trở lên
					}
				}
			}
		}
	private: System::Void XacNhan_Click(Object^ sender, EventArgs^ e) {
		nativeMonHoc->luu();
		Control^ parentControl = this->Parent;
		if (parentControl != nullptr) {
			parentControl->Controls->Remove(this);
		}
		this->Close();
	}
	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataMon->SelectedRows->Count == 0) {
			MessageBox::Show(L"Vui lòng chọn sinh viên cần chỉnh sửa.", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		studentIndex = dataMon->SelectedRows[0]->Index;
		SinhVien currentSV = nativeMonHoc->sv[studentIndex];
		EditForm^ editForm = gcnew EditForm(currentSV);
		editForm->Text = L"Chỉnh sửa thông tin sinh viên";
		editForm->ShowDialog();
		if (editForm->isSubmitted) {
			// Tạo đối tượng SinhVien mới từ dữ liệu được sửa
			SinhVien newSV;
			msclr::interop::marshal_context context;
			std::string newMssv = context.marshal_as<std::string>(editForm->MSSV);
			// Check if MSSV has changed and if new MSSV already exists
			if (strcmp(currentSV.mssv, newMssv.c_str()) != 0) {
				int existingIndex = nativeMonHoc->timSV(newMssv.c_str());
				if (existingIndex != -1) {
					MessageBox::Show(L"Mã số sinh viên đã tồn tại trong danh sách!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
			std::wstring newHoTen = context.marshal_as<std::wstring>(editForm->HoTen);
			strcpy(newSV.mssv, newMssv.c_str());
			wcscpy(newSV.hoTen, newHoTen.c_str());
			newSV.lab1 = editForm->Lab1;
			newSV.lab2 = editForm->Lab2;
			newSV.pt1 = editForm->Pt1;
			newSV.pt2 = editForm->Pt2;
			newSV.presentation = editForm->Presentation;
			newSV.final = editForm->Final;
			newSV.tinhDiemTrungBinh();
			if (nativeMonHoc->suaSV(currentSV.mssv, newSV)) {
				LoadData();
				MessageBox::Show(L"Cập nhật sinh viên thành công.", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show(L"Cập nhật thất bại.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void Xoa_Click(Object^ sender, EventArgs^ e) {
		if (dataMon->SelectedRows->Count == 0) {
			MessageBox::Show(L"Vui lòng chọn hàng cần xóa.", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		int index = dataMon->SelectedRows[0]->Index;
		String^ mssv = dataMon->Rows[index]->Cells[0]->Value->ToString();
		std::string mssvStr = msclr::interop::marshal_as<std::string>(mssv);
		if (nativeMonHoc->xoaSV(mssvStr.c_str())) {
			MessageBox::Show(L"Xóa sinh viên thành công.", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
			LoadData();
		}
		else {
			MessageBox::Show(L"Không tìm thấy sinh viên cần xóa.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void Them_Click(System::Object^ sender, System::EventArgs^ e) {
		// Tạo đối tượng SinhVien rỗng (hoặc giá trị mặc định)
		SinhVien blankSV;
		strcpy(blankSV.mssv, "");
		wcscpy(blankSV.hoTen, L"");
		blankSV.lab1 = blankSV.lab2 = blankSV.pt1 = blankSV.pt2 = blankSV.presentation = blankSV.final = -1.0f;
		blankSV.trung_binh = 0;
		blankSV.gpa = 0;
		blankSV.diemchu = 'F';
		// Mở EditForm với đối tượng rỗng
		EditForm^ editForm = gcnew EditForm(blankSV);
		editForm->Text = L"Thêm sinh viên mới";
		editForm->ShowDialog();
		if (editForm->isSubmitted) {
			SinhVien newSV;
			msclr::interop::marshal_context context;
			std::string newMssv = context.marshal_as<std::string>(editForm->MSSV);
			std::wstring newHoTen = context.marshal_as<std::wstring>(editForm->HoTen);

			// Check if MSSV already exists in database
			if (nativeMonHoc->timSV(newMssv.c_str()) != -1) {
				MessageBox::Show(L"Mã số sinh viên đã tồn tại trong danh sách!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			strcpy(newSV.mssv, newMssv.c_str());
			wcscpy(newSV.hoTen, newHoTen.c_str());
			newSV.lab1 = editForm->Lab1;
			newSV.lab2 = editForm->Lab2;
			newSV.pt1 = editForm->Pt1;
			newSV.pt2 = editForm->Pt2;
			newSV.presentation = editForm->Presentation;
			newSV.final = editForm->Final;
			newSV.tinhDiemTrungBinh();
			// Kiểm tra số lượng sinh viên có chưa đạt giới hạn MAX_STUDENT
			if (nativeMonHoc->n < MAX_STUDENT) {
				nativeMonHoc->sv[nativeMonHoc->n] = newSV;
				nativeMonHoc->n++;
				nativeMonHoc->luu();
				LoadData();
				MessageBox::Show(L"Thêm sinh viên thành công.", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show(L"Danh sách đã đầy, không thể thêm.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void xuatfileexcel_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1) Chuẩn bị SaveFileDialog
		SaveFileDialog^ sfd = gcnew SaveFileDialog();
		sfd->Filter = "CSV files (*.csv)|*.csv|All files (*.*)|*.*";
		sfd->FileName = textmonhoc->Text + ".csv";
		sfd->Title = L"Chọn nơi lưu file CSV";

		if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			return;

		try {
			// 2) Mở StreamWriter với mã hóa UTF8 để Excel không bị lỗi font
			StreamWriter^ sw = gcnew StreamWriter(sfd->FileName, false, System::Text::Encoding::UTF8);

			// 3) Ghi dòng header (tiêu đề cột)
			cli::array<String^>^ headers = gcnew cli::array<String^>{
				L"Mã SV",
					L"Họ và tên sinh viên",
					L"Lab1",
					"Lab2",
					"Bt1",
					"Bt2",
					"Presentation",
					"Final",
					L"Điểm trung bình",
					L"Điểm chữ",
					L"GPA (hệ 4)"  // Add GPA header
			};
			sw->WriteLine(String::Join(",", headers));

			// 4) Ghi từng dòng dữ liệu
			for each (DataGridViewRow ^ row in dataMon->Rows) {
				if (row->IsNewRow) continue;  // bỏ dòng nhập mới

				List<String^>^ cells = gcnew List<String^>();
				for each (DataGridViewCell ^ cell in row->Cells) {
					String^ val = (cell->Value == nullptr) ? "" : cell->Value->ToString();
					// Nếu giá trị có dấu phẩy hoặc dấu ngoặc kép, bọc trong "..." và escape "
					if (val->Contains(",") || val->Contains("\"")) {
						val = "\"" + val->Replace("\"", "\"\"") + "\"";
					}
					cells->Add(val);
				}
				sw->WriteLine(String::Join(",", cells->ToArray()));
			}

			sw->Close();
			MessageBox::Show(L"Xuất file CSV thành công!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show(L"Lỗi khi ghi file:\n" + ex->Message, L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
#pragma once
#include "boxthemgiangvien.h"
#include "boxsuagiangvien.h"
#include "monhoc.h"
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include "DSMon.h"
#include "Formdocphananh.h"
namespace quanlysv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for trangchuadmin
	/// </summary>
	public ref class trangchuadmin : public System::Windows::Forms::Form
	{
	public:
		trangchuadmin(void)
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
		~trangchuadmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelsystem;
	private: System::Windows::Forms::Label^ systemschool;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ XinChao;
	private: System::Windows::Forms::Panel^ menu;
	private: System::Windows::Forms::Label^ DHLschool;
	private: System::Windows::Forms::Label^ welcome;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ chitiet;
	private: System::Windows::Forms::Button^ editgv;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ PA;
	private: System::Windows::Forms::Button^ button6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(trangchuadmin::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelsystem = (gcnew System::Windows::Forms::Label());
			this->systemschool = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->XinChao = (gcnew System::Windows::Forms::Label());
			this->menu = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->editgv = (gcnew System::Windows::Forms::Button());
			this->chitiet = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->DHLschool = (gcnew System::Windows::Forms::Label());
			this->welcome = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->PA = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->menu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(192, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// labelsystem
			// 
			this->labelsystem->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelsystem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsystem->Location = System::Drawing::Point(344, 53);
			this->labelsystem->Name = L"labelsystem";
			this->labelsystem->Size = System::Drawing::Size(417, 47);
			this->labelsystem->TabIndex = 7;
			this->labelsystem->Text = L"Student information system";
			// 
			// systemschool
			// 
			this->systemschool->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->systemschool->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->systemschool->ForeColor = System::Drawing::Color::Blue;
			this->systemschool->Location = System::Drawing::Point(341, 16);
			this->systemschool->Name = L"systemschool";
			this->systemschool->Size = System::Drawing::Size(417, 91);
			this->systemschool->TabIndex = 6;
			this->systemschool->Text = L"Hệ thống thông tin sinh viên";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->Controls->Add(this->XinChao);
			this->panel1->Location = System::Drawing::Point(189, 130);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1174, 116);
			this->panel1->TabIndex = 8;
			// 
			// XinChao
			// 
			this->XinChao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->XinChao->AutoEllipsis = true;
			this->XinChao->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XinChao->ForeColor = System::Drawing::Color::Yellow;
			this->XinChao->Location = System::Drawing::Point(12, 23);
			this->XinChao->Name = L"XinChao";
			this->XinChao->Size = System::Drawing::Size(1162, 67);
			this->XinChao->TabIndex = 11;
			this->XinChao->Text = L"TRANG CHỦ ADMIN";
			this->XinChao->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// menu
			// 
			this->menu->AutoScroll = true;
			this->menu->BackColor = System::Drawing::Color::Blue;
			this->menu->Controls->Add(this->button6);
			this->menu->Controls->Add(this->PA);
			this->menu->Controls->Add(this->button5);
			this->menu->Controls->Add(this->editgv);
			this->menu->Controls->Add(this->chitiet);
			this->menu->Controls->Add(this->button4);
			this->menu->Controls->Add(this->button3);
			this->menu->Controls->Add(this->button2);
			this->menu->Controls->Add(this->button1);
			this->menu->Controls->Add(this->DHLschool);
			this->menu->Controls->Add(this->welcome);
			this->menu->Controls->Add(this->Exit);
			this->menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(195, 745);
			this->menu->TabIndex = 9;
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(0, 473);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(195, 45);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Chi tiết môn học";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &trangchuadmin::button5_Click);
			// 
			// editgv
			// 
			this->editgv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editgv->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editgv->ForeColor = System::Drawing::Color::White;
			this->editgv->Location = System::Drawing::Point(0, 379);
			this->editgv->Name = L"editgv";
			this->editgv->Size = System::Drawing::Size(195, 45);
			this->editgv->TabIndex = 13;
			this->editgv->Text = L"Sửa giảng viên";
			this->editgv->UseVisualStyleBackColor = true;
			this->editgv->Click += gcnew System::EventHandler(this, &trangchuadmin::editgv_Click);
			// 
			// chitiet
			// 
			this->chitiet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chitiet->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chitiet->ForeColor = System::Drawing::Color::White;
			this->chitiet->Location = System::Drawing::Point(0, 427);
			this->chitiet->Name = L"chitiet";
			this->chitiet->Size = System::Drawing::Size(195, 45);
			this->chitiet->TabIndex = 12;
			this->chitiet->Text = L"Chi tiết giảng viên";
			this->chitiet->UseVisualStyleBackColor = true;
			this->chitiet->Click += gcnew System::EventHandler(this, &trangchuadmin::chitiet_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(0, 197);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(195, 45);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Môn Học";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &trangchuadmin::button4_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(0, 333);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(195, 45);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Xóa giảng viên";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &trangchuadmin::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(0, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(195, 45);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Thêm giảng viên";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &trangchuadmin::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(0, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 45);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Giảng viên";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &trangchuadmin::button1_Click);
			// 
			// DHLschool
			// 
			this->DHLschool->AutoSize = true;
			this->DHLschool->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DHLschool->ForeColor = System::Drawing::Color::White;
			this->DHLschool->Location = System::Drawing::Point(23, 98);
			this->DHLschool->Name = L"DHLschool";
			this->DHLschool->Size = System::Drawing::Size(141, 26);
			this->DHLschool->TabIndex = 7;
			this->DHLschool->Text = L"my university";
			// 
			// welcome
			// 
			this->welcome->AutoSize = true;
			this->welcome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome->ForeColor = System::Drawing::Color::White;
			this->welcome->Location = System::Drawing::Point(3, 63);
			this->welcome->Name = L"welcome";
			this->welcome->Size = System::Drawing::Size(121, 26);
			this->welcome->TabIndex = 6;
			this->welcome->Text = L"Welcome to";
			// 
			// Exit
			// 
			this->Exit->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->ForeColor = System::Drawing::Color::White;
			this->Exit->Location = System::Drawing::Point(0, 700);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(195, 45);
			this->Exit->TabIndex = 0;
			this->Exit->Text = L"Thoát";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &trangchuadmin::Exit_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(201, 245);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1162, 488);
			this->dataGridView1->TabIndex = 10;
			// 
			// PA
			// 
			this->PA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PA->ForeColor = System::Drawing::Color::White;
			this->PA->Location = System::Drawing::Point(0, 520);
			this->PA->Name = L"PA";
			this->PA->Size = System::Drawing::Size(195, 45);
			this->PA->TabIndex = 15;
			this->PA->Text = L"Phản Ánh";
			this->PA->UseVisualStyleBackColor = true;
			this->PA->Click += gcnew System::EventHandler(this, &trangchuadmin::PA_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(0, 566);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(195, 45);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Chi tiết phản ánh";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &trangchuadmin::button6_Click);
			// 
			// trangchuadmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1366, 745);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labelsystem);
			this->Controls->Add(this->systemschool);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"trangchuadmin";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &trangchuadmin::trangchuadmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void trangchuadmin_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		boxthemgiangvien^ box = gcnew boxthemgiangvien(this);
		box->ShowDialog();
		if (box->DialogResult == System::Windows::Forms::DialogResult::OK) {
			// Cập nhật lại DataGridView nếu cần thiết
			// dataGridView1->DataSource = ...; // Cập nhật nguồn dữ liệu
		}
		//button1_Click; (nullptr, nullptr); // Refresh the grid after adding a new lecturer
	}
		   System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			   // 1) Đọc subjects.txt và đếm số môn cho mỗi giảng viên
			   Dictionary<String^, int>^ subjCount = gcnew Dictionary<String^, int>();
			   String^ subjPath = "subjects.txt";
			   if (System::IO::File::Exists(subjPath)) {
				   // ❌ Sai: auto lines = File::ReadAllLines(...)
				   // cli::array<String^>^ mới là kiểu đúng cho File::ReadAllLines
				   cli::array<String^>^ lines = System::IO::File::ReadAllLines(subjPath);

				   for each (String ^ ln in lines) {
					   if (String::IsNullOrWhiteSpace(ln)) continue;
					   // tách theo '|'
					   cli::array<String^>^ parts = ln->Split('|');
					   if (parts->Length >= 2) {
						   String^ mg = parts[0];
						   if (!subjCount->ContainsKey(mg))
							   subjCount[mg] = 0;
						   subjCount[mg]++;
					   }
				   }
			   }

			   // 2) Đọc danh sách giảng viên
			   Danhsachgiangvien ds;
			   ds.docdanhsachgv();

			   // 3) Tạo DataTable
			   DataTable^ dt = gcnew DataTable();
			   dt->Columns->Add("STT", Int32::typeid);
			   dt->Columns->Add(L"Mã GV", String::typeid);
			   dt->Columns->Add(L"Họ tên", String::typeid);
			   dt->Columns->Add(L"Số ĐT", String::typeid);
			   dt->Columns->Add("Email", String::typeid);
			   dt->Columns->Add(L"Số môn", Int32::typeid);

			   // 4) Fill DataTable
			   for (int i = 0; i < ds.n; i++) {
				   giangvien& gv = ds.ds[i];
				   String^ magv = gcnew String(gv.magv);
				   String^ hoten = gcnew String(gv.hoten);
				   String^ sdt = gcnew String(gv.sodienthoai);
				   String^ mail = gcnew String(gv.email);

				   int somon = subjCount->ContainsKey(magv) ? subjCount[magv] : 0;
				   dt->Rows->Add(i + 1, magv, hoten, sdt, mail, somon);
			   }

			   dataGridView1->DataSource = dt;
			   dataGridView1->AutoResizeColumns();

		   }



		   System::Void button3_Click(Object^ sender, EventArgs^ e) {
			   if (dataGridView1->SelectedRows->Count == 0) {
				   MessageBox::Show(L"Vui lòng chọn giảng viên để xóa.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   return;
			   }

			   // Get selected magv
			   String^ magv = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
			   // Confirm
			   System::Windows::Forms::DialogResult dr = MessageBox::Show(L"Bạn chắc chắn xóa giảng viên " + magv + "?", L"Xác nhận", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			   if (dr != System::Windows::Forms::DialogResult::Yes) return;

			   // 1) Remove from danh sach giang vien file
			   Danhsachgiangvien ds;
			   ds.docdanhsachgv();
			   std::string std_magv = marshal_as<std::string>(magv);
			   ds.xoagiangvien(std_magv.c_str());
			   ds.luudanhsachgv();

			   // 2) Remove account from giangvien.txt
			   cli::array<String^>^ lines = File::ReadAllLines("giangvien.txt");
			   List<String^>^ kept = gcnew List<String^>();
			   for each (String ^ line in lines) {
				   if (!line->StartsWith(magv + "|"))
					   kept->Add(line);
			   }
			   File::WriteAllLines("giangvien.txt", kept->ToArray());

			   // Refresh grid
			   button1_Click(nullptr, nullptr);
			   MessageBox::Show(L"Xóa giảng viên thành công.", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
		   }
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show(L"Bạn có chắc muốn thoát?", L"Xác nhận thoát", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit(); // Thoát ứng dụng
	}
}
private: System::Void chitiet_Click(System::Object^ sender, System::EventArgs^ e) {
	// Lấy mã giảng viên đang chọn
	if (dataGridView1->SelectedRows->Count == 0) {
		MessageBox::Show(L"Vui lòng chọn giảng viên.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	String^ magv = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();

	// Đọc file subjects.txt để lấy danh sách môn của giảng viên
	String^ subjPath = "subjects.txt";
	if (!System::IO::File::Exists(subjPath)) {
		MessageBox::Show(L"Không tìm thấy file subjects.txt", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	cli::array<String^>^ lines = System::IO::File::ReadAllLines(subjPath);

	// Tạo DataTable cho chi tiết
	DataTable^ dt = gcnew DataTable();
	dt->Columns->Add("STT", Int32::typeid);
	dt->Columns->Add(L"Tên môn học", String::typeid);
	dt->Columns->Add(L"Số SV lớp", Int32::typeid);
	dt->Columns->Add(L"SV đã nhập đủ điểm", Int32::typeid);
	dt->Columns->Add(L"SV qua môn", Int32::typeid);

	int index = 1;
	for each(String ^ ln in lines) {
		if (String::IsNullOrWhiteSpace(ln)) continue;
		cli::array<String^>^ parts = ln->Split('|');
		if (parts->Length < 2) continue;
		if (parts[0] != magv) continue;

		String^ fileName = parts[1];
		// Nếu chưa có .dat thì nối thêm
		if (!fileName->EndsWith(".dat", StringComparison::InvariantCultureIgnoreCase)) {
			fileName += ".dat";
		}
		String^ subjectName = System::IO::Path::GetFileNameWithoutExtension(fileName);

		// Khởi tạo đối tượng monhoc và đọc dữ liệu
		monhoc mh;
		// Gán tên file lưu trữ
		std::string fn = marshal_as<std::string>(fileName);
		strcpy(mh.tenmonhoc, fn.c_str());
		mh.doc();

		int total = mh.n;
		int filled = 0;
		int passed = 0;
		for (int i = 0; i < mh.n; i++) {
			// Kiểm tra đã nhập đủ 6 cột điểm
			SinhVien& sv = mh.sv[i];
			// Giả sử điểm chưa nhập để giá trị âm (nếu cần có thể tùy chỉnh)
			if (sv.lab1 >= 0 && sv.lab2 >= 0 && sv.pt1 >= 0 && sv.pt2 >= 0 && sv.presentation >= 0 && sv.final >= 0) {
				filled++;
				sv.tinhDiemTrungBinh();
				if (sv.trung_binh >= 5.0f) passed++;
			}
		}

		dt->Rows->Add(index++, subjectName, total, filled, passed);
	}

	// Hiển thị DataTable mới
	dataGridView1->DataSource = dt;
	dataGridView1->AutoResizeColumns();
}

	   private: System::Void editgv_Click(System::Object^ sender, System::EventArgs^ e) {
		   // 1) Kiểm tra dòng được chọn
		   if (dataGridView1->SelectedRows->Count == 0) {
			   MessageBox::Show(L"Vui lòng chọn giảng viên.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   return;
		   }

		   // 2) Lấy chỉ số dòng và mã GV
		   int row = dataGridView1->SelectedRows[0]->Index;
		   String^ magv = dataGridView1->Rows[row]->Cells[1]->Value->ToString();

		   // 3) Đọc danh sách giảng viên và tìm con trỏ native
		   Danhsachgiangvien ds;
		   ds.docdanhsachgv();
		   giangvien* p = ds.timKiemGiangVien(msclr::interop::marshal_as<std::string>(magv).c_str());
		   if (p == nullptr) {
			   MessageBox::Show(L"Không tìm thấy giảng viên.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   return;
		   }

		   // 4) Khởi form sửa, truyền pointer và index
		   System::IntPtr ptr(p);
		   boxsuagiangvien^ box = gcnew boxsuagiangvien(ptr, row);

		   // 5) Hiện dialog; nếu OK thì lưu và làm mới grid
		   if (box->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			   // (boxsuagiangvien đã ghi file trong save_Click)
			   // Chỉ cần làm mới DataGridView:
			   button1_Click(nullptr, nullptr);
		   }
	   }


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ subjPath = "subjects.txt";
	if (!System::IO::File::Exists(subjPath)) {
		MessageBox::Show(L"Không tìm thấy file subjects.txt", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	cli::array<String^>^ lines = System::IO::File::ReadAllLines(subjPath);

	DataTable^ dt = gcnew DataTable();
	dt->Columns->Add("STT", Int32::typeid);
	dt->Columns->Add(L"Tên môn", String::typeid);
	dt->Columns->Add(L"Tên giảng viên", String::typeid);
	dt->Columns->Add(L"Mã giảng viên", String::typeid);
	dt->Columns->Add(L"Số sinh viên", Int32::typeid);

	Danhsachgiangvien ds;
	ds.docdanhsachgv();

	int idx = 1;
	for each (String ^ ln in lines) {
		// bỏ qua dòng hoàn toàn trắng
		if (String::IsNullOrWhiteSpace(ln)) continue;

		cli::array<String^>^ parts = ln->Split('|');
		// bỏ qua nếu không đủ 2 phần, hoặc phần mã/tên môn rỗng
		if (parts->Length < 2
			|| String::IsNullOrWhiteSpace(parts[0])
			|| String::IsNullOrWhiteSpace(parts[1]))
			continue;

		String^ maGV = parts[0]->Trim();
		String^ tenMon = parts[1]->Trim();

		// tìm họ tên giảng viên
		std::string stdMagv = msclr::interop::marshal_as<std::string>(maGV);
		giangvien* pGV = ds.timKiemGiangVien(stdMagv.c_str());
		String^ tenGV = pGV ? gcnew String(pGV->hoten) : L"(không tìm thấy)";

		// đọc số SV từ file môn học
		monhoc mh;
		String^ filename = tenMon + ".dat";
		std::string fn = msclr::interop::marshal_as<std::string>(filename);
		strcpy(mh.tenmonhoc, fn.c_str());
		mh.doc();

		dt->Rows->Add(idx++, tenMon, tenGV, maGV, mh.n);
	}

	dataGridView1->DataSource = dt;
	dataGridView1->AutoResizeColumns();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count == 0) {
		MessageBox::Show(L"Vui lòng chọn môn học để xem chi tiết.", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	DataGridViewRow^ row = dataGridView1->SelectedRows[0];
	String^ subjectName = row->Cells[1]->Value == nullptr ? nullptr : row->Cells[1]->Value->ToString()->Trim();
	if (String::IsNullOrWhiteSpace(subjectName)) {
		MessageBox::Show(L"Tên môn học không hợp lệ.", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ fileName = subjectName;
	if (!fileName->EndsWith(".dat", StringComparison::InvariantCultureIgnoreCase)) {
		fileName += ".dat";
	}
	// Kiểm tra tồn tại file, nếu muốn hỏi tạo mới:
	if (!System::IO::File::Exists(fileName)) {
		System::Windows::Forms::DialogResult dr = MessageBox::Show(
			L"Không tìm thấy file dữ liệu môn: " + fileName + L".\nBạn có muốn tạo mới dữ liệu môn này không?",
			L"Xác nhận",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (dr == System::Windows::Forms::DialogResult::No) {
			return;
		}
		// Chú ý: monhoc::doc() phải xử lý file không tồn tại
	}
	try {
		DSMon^ detailsForm = gcnew DSMon(fileName);
		detailsForm->ShowDialog();
		// Sau khi đóng, làm mới DataGridView môn
		button4_Click(nullptr, nullptr);
	}
	catch (Exception^ ex) {
		MessageBox::Show(L"Lỗi khi mở chi tiết môn: " + ex->Message, L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void PA_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1.1) Đọc file phản ánh
	danhsachphananh dsPA;
	dsPA.doc();

	// 1.2) Tạo DataTable với 6 cột
	DataTable^ dt = gcnew DataTable();
	dt->Columns->Add("STT", Int32::typeid);
	dt->Columns->Add("MSSV", String::typeid);
	dt->Columns->Add(L"Họ tên SV", String::typeid);
	dt->Columns->Add(L"Thời gian", String::typeid);
	dt->Columns->Add(L"Môn phản ánh", String::typeid);
	dt->Columns->Add(L"Nội dung", String::typeid);

	// 1.3) Điền dữ liệu
	for (int i = 0; i < dsPA.n; i++) {
		auto& pa = dsPA.danhsachPA[i];

		String^ mssv = gcnew String(pa.nguoi_goi.mssv);
		String^ hoten = gcnew String(pa.nguoi_goi.hoTen);
		String^ time = gcnew String(pa.thoi_gian);
		String^ subj = gcnew String(pa.tenmonhoc);
		String^ content = gcnew String(pa.noi_dung);

		dt->Rows->Add(i + 1, mssv, hoten, time, subj, content);
	}

	// 1.4) Gán lên DataGridView
	dataGridView1->DataSource = dt;
	dataGridView1->AutoResizeColumns();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count == 0) {
		MessageBox::Show(L"Vui lòng chọn phản ánh để xem chi tiết.", L"Lỗi",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	DataGridViewRow^ row = dataGridView1->SelectedRows[0];
	// Lấy từng cột theo index
	String^ mssv = row->Cells["MSSV"]->Value->ToString();
	String^ hoten = row->Cells["Họ tên SV"]->Value->ToString();
	String^ time = row->Cells["Thời gian"]->Value->ToString();
	String^ subj = row->Cells["Môn phản ánh"]->Value->ToString();
	String^ content = row->Cells["Nội dung"]->Value->ToString();

	// Mở dialog chi tiết
	Formdocphananh^ dlg = gcnew Formdocphananh(mssv, subj, content, time);
	dlg->ShowDialog();

	// (nếu cần reload list sau khi xóa trong dialog thì gọi lại PA_Click)
	PA_Click(nullptr, nullptr);
}
};
}

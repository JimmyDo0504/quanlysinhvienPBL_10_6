#pragma once
using namespace Microsoft::VisualBasic;
#include <msclr/marshal_cppstd.h>
#include "monhoc.h"
#include "PhanAnhForm.h"

namespace quanlysv {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class DoiMatKhauForm : public Form {
	private:
		TextBox^ txtCu;
		TextBox^ txtMoi;
		TextBox^ txtXacNhan;
		String^ currentMSSV;

	public:
		DoiMatKhauForm(String^ mssv) {
			currentMSSV = mssv;
			this->Text = L"Đổi Mật Khẩu";
			this->Size = Drawing::Size(400, 300);
			this->StartPosition = FormStartPosition::CenterParent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;

			Label^ lblCu = gcnew Label();
			lblCu->Text = L"Mật khẩu cũ:";
			lblCu->Location = Drawing::Point(50, 30);
			this->Controls->Add(lblCu);

			txtCu = gcnew TextBox();
			txtCu->Location = Drawing::Point(180, 30);
			txtCu->Size = Drawing::Size(150, 20);
			txtCu->PasswordChar = '*';
			this->Controls->Add(txtCu);

			Label^ lblMoi = gcnew Label();
			lblMoi->Text = L"Mật khẩu mới:";
			lblMoi->Location = Drawing::Point(50, 70);
			this->Controls->Add(lblMoi);

			txtMoi = gcnew TextBox();
			txtMoi->Location = Drawing::Point(180, 70);
			txtMoi->Size = Drawing::Size(150, 20);
			txtMoi->PasswordChar = '*';
			this->Controls->Add(txtMoi);

			Label^ lblXacNhan = gcnew Label();
			lblXacNhan->Text = L"Xác nhận mật khẩu:";
			lblXacNhan->Location = Drawing::Point(50, 110);
			this->Controls->Add(lblXacNhan);

			txtXacNhan = gcnew TextBox();
			txtXacNhan->Location = Drawing::Point(180, 110);
			txtXacNhan->Size = Drawing::Size(150, 20);
			txtXacNhan->PasswordChar = '*';
			this->Controls->Add(txtXacNhan);

			Button^ btnXacNhan = gcnew Button();
			btnXacNhan->Text = L"Xác nhận";
			btnXacNhan->Location = Drawing::Point(150, 160);
			btnXacNhan->Click += gcnew EventHandler(this, &DoiMatKhauForm::OnClick);
			this->Controls->Add(btnXacNhan);
		}

		void OnClick(Object^ sender, EventArgs^ e) {
			if (txtMoi->Text != txtXacNhan->Text) {
				MessageBox::Show(L"Mật khẩu mới và xác nhận không khớp!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			String^ filePath = "C:\\Users\\NITRO 5\\Desktop\\qlsv\\quanlysv\\Sinhvien.txt";
			cli::array<String^>^ lines = File::ReadAllLines(filePath);
			bool found = false;

			for (int i = 0; i < lines->Length; i++) {
				cli::array<String^>^ parts = lines[i]->Split('|');
				if (parts->Length == 2 && parts[0] == currentMSSV && parts[1] == txtCu->Text) {
					lines[i] = currentMSSV + "|" + txtMoi->Text;
					found = true;
					break;
				}
			}

			if (found) {
				File::WriteAllLines(filePath, lines);
				MessageBox::Show(L"Đổi mật khẩu thành công!", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			}
			else {
				MessageBox::Show(L"Mật khẩu cũ không đúng!", L"Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};


	/// <summary>
	/// Summary for trangchusv
	/// </summary>
	public ref class trangchusv : public System::Windows::Forms::Form
	{
	public:
		String^ currentMSSV;
		//trangchusv(void)
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//}
		trangchusv(String^ mssv)
		{
			InitializeComponent();
			currentMSSV = mssv;

			// Sau khi khởi tạo component, ta có thể gọi hàm load dữ liệu
			LoadDiemHocTap();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~trangchusv()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmain;
	private: System::Windows::Forms::Panel^ paneltren;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelsystem;
	private: System::Windows::Forms::Label^ systemschool;
	private: System::Windows::Forms::Panel^ panelcovertren;
	private: System::Windows::Forms::Label^ XinChao;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Panel^ panelduoi;




	private: System::Windows::Forms::Panel^ panelgiua;
	private: System::Windows::Forms::DataGridView^ dataGridView1;










	private: System::Windows::Forms::Button^ Doimk;
	private: System::Windows::Forms::Button^ phananh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ STT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ monhoc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lab1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lab2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ bt1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BT2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PRE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FINAL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GPA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ diemchu;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;








































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		void trangchusv::LoadDiemHocTap()
		{
			if (String::IsNullOrEmpty(currentMSSV))
				return;

			dataGridView1->Rows->Clear();

			msclr::interop::marshal_context context;
			std::string mssv_native = context.marshal_as<std::string>(currentMSSV);

			// Xác định thư mục chứa file .dat
			DirectoryInfo^ exeFolder = gcnew DirectoryInfo(Application::StartupPath);
			DirectoryInfo^ prFolder = exeFolder->Parent;
			DirectoryInfo^ pr2Folder = prFolder->Parent;
			String^ quanlysvPath = Path::Combine(pr2Folder->FullName, "quanlysv");
			DirectoryInfo^ projectFolder = gcnew DirectoryInfo(quanlysvPath);
			String^ folderPath = projectFolder->FullName;

			cli::array<String^>^ files = Directory::GetFiles(folderPath, L"*.dat");

			double sumTB_all = 0.0;
			double sumGPA_all = 0.0;
			int countFullCourses = 0;

			int sttCounter = 1; // biến đếm STT tuần tự

			for each (String ^ filePath in files)
			{
				String^ fileName = Path::GetFileName(filePath);
				::monhoc mh;
				{
					std::string native = context.marshal_as<std::string>(filePath);
					mh.setTenFile(native.c_str());
				}
				mh.doc();

				SinhVien* foundSV = mh.timKiemSV(mssv_native.c_str());
				if (foundSV != nullptr)
				{
					bool hasLab1 = (foundSV->getLab1() >= 0);
					bool hasLab2 = (foundSV->getLab2() >= 0);
					bool hasPt1 = (foundSV->getPt1() >= 0);
					bool hasPt2 = (foundSV->getPt2() >= 0);
					bool hasPres = (foundSV->getPresentation() >= 0);
					bool hasFinal = (foundSV->getFinal() >= 0);

					bool hasAllScores = (hasLab1 && hasLab2 && hasPt1 && hasPt2 && hasPres && hasFinal);

					String^ s_lab1 = hasLab1 ? foundSV->getLab1().ToString("F1") : "";
					String^ s_lab2 = hasLab2 ? foundSV->getLab2().ToString("F1") : "";
					String^ s_pt1 = hasPt1 ? foundSV->getPt1().ToString("F1") : "";
					String^ s_pt2 = hasPt2 ? foundSV->getPt2().ToString("F1") : "";
					String^ s_pre = hasPres ? foundSV->getPresentation().ToString("F1") : "";
					String^ s_final = hasFinal ? foundSV->getFinal().ToString("F1") : "";

					String^ s_tb = "";
					String^ s_gpa = "";
					String^ s_diemchu = "";
					if (hasAllScores) {
						foundSV->tinhDiemTrungBinh();
						double tb = foundSV->getTrungBinh();
						double gpa = foundSV->getGpa();
						s_tb = tb.ToString("F1");
						s_gpa = gpa.ToString("F2");
						s_diemchu = gcnew String(foundSV->getDiemChu(), 1);

						sumTB_all += tb;
						sumGPA_all += gpa;
						countFullCourses++;
					}

					// STT: dùng biến đếm sttCounter, tăng dần
					String^ stt = sttCounter.ToString();
					sttCounter++;

					String^ mon = fileName->EndsWith(".dat")
						? fileName->Substring(0, fileName->Length - 4)
						: fileName;

					dataGridView1->Rows->Add(gcnew cli::array<String^> {
						stt,
							mon,
							s_lab1,
							s_lab2,
							s_pt1,
							s_pt2,
							s_pre,
							s_final,
							s_tb,
							s_gpa,
							s_diemchu
					});

					// Không còn phần tô màu
				}
			}

			// Sau khi duyệt xong
			if (countFullCourses > 0) {
				double avgTB = sumTB_all / countFullCourses;
				double avgGPA = sumGPA_all / countFullCourses;
				label1->Text = String::Format(L"Điểm trung bình: {0}", avgTB.ToString("F2"));
				label2->Text = String::Format(L"GPA trung bình: {0}", avgGPA.ToString("F2"));
			}
			else {
				label1->Text = L"Chưa có khóa học đủ điểm để tính trung bình";
				label2->Text = L"";
			}
		}









#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(trangchusv::typeid));
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->panelgiua = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panelduoi = (gcnew System::Windows::Forms::Panel());
			this->Doimk = (gcnew System::Windows::Forms::Button());
			this->phananh = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->panelcovertren = (gcnew System::Windows::Forms::Panel());
			this->XinChao = (gcnew System::Windows::Forms::Label());
			this->paneltren = (gcnew System::Windows::Forms::Panel());
			this->labelsystem = (gcnew System::Windows::Forms::Label());
			this->systemschool = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->STT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->monhoc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lab1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lab2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bt1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BT2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PRE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FINAL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GPA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->diemchu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelmain->SuspendLayout();
			this->panelgiua->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelduoi->SuspendLayout();
			this->panelcovertren->SuspendLayout();
			this->paneltren->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmain
			// 
			this->panelmain->Controls->Add(this->panelgiua);
			this->panelmain->Controls->Add(this->panelduoi);
			this->panelmain->Controls->Add(this->panelcovertren);
			this->panelmain->Controls->Add(this->paneltren);
			this->panelmain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelmain->Location = System::Drawing::Point(0, 0);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(1447, 797);
			this->panelmain->TabIndex = 0;
			// 
			// panelgiua
			// 
			this->panelgiua->Controls->Add(this->dataGridView1);
			this->panelgiua->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelgiua->Location = System::Drawing::Point(0, 247);
			this->panelgiua->Name = L"panelgiua";
			this->panelgiua->Size = System::Drawing::Size(1447, 438);
			this->panelgiua->TabIndex = 8;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->STT, this->monhoc,
					this->lab1, this->lab2, this->bt1, this->BT2, this->PRE, this->FINAL, this->tb, this->GPA, this->diemchu
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1447, 438);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &trangchusv::dataGridView1_CellContentClick);
			// 
			// panelduoi
			// 
			this->panelduoi->BackColor = System::Drawing::Color::Blue;
			this->panelduoi->Controls->Add(this->label2);
			this->panelduoi->Controls->Add(this->label1);
			this->panelduoi->Controls->Add(this->Doimk);
			this->panelduoi->Controls->Add(this->phananh);
			this->panelduoi->Controls->Add(this->Exit);
			this->panelduoi->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelduoi->Location = System::Drawing::Point(0, 685);
			this->panelduoi->Name = L"panelduoi";
			this->panelduoi->Size = System::Drawing::Size(1447, 112);
			this->panelduoi->TabIndex = 7;
			// 
			// Doimk
			// 
			this->Doimk->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Doimk->BackColor = System::Drawing::Color::Lime;
			this->Doimk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Doimk->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Doimk->Location = System::Drawing::Point(102, 38);
			this->Doimk->Name = L"Doimk";
			this->Doimk->Size = System::Drawing::Size(179, 37);
			this->Doimk->TabIndex = 8;
			this->Doimk->Text = L"Đổi mật khẩu";
			this->Doimk->UseVisualStyleBackColor = false;
			this->Doimk->Click += gcnew System::EventHandler(this, &trangchusv::Doimk_Click);
			// 
			// phananh
			// 
			this->phananh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->phananh->BackColor = System::Drawing::Color::Lime;
			this->phananh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->phananh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phananh->Location = System::Drawing::Point(328, 38);
			this->phananh->Name = L"phananh";
			this->phananh->Size = System::Drawing::Size(206, 37);
			this->phananh->TabIndex = 7;
			this->phananh->Text = L"Phản ánh";
			this->phananh->UseVisualStyleBackColor = false;
			this->phananh->Click += gcnew System::EventHandler(this, &trangchusv::phananh_Click);
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Exit->BackColor = System::Drawing::Color::Red;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(1250, 38);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(116, 37);
			this->Exit->TabIndex = 6;
			this->Exit->Text = L"Thoát";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &trangchusv::Exit_Click);
			// 
			// panelcovertren
			// 
			this->panelcovertren->BackColor = System::Drawing::Color::Blue;
			this->panelcovertren->Controls->Add(this->XinChao);
			this->panelcovertren->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelcovertren->Location = System::Drawing::Point(0, 119);
			this->panelcovertren->Name = L"panelcovertren";
			this->panelcovertren->Size = System::Drawing::Size(1447, 128);
			this->panelcovertren->TabIndex = 6;
			// 
			// XinChao
			// 
			this->XinChao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->XinChao->AutoEllipsis = true;
			this->XinChao->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XinChao->ForeColor = System::Drawing::Color::Yellow;
			this->XinChao->Location = System::Drawing::Point(273, 29);
			this->XinChao->Name = L"XinChao";
			this->XinChao->Size = System::Drawing::Size(822, 67);
			this->XinChao->TabIndex = 10;
			this->XinChao->Text = L"KẾT QUẢ HỌC TẬP , RÈN LUYỆN\r\n";
			this->XinChao->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// paneltren
			// 
			this->paneltren->Controls->Add(this->labelsystem);
			this->paneltren->Controls->Add(this->systemschool);
			this->paneltren->Controls->Add(this->pictureBox1);
			this->paneltren->Dock = System::Windows::Forms::DockStyle::Top;
			this->paneltren->Location = System::Drawing::Point(0, 0);
			this->paneltren->Name = L"paneltren";
			this->paneltren->Size = System::Drawing::Size(1447, 119);
			this->paneltren->TabIndex = 0;
			// 
			// labelsystem
			// 
			this->labelsystem->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelsystem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsystem->Location = System::Drawing::Point(180, 57);
			this->labelsystem->Name = L"labelsystem";
			this->labelsystem->Size = System::Drawing::Size(417, 47);
			this->labelsystem->TabIndex = 5;
			this->labelsystem->Text = L"Student information system";
			// 
			// systemschool
			// 
			this->systemschool->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->systemschool->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->systemschool->ForeColor = System::Drawing::Color::Blue;
			this->systemschool->Location = System::Drawing::Point(180, 9);
			this->systemschool->Name = L"systemschool";
			this->systemschool->Size = System::Drawing::Size(417, 48);
			this->systemschool->TabIndex = 4;
			this->systemschool->Text = L"Hệ thống thông tin sinh viên";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// STT
			// 
			this->STT->HeaderText = L"STT";
			this->STT->MinimumWidth = 6;
			this->STT->Name = L"STT";
			// 
			// monhoc
			// 
			this->monhoc->HeaderText = L"Môn";
			this->monhoc->MinimumWidth = 6;
			this->monhoc->Name = L"monhoc";
			// 
			// lab1
			// 
			this->lab1->HeaderText = L"LAB1";
			this->lab1->MinimumWidth = 6;
			this->lab1->Name = L"lab1";
			// 
			// lab2
			// 
			this->lab2->HeaderText = L"LAB2";
			this->lab2->MinimumWidth = 6;
			this->lab2->Name = L"lab2";
			// 
			// bt1
			// 
			this->bt1->HeaderText = L"BT1";
			this->bt1->MinimumWidth = 6;
			this->bt1->Name = L"bt1";
			// 
			// BT2
			// 
			this->BT2->HeaderText = L"BT2";
			this->BT2->MinimumWidth = 6;
			this->BT2->Name = L"BT2";
			// 
			// PRE
			// 
			this->PRE->HeaderText = L"PRESENTATION";
			this->PRE->MinimumWidth = 6;
			this->PRE->Name = L"PRE";
			// 
			// FINAL
			// 
			this->FINAL->HeaderText = L"FINAL";
			this->FINAL->MinimumWidth = 6;
			this->FINAL->Name = L"FINAL";
			// 
			// tb
			// 
			this->tb->HeaderText = L"Điểm TB";
			this->tb->MinimumWidth = 6;
			this->tb->Name = L"tb";
			// 
			// GPA
			// 
			this->GPA->HeaderText = L"GPA";
			this->GPA->MinimumWidth = 6;
			this->GPA->Name = L"GPA";
			// 
			// diemchu
			// 
			this->diemchu->HeaderText = L"Điểm Chữ";
			this->diemchu->MinimumWidth = 6;
			this->diemchu->Name = L"diemchu";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(608, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Điểm trung bình:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(608, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 29);
			this->label2->TabIndex = 10;
			this->label2->Text = L"GPA:";
			// 
			// trangchusv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1447, 797);
			this->Controls->Add(this->panelmain);
			this->Name = L"trangchusv";
			this->Text = L"trangchusv";
			this->Load += gcnew System::EventHandler(this, &trangchusv::trangchusv_Load);
			this->panelmain->ResumeLayout(false);
			this->panelgiua->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelduoi->ResumeLayout(false);
			this->panelduoi->PerformLayout();
			this->panelcovertren->ResumeLayout(false);
			this->paneltren->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void picschool_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void trangchusv_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Doimk_Click(System::Object^ sender, System::EventArgs^ e) {
	DoiMatKhauForm^ doiMatKhau = gcnew DoiMatKhauForm(this->currentMSSV);
	doiMatKhau->ShowDialog();
}
private: System::Void phananh_Click(System::Object^ sender, System::EventArgs^ e) {
	// Chuẩn bị danh sách tên môn từ dataGridView1
	List<String^>^ courses = gcnew List<String^>();
	for each (DataGridViewRow ^ row in dataGridView1->Rows) {
		if (row->IsNewRow) continue;
		// Giả sử cột tên môn có Name = "monhoc"
		Object^ cell = row->Cells["monhoc"]->Value;
		if (cell != nullptr) {
			String^ tenMon = cell->ToString()->Trim();
			if (!String::IsNullOrEmpty(tenMon) && !courses->Contains(tenMon)) {
				courses->Add(tenMon);
			}
		}
	}
	if (courses->Count == 0) {
		MessageBox::Show(L"Không có môn để phản ánh.", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	// Mở form PhanAnhForm, truyền MSSV và danh sách môn
	PhanAnhForm^ form = gcnew PhanAnhForm(this->currentMSSV, courses);
	form->ShowDialog();
	// Nội dung phản ánh đã được lưu trong save_Click của form
}
};
}
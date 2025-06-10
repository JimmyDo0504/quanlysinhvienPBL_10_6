#pragma once
using namespace Microsoft::VisualBasic;
#include <msclr/marshal_cppstd.h>
#include "monhoc.h"

namespace quanlysv {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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






	private: System::Windows::Forms::Panel^ panelgiua;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ STT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ monhoc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lab1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lab2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ bt1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BT2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PRE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FINAL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ diemchu;
	private: System::Windows::Forms::Panel^ panelduoi;
	private: System::Windows::Forms::Button^ Exit;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		void trangchusv::LoadDiemHocTap()
		{
			if (String::IsNullOrEmpty(currentMSSV))
				return;

			dataGridView1->Rows->Clear();

			// Lấy MSSV dưới dạng std::string
			msclr::interop::marshal_context context;
			std::string mssv_native = context.marshal_as<std::string>(currentMSSV);

			// ==== Bước quan trọng: Lấy đúng thư mục 'quanlysv' thay vì chỉ Debug ====

			String^ startup = Application::StartupPath;
			// startup ví dụ: "C:\\…\\quanlysv\\x64\\Debug"
			String^ projectFolder = Path::GetFullPath(Path::Combine(startup, L"..\\..\\"));
			// projectFolder => "C:\\…\\quanlysv"

			// Lấy tất cả file .dat trong 'quanlysv'
			cli::array<String^>^ files = Directory::GetFiles(projectFolder, L"*.dat");

			//// ======== (debug) kiểm tra xem đã thực sự có files chưa ========
			//{
			//	int cnt = files->Length;
			//	String^ debugMsg = String::Format(
			//		L"Đang quét thư mục:\n{0}\n => Tìm thấy {1} file .dat",
			//		projectFolder,
			//		cnt
			//	);
			//	MessageBox::Show(debugMsg, L"Debug - Folder .dat", MessageBoxButtons::OK, MessageBoxIcon::Information);
			//}
			//// ===============================================================

			for each (String ^ filePath in files)
			{
				String^ fileName = Path::GetFileName(filePath);

				::monhoc mh;
				{
					std::string fullNative = context.marshal_as<std::string>(filePath);
					strcpy(mh.tenmonhoc, fullNative.c_str());
				}

				mh.doc();

				//// Thông báo mỗi khi đọc xong file
				//{
				//	String^ mon = fileName->EndsWith(".dat")
				//		? fileName->Substring(0, fileName->Length - 4)
				//		: fileName;
				//	String^ msg = String::Format(
				//		L"Đã đọc file môn: {0}\nSố SV trong file: {1}",
				//		mon,
				//		mh.n
				//	);
				//	MessageBox::Show(msg, L"Thông báo",
				//		MessageBoxButtons::OK,
				//		MessageBoxIcon::Information);
				//}

				// Tìm SV theo MSSV
				SinhVien* foundSV = mh.timKiemSV(mssv_native.c_str());
				if (foundSV != nullptr)
				{
					foundSV->tinhDiemTrungBinh();

					String^ stt = (dataGridView1->Rows->Count + 1).ToString();
					String^ mon = fileName->EndsWith(".dat")
						? fileName->Substring(0, fileName->Length - 4)
						: fileName;

					String^ s_lab1 = foundSV->lab1.ToString();
					String^ s_lab2 = foundSV->lab2.ToString();
					String^ s_pt1 = foundSV->pt1.ToString();
					String^ s_pt2 = foundSV->pt2.ToString();
					String^ s_pre = foundSV->presentation.ToString();
					String^ s_final = foundSV->final.ToString();
					String^ s_tb = foundSV->trung_binh.ToString();
					String^ s_diemchu = gcnew String(foundSV->diemchu, 1);

					dataGridView1->Rows->Add(gcnew cli::array<String^> {
						stt, mon, s_lab1, s_lab2,
							s_pt1, s_pt2, s_pre, s_final,
							s_tb, s_diemchu
					});
				}
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
			this->STT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->monhoc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lab1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lab2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bt1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BT2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PRE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FINAL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->diemchu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelcovertren = (gcnew System::Windows::Forms::Panel());
			this->XinChao = (gcnew System::Windows::Forms::Label());
			this->paneltren = (gcnew System::Windows::Forms::Panel());
			this->labelsystem = (gcnew System::Windows::Forms::Label());
			this->systemschool = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->panelduoi = (gcnew System::Windows::Forms::Panel());
			this->panelmain->SuspendLayout();
			this->panelgiua->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelcovertren->SuspendLayout();
			this->paneltren->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelduoi->SuspendLayout();
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
			this->panelmain->Size = System::Drawing::Size(1308, 797);
			this->panelmain->TabIndex = 0;
			// 
			// panelgiua
			// 
			this->panelgiua->Controls->Add(this->dataGridView1);
			this->panelgiua->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelgiua->Location = System::Drawing::Point(0, 247);
			this->panelgiua->Name = L"panelgiua";
			this->panelgiua->Size = System::Drawing::Size(1308, 438);
			this->panelgiua->TabIndex = 8;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->STT, this->monhoc,
					this->lab1, this->lab2, this->bt1, this->BT2, this->PRE, this->FINAL, this->tb, this->diemchu
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1505, 438);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &trangchusv::dataGridView1_CellContentClick);
			// 
			// STT
			// 
			this->STT->HeaderText = L"STT";
			this->STT->MinimumWidth = 6;
			this->STT->Name = L"STT";
			this->STT->Width = 125;
			// 
			// monhoc
			// 
			this->monhoc->HeaderText = L"Môn";
			this->monhoc->MinimumWidth = 6;
			this->monhoc->Name = L"monhoc";
			this->monhoc->Width = 125;
			// 
			// lab1
			// 
			this->lab1->HeaderText = L"LAB1";
			this->lab1->MinimumWidth = 6;
			this->lab1->Name = L"lab1";
			this->lab1->Width = 125;
			// 
			// lab2
			// 
			this->lab2->HeaderText = L"LAB2";
			this->lab2->MinimumWidth = 6;
			this->lab2->Name = L"lab2";
			this->lab2->Width = 125;
			// 
			// bt1
			// 
			this->bt1->HeaderText = L"BT1";
			this->bt1->MinimumWidth = 6;
			this->bt1->Name = L"bt1";
			this->bt1->Width = 125;
			// 
			// BT2
			// 
			this->BT2->HeaderText = L"BT2";
			this->BT2->MinimumWidth = 6;
			this->BT2->Name = L"BT2";
			this->BT2->Width = 125;
			// 
			// PRE
			// 
			this->PRE->HeaderText = L"PRESENTATION";
			this->PRE->MinimumWidth = 6;
			this->PRE->Name = L"PRE";
			this->PRE->Width = 125;
			// 
			// FINAL
			// 
			this->FINAL->HeaderText = L"FINAL";
			this->FINAL->MinimumWidth = 6;
			this->FINAL->Name = L"FINAL";
			this->FINAL->Width = 125;
			// 
			// tb
			// 
			this->tb->HeaderText = L"Điểm TB";
			this->tb->MinimumWidth = 6;
			this->tb->Name = L"tb";
			this->tb->Width = 125;
			// 
			// diemchu
			// 
			this->diemchu->HeaderText = L"Điểm Chữ";
			this->diemchu->MinimumWidth = 6;
			this->diemchu->Name = L"diemchu";
			this->diemchu->Width = 125;
			// 
			// panelcovertren
			// 
			this->panelcovertren->BackColor = System::Drawing::Color::Blue;
			this->panelcovertren->Controls->Add(this->XinChao);
			this->panelcovertren->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelcovertren->Location = System::Drawing::Point(0, 119);
			this->panelcovertren->Name = L"panelcovertren";
			this->panelcovertren->Size = System::Drawing::Size(1308, 128);
			this->panelcovertren->TabIndex = 6;
			// 
			// XinChao
			// 
			this->XinChao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->XinChao->AutoEllipsis = true;
			this->XinChao->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XinChao->ForeColor = System::Drawing::Color::Yellow;
			this->XinChao->Location = System::Drawing::Point(204, 29);
			this->XinChao->Name = L"XinChao";
			this->XinChao->Size = System::Drawing::Size(846, 67);
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
			this->paneltren->Size = System::Drawing::Size(1308, 119);
			this->paneltren->TabIndex = 0;
			// 
			// labelsystem
			// 
			this->labelsystem->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelsystem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsystem->Location = System::Drawing::Point(180, 57);
			this->labelsystem->Name = L"labelsystem";
			this->labelsystem->Size = System::Drawing::Size(441, 47);
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
			this->systemschool->Size = System::Drawing::Size(441, 48);
			this->systemschool->TabIndex = 4;
			this->systemschool->Text = L"Hệ thống thông tin sinh viên";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(159, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Exit->BackColor = System::Drawing::Color::Red;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(963, 45);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(140, 37);
			this->Exit->TabIndex = 6;
			this->Exit->Text = L"Thoát";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &trangchusv::Exit_Click);
			// 
			// panelduoi
			// 
			this->panelduoi->BackColor = System::Drawing::Color::Blue;
			this->panelduoi->Controls->Add(this->Exit);
			this->panelduoi->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelduoi->Location = System::Drawing::Point(0, 685);
			this->panelduoi->Name = L"panelduoi";
			this->panelduoi->Size = System::Drawing::Size(1308, 112);
			this->panelduoi->TabIndex = 7;
			// 
			// trangchusv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1308, 797);
			this->Controls->Add(this->panelmain);
			this->Name = L"trangchusv";
			this->Text = L"trangchusv";
			this->panelmain->ResumeLayout(false);
			this->panelgiua->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelcovertren->ResumeLayout(false);
			this->paneltren->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelduoi->ResumeLayout(false);
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
};
}

// monhoc.h
#ifndef MONHOC_H
#define MONHOC_H

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

#define MAX_STUDENT 40

class giangvien {
public:
	giangvien() {
		strcpy(magv, "GV000"); // Mã giảng viên mặc định
		n = 0; // Số lượng môn học ban đầu
	}
    char magv[10];
    wchar_t hoten[30];
    int n; // Số lượng môn học
    wchar_t sodienthoai[15];
	wchar_t email[50];
};
class SinhVien {
public:
    char mssv[10];
    // Thay vì char hoTen[30];
    wchar_t hoTen[30];
    float lab1, lab2, pt1, pt2, presentation, final, trung_binh;
    char diemchu;
    float gpa;



    void tinhDiemTrungBinh() {
        trung_binh = (lab1 + lab2 + pt1 + pt2 + presentation + final) / 6;
        tinhdiemchu();
    }
    void tinhdiemchu() {
        if (trung_binh >= 8.5) {
            diemchu = 'A';
            gpa = 4.0;
        }
        else if (trung_binh >= 7.8) {
            diemchu = 'B';
            gpa = 3.5;
        }
        else if (trung_binh >= 7.0) {
            diemchu = 'B';
            gpa = 3.0;
        }
        else if (trung_binh >= 6.3) {
            diemchu = 'C';
            gpa = 2.5;
        }
        else if (trung_binh >= 5.5) {
            diemchu = 'C';
            gpa = 2.0;
        }
        else if (trung_binh >= 4.0) {
            diemchu = 'D';
            gpa = 1.0;
        }
        else {
            diemchu = 'F';
            gpa = 0.0;
        }
    }
};

class monhoc {
public:
	giangvien gv; // Giảng viên dạy môn học
    SinhVien sv[MAX_STUDENT];
    int n; // số lượng sinh viên
    char tenmonhoc[3000]; // tên file lưu trữ
    monhoc() {
		n = 0;
		strcpy(tenmonhoc, "monhoc.dat");
		strcpy(gv.magv, "GV000"); // Mã giảng viên mặc định
    }
    monhoc(giangvien gv) {
        n = 0;
        strcpy(tenmonhoc, "monhoc.dat");
		this->gv = gv; // Lưu giảng viên dạy môn học
    }

    void themSV() {
        if (n < MAX_STUDENT) {
            //sv[n].nhap();
            n++;
            luu();
        }
        else {
            cout << "Danh sach da day" << endl;
        }
    }

    // Hàm tìm kiếm sinh viên theo mã (trả về chỉ số nếu tìm thấy, ngược lại trả về -1)
    int timSV(const char* mssv) {
        for (int i = 0; i < n; i++) {
            if (strcmp(sv[i].mssv, mssv) == 0)
                return i;
        }
        return -1;
    }

    // Hàm sửa thông tin sinh viên dựa trên mã
    // Trả về true nếu sửa thành công, false nếu không tìm thấy
    bool suaSV(const char* mssv, const SinhVien& newSV) {
        int index = timSV(mssv);
        if (index != -1) {
            sv[index] = newSV;
            luu();
            return true;
        }
        else {
            cout << "Khong tim thay sinh vien voi ma " << mssv << endl;
            return false;
        }
    }

    // Hàm xóa sinh viên theo mã
    // Trả về true nếu xóa thành công, false nếu không tìm thấy
    bool xoaSV(const char* mssv) {
        int index = timSV(mssv);
        if (index != -1) {
            for (int i = index; i < n - 1; i++) {
                sv[i] = sv[i + 1];
            }
            n--;
            luu();
            return true;
        }
        else {
            cout << "Khong tim thay sinh vien voi ma " << mssv << endl;
            return false;
        }
    }

    // Hàm tìm sinh viên (trả về con trỏ đến SinhVien nếu tìm thấy, ngược lại trả về nullptr)
    SinhVien* timKiemSV(const char* mssv) {
        int index = timSV(mssv);
        if (index != -1)
            return &sv[index];
        return nullptr;
    }

    /*void indanhsachSV() {
        if (n == 0) {
            cout << "Danh sach rong" << endl;
            return;
        }
        for (int i = 0; i < n; i++) {
            sv[i].xuat();
        }
    }*/

    void luu() {
        FILE* f = fopen(tenmonhoc, "wb");
        if (f == NULL) {
            cout << "Khong the mo file" << endl;
            return;
        }
        fwrite(&n, sizeof(int), 1, f);
        fwrite(sv, sizeof(SinhVien), n, f);
        fclose(f);
    }

    void doc() {
        FILE* f = fopen(tenmonhoc, "rb");
        if (f == NULL) {
            cout << "Khong the mo file" << endl;
            return;
        }
        fread(&n, sizeof(int), 1, f);
        fread(sv, sizeof(SinhVien), n, f);
        fclose(f);
    }

    void sapxep(bool ascending = true) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (ascending) {
                    if (sv[i].trung_binh > sv[j].trung_binh) {
                        SinhVien temp = sv[i];
                        sv[i] = sv[j];
                        sv[j] = temp;
                    }
                }
                else {
                    if (sv[i].trung_binh < sv[j].trung_binh) {
                        SinhVien temp = sv[i];
                        sv[i] = sv[j];
                        sv[j] = temp;
                    }
                }
            }
        }
        luu();
    }
};
class Danhsachgiangvien {
public:
    int n;
	giangvien ds[50]; // danh sach toan bo giang vien
	Danhsachgiangvien(){
		n = 0; // Khởi tạo số lượng giảng viên là 0
    }
	void themGiangVien(const giangvien& gv) {
		if (n < 50) {
			ds[n++] = gv;
		}
		else {
			cout << "Danh sach giang vien da day." << endl;
		}
	}
	giangvien* timKiemGiangVien(const char* magv) {
		for (int i = 0; i < n; i++) {
			if (strcmp(ds[i].magv, magv) == 0) {
				return &ds[i];
			}
		}
		return nullptr;
	}
	void xoagiangvien(const char* magv) {
		for (int i = 0; i < n; i++) {
			if (strcmp(ds[i].magv, magv) == 0) {
				for (int j = i; j < n - 1; j++) {
					ds[j] = ds[j + 1];
				}
				n--;
				return;
			}
		}
		cout << "Khong tim thay giang vien voi ma " << magv << endl;
	}
	void luudanhsachgv() const {
		FILE* f = fopen("danhsachgiangvien.dat", "wb");
		if (f == NULL) {
			cout << "Khong the mo file" << endl;
			return;
		}
		fwrite(&n, sizeof(int), 1, f);
		fwrite(ds, sizeof(giangvien), n, f);
		fclose(f);
	}
	void docdanhsachgv() {
		FILE* f = fopen("danhsachgiangvien.dat", "rb");
		if (f == NULL) {
			cout << "Khong the mo file" << endl;
			return;
		}
		fread(&n, sizeof(int), 1, f);
		fread(ds, sizeof(giangvien), n, f);
		fclose(f);
	}
};

class phan_anh {
public:
    SinhVien nguoi_goi;
	wchar_t noi_dung[1000];
    wchar_t thoi_gian[64];
	wchar_t tenmonhoc[100];
};
class danhsachphananh {
public:
    int n;
    phan_anh danhsachPA[100];
	danhsachphananh() {
		n = 0; // Khởi tạo số lượng phản ánh là 0
	}
	void themPhanAnh(const phan_anh& pa) {
		if (n < 100) {
			danhsachPA[n++] = pa;
		}
		else {
			cout << "Danh sach phan anh da day." << endl;
		}
	}
	void luu() {
		FILE* f = fopen("danhsachphananh.dat", "wb");
		if (f == NULL) {
			cout << "Khong the mo file" << endl;
			return;
		}
		fwrite(&n, sizeof(int), 1, f);
		fwrite(danhsachPA, sizeof(phan_anh), n, f);
		fclose(f);
	}
    void doc() {
        FILE* f = fopen("danhsachphananh.dat", "rb");
        if (f == NULL) {
            cout << "Khong the mo file" << endl;
            return;
        }
        fread(&n, sizeof(int), 1, f);
        fread(danhsachPA, sizeof(phan_anh), n, f);
        fclose(f);
    }
	void xoaPhanAnh(int index) {
		if (index < 0 || index >= n) {
			cout << "Chi so khong hop le." << endl;
			return;
		}
		for (int i = index; i < n - 1; i++) {
			danhsachPA[i] = danhsachPA[i + 1];
		}
		n--;
		luu();
	}
};
#endif // MONHOC_H
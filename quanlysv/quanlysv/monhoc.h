// monhoc.h
#ifndef MONHOC_H
#define MONHOC_H

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

#define MAX_STUDENT 40

class SinhVien {
public:
    char mssv[10];
    // Thay vì char hoTen[30];
    wchar_t hoTen[30];
    float lab1, lab2, pt1, pt2, presentation, final, trung_binh;
    char diemchu;



    void tinhDiemTrungBinh() {
        trung_binh = (lab1 + lab2 + pt1 + pt2 + presentation + final) / 6;
        tinhdiemchu();
    }

    void tinhdiemchu() {
        if (trung_binh >= 9)
            diemchu = 'A';
        else if (trung_binh >= 8)
            diemchu = 'B';
        else if (trung_binh >= 7)
            diemchu = 'C';
        else if (trung_binh >= 6)
            diemchu = 'D';
        else
            diemchu = 'F';
    }
};

class monhoc {
public:
    SinhVien sv[MAX_STUDENT];
    int n; // số lượng sinh viên
    char tenmonhoc[3000]; // tên file lưu trữ

    monhoc() {
        n = 0;
        strcpy(tenmonhoc, "monhoc.dat");
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

#endif // MONHOC_H

#ifndef MONHOC_H
#define MONHOC_H

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

#define MAX_STUDENT 40
#define MAX_GV 50
#define MAX_PA 100

class giangvien {
private:
    char magv[10];
    wchar_t hoten[30];
    int n; // số lượng môn học
    wchar_t sodienthoai[15];
    wchar_t email[50];

public:
    giangvien() {
        strcpy(magv, "GV000");
        n = 0;
        memset(hoten, 0, sizeof(hoten));
        memset(sodienthoai, 0, sizeof(sodienthoai));
        memset(email, 0, sizeof(email));
    }
    // getters
    const char* getMagv() const { return magv; }
    const wchar_t* getHoten() const { return hoten; }
    int getSoLuongMon() const { return n; }
    const wchar_t* getSodienthoai() const { return sodienthoai; }
    const wchar_t* getEmail() const { return email; }
    // setters
    void setMagv(const char* m) {
        strncpy(magv, m, sizeof(magv));
        magv[sizeof(magv) - 1] = '\0';
    }
    void setHoten(const wchar_t* ht) {
        wcsncpy(hoten, ht, sizeof(hoten) / sizeof(wchar_t));
        hoten[(sizeof(hoten) / sizeof(wchar_t)) - 1] = L'\0';
    }
    void setSoLuongMon(int count) { n = count; }
    void setSodienthoai(const wchar_t* sd) {
        wcsncpy(sodienthoai, sd, sizeof(sodienthoai) / sizeof(wchar_t));
        sodienthoai[(sizeof(sodienthoai) / sizeof(wchar_t)) - 1] = L'\0';
    }
    void setEmail(const wchar_t* em) {
        wcsncpy(email, em, sizeof(email) / sizeof(wchar_t));
        email[(sizeof(email) / sizeof(wchar_t)) - 1] = L'\0';
    }
};

class SinhVien {
private:
    char mssv[10];
    wchar_t hoTen[30];
    float lab1, lab2, pt1, pt2, presentation, final, trung_binh;
    char diemchu;
    float gpa;

public:

    void tinhdiemchu() {
        if (trung_binh >= 8.5f) { diemchu = 'A'; gpa = 4.0f; }
        else if (trung_binh >= 7.8f) { diemchu = 'B'; gpa = 3.5f; }
        else if (trung_binh >= 7.0f) { diemchu = 'B'; gpa = 3.0f; }
        else if (trung_binh >= 6.3f) { diemchu = 'C'; gpa = 2.5f; }
        else if (trung_binh >= 5.5f) { diemchu = 'C'; gpa = 2.0f; }
        else if (trung_binh >= 4.0f) { diemchu = 'D'; gpa = 1.0f; }
        else { diemchu = 'F'; gpa = 0.0f; }
    }

    SinhVien()
        : lab1(0), lab2(0), pt1(0), pt2(0), presentation(0), final(0), trung_binh(0), diemchu('F'), gpa(0) {
        memset(mssv, 0, sizeof(mssv));
        memset(hoTen, 0, sizeof(hoTen));
    }
    // getters
    const char* getMssv() const { return mssv; }
    const wchar_t* getHoTen() const { return hoTen; }
    float getTrungBinh() const { return trung_binh; }
    char getDiemChu() const { return diemchu; }
    float getGpa() const { return gpa; }
	float getLab1() const { return lab1; }
	float getLab2() const { return lab2; }
	float getPt1() const { return pt1; }
	float getPt2() const { return pt2; }
	float getPresentation() const { return presentation; }
	float getFinal() const { return final; }

    // setters
    void setMssv(const char* m) {
        strncpy(mssv, m, sizeof(mssv));
        mssv[sizeof(mssv) - 1] = '\0';
    }
    void setHoTen(const wchar_t* ht) {
        wcsncpy(hoTen, ht, sizeof(hoTen) / sizeof(wchar_t));
        hoTen[(sizeof(hoTen) / sizeof(wchar_t)) - 1] = L'\0';
    }
    void setScores(float l1, float l2, float p1, float p2, float pres, float fin) {
        lab1 = l1; lab2 = l2; pt1 = p1; pt2 = p2; presentation = pres; final = fin;
        tinhDiemTrungBinh();
    }
    void tinhDiemTrungBinh() {
        trung_binh = (lab1 + lab2 + pt1 + pt2 + presentation + final) / 6.0f;
        tinhdiemchu();
    }
	void setLab1(float score) { lab1 = score; tinhDiemTrungBinh(); }
	void setLab2(float score) { lab2 = score; tinhDiemTrungBinh(); }
	void setPt1(float score) { pt1 = score; tinhDiemTrungBinh(); }
	void setPt2(float score) { pt2 = score; tinhDiemTrungBinh(); }
	void setPresentation(float score) { presentation = score; tinhDiemTrungBinh(); }
	void setFinal(float score) { final = score; tinhDiemTrungBinh(); }
};

class monhoc {
private:
    giangvien gv;
    SinhVien sv[MAX_STUDENT];
    int n;
    char tenmonhoc[3000];
public:

    void luu() const {
        FILE* f = fopen(tenmonhoc, "wb");
        if (!f) {
            cout << "Khong the mo file" << endl;
            return;
        }
        fwrite(&n, sizeof(int), 1, f);
        fwrite(sv, sizeof(SinhVien), n, f);
        fclose(f);
    }
    void doc() {
        FILE* f = fopen(tenmonhoc, "rb");
        if (!f) {
            cout << "Khong the mo file" << endl;
            return;
        }
        fread(&n, sizeof(int), 1, f);
        fread(sv, sizeof(SinhVien), n, f);
        fclose(f);
    }
    monhoc() : n(0) {
        strcpy(tenmonhoc, "monhoc.dat");
        gv.setMagv("GV000");
    }
    monhoc(const giangvien& gv_) : gv(gv_), n(0) {
        strcpy(tenmonhoc, "monhoc.dat");
    }
    // getters
    const giangvien& getGiangVien() const { return gv; }
    const SinhVien* getSinhVienList() const { return sv; }
    int getSoLuongSV() const { return n; }
    const char* getTenFile() const { return tenmonhoc; }
    // setters
    void setGiangVien(const giangvien& g) { gv = g; }
    void setSoLuongSV(int count) { n = count; }
    void setTenFile(const char* fname) {
        strncpy(tenmonhoc, fname, sizeof(tenmonhoc));
        tenmonhoc[sizeof(tenmonhoc) - 1] = '\0';
    }
    // existing methods
    void themSV() {
        if (n < MAX_STUDENT) {
            n++;
            luu();
        }
        else cout << "Danh sach da day" << endl;
    }
    int timSV(const char* m) const {
        for (int i = 0; i < n; ++i)
            if (strcmp(sv[i].getMssv(), m) == 0)
                return i;
        return -1;
    }
    bool suaSV(const char* m, const SinhVien& sNew) {
        int idx = timSV(m);
        if (idx >= 0) {
            sv[idx] = sNew;
            luu();
            return true;
        }
        cout << "Khong tim thay sinh vien voi ma " << m << endl;
        return false;
    }
    bool xoaSV(const char* m) {
        int idx = timSV(m);
        if (idx >= 0) {
            for (int i = idx; i < n - 1; ++i)
                sv[i] = sv[i + 1];
            --n;
            luu();
            return true;
        }
        cout << "Khong tim thay sinh vien voi ma " << m << endl;
        return false;
    }
    SinhVien* timKiemSV(const char* m) {
        int idx = timSV(m);
        return (idx >= 0 ? &sv[idx] : nullptr);
    }
    void sapxep(bool ascending = true) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if ((ascending && sv[i].getTrungBinh() > sv[j].getTrungBinh()) ||
                    (!ascending && sv[i].getTrungBinh() < sv[j].getTrungBinh())) {
                    SinhVien tmp = sv[i];
                    sv[i] = sv[j];
                    sv[j] = tmp;
                }
            }
        }
        luu();
    }
};

class Danhsachgiangvien {
private:
    int n;
    giangvien ds[MAX_GV];
public:
    Danhsachgiangvien() : n(0) {}
	// getters
	int getn() const { return n; }
	const giangvien* getGiangVienList() const { return ds; }
    // methods
    void themGiangVien(const giangvien& g) {
        if (n < MAX_GV) ds[n++] = g;
        else cout << "Danh sach giang vien da day." << endl;
    }
    giangvien* timKiemGiangVien(const char* m) {
        for (int i = 0; i < n; ++i)
            if (strcmp(ds[i].getMagv(), m) == 0)
                return &ds[i];
        return nullptr;
    }
    void xoagiangvien(const char* m) {
        for (int i = 0; i < n; ++i) {
            if (strcmp(ds[i].getMagv(), m) == 0) {
                for (int j = i; j < n - 1; ++j)
                    ds[j] = ds[j + 1];
                --n;
                return;
            }
        }
        cout << "Khong tim thay giang vien voi ma " << m << endl;
    }
    void luudanhsachgv() const {
        FILE* f = fopen("danhsachgiangvien.dat", "wb");
        if (!f) { cout << "Khong the mo file" << endl; return; }
        fwrite(&n, sizeof(int), 1, f);
        fwrite(ds, sizeof(giangvien), n, f);
        fclose(f);
    }
    void docdanhsachgv() {
        FILE* f = fopen("danhsachgiangvien.dat", "rb");
        if (!f) { cout << "Khong the mo file" << endl; return; }
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
private:
    int n;
    phan_anh danhsachPA[MAX_PA];
public:
    danhsachphananh() : n(0) {}
    // getters
	int getSoLuongPA() const { return n; }
	const phan_anh* getPhanAnhList() const { return danhsachPA; }
    void themPhanAnh(const phan_anh& pa) {
        if (n < MAX_PA) danhsachPA[n++] = pa;
        else cout << "Danh sach phan anh da day." << endl;
    }
    void xoaPhanAnh(int index) {
        if (index < 0 || index >= n) {
            cout << "Chi so khong hop le." << endl;
            return;
        }
        for (int i = index; i < n - 1; ++i)
            danhsachPA[i] = danhsachPA[i + 1];
        --n;
        luu();
    }
    void luu() const {
        FILE* f = fopen("danhsachphananh.dat", "wb");
        if (!f) { cout << "Khong the mo file" << endl; return; }
        fwrite(&n, sizeof(int), 1, f);
        fwrite(danhsachPA, sizeof(phan_anh), n, f);
        fclose(f);
    }
    void doc() {
        FILE* f = fopen("danhsachphananh.dat", "rb");
        if (!f) { cout << "Khong the mo file" << endl; return; }
        fread(&n, sizeof(int), 1, f);
        fread(danhsachPA, sizeof(phan_anh), n, f);
        fclose(f);
    }
};

#endif // MONHOC_H

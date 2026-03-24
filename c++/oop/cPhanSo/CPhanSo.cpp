#include "cPhanSo.h"
#include <iostream>
#include <cmath>

using namespace std;

// Default constructor — khởi tạo phân số 0/1
cPhanSo::cPhanSo() : iTuSo(0), iMauSo(1) {
    cout << "[Constructor] Tao phan so mac dinh: 0/1\n";
}

// Parameterized constructor — nhận tử số và mẫu số
cPhanSo::cPhanSo(int tuSo, int mauSo) : iTuSo(tuSo), iMauSo(mauSo) {
    if (mauSo == 0) {
        cout << "[Constructor] Canh bao: mau so = 0, dat lai thanh 1!\n";
        iMauSo = 1;
    }
    RutGon();
    cout << "[Constructor] Tao phan so: ";
    Xuat();
    cout << "\n";
}

// Copy constructor — sao chép từ phân số khác
cPhanSo::cPhanSo(const cPhanSo& other) : iTuSo(other.iTuSo), iMauSo(other.iMauSo) {
    cout << "[Copy Constructor] Sao chep phan so: ";
    Xuat();
    cout << "\n";
}

// Destructor
cPhanSo::~cPhanSo() {
    cout << "Almost deleted: ";
    Xuat();
    cout << "\n";
}

// Private: tìm ước chung lớn nhất
int cPhanSo::timUCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Nhập phân số
void cPhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> iTuSo;
    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> iMauSo;
        if (iMauSo == 0)
            cout << "Mau so phai khac 0. Vui long nhap lai!\n";
    } while (iMauSo == 0);
}

// Xuất phân số (đã rút gọn)
void cPhanSo::Xuat() const {
    cPhanSo temp = *this;
    temp.RutGon();
    if (temp.iMauSo == 1)       cout << temp.iTuSo;
    else if (temp.iMauSo == -1) cout << -temp.iTuSo;
    else                        cout << temp.iTuSo << "/" << temp.iMauSo;
}

// Rút gọn phân số
void cPhanSo::RutGon() {
    if (iTuSo == 0) { iMauSo = 1; return; }
    int ucln = timUCLN(iTuSo, iMauSo);
    iTuSo  /= ucln;
    iMauSo /= ucln;
    if (iMauSo < 0) {   // đưa dấu trừ lên tử
        iTuSo  = -iTuSo;
        iMauSo = -iMauSo;
    }
}

// Kiểm tra phân số có bằng 0 không (dùng để chặn phép chia)
bool cPhanSo::LaBang0() const {
    return iTuSo == 0;
}

// Cộng
cPhanSo cPhanSo::Cong(cPhanSo b) {
    cPhanSo kq;
    kq.iTuSo  = iTuSo * b.iMauSo + b.iTuSo * iMauSo;
    kq.iMauSo = iMauSo * b.iMauSo;
    kq.RutGon();
    return kq;
}

// Trừ
cPhanSo cPhanSo::Tru(cPhanSo b) {
    cPhanSo kq;
    kq.iTuSo  = iTuSo * b.iMauSo - b.iTuSo * iMauSo;
    kq.iMauSo = iMauSo * b.iMauSo;
    kq.RutGon();
    return kq;
}

// Nhân
cPhanSo cPhanSo::Nhan(cPhanSo b) {
    cPhanSo kq;
    kq.iTuSo  = iTuSo  * b.iTuSo;
    kq.iMauSo = iMauSo * b.iMauSo;
    kq.RutGon();
    return kq;
}

// Chia
cPhanSo cPhanSo::Chia(cPhanSo b) {
    cPhanSo kq;
    kq.iTuSo  = iTuSo  * b.iMauSo;
    kq.iMauSo = iMauSo * b.iTuSo;
    kq.RutGon();
    return kq;
}
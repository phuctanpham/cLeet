#pragma once
#include <cmath>

class cPhanSo {
private:
    int iTuSo;
    int iMauSo;

    int timUCLN(int a, int b);

public:
    cPhanSo();                       // Default constructor
    cPhanSo(int tuSo, int mauSo);    // Parameterized constructor
    cPhanSo(const cPhanSo& other);   // Copy constructor
    ~cPhanSo();                      // Destructor

    void Nhap();
    void Xuat() const;
    void RutGon();

    bool LaBang0() const;

    cPhanSo Cong(cPhanSo b);        // or cPhanSo Cong(const cPhanSo& b);
    cPhanSo Tru(cPhanSo b);         // or cPhanSo Tru(const cPhanSo& b);
    cPhanSo Nhan(cPhanSo b);        // or cPhanSo Nhan(const cPhanSo& b);
    cPhanSo Chia(cPhanSo b);        // or cPhanSo Chia(const cPhanSo& b);
};
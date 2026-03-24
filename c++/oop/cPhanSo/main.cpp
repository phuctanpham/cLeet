#include <iostream>
#include "cPhanSo.h"

using namespace std;

int main() {
    cPhanSo ps1, ps2, ketQua;

    cout << "--- Nhap phan so thu nhat ---\n";
    ps1.Nhap();
    cout << "--- Nhap phan so thu hai ---\n";
    ps2.Nhap();

    cout << "\nKet qua cac phep tinh:\n";

    // Cộng
    ketQua = ps1.Cong(ps2);
    ps1.Xuat(); cout << " + "; ps2.Xuat(); cout << " = "; ketQua.Xuat(); cout << "\n";

    // Trừ
    ketQua = ps1.Tru(ps2);
    ps1.Xuat(); cout << " - "; ps2.Xuat(); cout << " = "; ketQua.Xuat(); cout << "\n";

    // Nhân
    ketQua = ps1.Nhan(ps2);
    ps1.Xuat(); cout << " * "; ps2.Xuat(); cout << " = "; ketQua.Xuat(); cout << "\n";

    // Chia (kiểm tra mẫu số ps2 khác 0)
    if (ps2.LaBang0()) {
        cout << "Khong the chia: phan so thu hai bang 0!\n";
    } else {
        ketQua = ps1.Chia(ps2);
        ps1.Xuat(); cout << " / "; ps2.Xuat(); cout << " = "; ketQua.Xuat(); cout << "\n";
    }

    return 0;
}
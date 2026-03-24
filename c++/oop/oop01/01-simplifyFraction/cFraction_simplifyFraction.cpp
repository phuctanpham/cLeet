/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/

#include "cFraction.h"
#include <iostream>
#include <cmath>

using namespace std;

// Nhập phân số
void cFraction::Input() {
    cout << "Nhap tu so: ";
    cin >> iNumerator;
    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> iDenominator;
        if (iDenominator == 0)
            cout << "Mau so phai khac 0. Vui long nhap lai!\n";
    } while (iDenominator == 0);
}

// Xuất phân số (đã rút gọn)
void cFraction::Output() const {
    cFraction temp = *this;
    temp.simplifyFraction();
    if (temp.iDenominator == 1)       cout << temp.iNumerator;
    else if (temp.iDenominator == -1) cout << -temp.iNumerator;
    else                        cout << temp.iNumerator << "/" << temp.iDenominator;
}

// Private: tìm ước chung lớn nhất
int cFraction::maxDivisor(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Rút gọn phân số
void cFraction::simplifyFraction() {
    if (iNumerator == 0) { iDenominator = 1; return; }
    int iDivisor = maxDivisor(iNumerator, iDenominator);
    iNumerator  /= iDivisor;
    iDenominator /= iDivisor;
    if (iDenominator < 0) {   // đưa dấu trừ lên tử
        iNumerator  = -iNumerator;
        iDenominator = -iDenominator;
    }
}

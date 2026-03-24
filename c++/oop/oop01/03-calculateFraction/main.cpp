/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/
#include <iostream>
#include "cFraction.h"

using namespace std;

int main() {
    cFraction f1, f2, result;

    cout << "--- Nhap phan so 1 ---\n";
    f1.Input();
    
    cout << endl;
    
    cout << "--- Nhap phan so 2 ---\n";
    f2.Input();
    cout << "\nKet qua rut gon cua phan so 1:\n";
    f1.Output(); 
    cout << endl;
    cout << "\nKet qua rut gon cua phan so 2:\n";
    f2.Output(); 
    cout << endl;
    cout << endl;

    result = f1.Sum(f2);
    cout << "Tong: "; result.Output(); cout << endl;
    
    result = f1.Difference(f2);
    cout << "Hieu: "; result.Output(); cout << endl;
    
    result = f1.Product(f2);
    cout << "Tich: "; result.Output(); cout << endl;
    
    if (!f2.isZero()) {
        result = f1.Quotient(f2);
        cout << "Thuong: "; result.Output(); cout << endl;
    } else {
        cout << "Khong the chia cho 0!" << endl;
    }
}
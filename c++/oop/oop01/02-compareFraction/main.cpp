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
    cFraction f1, f2;

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
    if (f1.isGreater(f2)) {
        cout << "Ket luan: Phan so 1 lon hon phan so 2" << endl;
    } 
    else if (f1.isEqual(f2)) {
        cout << "Ket luan: Hai phan so bang nhau" << endl;
    } 
    else {
        cout << "Ket luan: Phan so 1 nho hon phan so 2" << endl;
    }
}
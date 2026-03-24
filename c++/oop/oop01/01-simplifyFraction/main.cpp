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
    cFraction f1;

    cout << "--- Nhap phan so can rut gon ---\n";
    f1.Input();

    cout << "\nKet qua rut gon:\n";

    // Xuất kết quả đã rút gọn
    f1.Output(); 
    cout << endl;
}
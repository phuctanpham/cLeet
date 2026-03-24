/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/

#include "cFractions.h"
using namespace std;
int main() {
    cFractions list;
    list.Input();

    cout << "\n--- Danh sach phan so vua nhap ---\n";
    list.Output();

    cout << "\nPhan so lon nhat: ";
    list.FindMax().Output();
    cout << endl;

    cFractions listAsc = list;
    listAsc.SortAscending();
    cout << "\nDanh sach sap xep tang dan:\n";
    listAsc.Output();

    cFractions listDesc = list;
    listDesc.SortDescending();
    cout << "\nDanh sach sap xep giam dan:\n";
    listDesc.Output();

    return 0;
}
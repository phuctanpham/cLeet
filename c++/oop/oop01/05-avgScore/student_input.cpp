
/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/
#include "student.h"

// -------------------------------------------------------
// Nhập một điểm số, kiểm tra hợp lệ trong khoảng [0, 10]
// -------------------------------------------------------
float Student::validateScore(const string& subject) {
    float score;
    while (true) {
        cout << "Nhap diem " << subject << " (0 - 10): ";
        cin >> score;

        if (cin.fail() || score < 0.0f || score > 10.0f) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "  [Loi] Diem phai trong khoang 0 - 10. Nhap lai!\n";
        } else {
            cin.ignore(10000, '\n');
            return score;
        }
    }
}

// -------------------------------------------------------
// Nhập đầy đủ thông tin: họ tên, điểm Toán, điểm Văn
// -------------------------------------------------------
void Student::inputInfo() {
    cout << "Ho ten hoc sinh : ";
    getline(cin, fullName);

    mathScore       = validateScore("Toan");
    literatureScore = validateScore("Van ");
}
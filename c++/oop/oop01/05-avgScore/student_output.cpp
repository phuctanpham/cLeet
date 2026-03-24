/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/
#include "student.h"

// -------------------------------------------------------
// Constructor
// -------------------------------------------------------
Student::Student() : fullName(""), mathScore(0), literatureScore(0), average(0) {}

// -------------------------------------------------------
// Tính điểm trung bình
// -------------------------------------------------------
void Student::calcAverage() {
    average = (mathScore + literatureScore) / 2.0f;
}

// -------------------------------------------------------
// Tính điểm TB rồi xuất kết quả ra màn hình
// -------------------------------------------------------
void Student::displayResult() const {
    const_cast<Student*>(this)->calcAverage();

    cout << "\n";
    cout << "========================================\n";
    cout << "           KET QUA HOC SINH             \n";
    cout << "========================================\n";
    cout << left;
    cout << "  Ho ten      : " << fullName << "\n";
    cout << fixed << setprecision(2);
    cout << "  Diem Toan   : " << mathScore       << "\n";
    cout << "  Diem Van    : " << literatureScore << "\n";
    cout << "  Diem TB     : " << average         << "\n";
    cout << "========================================\n";
}
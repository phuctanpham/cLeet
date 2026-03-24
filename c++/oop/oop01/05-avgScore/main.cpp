/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/
#include <iostream>
#include "student.h"

int main() {
    Student s;

    std::cout << "===== CHUONG TRINH QUAN LY HOC SINH =====\n\n";

    s.inputInfo();     // student_inputScore.cpp
    s.displayResult(); // student_avgScore.cpp

    return 0;
}
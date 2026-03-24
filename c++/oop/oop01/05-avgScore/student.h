/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/
#pragma once

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Student {
private:
    string fullName;
    float  mathScore;
    float  literatureScore;
    float  average;

    // Hàm nội bộ — không gọi trực tiếp từ ngoài
    float validateScore(const string& subject);
    void  calcAverage();

public:
    Student();

    void inputInfo();
    void displayResult() const;
};
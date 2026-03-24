/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/

#pragma once
#include <iostream>

class cFraction {
    private:
        int iNumerator;
        int iDenominator;
        int maxDivisor(int a, int b);

    public:
    //01 - Simplification functions
    void simplifyFraction();
    void Input();
    void Output() const;
    //02 - Comparísion functions
    bool isGreater(const cFraction& other) const;
    bool isEqual(const cFraction& other) const;
};
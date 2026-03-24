/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/
#pragma once
#include "cFraction.h"

class cFractions {
    private:
        cFraction arr[100];
        int n;
    public:
    // 04 - Arrangement functions
    void Input();
    void Output() const;
    cFraction FindMax() const;
    void SortAscending();
    void SortDescending();
};
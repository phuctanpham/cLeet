/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/

#include "cFraction.h"

// Cong thuc tinh tong: (a/b) + (c/d) = (ad + bc) / (bd)
cFraction cFraction::Sum(const cFraction& other) const {
    cFraction res;
    res.iNumerator = this->iNumerator * other.iDenominator + other.iNumerator * this->iDenominator;
    res.iDenominator = this->iDenominator * other.iDenominator;
    res.simplifyFraction();
    return res;
}

// Cong thuc tinh hieu: (a/b) - (c/d) = (ad - bc) / (bd)
cFraction cFraction::Difference(const cFraction& other) const {
    cFraction res;
    res.iNumerator = this->iNumerator * other.iDenominator - other.iNumerator * this->iDenominator;
    res.iDenominator = this->iDenominator * other.iDenominator;
    res.simplifyFraction();
    return res;
}


// Cong thuc tinh tich: (a/b) * (c/d) = (ac) / (bd)
cFraction cFraction::Product(const cFraction& other) const {
    cFraction res;
    res.iNumerator = this->iNumerator * other.iNumerator;
    res.iDenominator = this->iDenominator * other.iDenominator;
    res.simplifyFraction();
    return res;
}

// Cong thuc tinh thuong: (a/b) / (c/d) = (ad) / (bc)
cFraction cFraction::Quotient(const cFraction& other) const {
    cFraction res;
    res.iNumerator = this->iNumerator * other.iDenominator;
    res.iDenominator = this->iDenominator * other.iNumerator;
    res.simplifyFraction();
    return res;
}
// Kiểm tra phân số có bằng 0 không 
bool cFraction::isZero() const {
    return iNumerator == 0;
}
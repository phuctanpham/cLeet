/* 
name: Pham Tan Phuc
id: 25730134
dob: 240290
class: IT002.F21.CN1.CNTT
*/
#include "cFraction.h"

// So sanh 2 phan so bang cong thuc toan: a/b > c/d  =>  a*d > c*b
bool cFraction::isGreater(const cFraction& other) const {
    return (this->iNumerator * other.iDenominator) > (other.iNumerator * this->iDenominator);
}
bool cFraction::isEqual(const cFraction& other) const {
    return (this->iNumerator * other.iDenominator) == (other.iNumerator * this->iDenominator);
}
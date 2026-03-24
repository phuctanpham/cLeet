#include "cFractions.h"
#include <iostream>
using namespace std;

void cFractions::Input() {
    cout << "Nhap so luong phan so: ";
    do {
        cin >> n;
        if (n <= 0) cout << "Phai lon hon 0. Nhap lai: ";
    } while (n <= 0);
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << (i + 1) << ":\n";
        arr[i].Input();
    }
}

void cFractions::Output() const {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        arr[i].Output();
        if (i < n - 1) cout << ", ";
    }
    cout << " ]" << endl;
}

cFraction cFractions::FindMax() const {
    cFraction maxFrac = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i].isGreater(maxFrac))
            maxFrac = arr[i];
    return maxFrac;
}

void cFractions::SortAscending() {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j].isGreater(arr[j + 1])) {
                cFraction temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void cFractions::SortDescending() {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j + 1].isGreater(arr[j])) {
                cFraction temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
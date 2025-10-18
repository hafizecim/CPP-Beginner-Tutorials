#include <iostream>
using namespace std;

class Araba {
public:
    string marka;
    int hiz;

    Araba(string m, int h) {  // Yapýcý metot
        marka = m;
        hiz = h;
    }

    void yazdir() {
        cout << marka << " - " << hiz << endl;
    }
};

void yapiciMetotlar() {
    Araba a1("BMW", 200); // Constructor otomatik çalýþýr
    a1.yazdir(); // BMW - 200
}


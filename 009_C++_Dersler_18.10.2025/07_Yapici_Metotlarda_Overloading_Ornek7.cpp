#include <iostream>
using namespace std;

class Araba {
public:
    string marka;
    int hiz;

    Araba() {  // Parametresiz constructor
        marka = "Bilinmiyor";
        hiz = 0;
    }

    Araba(string m) { // 1 parametreli
        marka = m;
        hiz = 100;
    }

    Araba(string m, int h) { // 2 parametreli
        marka = m;
        hiz = h;
    }

    void yazdir() {
        cout << marka << " - " << hiz << endl;
    }
};

void yapiciMetotlarOverloading() {
    Araba a1;
    Araba a2("Toyota");
    Araba a3("BMW", 220);

    a1.yazdir(); // Bilinmiyor - 0
    a2.yazdir(); // Toyota - 100
    a3.yazdir(); // BMW - 220
}


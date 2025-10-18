
#include <iostream>
using namespace std;

// Fonksiyon prototipleri
void classlarOrnek1();
void classlarOrnek2();
void kapsullemeOrnek3();
void kapsullemeOrnek4();
void yapiciMetotlar();
void overloading();
void yapiciMetotlarOverloading();


int main() {
    int secim;

    while (true) {
    	cout << " " << endl;
    	cout << "**********************************************************" << endl;
    	cout << " " << endl;
        cout << "==== C++ 9. Ders ====\n";
        cout << "1 - Classlar Ornek 1 1\n";
        cout << "2 - Classlar Ornek 2 1\n";
        cout << "3 - Kapsulleme Ornek 3 1\n";
        cout << "4 - Kapsulleme Ornek 4 1\n";
        cout << "5 - Yapici Metotlar Ornek 5 1\n";
        cout << "6 - Overloading Ornek 6 1\n";
        cout << "7 - Yapici Metotlar Overloading Ornek 6 1\n";
        cout << "0 - Cikis\n";
        cout << "Seciminiz: ";
        cin >> secim;

        cout << "**********************************************************" << endl;
        cout << " " << endl;

        switch (secim) {
            case 1: classlarOrnek1(); break;
            case 2: classlarOrnek2(); break;
            case 3: kapsullemeOrnek3(); break;
            case 4: kapsullemeOrnek4(); break;
            case 5: yapiciMetotlarOverloading(); break;
            case 6: overloading(); break;
            case 7: yapiciMetotlar(); break;
            case 0: cout << "Programdan cikiliyor...\n"; return 0;
            default: cout << "Gecersiz secim! Lutfen tekrar deneyin.\n";
        }

        cout << "\n"; // Yeni satýr boþluðu
    }

    return 0;
}


#include <iostream>
using namespace std;

// Diðer dosyalardaki fonksiyonlarý çaðýrmak için prototipler
void geriDegerDondurmeyen();
void geriDegerDonduren();
void iciceMetot();
void prototipOrnek();
void faktoriyel1();
void faktoriyel2();
void faktoriyel3();
void buyukSayi();
void buyukKucukSayiBulma();
void asal();
void recursive();

int main() {
    int secim;

    cout << "==== C++ Metotlar Dersi ====\n";
    cout << "1 - Geri Deger Dondurmeyen Metotlar\n";
    cout << "2 - Geri Deger Donduren Metotlar\n";
    cout << "3 - Ic Ice Metotlar\n";
    cout << "4 - Prototip Metotlar\n";
    cout << "5 - Faktoriyel - 1\n";
    cout << "6 - Faktoriyel - 2\n";
    cout << "7 - Faktoriyel - 3 (Recursive olabilir)\n";
    cout << "8 - Buyuk Sayi Bulma\n";
    cout << "9 - Buyuk/Kucuk Sayi Bulma\n";
    cout << "10 - Asal Bulma\n";
    cout << "11 - Recursive ve Iterative\n";
    cout << "Seciminiz: ";
    cin >> secim;

    switch (secim) {
        case 1: geriDegerDondurmeyen(); break;
        case 2: geriDegerDonduren(); break;
        case 3: iciceMetot(); break;
        case 4: prototipOrnek(); break;
        case 5: faktoriyel1(); break;
        case 6: faktoriyel2(); break;
        case 7: faktoriyel3(); break;
        case 8: buyukSayi(); break;
        case 9: buyukKucukSayiBulma(); break;
        case 10: asal(); break;
        case 11: recursive(); break;
        default: cout << "Gecersiz secim!\n";
    }

    return 0;
}


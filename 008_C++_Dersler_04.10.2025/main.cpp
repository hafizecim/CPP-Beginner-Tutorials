#include <iostream>
using namespace std;

// Fonksiyon prototipleri
void pointerOrnek1();
void pointerDizilerOrnek2();
void pointerTypeOrnek3();
void pointerTypeOrnek4();
void pointerFonksiyonlarOrnek5();
void pointerFaktoriyelOrnek6();
void pointerDiziSiralamaOrnek7();



int main() {
    int secim;

    while (true) {
    	cout << " " << endl;
    	cout << "**********************************************************" << endl;
    	cout << " " << endl;
        cout << "==== C++ 8. Ders ====\n";
        cout << "1 - Pointer Ornek 1 1\n";
        cout << "2 - Pointer Diziler Ornek 2 1\n";
        cout << "3 - Pointer Type Ornek 3 1\n";
        cout << "4 - Pointer Type Ornek 4 1\n";
        cout << "5 - Pointer Fonksiyonlar Ornek 5 1\n";
        cout << "6 - Pointer Fasktoriyel Hesaplama Ornek 6 1\n";
        cout << "7 - Pointer Dizi Siralama Ornek 7 1\n";
        cout << "0 - Cikis\n";
        cout << "Seciminiz: ";
        cin >> secim;

        cout << "**********************************************************" << endl;
        cout << " " << endl;

        switch (secim) {
            case 1: pointerOrnek1(); break;
            case 2: pointerDizilerOrnek2(); break;
            case 3: pointerTypeOrnek3(); break;
            case 4: pointerTypeOrnek4(); break;
            case 5: pointerFonksiyonlarOrnek5(); break;
            case 6: pointerFaktoriyelOrnek6(); break;
            case 7: pointerDiziSiralamaOrnek7(); break;
            case 0: cout << "Programdan cikiliyor...\n"; return 0;
            default: cout << "Gecersiz secim! Lutfen tekrar deneyin.\n";
        }

        cout << "\n"; // Yeni satýr boþluðu
    }

    return 0;
}


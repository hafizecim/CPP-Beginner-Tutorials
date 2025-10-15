#include <iostream>
using namespace std;

// Fonksiyon prototipleri
void cokBoyutluDizilerOrnek1();
void cokBoyutluDizilerOrnek2();
void cokBoyutluDizilerOrnek3();
void cokBoyutluDizilerOrnek4();
void cokBoyutluDizilerOrnek5();
void cokBoyutluDizilerOrnek6();
void cokBoyutluDizilerOrnek7();
void cokBoyutluDizilerTranspozOrnek8();
void basamakSayisiMetotOrnek9();
void kelimeTersiMetodlarOrnek10();
int main() {
    int secim;

    while (true) {
    	cout << " " << endl;
    	cout << "**********************************************************" << endl;
    	cout << " " << endl;
        cout << "==== C++ 7. Ders ====\n";
        cout << "1 - Cok Boyutlu Diziler Ornek 1\n";
        cout << "2 - Cok Boyutlu Diziler Ornek 2\n";
        cout << "3 - Cok Boyutlu Diziler Ornek 3\n";
        cout << "4 - Cok Boyutlu Diziler Ornek 4\n";
        cout << "5 - Cok Boyutlu Diziler Ornek 5\n";
        cout << "6 - Cok Boyutlu Diziler Ornek 6\n";
        cout << "7 - Cok Boyutlu Diziler Ornek 7\n";
        cout << "8 - Cok Boyutlu Diziler Transpoz Ornek 8\n";
        cout << "9 - Metotlar Basamak Sayisi Bulma Ornek 9\n";
        cout << "10 - Metotlar Kelime Ve Tersi Ornek 10\n";
        cout << "0 - Cikis\n";
        cout << "Seciminiz: ";
        cin >> secim;

        cout << "**********************************************************" << endl;
        cout << " " << endl;

        switch (secim) {
            case 1: cokBoyutluDizilerOrnek1(); break;
            case 2: cokBoyutluDizilerOrnek2(); break;
            case 3: cokBoyutluDizilerOrnek3(); break;
            case 4: cokBoyutluDizilerOrnek4(); break;
            case 5: cokBoyutluDizilerOrnek5(); break;
            case 6: cokBoyutluDizilerOrnek6(); break;
            case 7: cokBoyutluDizilerOrnek7(); break;
            case 8: cokBoyutluDizilerTranspozOrnek8(); break;
            case 9: basamakSayisiMetotOrnek9(); break;
            case 10: kelimeTersiMetodlarOrnek10(); break;
            case 0: cout << "Programdan cikiliyor...\n"; return 0;
            default: cout << "Gecersiz secim! Lutfen tekrar deneyin.\n";
        }

        cout << "\n"; // Yeni satýr boþluðu
    }

    return 0;
}


#include <iostream>
using namespace std;

// Fonksiyon prototipleri
void metotlarOrnek1();
void metotlarOrnek2();
void metotlarSinavOrnek3();
void metotlarTemplateOrnek4();
void dizilerVector();


int main() {
    int secim;

    while (true) {
    	cout << " " << endl;
    	cout << "**********************************************************" << endl;
    	cout << " " << endl;
        cout << "==== C++ 12. Ders ====\n";
        cout << "1 - Metotlar Ornek 1\n";
        cout << "2 - Metotlar Ornek 2\n";
        cout << "3 - Metotlar Sinav Ornek 3\n";
        cout << "4 - Metotlar Template Ornek 4\n";
        cout << "5 - Diziler Vector Ornek 5\n";
        cout << "0 - Cikis\n";
        cout << "Seciminiz: ";
        cin >> secim;
        
        // Hatalý giriþ (örneðin harf girilmesi) durumunu kontrol et
        if (cin.fail()) {
            cin.clear();               // Hata bayraðýný sýfýrla
            cin.ignore(1000, '\n');    // Bozuk giriþi temizle
            cout << "Gecersiz giris! Lutfen sadece sayi giriniz.\n";
            continue;
        }

        cout << "**********************************************************" << endl;
        cout << " " << endl;

        switch (secim) {
            case 1: metotlarOrnek1(); break;
            case 2: metotlarOrnek2(); break;
            case 3: metotlarSinavOrnek3(); break;
            case 4: metotlarTemplateOrnek4(); break;
            case 5: dizilerVector(); break;
            case 0: cout << "Programdan cikiliyor...\n"; return 0;
            default: cout << "Gecersiz secim! Lutfen tekrar deneyin.\n";
        }

        cout << "\n"; // Yeni satýr boþluðu
    }

    return 0;
}


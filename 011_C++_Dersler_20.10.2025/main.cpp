#include <iostream>
using namespace std;

// Fonksiyon prototipleri
void nesneYonelimliProgKitapOrnek1();
void nesneYonelimliProgTelefonOrnek2();
void mirasKalitimOrnek3();
void mirasKalitimOrnek4();
void mirasPublicPrivateProtected();
void overrideOverloanding();
void templateOrnek7();
void aracOopOrnek8();
void aracOopOrnek9();
void otomobilOopOrnek10();
void otomobilOopOrnek11();



int main() {
    int secim;

    while (true) {
    	cout << " " << endl;
    	cout << "**********************************************************" << endl;
    	cout << " " << endl;
        cout << "==== C++ 9. Ders ====\n";
        cout << "1 - Nesne Yonelimli Programlama Kitap Ornek 1\n";
        cout << "2 - Nesne Yonelimli Programlama Telefon Ornek 2\n";
        cout << "3 - Kalitim (miras alma) Ornek 3\n";
        cout << "4 - Kalitim (miras alma) Ornek 4\n";
        cout << "5 - Miras Public Private Protected Ornek 5\n";
        cout << "6 - Override Overloanding Ornek 6\n";
        cout << "7 - Template Ornek 7\n";
        cout << "8 - Nesne Yonelimli Programlama Arac Ornek 8\n";
        cout << "9 - Nesne Yonelimli Programlama Arac Ornek 9\n";
        cout << "10 - Nesne Yonelimli Programlama Otomobil Ornek 10\n";
        cout << "11 - Nesne Yonelimli Programlama Otomobil Ornek 11\n";
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
            case 1: nesneYonelimliProgKitapOrnek1(); break;
            case 2: nesneYonelimliProgTelefonOrnek2(); break;
            case 3: mirasKalitimOrnek3(); break;
            case 4: mirasKalitimOrnek4(); break;
            case 5: mirasPublicPrivateProtected(); break;
            case 6: overrideOverloanding(); break;
            case 7: templateOrnek7(); break;
            case 8: aracOopOrnek8(); break;
            case 9: aracOopOrnek9(); break;
            case 10: otomobilOopOrnek10(); break;
            case 11: otomobilOopOrnek11(); break;
            case 0: cout << "Programdan cikiliyor...\n"; return 0;
            default: cout << "Gecersiz secim! Lutfen tekrar deneyin.\n";
        }

        cout << "\n"; // Yeni satýr boþluðu
    }

    return 0;
}


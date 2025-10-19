#include <iostream>
using namespace std;

// Fonksiyon prototipleri
void yapiciMetotlarOrnek1();
void statikDegiskenlerOrnek2();
void nesneYonelimliProgAlistirma1();
void nesneYonelimliProgAlistirma2();
void nesneYonelimliProgAlistirma3();



int main() {
    int secim;

    while (true) {
    	cout << " " << endl;
    	cout << "**********************************************************" << endl;
    	cout << " " << endl;
        cout << "==== C++ 9. Ders ====\n";
        cout << "1 - Yapici Metotlar Ornek 1\n";
        cout << "2 - Statik Degiskenler Ornek 2\n";
        cout << "3 - Nesne Yonelimli Programlama Alistirma 1\n";
        cout << "4 - Nesne Yonelimli Programlama Alistirma 2\n";
        cout << "5 - Nesne Yonelimli Programlama Alistirma 3\n";
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
            case 1: yapiciMetotlarOrnek1(); break;
            case 2: statikDegiskenlerOrnek2(); break;
            case 3: nesneYonelimliProgAlistirma1(); break;
            case 3: nesneYonelimliProgAlistirma2(); break;
            case 3: nesneYonelimliProgAlistirma3(); break;
            case 0: cout << "Programdan cikiliyor...\n"; return 0;
            default: cout << "Gecersiz secim! Lutfen tekrar deneyin.\n";
        }

        cout << "\n"; // Yeni satýr boþluðu
    }

    return 0;
}


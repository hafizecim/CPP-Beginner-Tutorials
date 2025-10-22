#include <iostream>
#include <string>
using namespace std;


// Tüm giriþleri yapan metot
void girisYap(int &a, int &b, int &secim) {
    cout << "Birinci sayýyý girin: ";
    cin >> a;

    cout << "Ýkinci sayýyý girin: ";
    cin >> b;

    cout << "Ýþlem seçin (1: Topla, 2: Çýkar, 3: Çarp): ";
    cin >> secim;
}

// Ýþlem yapan metot
int islemYap(int a, int b, int secim) {
    if (secim == 1)
        return a + b;
    else if (secim == 2)
        return a - b;
    else if (secim == 3)
        return a * b;
    else {
        cout << "Geçersiz iþlem!" << endl;
        return 0;
    }
}

// Ana program

void metotlarOrnek1 (){
	
	int sayi1, sayi2, secim;
	
    // Giriþleri al
    girisYap(sayi1, sayi2, secim);

    // Ýþlemi yap
    int sonuc = islemYap(sayi1, sayi2, secim);

    // Sonucu yazdýr
    cout << "Sonuç: " << sonuc << endl;
	
}

#include <iostream> // Giriþ/çýkýþ iþlemleri için gerekli kütüphane
using namespace std;

// Bir sayýnýn asal olup olmadýðýný kontrol eden fonksiyonun prototipi
bool asal_mi(int); 

// 0–100 arasýndaki asal sayýlarý bulan fonksiyon (main.cpp'ten çaðrýlýr)
void asal() {
    cout << "0 ile 100 arasindaki asal sayilar:\n";

    for (int i = 0; i <= 100; i++) {
        if (asal_mi(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}

// Bir sayýnýn asal olup olmadýðýný kontrol eden yardýmcý fonksiyon
bool asal_mi(int sayi) {
    if (sayi < 2) return false;

    for (int i = 2; i < sayi; i++) {
        if (sayi % i == 0)
            return false;
    }

    return true;
}


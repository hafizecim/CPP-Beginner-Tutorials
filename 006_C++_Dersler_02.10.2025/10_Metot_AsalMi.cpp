#include <iostream> // Giri�/��k�� i�lemleri i�in gerekli k�t�phane
using namespace std;

// Bir say�n�n asal olup olmad���n� kontrol eden fonksiyonun prototipi
bool asal_mi(int); 

// 0�100 aras�ndaki asal say�lar� bulan fonksiyon (main.cpp'ten �a�r�l�r)
void asal() {
    cout << "0 ile 100 arasindaki asal sayilar:\n";

    for (int i = 0; i <= 100; i++) {
        if (asal_mi(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}

// Bir say�n�n asal olup olmad���n� kontrol eden yard�mc� fonksiyon
bool asal_mi(int sayi) {
    if (sayi < 2) return false;

    for (int i = 2; i < sayi; i++) {
        if (sayi % i == 0)
            return false;
    }

    return true;
}


#include <iostream> // Giri�-��k�� i�lemleri i�in gerekli k�t�phane
// METOTLARLA FAKT�R�YEL HESAPLAMA

using namespace std;

//  Metot prototipi (bildirimi) � derleyici bu sat�rda faktoryel fonksiyonunu tan�r
int faktoryel(int sayi);

void faktoriyel1() {
	
    int sayi = 0; 
    cout << "Sayi : ";
    cin >> sayi; 

    cout << faktoriyel(sayi); //  metot �a�r�l�r, sonucu ekrana yazd�r�l�r

   
}

//  Fakt�riyel hesaplayan fonksiyon
int faktoryel(int sayi) { // Metot tan�mlama

    int sonuc = 1; 

    for (int i = 1; i <= sayi; i++) { 
        sonuc = sonuc * i; 
    }

    return sonuc; 
}


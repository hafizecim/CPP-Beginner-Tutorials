
#include <iostream>
#include "faktoriyel.h" // Bu satýr sayesinde fakt() fonksiyonu tanýtýlmýþ olur
using namespace std;

/*
  Pointer kullanarak faktöriyel hesaplayan fonksiyon.
  Kullanýcýdan alýnan sayýnýn adresi fakt fonksiyonuna gönderilir.
  Fonksiyon, iþaretçinin gösterdiði sayýnýn faktöriyelini hesaplayýp döndürür.
*/

//int fakt(int*);
void pointerFaktoriyelOrnek6() {

 	int sayi =0;
	cout << "Sayi : ";
	cin>>sayi;
	cout << sayi << " !=  "<<fakt(&sayi); // #include "faktoriyel.h" // Bu satýr sayesinde fakt() fonksiyonu tanýtýlmýþ olur
	
  
}

int fakt(int* ptr){
	int sonuc = 1;

    // 0 veya negatif sayýlar kontrolü (isteðe baðlý)
    if (*ptr < 0) {
        cout << "Negatif sayýlar için faktoriyel tanýmlý degildir!" << endl;
        return -1;
    }

    // Faktöriyel hesaplama
    for (int i = 1; i <= *ptr; i++) {
        sonuc *= i;
    }

    return sonuc; // Hesaplanan sonuç döndürülür
	
	
}


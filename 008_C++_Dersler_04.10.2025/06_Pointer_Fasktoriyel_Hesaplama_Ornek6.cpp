
#include <iostream>
#include "faktoriyel.h" // Bu sat�r sayesinde fakt() fonksiyonu tan�t�lm�� olur
using namespace std;

/*
  Pointer kullanarak fakt�riyel hesaplayan fonksiyon.
  Kullan�c�dan al�nan say�n�n adresi fakt fonksiyonuna g�nderilir.
  Fonksiyon, i�aret�inin g�sterdi�i say�n�n fakt�riyelini hesaplay�p d�nd�r�r.
*/

//int fakt(int*);
void pointerFaktoriyelOrnek6() {

 	int sayi =0;
	cout << "Sayi : ";
	cin>>sayi;
	cout << sayi << " !=  "<<fakt(&sayi); // #include "faktoriyel.h" // Bu sat�r sayesinde fakt() fonksiyonu tan�t�lm�� olur
	
  
}

int fakt(int* ptr){
	int sonuc = 1;

    // 0 veya negatif say�lar kontrol� (iste�e ba�l�)
    if (*ptr < 0) {
        cout << "Negatif say�lar i�in faktoriyel tan�ml� degildir!" << endl;
        return -1;
    }

    // Fakt�riyel hesaplama
    for (int i = 1; i <= *ptr; i++) {
        sonuc *= i;
    }

    return sonuc; // Hesaplanan sonu� d�nd�r�l�r
	
	
}


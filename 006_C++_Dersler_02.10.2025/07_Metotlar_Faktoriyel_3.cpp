#include <iostream> 
// METOTLARLA FAKT�R�YEL HESAPLAMA

using namespace std;

// ?? Metot prototipleri � �nce bildirildi�i i�in main'den sonra tan�mlanabilirler
int faktoryel(int);     // fakt�riyel hesab� yapan metot
int C(int, int);        // kombinasyon hesab� yapan metot (C(n, r))

void faktoriyel3() {
	int n, r; // kullan�c�dan al�nacak de�erler

	cout << " n : ";   
	cin >> n;

	cout << " r : ";   
	cin >> r;

	cout << C(n, r);   // C(n, r) fonksiyonu �a�r�l�r ve sonucu ekrana yaz�l�r

	
}

//  Kombinasyon hesab�: C(n, r) = n! / ( (n - r)! * r! )
int C(int n, int r) {
	return faktoryel(n) / (faktoryel(n - r) * faktoryel(r)); 
	// fakt�riyel metodu �a�r�larak kombinasyon form�l� hesaplan�r
}

//  Fakt�riyel hesab� yapan metot
int faktoryel(int sayi) {
	int sonuc = 1;

	for (int i = 1; i <= sayi; i++) { 

		sonuc = sonuc * i; // veya: sonuc *= i;
	}

	return sonuc; // sonuc de�eri geri d�nd�r�l�r
}


#include <iostream>
using namespace std;

/*
  POINTER �LE D�Z� SIRALAMA � �RNEK 7

  Bu �rnekte kullan�c�dan 10 adet say� al�n�yor. Bu say�lar dizide saklan�yor.
  Ard�ndan bir fonksiyona dizinin adresi ve boyutu g�nderiliyor.
  Fonksiyon, pointer kullanarak diziyi k���kten b�y��e s�ral�yor.
*/

// Fonksiyon prototipi � pointer ile dizi s�ralama
void sirala(int*, int);

void pointerDiziSiralamaOrnek7() {
	int dizi[10];

	// Kullan�c�dan dizi elemanlar�n� al
	for(int i = 0; i < 10; i++) {
		cout << i + 1 << ". sayi : ";
		cin >> dizi[i];
	}

	// Dizi boyutunu hesapla
	int boyut = sizeof(dizi) / sizeof(int);

	// S�ralama fonksiyonuna adres g�nder
	sirala(dizi, boyut);

	// S�ralanm�� diziyi ekrana yazd�r
	cout << "Siralanmis dizi: ";
	for(int i = 0; i < boyut; i++) {
		cout << dizi[i] << " ";
	}
	cout << endl;
}

// Pointer kullanarak s�ralama yapan fonksiyon
void sirala(int* ptr, int boyut) {
	int bellek;

	// Basit se�im s�ralama algoritmas�
	for(int i = 0; i < boyut; i++) {
		for(int j = i + 1; j < boyut; j++) {
			if(*(ptr + i) > *(ptr + j)) {
				// Swap i�lemi
				bellek = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = bellek;
			}
		}
	}
}


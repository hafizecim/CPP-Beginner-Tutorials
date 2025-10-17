#include <iostream>
using namespace std;

/*
  POINTER ÝLE DÝZÝ SIRALAMA – ÖRNEK 7

  Bu örnekte kullanýcýdan 10 adet sayý alýnýyor. Bu sayýlar dizide saklanýyor.
  Ardýndan bir fonksiyona dizinin adresi ve boyutu gönderiliyor.
  Fonksiyon, pointer kullanarak diziyi küçükten büyüðe sýralýyor.
*/

// Fonksiyon prototipi – pointer ile dizi sýralama
void sirala(int*, int);

void pointerDiziSiralamaOrnek7() {
	int dizi[10];

	// Kullanýcýdan dizi elemanlarýný al
	for(int i = 0; i < 10; i++) {
		cout << i + 1 << ". sayi : ";
		cin >> dizi[i];
	}

	// Dizi boyutunu hesapla
	int boyut = sizeof(dizi) / sizeof(int);

	// Sýralama fonksiyonuna adres gönder
	sirala(dizi, boyut);

	// Sýralanmýþ diziyi ekrana yazdýr
	cout << "Siralanmis dizi: ";
	for(int i = 0; i < boyut; i++) {
		cout << dizi[i] << " ";
	}
	cout << endl;
}

// Pointer kullanarak sýralama yapan fonksiyon
void sirala(int* ptr, int boyut) {
	int bellek;

	// Basit seçim sýralama algoritmasý
	for(int i = 0; i < boyut; i++) {
		for(int j = i + 1; j < boyut; j++) {
			if(*(ptr + i) > *(ptr + j)) {
				// Swap iþlemi
				bellek = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = bellek;
			}
		}
	}
}


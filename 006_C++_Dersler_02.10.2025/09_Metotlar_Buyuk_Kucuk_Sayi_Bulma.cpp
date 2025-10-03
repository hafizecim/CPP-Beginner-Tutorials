#include <iostream> 
// Giri�/��k�� i�lemleri i�in gerekli k�t�phane
// METOTLARLA EN B�Y�K VE EN K���K SAYIYI BULMA (KLAVYEDEN G�R�LEN 10 SAYI �LE)

using namespace std;

//  Metot prototipleri � main'den �nce bildirildi�i i�in tan�mlar sonra yap�labilir
int buyukSayi(int, int);   // iki say�dan b�y�k olan� d�nd�r�r
int kucukSayi(int, int);   // iki say�dan k���k olan� d�nd�r�r

int main(int argc, char** argv) {
	int sayi; // kullan�c�dan al�nacak say�

	cout << "1. sayi : "; 
	cin >> sayi; 

	//  Ba�lang��ta b�y�k-k���k kontrol i�in u� de�erler kullan�l�yor:
	int buyuk = INT_MIN; // ilk de�er olarak m�mk�n olan en k���k say�
	int kucuk = INT_MAX; // ilk de�er olarak m�mk�n olan en b�y�k say�

	//  10 say� isteniyor
	for (int i = 1; i <= 10; i++) {
		cout << i << ". sayi : ";
		cin >> sayi;

		buyuk = buyukSayi(buyuk, sayi);   // b�y�k say� g�ncelleniyor
		kucuk = kucukSayi(kucuk, sayi);   // k���k say� g�ncelleniyor
	}

	cout << "Buyuk sayi : " << buyuk << endl;   // sonu�: en b�y�k say�
	cout << "Kucuk sayi : " << kucuk << endl;   // sonu�: en k���k say�

	return 0;
}

//  �ki say�dan b�y�k olan� d�nd�ren metot
void buyukKucukSayiBulma() {
	if (sayi1 > sayi2)
		return sayi1;
	else
		return sayi2;
}

//  �ki say�dan k���k olan� d�nd�ren metot
int kucukSayi(int sayi1, int sayi2) {
	if (sayi1 > sayi2)
		return sayi2;
	else
		return sayi1;
}


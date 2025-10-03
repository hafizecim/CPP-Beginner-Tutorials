#include <iostream> 
// Giriþ/çýkýþ iþlemleri için gerekli kütüphane
// METOTLARLA EN BÜYÜK VE EN KÜÇÜK SAYIYI BULMA (KLAVYEDEN GÝRÝLEN 10 SAYI ÝLE)

using namespace std;

//  Metot prototipleri – main'den önce bildirildiði için tanýmlar sonra yapýlabilir
int buyukSayi(int, int);   // iki sayýdan büyük olaný döndürür
int kucukSayi(int, int);   // iki sayýdan küçük olaný döndürür

int main(int argc, char** argv) {
	int sayi; // kullanýcýdan alýnacak sayý

	cout << "1. sayi : "; 
	cin >> sayi; 

	//  Baþlangýçta büyük-küçük kontrol için uç deðerler kullanýlýyor:
	int buyuk = INT_MIN; // ilk deðer olarak mümkün olan en küçük sayý
	int kucuk = INT_MAX; // ilk deðer olarak mümkün olan en büyük sayý

	//  10 sayý isteniyor
	for (int i = 1; i <= 10; i++) {
		cout << i << ". sayi : ";
		cin >> sayi;

		buyuk = buyukSayi(buyuk, sayi);   // büyük sayý güncelleniyor
		kucuk = kucukSayi(kucuk, sayi);   // küçük sayý güncelleniyor
	}

	cout << "Buyuk sayi : " << buyuk << endl;   // sonuç: en büyük sayý
	cout << "Kucuk sayi : " << kucuk << endl;   // sonuç: en küçük sayý

	return 0;
}

//  Ýki sayýdan büyük olaný döndüren metot
void buyukKucukSayiBulma() {
	if (sayi1 > sayi2)
		return sayi1;
	else
		return sayi2;
}

//  Ýki sayýdan küçük olaný döndüren metot
int kucukSayi(int sayi1, int sayi2) {
	if (sayi1 > sayi2)
		return sayi2;
	else
		return sayi1;
}


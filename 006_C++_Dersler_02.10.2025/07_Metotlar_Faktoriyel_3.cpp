#include <iostream> 
// METOTLARLA FAKTÖRÝYEL HESAPLAMA

using namespace std;

// ?? Metot prototipleri – önce bildirildiði için main'den sonra tanýmlanabilirler
int faktoryel(int);     // faktöriyel hesabý yapan metot
int C(int, int);        // kombinasyon hesabý yapan metot (C(n, r))

void faktoriyel3() {
	int n, r; // kullanýcýdan alýnacak deðerler

	cout << " n : ";   
	cin >> n;

	cout << " r : ";   
	cin >> r;

	cout << C(n, r);   // C(n, r) fonksiyonu çaðrýlýr ve sonucu ekrana yazýlýr

	
}

//  Kombinasyon hesabý: C(n, r) = n! / ( (n - r)! * r! )
int C(int n, int r) {
	return faktoryel(n) / (faktoryel(n - r) * faktoryel(r)); 
	// faktöriyel metodu çaðrýlarak kombinasyon formülü hesaplanýr
}

//  Faktöriyel hesabý yapan metot
int faktoryel(int sayi) {
	int sonuc = 1;

	for (int i = 1; i <= sayi; i++) { 

		sonuc = sonuc * i; // veya: sonuc *= i;
	}

	return sonuc; // sonuc deðeri geri döndürülür
}


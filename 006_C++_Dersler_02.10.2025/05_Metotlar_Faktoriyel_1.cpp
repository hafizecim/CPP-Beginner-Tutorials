#include <iostream> // Giriþ-çýkýþ iþlemleri için gerekli kütüphane
// METOTLARLA FAKTÖRÝYEL HESAPLAMA

using namespace std;

//  Metot prototipi (bildirimi) – derleyici bu satýrda faktoryel fonksiyonunu tanýr
int faktoryel(int sayi);

void faktoriyel1() {
	
    int sayi = 0; 
    cout << "Sayi : ";
    cin >> sayi; 

    cout << faktoriyel(sayi); //  metot çaðrýlýr, sonucu ekrana yazdýrýlýr

   
}

//  Faktöriyel hesaplayan fonksiyon
int faktoryel(int sayi) { // Metot tanýmlama

    int sonuc = 1; 

    for (int i = 1; i <= sayi; i++) { 
        sonuc = sonuc * i; 
    }

    return sonuc; 
}


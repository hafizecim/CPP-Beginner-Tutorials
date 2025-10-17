#include <iostream>
using namespace std;

/*
  POINTER ÝLE FONKSÝYONA DEÐER GÖNDERME – ÖRNEK 5

  Bu örnekte, iki sayýyý toplayan bir fonksiyon oluþturulmuþtur.
  Fonksiyona sayýlarýn adresleri (pointer) ile gidilir, ayrýca sonucu da 
  fonksiyon dýþýnda kullanýlabilmesi için bir üçüncü pointer ile döndürürüz.

  Avantajý: Fonksiyonun içinde hem iþlem yapýlýr hem de sonuç,
  bellekteki doðrudan deðiþkenin içine yazýlýr.
*/

int topla(int *s1, int *s2, int *sonuc) {
    // s1 ve s2'nin gösterdiði yerlerdeki deðerler toplanýr,
    // sonuc'un gösterdiði yere yazýlýr
    *sonuc = *s1 + *s2;
    return *sonuc; // Ayrýca sonucu döndürür (isteðe baðlý)
}

void pointerFonksiyonlarOrnek5() {
    int sayi1 = 10;
    int sayi2 = 20;
    int sonuc = 0; // Sonucun yazýlacaðý deðiþken

    // Fonksiyona deðiþkenlerin adresleri gönderiliyor
    topla(&sayi1, &sayi2, &sonuc);

    // Sonuç, fonksiyon sayesinde bellekte yazýldý
    cout << "Toplam: " << sonuc << endl; // Çýktý: Toplam: 30
}


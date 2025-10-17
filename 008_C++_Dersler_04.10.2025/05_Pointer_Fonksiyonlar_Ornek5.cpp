#include <iostream>
using namespace std;

/*
  POINTER �LE FONKS�YONA DE�ER G�NDERME � �RNEK 5

  Bu �rnekte, iki say�y� toplayan bir fonksiyon olu�turulmu�tur.
  Fonksiyona say�lar�n adresleri (pointer) ile gidilir, ayr�ca sonucu da 
  fonksiyon d���nda kullan�labilmesi i�in bir ���nc� pointer ile d�nd�r�r�z.

  Avantaj�: Fonksiyonun i�inde hem i�lem yap�l�r hem de sonu�,
  bellekteki do�rudan de�i�kenin i�ine yaz�l�r.
*/

int topla(int *s1, int *s2, int *sonuc) {
    // s1 ve s2'nin g�sterdi�i yerlerdeki de�erler toplan�r,
    // sonuc'un g�sterdi�i yere yaz�l�r
    *sonuc = *s1 + *s2;
    return *sonuc; // Ayr�ca sonucu d�nd�r�r (iste�e ba�l�)
}

void pointerFonksiyonlarOrnek5() {
    int sayi1 = 10;
    int sayi2 = 20;
    int sonuc = 0; // Sonucun yaz�laca�� de�i�ken

    // Fonksiyona de�i�kenlerin adresleri g�nderiliyor
    topla(&sayi1, &sayi2, &sonuc);

    // Sonu�, fonksiyon sayesinde bellekte yaz�ld�
    cout << "Toplam: " << sonuc << endl; // ��kt�: Toplam: 30
}


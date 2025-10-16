#include <iostream>
using namespace std;
/*
  POINTER (��ARET��) KULLANARAK DE���KENLER�N DE�ER�N� VE ADRES�N� DE���T�RME

  Bu �rnekte iki farkl� fonksiyonla pointer kullan�m� g�sterilmektedir:

  1. `ptr_degistir`: Pointer kullanarak, de�i�kenin bellekteki adresine gidilip de�eri do�rudan de�i�tirilir.
     � *s1 = 10; ifadesi, s1'in g�sterdi�i bellek adresindeki de�eri 10 yapar.

  2. `adres_degistir`: Bu fonksiyonda pointer de�i�kenine do�rudan say�sal de�er atan�r (�rne�in: s1 = 100).
     � Bu i�lem pointer'�n g�sterdi�i adresi de�i�tirir, ama bu de�i�iklik sadece fonksiyon i�inde ge�erlidir.
     � Fonksiyon d���nda orijinal de�i�kenin adresi de�i�mez ve de�eri de etkilenmez.

  NOT: C++ dilinde fonksiyona g�nderilen pointer parametreler kopyalan�r. Bu y�zden adres de�i�tirseniz bile
  d��ar�da etkisi olmaz. Ancak pointer'�n i�aret etti�i yerdeki de�eri de�i�tirirseniz bu d��ar�da da g�r�n�r.
*/

/*
  ptr_degistir: Pointer ile g�sterilen adreslerdeki de�erleri de�i�tirir.
  Bu fonksiyon do�rudur, ��nk� *s1 ve *s2 kullan�larak bellekteki ger�ek de�i�kenler de�i�tirilir.
*/
int ptr_degistir(int *s1, int *s2) {
    *s1 = 10; // s1'in g�sterdi�i yerdeki de�eri 10 yap (yani sayi1 de�i�ir)
    *s2 = 20; // s2'nin g�sterdi�i yerdeki de�eri 20 yap (yani sayi2 de�i�ir)

    return *s1; // s1'in i�aret etti�i de�eri d�nd�r
}

/*
  adres_degistir: Pointer ile g�sterilen adreslerdeki de�erleri de�i�tirir.
  Bu, yukar�daki fonksiyonun ayn�s�d�r. Ama�, ayn� i�lemi farkl� isimle yapmakt�r.
*/
int adres_degistir(int *s1, int *s2) {
    *s1 = 100; // s1'in i�aret etti�i yere 100 yaz
    *s2 = 200; // s2'nin i�aret etti�i yere 200 yaz
    return *s1;
}

/*
  pointerTypeOrnek4: Pointer kullan�m� �rne�i
*/
void pointerTypeOrnek4() {
    int sayi1 = 1;
    int sayi2 = 2;

   
    // De�i�kenlerin adresleri g�nderiliyor, yani de�erleri fonksiyon i�inde de�i�tirilecek
    ptr_degistir(&sayi1, &sayi2);

    cout << "ptr_degistir sonras�:" << endl;
    cout << "Sayi 1 deger: " << sayi1 << endl; // 10
    cout << "Sayi 2 deger: " << sayi2 << endl; // 20

    // adres_degistir fonksiyonu da ayn� �ekilde adresle �al���yor
    adres_degistir(&sayi1, &sayi2);

    cout << "adres_degistir sonras�:" << endl;
    cout << "Sayi 1 deger: " << sayi1 << endl; // 100
    cout << "Sayi 2 deger: " << sayi2 << endl; // 200
}


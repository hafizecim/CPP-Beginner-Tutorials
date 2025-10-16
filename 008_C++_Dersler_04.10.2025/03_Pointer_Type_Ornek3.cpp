#include <iostream>
using namespace std;

/*
  POINTER �LE FONKS�YONA DE�ER G�NDERME

  Bu �rnekte, iki say�y� fonksiyona pointer (adres) yoluyla g�nderip onlar�n de�erlerini de�i�tirmeye �al���yoruz.
  Ancak dikkat edilmesi gereken bir hata var:
  
  Fonksiyon i�inde:
      s1 = 10; � burada s1 bir pointer'd�r, ama 10 atanarak pointer kayd�r�lm�� olur. Bellekteki de�er de�i�mez.
      *s1 = 10; � olmas� gereken budur: i�aret edilen adresteki de�eri de�i�tirir.

  Bu y�zden bu �rnekte de�i�kenler de�i�tirilemez. Kodda d�zeltme gerekebilir.
*/

int degistir(int *s1, int *s2) {
    // Hatal�: burada s1 ve s2'nin g�sterdi�i yerin i�eri�i de�il, kendileri de�i�tirilmi� olur
    // s1 = 10; // HATALI � pointer'a do�rudan int atayamazs�n (adres bekler)
    // s2 = 20;

    // Do�rusu ��yle olmal�yd�:
     *s1 = 10;
     *s2 = 20;

    return *s1; 
}

void pointerTypeOrnek3() {
    int sayi1 = 1;
    int sayi2 = 2;

    // degistir fonksiyonuna de�i�kenlerin adresleri g�nderiliyor
    degistir(&sayi1, &sayi2);

    // Ancak fonksiyon i�inde adresin g�sterdi�i yere de�er atamas� yap�lmad��� i�in de�erler de�i�meyecek
    cout << "Sayi 1 deger: " << sayi1 << endl; // 1
    cout << "Sayi 2 deger: " << sayi2 << endl; // 2
}



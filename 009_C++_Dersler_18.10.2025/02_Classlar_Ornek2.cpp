/*
  OVERLOADING (A�IRI Y�KLEME) NED�R?

  Ayn� isimde birden fazla fonksiyon tan�mlayabilme �zelli�idir.
  Farkl� parametre say�s� veya t�rleriyle fonksiyonlar�n i�levleri
  ayn� isim alt�nda �e�itlendirilir.

  �rne�in;
  void yemek_ye()       // Parametresiz fonksiyon
  void yemek_ye(int x)  // Parametreli fonksiyon

  �a�r�l�rken g�nderilen parametreye g�re uygun fonksiyon se�ilir.
*/

#include <iostream>
using namespace std;

class insan {
public:
    int yas;  // Her yerden eri�ilebilir
    int kilo;

    // Parametresiz yemek yeme fonksiyonu + 1 kilo artt�r�r
    void yemek_ye() {
        kilo++;
    }

    // OVERLOADING (A��r� Y�kleme): Ayn� isimde birden fazla metot tan�mlanabilir
    void yemek_ye2() {
        kilo++;
    } 
    
    void yemek_ye2(int ogun); // Parametreli prototip 

};


// parametresiz fonksiyonun tan�m�
void insan::yemek_ye2() {
    kilo++;
}


 // Parametreli versiyon � ���n say�s� kadar kilo artt�r�r
void insan::yemek_ye2(int ogun) {
    for (int i = 0; i < ogun; i++) {
            kilo++;
    }
}

// Fonksiyon: insan s�n�f�n� kullanarak bir nesne olu�turur ve metotlar�n� kullan�r
void classlarOrnek2() {

    string metin = "komek";
    cout << "Metnin uzunlugu: " << metin.length() << endl; // string s�n�f� �rne�i

    insan ali;       // insan s�n�f�ndan bir nesne olu�tur
    ali.yas = 36;    // public de�i�kene de�er atama
    ali.kilo = 80;   // kilo: 80

    cout << "Kilo : " << ali.kilo << endl;

    ali.yemek_ye();  // yemek_ye fonksiyonu 1 kilo artt�r�r � 81
    cout << "Kilo : " << ali.kilo << endl;

    ali.yemek_ye2(10); // 10 ���n yemek yedi � 10 kilo daha al�r � 91
    cout << "Kilo : " << ali.kilo << endl;

    // ali.ad = "Ali �nal";  // ? HATA: 'ad' de�i�keni private oldu�u i�in eri�ilemez
}


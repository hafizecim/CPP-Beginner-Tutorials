// s�n�fta aksi bir �ey belirtilmediyse veriler private olarak tan�mlan�r ve yaz�lmaz.
// public de�i�kenler eri�im belileyicisi ile tan�mlanm�� olan de�i�ken yada metot her yerden eri�ime a��kt�r. 
// private eri�im belirleyicisi ile tan�mlam�� olan metot yada de�i�ken sadece s�n�f i�inde eri�ime a��kt�r.
// protected eri�im belirleyici ile tan�mlanm�� olan metot yada de�i�ken s�n�f i�inden ve alt s�n�flardan eri�ime a��kt�r.


#include <iostream>
using namespace std;

/*
  C++ SINIFLAR (CLASS) ve ER���M BEL�RLEY�C�LER� � �RNEK 1

  - Bir s�n�f tan�mlarken, i�inde de�i�kenler (�zellikler) ve metotlar (fonksiyonlar) tan�mlar�z.
  - S�n�f elemanlar�na (de�i�ken ve metotlara) eri�im "eri�im belirleyiciler" (public, private, protected) ile d�zenlenir.

    public: Her yerden eri�ilebilir
    private: Sadece s�n�f�n i�inden eri�ilebilir
    protected: S�n�f�n i�inden ve kal�t�m al�nan s�n�flardan eri�ilebilir

  Bu �rnekte, bir 'insan' s�n�f� tan�mlanm�� ve nesne �zerinden eri�im denenmi�tir.
*/

class insan {
public:
    int yas;  // Her yerden eri�ilebilir
    int kilo;

    // Parametresiz yemek yeme fonksiyonu � 1 kilo artt�r�r
    int yemek_ye() {
        kilo++;
    }

    // OVERLOADING (A��r� Y�kleme): Ayn� isimde birden fazla metot tan�mlanabilir
    void yemek_ye2() {
        kilo++;
    }

    // Parametreli versiyon � ���n say�s� kadar kilo artt�r�r
    void yemek_ye2(int ogun) {
        for (int i = 0; i < ogun; i++) {
            kilo++;
        }
    }

private:
    string ad; // Sadece s�n�f i�inden eri�ilebilir, d��ar�dan eri�im yasak
};

// Fonksiyon: insan s�n�f�n� kullanarak bir nesne olu�turur ve metotlar�n� kullan�r
void classlarOrnek1() {

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


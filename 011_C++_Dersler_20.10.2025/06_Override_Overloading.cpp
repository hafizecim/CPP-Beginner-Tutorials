/*
 Fonksiyon Overloading ve Overriding A��klamas�:

1 Overloading (A��r� Y�kleme):
- Ayn� isimde birden fazla fonksiyon yazmakt�r.
- Farkl� parametre say�s� veya tipiyle tan�mlan�r.
- Derleyici, hangi fonksiyonun �a�r�laca��n� parametrelere g�re belirler.
 Ayn� s�n�f i�inde ger�ekle�ir.

2 Overriding (Ezme):
- �st s�n�fta tan�ml� bir metodu, alt s�n�fta **ayn� isim ve parametrelerle** yeniden tan�mlamakt�r.
- Kal�t�m (inheritance) ile ilgilidir.
 Alt s�n�f, �st s�n�f�n davran���n� de�i�tirmek i�in kullan�r.
*/

#include <iostream>  
#include <string>    
using namespace std; 

// 1. insan ad�nda bir s�n�f tan�mlan�yor
class insan {
public:           
    int kilo;  // kilo bilgisi (public oldu�u i�in miras al�nd���nda da public kal�r)

    // Fonksiyon overloading: ayn� isimde ama parametreleri farkl� 2 fonksiyon

    void yemek_ye() { // overloading
        this->kilo++;  // kiloyu 1 art�r
    }

    void yemek_ye(int ogun) { // overloading
        for (int i = 0; i < ogun; i++) {
            this->kilo++;  // ka� ���nse o kadar kilo art�r
        }
    }
};

// 2. calisan s�n�f�, insan s�n�f�ndan t�retiliyor (kal�t�m yap�l�yor)
class calisan : public insan {
    // Override: �st s�n�ftaki yemek_ye() metodunu ezerek davran���n� de�i�tiriyoruz
public:
    void yemek_ye() {
        this->kilo += 5;  // �al��anlar yeme�i fazla yiyor gibi �rnek
    }
};

/*
  Kal�t�m T�rlerinin Eri�im Etkisi:
- public miras: public � public, protected � protected, private � miras al�nmaz
- protected miras: public + protected � protected, private � miras al�nmaz
- private miras: public + protected � private, private � miras al�nmaz
*/

// 3. Ana fonksiyon: �rneklerin olu�turuldu�u yer
void overrideOverloanding() {
    insan ali;
    ali.kilo = 70;
    ali.yemek_ye();           // kilo: 71
    ali.yemek_ye(3);          // kilo: 74

    cout << "Ali'nin kilosu: " << ali.kilo << endl;

    calisan calisan1;
    calisan1.kilo = 80;
    calisan1.yemek_ye();      // override edilen metot �al���r: kilo +5

    cout << "Calisan1'in kilosu: " << calisan1.kilo << endl;
}


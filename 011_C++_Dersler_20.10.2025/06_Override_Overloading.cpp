/*
 Fonksiyon Overloading ve Overriding Açýklamasý:

1 Overloading (Aþýrý Yükleme):
- Ayný isimde birden fazla fonksiyon yazmaktýr.
- Farklý parametre sayýsý veya tipiyle tanýmlanýr.
- Derleyici, hangi fonksiyonun çaðrýlacaðýný parametrelere göre belirler.
 Ayný sýnýf içinde gerçekleþir.

2 Overriding (Ezme):
- Üst sýnýfta tanýmlý bir metodu, alt sýnýfta **ayný isim ve parametrelerle** yeniden tanýmlamaktýr.
- Kalýtým (inheritance) ile ilgilidir.
 Alt sýnýf, üst sýnýfýn davranýþýný deðiþtirmek için kullanýr.
*/

#include <iostream>  
#include <string>    
using namespace std; 

// 1. insan adýnda bir sýnýf tanýmlanýyor
class insan {
public:           
    int kilo;  // kilo bilgisi (public olduðu için miras alýndýðýnda da public kalýr)

    // Fonksiyon overloading: ayný isimde ama parametreleri farklý 2 fonksiyon

    void yemek_ye() { // overloading
        this->kilo++;  // kiloyu 1 artýr
    }

    void yemek_ye(int ogun) { // overloading
        for (int i = 0; i < ogun; i++) {
            this->kilo++;  // kaç öðünse o kadar kilo artýr
        }
    }
};

// 2. calisan sýnýfý, insan sýnýfýndan türetiliyor (kalýtým yapýlýyor)
class calisan : public insan {
    // Override: üst sýnýftaki yemek_ye() metodunu ezerek davranýþýný deðiþtiriyoruz
public:
    void yemek_ye() {
        this->kilo += 5;  // çalýþanlar yemeði fazla yiyor gibi örnek
    }
};

/*
  Kalýtým Türlerinin Eriþim Etkisi:
- public miras: public › public, protected › protected, private › miras alýnmaz
- protected miras: public + protected › protected, private › miras alýnmaz
- private miras: public + protected › private, private › miras alýnmaz
*/

// 3. Ana fonksiyon: örneklerin oluþturulduðu yer
void overrideOverloanding() {
    insan ali;
    ali.kilo = 70;
    ali.yemek_ye();           // kilo: 71
    ali.yemek_ye(3);          // kilo: 74

    cout << "Ali'nin kilosu: " << ali.kilo << endl;

    calisan calisan1;
    calisan1.kilo = 80;
    calisan1.yemek_ye();      // override edilen metot çalýþýr: kilo +5

    cout << "Calisan1'in kilosu: " << calisan1.kilo << endl;
}


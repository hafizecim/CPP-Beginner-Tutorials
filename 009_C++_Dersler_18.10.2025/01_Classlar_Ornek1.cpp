// sýnýfta aksi bir þey belirtilmediyse veriler private olarak tanýmlanýr ve yazýlmaz.
// public deðiþkenler eriþim belileyicisi ile tanýmlanmýþ olan deðiþken yada metot her yerden eriþime açýktýr. 
// private eriþim belirleyicisi ile tanýmlamýþ olan metot yada deðiþken sadece sýnýf içinde eriþime açýktýr.
// protected eriþim belirleyici ile tanýmlanmýþ olan metot yada deðiþken sýnýf içinden ve alt sýnýflardan eriþime açýktýr.


#include <iostream>
using namespace std;

/*
  C++ SINIFLAR (CLASS) ve ERÝÞÝM BELÝRLEYÝCÝLERÝ – ÖRNEK 1

  - Bir sýnýf tanýmlarken, içinde deðiþkenler (özellikler) ve metotlar (fonksiyonlar) tanýmlarýz.
  - Sýnýf elemanlarýna (deðiþken ve metotlara) eriþim "eriþim belirleyiciler" (public, private, protected) ile düzenlenir.

    public: Her yerden eriþilebilir
    private: Sadece sýnýfýn içinden eriþilebilir
    protected: Sýnýfýn içinden ve kalýtým alýnan sýnýflardan eriþilebilir

  Bu örnekte, bir 'insan' sýnýfý tanýmlanmýþ ve nesne üzerinden eriþim denenmiþtir.
*/

class insan {
public:
    int yas;  // Her yerden eriþilebilir
    int kilo;

    // Parametresiz yemek yeme fonksiyonu – 1 kilo arttýrýr
    int yemek_ye() {
        kilo++;
    }

    // OVERLOADING (Aþýrý Yükleme): Ayný isimde birden fazla metot tanýmlanabilir
    void yemek_ye2() {
        kilo++;
    }

    // Parametreli versiyon – öðün sayýsý kadar kilo arttýrýr
    void yemek_ye2(int ogun) {
        for (int i = 0; i < ogun; i++) {
            kilo++;
        }
    }

private:
    string ad; // Sadece sýnýf içinden eriþilebilir, dýþarýdan eriþim yasak
};

// Fonksiyon: insan sýnýfýný kullanarak bir nesne oluþturur ve metotlarýný kullanýr
void classlarOrnek1() {

    string metin = "komek";
    cout << "Metnin uzunlugu: " << metin.length() << endl; // string sýnýfý örneði

    insan ali;       // insan sýnýfýndan bir nesne oluþtur
    ali.yas = 36;    // public deðiþkene deðer atama
    ali.kilo = 80;   // kilo: 80

    cout << "Kilo : " << ali.kilo << endl;

    ali.yemek_ye();  // yemek_ye fonksiyonu 1 kilo arttýrýr › 81
    cout << "Kilo : " << ali.kilo << endl;

    ali.yemek_ye2(10); // 10 öðün yemek yedi › 10 kilo daha alýr › 91
    cout << "Kilo : " << ali.kilo << endl;

    // ali.ad = "Ali Ünal";  // ? HATA: 'ad' deðiþkeni private olduðu için eriþilemez
}


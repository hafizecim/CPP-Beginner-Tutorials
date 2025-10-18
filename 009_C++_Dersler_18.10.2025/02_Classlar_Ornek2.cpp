/*
  OVERLOADING (AÞIRI YÜKLEME) NEDÝR?

  Ayný isimde birden fazla fonksiyon tanýmlayabilme özelliðidir.
  Farklý parametre sayýsý veya türleriyle fonksiyonlarýn iþlevleri
  ayný isim altýnda çeþitlendirilir.

  Örneðin;
  void yemek_ye()       // Parametresiz fonksiyon
  void yemek_ye(int x)  // Parametreli fonksiyon

  Çaðrýlýrken gönderilen parametreye göre uygun fonksiyon seçilir.
*/

#include <iostream>
using namespace std;

class insan {
public:
    int yas;  // Her yerden eriþilebilir
    int kilo;

    // Parametresiz yemek yeme fonksiyonu + 1 kilo arttýrýr
    void yemek_ye() {
        kilo++;
    }

    // OVERLOADING (Aþýrý Yükleme): Ayný isimde birden fazla metot tanýmlanabilir
    void yemek_ye2() {
        kilo++;
    } 
    
    void yemek_ye2(int ogun); // Parametreli prototip 

};


// parametresiz fonksiyonun tanýmý
void insan::yemek_ye2() {
    kilo++;
}


 // Parametreli versiyon – öðün sayýsý kadar kilo arttýrýr
void insan::yemek_ye2(int ogun) {
    for (int i = 0; i < ogun; i++) {
            kilo++;
    }
}

// Fonksiyon: insan sýnýfýný kullanarak bir nesne oluþturur ve metotlarýný kullanýr
void classlarOrnek2() {

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


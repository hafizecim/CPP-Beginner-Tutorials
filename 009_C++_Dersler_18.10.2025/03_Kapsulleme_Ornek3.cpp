#include <iostream>
using namespace std;

/*
  KAPSÜLLEME (ENCAPSULATION) ÖRNEÐÝ – Getter ve Setter Kullanýmý

  - Kapsülleme, sýnýfýn iç verilerini korumak için "private" yapar.
  - Bu verilere doðrudan eriþim engellenir.
  - Deðerleri okumak için "getter" metotlarý,
  - Deðerleri deðiþtirmek için "setter" metotlarý kullanýlýr.
  - Böylece, deðiþkenlere güvenli ve kontrollü eriþim saðlanýr.
*/

/*
  this Anahtar Kelimesi:

  - Sýnýfýn içinde, o anki nesnenin adresini tutan özel bir iþaretçidir (pointer).
  - Özellikle, metot parametreleri ile sýnýfýn üye deðiþkenlerinin isimleri ayný olduðunda kullanýlýr.
  - this->kilo ifadesi, sýnýfýn üye deðiþkeni 'kilo'yu belirtir.
  - Böylece parametre 'kilo' ile üye deðiþken 'kilo' arasýndaki karýþýklýk önlenir.
  
  Örneðin:
  
  void set_kilo(int kilo) {
      this->kilo = kilo;  // Saðdaki 'kilo' parametre, soldaki 'kilo' nesnenin deðiþkeni
  }
  
  Bu sayede, metot içindeki parametre ile üye deðiþkeni ayýrt edebiliriz.
*/

// get_kilo() fonksiyonunun sonunda yer alan 'const' ifadesi,
// bu metodun sýnýfýn üye deðiþkenlerini deðiþtirmeyeceðini garanti eder.
// Yani, bu fonksiyon sadece veri okur, nesnenin durumunu deðiþtirmez.
// Böylece const nesneler üzerinde de çaðrýlabilir ve kod güvenliði artar.


class insan {
private:
    int kilo;  // private: sadece sýnýfýn içinde eriþilebilir

public:
    // Setter metot: kilo deðiþkenini ayarlar, negatif deðer kontrolü yapar
    void set_kilo(int kilo) {
        if (kilo < 0) {
            this->kilo = 1;  // Geçersiz deðer girilirse kilo 1 olarak atanýr
        } else if(kilo >800){
            this->kilo = 800;
        }else {
            this->kilo = kilo;
        }
    }

    // Getter metot: kilo deðiþkeninin deðerini döndürür
    int get_kilo()  const { 
        return this->kilo;
    }

    void yemek_ye() {
        this->kilo++;
    }

    void yemek_ye2(int ogun) {
         for (int i = 0; i < ogun; i++) {
            this->kilo++;
        }
    }
};


// Fonksiyon: insan sýnýfýný kullanarak nesne oluþturur, kapsülleme ile veri eriþimini gösterir
void kapsullemeOrnek3() {

    string metin = "komek";
    cout << "Metnin uzunlugu: " << metin.length() << endl;  // string sýnýfý örneði

    insan ali;          // insan sýnýfýndan nesne
    // ali.kilo = 80;   // HATALI: kilo private olduðu için doðrudan eriþim yok
    ali.set_kilo(-80);  // Setter ile negatif deðer girildi, kontrol devreye girer

    cout << "Kilo : " << ali.get_kilo() << endl; // Getter ile kilo okunur, çýktý: 1
}


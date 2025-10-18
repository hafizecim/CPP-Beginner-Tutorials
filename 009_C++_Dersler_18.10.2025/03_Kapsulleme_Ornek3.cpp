#include <iostream>
using namespace std;

/*
  KAPS�LLEME (ENCAPSULATION) �RNE�� � Getter ve Setter Kullan�m�

  - Kaps�lleme, s�n�f�n i� verilerini korumak i�in "private" yapar.
  - Bu verilere do�rudan eri�im engellenir.
  - De�erleri okumak i�in "getter" metotlar�,
  - De�erleri de�i�tirmek i�in "setter" metotlar� kullan�l�r.
  - B�ylece, de�i�kenlere g�venli ve kontroll� eri�im sa�lan�r.
*/

/*
  this Anahtar Kelimesi:

  - S�n�f�n i�inde, o anki nesnenin adresini tutan �zel bir i�aret�idir (pointer).
  - �zellikle, metot parametreleri ile s�n�f�n �ye de�i�kenlerinin isimleri ayn� oldu�unda kullan�l�r.
  - this->kilo ifadesi, s�n�f�n �ye de�i�keni 'kilo'yu belirtir.
  - B�ylece parametre 'kilo' ile �ye de�i�ken 'kilo' aras�ndaki kar���kl�k �nlenir.
  
  �rne�in:
  
  void set_kilo(int kilo) {
      this->kilo = kilo;  // Sa�daki 'kilo' parametre, soldaki 'kilo' nesnenin de�i�keni
  }
  
  Bu sayede, metot i�indeki parametre ile �ye de�i�keni ay�rt edebiliriz.
*/

// get_kilo() fonksiyonunun sonunda yer alan 'const' ifadesi,
// bu metodun s�n�f�n �ye de�i�kenlerini de�i�tirmeyece�ini garanti eder.
// Yani, bu fonksiyon sadece veri okur, nesnenin durumunu de�i�tirmez.
// B�ylece const nesneler �zerinde de �a�r�labilir ve kod g�venli�i artar.


class insan {
private:
    int kilo;  // private: sadece s�n�f�n i�inde eri�ilebilir

public:
    // Setter metot: kilo de�i�kenini ayarlar, negatif de�er kontrol� yapar
    void set_kilo(int kilo) {
        if (kilo < 0) {
            this->kilo = 1;  // Ge�ersiz de�er girilirse kilo 1 olarak atan�r
        } else if(kilo >800){
            this->kilo = 800;
        }else {
            this->kilo = kilo;
        }
    }

    // Getter metot: kilo de�i�keninin de�erini d�nd�r�r
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


// Fonksiyon: insan s�n�f�n� kullanarak nesne olu�turur, kaps�lleme ile veri eri�imini g�sterir
void kapsullemeOrnek3() {

    string metin = "komek";
    cout << "Metnin uzunlugu: " << metin.length() << endl;  // string s�n�f� �rne�i

    insan ali;          // insan s�n�f�ndan nesne
    // ali.kilo = 80;   // HATALI: kilo private oldu�u i�in do�rudan eri�im yok
    ali.set_kilo(-80);  // Setter ile negatif de�er girildi, kontrol devreye girer

    cout << "Kilo : " << ali.get_kilo() << endl; // Getter ile kilo okunur, ��kt�: 1
}


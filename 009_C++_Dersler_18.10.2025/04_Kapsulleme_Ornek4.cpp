#include <iostream>
using namespace std;

class insan {
private:
    int yas, kilo;  // private: sadece s�n�f�n i�inde eri�ilebilir, d��ar�dan do�rudan eri�im yok

public:
    // Setter metot: kilo de�i�kenini ayarlar, negatif veya a��r� de�er kontrol� yapar
    void set_kilo(int kilo) {
        if (kilo < 0) {
            this->kilo = 1;  // Ge�ersiz negatif de�er girilirse kilo 1 olarak atan�r
        } else if(kilo > 800){
            this->kilo = 800; // A��r� b�y�k de�er girilirse kilo 800 olarak s�n�rland�r�l�r
        } else {
            this->kilo = kilo; // Ge�erli de�er ise do�rudan atan�r
        }
    }

    // Getter metot: kilo de�i�keninin de�erini d�nd�r�r, const metot olmas� nesne de�i�tirmez
    int get_kilo()  const { 
        return this->kilo;
    }
    
    // Setter metot: yas de�i�kenini ayarlar, ge�erli ya� aral���na g�re kontrol yapar
    void set_yas(int yas) {
        if (yas >= 0 && yas <= 150) {
            this->yas = yas;  // Ge�erli ya� ise atan�r
        } else if(yas > 150){
            this->yas = 150;  // A��r� b�y�k ya� girilirse 150 olarak s�n�rland�r�l�r
        } else {
            this->yas = 0;    // Negatif de�er girilirse ya� 0 olarak atan�r
        }
    }

    // Getter metot: yas de�i�keninin de�erini d�nd�r�r, const metot
    int get_yas() const {
        return this->yas;
    }

};

// Fonksiyon: insan s�n�f�ndan nesne olu�turur, kaps�lleme (encapsulation) ile veri eri�imini g�sterir
void kapsullemeOrnek4() {

    insan ali;             // insan s�n�f�ndan ali nesnesi olu�turuldu
    ali.set_kilo(801);     // 801 de�eri ge�ersiz, set_kilo i�inde 800 olarak s�n�rland�r�l�r
    cout << "Kilo : " << ali.get_kilo() << endl; // Getter ile kilo okunur, ��kt�: 800
    
    ali.set_yas(-80);      // Negatif ya� de�eri ge�ersiz, set_yas i�inde 0 olarak atan�r
    cout << "Yas : " << ali.get_yas() << endl;   // Getter ile ya� okunur, ��kt�: 0
}


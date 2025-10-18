#include <iostream>
using namespace std;

class insan {
private:
    int yas, kilo;  // private: sadece sýnýfýn içinde eriþilebilir, dýþarýdan doðrudan eriþim yok

public:
    // Setter metot: kilo deðiþkenini ayarlar, negatif veya aþýrý deðer kontrolü yapar
    void set_kilo(int kilo) {
        if (kilo < 0) {
            this->kilo = 1;  // Geçersiz negatif deðer girilirse kilo 1 olarak atanýr
        } else if(kilo > 800){
            this->kilo = 800; // Aþýrý büyük deðer girilirse kilo 800 olarak sýnýrlandýrýlýr
        } else {
            this->kilo = kilo; // Geçerli deðer ise doðrudan atanýr
        }
    }

    // Getter metot: kilo deðiþkeninin deðerini döndürür, const metot olmasý nesne deðiþtirmez
    int get_kilo()  const { 
        return this->kilo;
    }
    
    // Setter metot: yas deðiþkenini ayarlar, geçerli yaþ aralýðýna göre kontrol yapar
    void set_yas(int yas) {
        if (yas >= 0 && yas <= 150) {
            this->yas = yas;  // Geçerli yaþ ise atanýr
        } else if(yas > 150){
            this->yas = 150;  // Aþýrý büyük yaþ girilirse 150 olarak sýnýrlandýrýlýr
        } else {
            this->yas = 0;    // Negatif deðer girilirse yaþ 0 olarak atanýr
        }
    }

    // Getter metot: yas deðiþkeninin deðerini döndürür, const metot
    int get_yas() const {
        return this->yas;
    }

};

// Fonksiyon: insan sýnýfýndan nesne oluþturur, kapsülleme (encapsulation) ile veri eriþimini gösterir
void kapsullemeOrnek4() {

    insan ali;             // insan sýnýfýndan ali nesnesi oluþturuldu
    ali.set_kilo(801);     // 801 deðeri geçersiz, set_kilo içinde 800 olarak sýnýrlandýrýlýr
    cout << "Kilo : " << ali.get_kilo() << endl; // Getter ile kilo okunur, çýktý: 800
    
    ali.set_yas(-80);      // Negatif yaþ deðeri geçersiz, set_yas içinde 0 olarak atanýr
    cout << "Yas : " << ali.get_yas() << endl;   // Getter ile yaþ okunur, çýktý: 0
}


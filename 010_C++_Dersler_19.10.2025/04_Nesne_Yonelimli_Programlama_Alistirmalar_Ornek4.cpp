// 1. "Bilgisayar" adýnda bir sýnýf tanýmlayýnýz.
// 2. Bu sýnýfa ait ve dýþarýdan eriþime kapalý (private) olan "ram" (int) ve "depolama" (int) adýnda 2 deðiþken tanýmlayýnýz.
// 3. Ram ve depolama için kapsülleme (setter ve getter) metotlarýný yazýnýz.
// 4. Parametreli ve parametresiz yapýcý metotlar tanýmlayýnýz.
// 5. Bilgisayar sýnýfýna ait "yukseltRam(int)" ve "azaltDepolama(int)" adýnda 2 metot yazýnýz.
// 6. Oluþturulan bilgisayar nesnelerinin sayýsýný tutmak için static bir "adet" deðiþkeni tanýmlayýnýz ve her nesne oluþtuðunda 1 artýrýnýz.
// 7. "sistemBilgisi()" adýnda bir metot tanýmlayarak RAM, depolama ve toplam nesne sayýsýný ekrana yazdýrýnýz.

#include <iostream>
using namespace std;

// 1. "Bilgisayar" adýnda bir sýnýf tanýmlanýyor.
class bilgisayar {
private:
    // 2. Eriþime kapalý "ram" ve "depolama" deðiþkenleri
    int ram, depolama;

public:
    // 6. Statik deðiþken: Oluþturulan bilgisayar nesnesi sayýsýný tutar
    static int adet;

    // 4. Parametresiz yapýcý metot: varsayýlan deðerler atanýr
    bilgisayar() {
        ram = 0;
        depolama = 0;
        adet++;  // Nesne sayýsý artýrýlýr
    }

    // 4. Parametreli yapýcý metot: dýþarýdan alýnan deðerlerle baþlatýlýr
    bilgisayar(int ram, int depolama) {
        this->ram = ram;
        this->depolama = depolama;
        adet++;
    }

    // 3. Setter metotlar (kapsülleme)
    void set_ram(int ram) {
        this->ram = ram;
    }

    void set_depolama(int depolama) {
        this->depolama = depolama;
    }

    // 3. Getter metotlar
    int get_ram() const {
        return this->ram;
    }

    int get_depolama() const {
        return this->depolama;
    }

    // 5. RAM yükseltme metodu
    void yukseltRam(int miktar) {
        this->ram += miktar;
    }

    // 5. Depolama azaltma metodu
    void azaltDepolama(int miktar) {
        this->depolama -= miktar;
        if (this->depolama < 0)
            this->depolama = 0; // Depolama negatif olamaz
    }

    // 7. Sistem bilgilerini ekrana yazdýran metot
    void sistemBilgisi() const {
        cout << "RAM: " << this->ram << " GB" << endl;
        cout << "Depolama: " << this->depolama << " GB" << endl;
        cout << "Toplam bilgisayar nesnesi: " << adet << endl;
    }
};

// 6. Statik deðiþken tanýmý
int bilgisayar::adet = 0;

// Test fonksiyonu
void nesneYonelimliProgAlistirma2() {
    // 2 bilgisayar nesnesi oluþturuluyor
    bilgisayar* b1 = new bilgisayar();
    bilgisayar* b2 = new bilgisayar(50, 40);

    // 7. Sistem bilgileri yazdýrýlýyor
    b1->sistemBilgisi();
    b2->sistemBilgisi();

    // Bellek temizleniyor
    delete b1;
    delete b2;
}


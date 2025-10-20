/*

1. Sýnýf tanýmý: class Kitap { … }
2. Private deðiþkenler: sayfaSayisi, fiyat
3. Setter/getter: Deðer sýnýrlarýyla güvenli deðiþken eriþimi
4. Yapýcý metotlar: Parametreli ve parametresiz biçimde nesne oluþturma
5. Ek metotlar: Sayfa ekleme ve indirimi örnekledim
6. Static deðiþken: adet ile toplam nesne sayýsýný takip
7. Bilgi metodu: Kitabýn bilgilerini ve adet sayýsýný ekrana yazdýrma

*/

#include <iostream>
#include <string>
using namespace std;

// 1. Kitap adýnda bir sýnýf tanýmlanýyor
class Kitap {
private:
    // 2. Eriþime kapalý (private) sayfa sayýsý ve fiyat
    int sayfaSayisi;
    double fiyat;

public:
    // 6. Oluþturulan nesneleri sayan static deðiþken
    static int adet;

    // 4. Parametresiz yapýcý
    Kitap() : sayfaSayisi(0), fiyat(0.0) {
        adet++;
    }

    // 4. Parametreli yapýcý
    Kitap(int sayfa, double f) {
        setSayfaSayisi(sayfa);
        setFiyat(f);
        adet++;
    }

    // 3. Kapsülleme: setter + getter
    void setSayfaSayisi(int s) {
        this->sayfaSayisi = (s < 1 ? 1 : s);
    }
    int getSayfaSayisi() const {
        return sayfaSayisi;
    }

    void setFiyat(double f) {
        this->fiyat = (f < 0 ? 0.0 : f);
    }
    double getFiyat() const {
        return fiyat;
    }

    // 5. Fiyatý artýran ve sayfa ekleyen metotlar
    void sayfaEkle(int s) {
        setSayfaSayisi(getSayfaSayisi() + s);
    }
    void indirimYap(double oran) {
        double yeni = fiyat * (1 - oran / 100);
        setFiyat(yeni);
    }

    // 7. Kitap bilgilerini + toplam nesne sayýsýný yazdýran metot
    void kitapBilgisi() const {
        cout << "Sayfa: " << sayfaSayisi
             << ", Fiyat: " << fiyat << " TL"
             << "\nKitap sayisi: " << adet << "\n\n";
    }
};

// 6. Static deðiþken tanýmý
int Kitap::adet = 0;

// --------------- KULLANIM ÖRNEÐÝ ---------------
void  nesneYonelimliProgKitapOrnek1() {
    Kitap k1;                           // 1. nesne
    Kitap k2(200, 49.99);              // 2. nesne (200 sayfa, 49.99 TL)

    k1.kitapBilgisi();
    k2.kitapBilgisi();

    // 5. Metotlarý uygulayalým
    k1.sayfaEkle(50);
    k1.indirimYap(10); // %10 indirim
    k1.kitapBilgisi();

    k2.indirimYap(20); // %20 indirim
    k2.kitapBilgisi();

}


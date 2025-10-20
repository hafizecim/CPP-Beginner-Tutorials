/*

1. S�n�f tan�m�: class Kitap { � }
2. Private de�i�kenler: sayfaSayisi, fiyat
3. Setter/getter: De�er s�n�rlar�yla g�venli de�i�ken eri�imi
4. Yap�c� metotlar: Parametreli ve parametresiz bi�imde nesne olu�turma
5. Ek metotlar: Sayfa ekleme ve indirimi �rnekledim
6. Static de�i�ken: adet ile toplam nesne say�s�n� takip
7. Bilgi metodu: Kitab�n bilgilerini ve adet say�s�n� ekrana yazd�rma

*/

#include <iostream>
#include <string>
using namespace std;

// 1. Kitap ad�nda bir s�n�f tan�mlan�yor
class Kitap {
private:
    // 2. Eri�ime kapal� (private) sayfa say�s� ve fiyat
    int sayfaSayisi;
    double fiyat;

public:
    // 6. Olu�turulan nesneleri sayan static de�i�ken
    static int adet;

    // 4. Parametresiz yap�c�
    Kitap() : sayfaSayisi(0), fiyat(0.0) {
        adet++;
    }

    // 4. Parametreli yap�c�
    Kitap(int sayfa, double f) {
        setSayfaSayisi(sayfa);
        setFiyat(f);
        adet++;
    }

    // 3. Kaps�lleme: setter + getter
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

    // 5. Fiyat� art�ran ve sayfa ekleyen metotlar
    void sayfaEkle(int s) {
        setSayfaSayisi(getSayfaSayisi() + s);
    }
    void indirimYap(double oran) {
        double yeni = fiyat * (1 - oran / 100);
        setFiyat(yeni);
    }

    // 7. Kitap bilgilerini + toplam nesne say�s�n� yazd�ran metot
    void kitapBilgisi() const {
        cout << "Sayfa: " << sayfaSayisi
             << ", Fiyat: " << fiyat << " TL"
             << "\nKitap sayisi: " << adet << "\n\n";
    }
};

// 6. Static de�i�ken tan�m�
int Kitap::adet = 0;

// --------------- KULLANIM �RNE�� ---------------
void  nesneYonelimliProgKitapOrnek1() {
    Kitap k1;                           // 1. nesne
    Kitap k2(200, 49.99);              // 2. nesne (200 sayfa, 49.99 TL)

    k1.kitapBilgisi();
    k2.kitapBilgisi();

    // 5. Metotlar� uygulayal�m
    k1.sayfaEkle(50);
    k1.indirimYap(10); // %10 indirim
    k1.kitapBilgisi();

    k2.indirimYap(20); // %20 indirim
    k2.kitapBilgisi();

}


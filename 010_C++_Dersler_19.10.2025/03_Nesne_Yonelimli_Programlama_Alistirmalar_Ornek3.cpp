// 1. Arac ad�nda bir s�n�f tan�mlay�n�z.
// 2. Arac s�n�f�na ait olan ve d��ar�dan  eri�ime kapal� olan h�z ad�nda bir de�i�ken tan�mly�n�z.
// 3. Hiz de�i�keninin kaps�llemesinde kullan�lan setter ve getter metotlar� tan�mlay�n�z.
// 4. Arac s�n�f�na ait olan parametreli ve parametresiz yap�c� metotlar� tan�mlay�n�z.
// 5. Arac s�n�fa ait ve d��ar�dan eri�ime a��k olan parametreli ve parametresiz gaz ve fren metotler�n� tan�mlay�n�z.
// 6. Ara� nesnesinin adedi tutabilen adet ad�ndaki statik de�i�keni tan�mlay�n�z ve her nesne �retildi�inde adedin bir art�r�lmas� sa�lay�n�z.
// 7. Ara� s�n�f�na ait hiz bilgisi ad�ndaki metodu tan�mlay�n�z ve h�z bilgisininin ekranda yazd�r�lmas�n� sa�lay�n�z.


#include <iostream>
using namespace std;

// 1. Arac ad�nda bir s�n�f tan�mlan�yor
class arac {
	
// 2. D��ar�dan eri�ime kapal� (private) hiz de�i�keni tan�mlan�yor
private:
    int hiz;
    int gaz;
    int fren;

public:
	// 6. Nesne say�s�n� tutan static de�i�ken (s�n�fa ait, nesnelere de�il)
    static int adet;  // Statik de�i�ken: ka� tane nesne olu�turuldu�unu sayar

    // 4. Parametresiz yap�c� metot: Nesne olu�turulurken otomatik �al���r
    arac() {
        hiz = 0;
        gaz = 0;
        fren = 0;
        adet++;  // Her nesne olu�tu�unda sayac� art�r
    }

    // 4. Parametreli yap�c� metot: Ba�lang�� de�erleri ile nesne olu�turur
    arac(int hiz, int gaz, int fren) {
        set_hiz(hiz);
        this->gaz = gaz;
        this->fren = fren;
        adet++;  // Her nesne olu�tu�unda sayac� art�r
    }

    // 3. Kaps�lleme: hiz de�i�keni i�in setter metodu
    void set_hiz(int hiz) {
        if (hiz < 0)
            this->hiz = 0;
        else if (hiz > 150)
            this->hiz = 150;
        else
            this->hiz = hiz;
    }

    // 3. Kaps�lleme: hiz de�i�keni i�in getter metodu
    int get_hiz() const {
        return hiz;
    }

    // 5. Parametresiz gaz verme metodu: h�z� sabit oranda art�r�r
    void gaz_ver() {
        if (hiz < 150)
            hiz += 10;  // �rnek: h�z 10 art�r
        if (hiz > 150)
            hiz = 150;  // Maksimum h�z s�n�r�
    }

    // 5. Parametreli gaz verme metodu: miktar kadar h�z� art�r�r
    void gaz_ver(int miktar) {
        set_hiz(hiz + miktar);
    }

    // 5. Parametresiz fren metodu: h�z� sabit miktarda azalt�r
    void fren_yap() {
        if (hiz > 0)
            hiz -= 10;  // �rnek: h�z 10 azalt
        if (hiz < 0)
            hiz = 0;    // H�z 0'dan az olamaz
    }

    // 5. Parametreli fren metodu: verilen miktar kadar azalt�r
    void fren_yap(int miktar) {
        set_hiz(hiz - miktar);
    }

    // 7. Arac�n h�z bilgisini ve toplam ara� say�s�n� ekrana yazd�ran metot
    void hiz_bilgisi() const {
        cout << "Arac hiz bilgisi: " << hiz << " km/s, Toplam arac nesnesi sayisi: " << adet << endl;
    }
};

// 6. Static de�i�ken s�n�f d���nda tan�mlanmal� (ba�lang�� de�eri 0)
int arac::adet = 0;

// Test fonksiyonu: S�n�f�n i�levlerini kontrol eder
void nesneYonelimliProgAlistirma1() {
    arac* i1 = new arac();               // Parametresiz nesne olu�turuluyor
    arac* i2 = new arac(100, 20, -20);   // Parametreli nesne (h�z: 100, gaz: 20, fren: -20)

    i1->hiz_bilgisi();  // i1 nesnesinin h�z ve adet bilgisi yazd�r�l�yor
    i2->hiz_bilgisi();  // i2 i�in de ayn� i�lem

    i1->gaz_ver(15);    // i1'e 15 km/s h�z veriliyor
    i2->fren_yap(30);   // i2'den 30 km/s h�z azalt�l�yor

    cout << "Gaz verildikten sonra i1: ";
    i1->hiz_bilgisi();

    cout << "Fren yap�ld�ktan sonra i2: ";
    i2->hiz_bilgisi();

    // S�n�f �zerinden static de�i�ken do�rudan �a�r�l�yor
    cout << "Toplam arac nesnesi sayisi (statik): " << arac::adet << endl;

    // Dinamik bellek temizli�i
    delete i1;
    delete i2;
}



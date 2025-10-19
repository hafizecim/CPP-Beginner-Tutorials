// 1. Arac adýnda bir sýnýf tanýmlayýnýz.
// 2. Arac sýnýfýna ait olan ve dýþarýdan  eriþime kapalý olan hýz adýnda bir deðiþken tanýmlyýnýz.
// 3. Hiz deðiþkeninin kapsüllemesinde kullanýlan setter ve getter metotlarý tanýmlayýnýz.
// 4. Arac sýnýfýna ait olan parametreli ve parametresiz yapýcý metotlarý tanýmlayýnýz.
// 5. Arac sýnýfa ait ve dýþarýdan eriþime açýk olan parametreli ve parametresiz gaz ve fren metotlerýný tanýmlayýnýz.
// 6. Araç nesnesinin adedi tutabilen adet adýndaki statik deðiþkeni tanýmlayýnýz ve her nesne üretildiðinde adedin bir artýrýlmasý saðlayýnýz.
// 7. Araç sýnýfýna ait hiz bilgisi adýndaki metodu tanýmlayýnýz ve hýz bilgisininin ekranda yazdýrýlmasýný saðlayýnýz.


#include <iostream>
using namespace std;

// 1. Arac adýnda bir sýnýf tanýmlanýyor
class arac {
	
// 2. Dýþarýdan eriþime kapalý (private) hiz deðiþkeni tanýmlanýyor
private:
    int hiz;
    int gaz;
    int fren;

public:
	// 6. Nesne sayýsýný tutan static deðiþken (sýnýfa ait, nesnelere deðil)
    static int adet;  // Statik deðiþken: kaç tane nesne oluþturulduðunu sayar

    // 4. Parametresiz yapýcý metot: Nesne oluþturulurken otomatik çalýþýr
    arac() {
        hiz = 0;
        gaz = 0;
        fren = 0;
        adet++;  // Her nesne oluþtuðunda sayacý artýr
    }

    // 4. Parametreli yapýcý metot: Baþlangýç deðerleri ile nesne oluþturur
    arac(int hiz, int gaz, int fren) {
        set_hiz(hiz);
        this->gaz = gaz;
        this->fren = fren;
        adet++;  // Her nesne oluþtuðunda sayacý artýr
    }

    // 3. Kapsülleme: hiz deðiþkeni için setter metodu
    void set_hiz(int hiz) {
        if (hiz < 0)
            this->hiz = 0;
        else if (hiz > 150)
            this->hiz = 150;
        else
            this->hiz = hiz;
    }

    // 3. Kapsülleme: hiz deðiþkeni için getter metodu
    int get_hiz() const {
        return hiz;
    }

    // 5. Parametresiz gaz verme metodu: hýzý sabit oranda artýrýr
    void gaz_ver() {
        if (hiz < 150)
            hiz += 10;  // Örnek: hýz 10 artýr
        if (hiz > 150)
            hiz = 150;  // Maksimum hýz sýnýrý
    }

    // 5. Parametreli gaz verme metodu: miktar kadar hýzý artýrýr
    void gaz_ver(int miktar) {
        set_hiz(hiz + miktar);
    }

    // 5. Parametresiz fren metodu: hýzý sabit miktarda azaltýr
    void fren_yap() {
        if (hiz > 0)
            hiz -= 10;  // Örnek: hýz 10 azalt
        if (hiz < 0)
            hiz = 0;    // Hýz 0'dan az olamaz
    }

    // 5. Parametreli fren metodu: verilen miktar kadar azaltýr
    void fren_yap(int miktar) {
        set_hiz(hiz - miktar);
    }

    // 7. Aracýn hýz bilgisini ve toplam araç sayýsýný ekrana yazdýran metot
    void hiz_bilgisi() const {
        cout << "Arac hiz bilgisi: " << hiz << " km/s, Toplam arac nesnesi sayisi: " << adet << endl;
    }
};

// 6. Static deðiþken sýnýf dýþýnda tanýmlanmalý (baþlangýç deðeri 0)
int arac::adet = 0;

// Test fonksiyonu: Sýnýfýn iþlevlerini kontrol eder
void nesneYonelimliProgAlistirma1() {
    arac* i1 = new arac();               // Parametresiz nesne oluþturuluyor
    arac* i2 = new arac(100, 20, -20);   // Parametreli nesne (hýz: 100, gaz: 20, fren: -20)

    i1->hiz_bilgisi();  // i1 nesnesinin hýz ve adet bilgisi yazdýrýlýyor
    i2->hiz_bilgisi();  // i2 için de ayný iþlem

    i1->gaz_ver(15);    // i1'e 15 km/s hýz veriliyor
    i2->fren_yap(30);   // i2'den 30 km/s hýz azaltýlýyor

    cout << "Gaz verildikten sonra i1: ";
    i1->hiz_bilgisi();

    cout << "Fren yapýldýktan sonra i2: ";
    i2->hiz_bilgisi();

    // Sýnýf üzerinden static deðiþken doðrudan çaðrýlýyor
    cout << "Toplam arac nesnesi sayisi (statik): " << arac::adet << endl;

    // Dinamik bellek temizliði
    delete i1;
    delete i2;
}



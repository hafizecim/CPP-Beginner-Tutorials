/*

1. Telefon adýnda bir sýnýf oluþturunuz.
2. Sýnýfa ait dýþarýdan eriþilemeyen (private) batarya (int) ve model (string) deðiþkenleri tanýmlayýnýz.
3. Bu deðiþkenler için setter ve getter metotlarýný yazýnýz.
4. Parametreli ve parametresiz yapýcý (constructor) metotlarý oluþturunuz.
5. Batarya gücünü artýran ve azaltan iki ayrý metot yazýnýz.
6. Oluþturulan telefon nesnelerinin sayýsýný tutmak için static int adet deðiþkeni tanýmlayýnýz.
7. telefonBilgisi() adýnda bir metot yazarak tüm bilgileri ekrana yazdýrýnýz.

*/

#include <iostream>
using namespace std;

// 1. Telefon sýnýfý tanýmlanýyor
class Telefon {
private:
    // 2. Private deðiþkenler: dýþarýdan eriþilemez
    int batarya;
    string model;

public:
    // 6. Statik deðiþken: Tüm telefon nesnelerinin sayýsýný tutar
    static int adet;

    // 4. Parametresiz yapýcý metot
    Telefon() {
        batarya = 100;        // varsayýlan batarya
        model = "Bilinmiyor"; // varsayýlan model
        adet++;               // her nesne oluþtuðunda sayaç artar
    }

    // 4. Parametreli yapýcý metot
    Telefon(int batarya, string model) {
        this->batarya = batarya;
        this->model = model;
        adet++;
    }

    // 3. Setter metotlar
    void setBatarya(int b) {
        if (b < 0) batarya = 0;
        else if (b > 100) batarya = 100;
        else batarya = b;
    }

    void setModel(string m) {
        model = m;
    }

    // 3. Getter metotlar
    int getBatarya() const {
        return batarya;
    }

    string getModel() const {
        return model;
    }

    // 5. Batarya artýran metot
    void sarjEt(int miktar) {
        batarya += miktar;
        if (batarya > 100) batarya = 100;
    }

    // 5. Batarya azaltan metot
    void kullan(int miktar) {
        batarya -= miktar;
        if (batarya < 0) batarya = 0;
    }

    // 7. Bilgi gösterme metodu
    void telefonBilgisi() const {
        cout << "Model: " << model << endl;
        cout << "Batarya: " << batarya << "%" << endl;
        cout << "Toplam telefon sayýsý: " << adet << endl;
        cout << "---------------------------" << endl;
    }
};

// 6. Statik deðiþkenin tanýmý (baþlangýç deðeri verilmesi gerekir)
int Telefon::adet = 0;

// Test fonksiyonu
void nesneYonelimliProgTelefonOrnek2() {
    // 2 telefon nesnesi oluþturuluyor
    Telefon t1;
    Telefon t2(80, "Samsung A52");

    // Bilgileri göster
    t1.telefonBilgisi();
    t2.telefonBilgisi();

    // Batarya güncelleniyor
    t1.setModel("iPhone 12");
    t1.kullan(30);         // %70 kalýr
    t2.sarjEt(15);         // maksimum %100'e çýkar

    // Bilgileri tekrar göster
    t1.telefonBilgisi();
    t2.telefonBilgisi();
}


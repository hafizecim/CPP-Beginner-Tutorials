/*

1. Telefon ad�nda bir s�n�f olu�turunuz.
2. S�n�fa ait d��ar�dan eri�ilemeyen (private) batarya (int) ve model (string) de�i�kenleri tan�mlay�n�z.
3. Bu de�i�kenler i�in setter ve getter metotlar�n� yaz�n�z.
4. Parametreli ve parametresiz yap�c� (constructor) metotlar� olu�turunuz.
5. Batarya g�c�n� art�ran ve azaltan iki ayr� metot yaz�n�z.
6. Olu�turulan telefon nesnelerinin say�s�n� tutmak i�in static int adet de�i�keni tan�mlay�n�z.
7. telefonBilgisi() ad�nda bir metot yazarak t�m bilgileri ekrana yazd�r�n�z.

*/

#include <iostream>
using namespace std;

// 1. Telefon s�n�f� tan�mlan�yor
class Telefon {
private:
    // 2. Private de�i�kenler: d��ar�dan eri�ilemez
    int batarya;
    string model;

public:
    // 6. Statik de�i�ken: T�m telefon nesnelerinin say�s�n� tutar
    static int adet;

    // 4. Parametresiz yap�c� metot
    Telefon() {
        batarya = 100;        // varsay�lan batarya
        model = "Bilinmiyor"; // varsay�lan model
        adet++;               // her nesne olu�tu�unda saya� artar
    }

    // 4. Parametreli yap�c� metot
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

    // 5. Batarya art�ran metot
    void sarjEt(int miktar) {
        batarya += miktar;
        if (batarya > 100) batarya = 100;
    }

    // 5. Batarya azaltan metot
    void kullan(int miktar) {
        batarya -= miktar;
        if (batarya < 0) batarya = 0;
    }

    // 7. Bilgi g�sterme metodu
    void telefonBilgisi() const {
        cout << "Model: " << model << endl;
        cout << "Batarya: " << batarya << "%" << endl;
        cout << "Toplam telefon say�s�: " << adet << endl;
        cout << "---------------------------" << endl;
    }
};

// 6. Statik de�i�kenin tan�m� (ba�lang�� de�eri verilmesi gerekir)
int Telefon::adet = 0;

// Test fonksiyonu
void nesneYonelimliProgTelefonOrnek2() {
    // 2 telefon nesnesi olu�turuluyor
    Telefon t1;
    Telefon t2(80, "Samsung A52");

    // Bilgileri g�ster
    t1.telefonBilgisi();
    t2.telefonBilgisi();

    // Batarya g�ncelleniyor
    t1.setModel("iPhone 12");
    t1.kullan(30);         // %70 kal�r
    t2.sarjEt(15);         // maksimum %100'e ��kar

    // Bilgileri tekrar g�ster
    t1.telefonBilgisi();
    t2.telefonBilgisi();
}


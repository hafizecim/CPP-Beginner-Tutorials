// 1. "Bilgisayar" ad�nda bir s�n�f tan�mlay�n�z.
// 2. Bu s�n�fa ait ve d��ar�dan eri�ime kapal� (private) olan "ram" (int) ve "depolama" (int) ad�nda 2 de�i�ken tan�mlay�n�z.
// 3. Ram ve depolama i�in kaps�lleme (setter ve getter) metotlar�n� yaz�n�z.
// 4. Parametreli ve parametresiz yap�c� metotlar tan�mlay�n�z.
// 5. Bilgisayar s�n�f�na ait "yukseltRam(int)" ve "azaltDepolama(int)" ad�nda 2 metot yaz�n�z.
// 6. Olu�turulan bilgisayar nesnelerinin say�s�n� tutmak i�in static bir "adet" de�i�keni tan�mlay�n�z ve her nesne olu�tu�unda 1 art�r�n�z.
// 7. "sistemBilgisi()" ad�nda bir metot tan�mlayarak RAM, depolama ve toplam nesne say�s�n� ekrana yazd�r�n�z.

#include <iostream>
using namespace std;

// 1. "Bilgisayar" ad�nda bir s�n�f tan�mlan�yor.
class bilgisayar {
private:
    // 2. Eri�ime kapal� "ram" ve "depolama" de�i�kenleri
    int ram, depolama;

public:
    // 6. Statik de�i�ken: Olu�turulan bilgisayar nesnesi say�s�n� tutar
    static int adet;

    // 4. Parametresiz yap�c� metot: varsay�lan de�erler atan�r
    bilgisayar() {
        ram = 0;
        depolama = 0;
        adet++;  // Nesne say�s� art�r�l�r
    }

    // 4. Parametreli yap�c� metot: d��ar�dan al�nan de�erlerle ba�lat�l�r
    bilgisayar(int ram, int depolama) {
        this->ram = ram;
        this->depolama = depolama;
        adet++;
    }

    // 3. Setter metotlar (kaps�lleme)
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

    // 5. RAM y�kseltme metodu
    void yukseltRam(int miktar) {
        this->ram += miktar;
    }

    // 5. Depolama azaltma metodu
    void azaltDepolama(int miktar) {
        this->depolama -= miktar;
        if (this->depolama < 0)
            this->depolama = 0; // Depolama negatif olamaz
    }

    // 7. Sistem bilgilerini ekrana yazd�ran metot
    void sistemBilgisi() const {
        cout << "RAM: " << this->ram << " GB" << endl;
        cout << "Depolama: " << this->depolama << " GB" << endl;
        cout << "Toplam bilgisayar nesnesi: " << adet << endl;
    }
};

// 6. Statik de�i�ken tan�m�
int bilgisayar::adet = 0;

// Test fonksiyonu
void nesneYonelimliProgAlistirma2() {
    // 2 bilgisayar nesnesi olu�turuluyor
    bilgisayar* b1 = new bilgisayar();
    bilgisayar* b2 = new bilgisayar(50, 40);

    // 7. Sistem bilgileri yazd�r�l�yor
    b1->sistemBilgisi();
    b2->sistemBilgisi();

    // Bellek temizleniyor
    delete b1;
    delete b2;
}


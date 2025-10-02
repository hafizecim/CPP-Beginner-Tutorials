#include <iostream>
using namespace std;

int main() {
    const int MAX = 100; // en fazla 100 öðrenci girebilir

    string adlar[MAX];
    int vize[MAX], final[MAX];
    float ortalama[MAX];

    string gecenler[MAX], kalanlar[MAX];
    int ogrenciSayisi = 0;
    int gecenSayi = 0, kalanSayi = 0;

    char devam;

    // ?? Öðrenci isimlerini alalým
    do {
        cout << "Ogrenci adini giriniz: ";
        cin >> adlar[ogrenciSayisi];

        cout << "Devam etmek istiyor musunuz? (E/H): ";
        cin >> devam;

        ogrenciSayisi++;
    } while ((devam == 'H' || devam == 'h') && ogrenciSayisi < MAX);

    // ?? Notlarý alalým
    for (int i = 0; i < ogrenciSayisi; i++) {
        cout << adlar[i] << " vize notu: ";
        cin >> vize[i];

        cout << adlar[i] << " final notu: ";
        cin >> final[i];

        ortalama[i] = vize[i] * 0.4 + final[i] * 0.6;
        cout << "Ortalama: " << ortalama[i] << endl;

        if (ortalama[i] >= 50) {
            cout << adlar[i] << " GECTI ?" << endl;
            gecenler[gecenSayi] = adlar[i];
            gecenSayi++;
        } else {
            cout << adlar[i] << " KALDI ?" << endl;
            kalanlar[kalanSayi] = adlar[i];
            kalanSayi++;
        }

        cout << "--------------------------" << endl;
    }

    // ?? Listeleme
    cout << "\n? GECENLER:\n";
    for (int i = 0; i < gecenSayi; i++) {
        cout << "- " << gecenler[i] << endl;
    }

    cout << "\n? KALANLAR:\n";
    for (int i = 0; i < kalanSayi; i++) {
        cout << "- " << kalanlar[i] << endl;
    }

    // ?? Baþarý oraný
    float basariOrani = (float)gecenSayi / ogrenciSayisi * 100;

    cout << "\nToplam Ogrenci Sayisi : " << ogrenciSayisi << endl;
    cout << "Gecen Ogrenci Sayisi  : " << gecenSayi << endl;
    cout << "Kalan Ogrenci Sayisi  : " << kalanSayi << endl;
    cout << "Sinif Basari Orani    : " << basariOrani << " %" << endl;

    return 0;
}


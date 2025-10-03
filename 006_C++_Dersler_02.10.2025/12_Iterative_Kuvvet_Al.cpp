#include <iostream>
using namespace std;

// Fonksiyon prototipleri
int itr_kuvvet_al(int taban, int ust);
int rec_kuvvet_al(int taban, int ust);

int recItr() {
    int taban, ust;
    cout << "Taban : ";
    cin >> taban;
    cout << "Ust : ";
    cin >> ust;

    // �teratif fonksiyon �a�r�s�
    int itr_sonuc = itr_kuvvet_al(taban, ust);
    // Recursive fonksiyon �a�r�s�
    int rec_sonuc = rec_kuvvet_al(taban, ust);

    cout << "Itr sonuc : " << itr_sonuc << endl;
    cout << "Rec sonuc : " << rec_sonuc << endl;

    return 0;
}

// Recursive �s alma fonksiyonu
int rec_kuvvet_al(int taban, int ust) {
    if (ust == 0) {
        return 1; // Her say�n�n 0. kuvveti 1'dir
    }
    return taban * rec_kuvvet_al(taban, ust - 1);
}

// �teratif �s alma fonksiyonu
int itr_kuvvet_al(int taban, int ust) {
    int sonuc = 1;
    for (int i = 0; i < ust; i++) {
        sonuc *= taban;  // taban ile �arp�yoruz
    }
    return sonuc; // d�ng� sonunda sonucu d�nd�r
}


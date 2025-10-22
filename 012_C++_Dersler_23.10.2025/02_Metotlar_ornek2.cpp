#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

int yazVeAl(string metin) {
    cout << metin;
    int giris;
    cin >> giris;
    return giris;
}

void yaz(string mesaj) {
    cout << mesaj << endl;
}


int topla(int a, int b) {
    return a + b;
}

int carp(int a, int b) {
    return a * b;
}


float bol(int a, int b) {
    if (b == 0) {
        cout << "Hata: S�f�ra b�l�nemez!" << endl;
        return 0;
    }
    return (float)a / b;
}

bool ciftMi(int sayi) {
    return sayi % 2 == 0;
}


int mutlakDeger(int sayi) {
    if (sayi < 0)
        return -sayi;
    else
        return sayi;
}

int kare(int sayi) {
    return sayi * sayi;
}

int faktoriyel(int sayi) {
    int sonuc = 1;
    for (int i = 1; i <= sayi; i++) {
        sonuc *= i;
    }
    return sonuc;
}


void metotlarOrnek2() {
    int x = yazVeAl("Bir say� girin: ");
    
    int a = yazVeAl("1. say�y� gir: ");
    int b = yazVeAl("2. say�y� gir: ");

    yaz("Toplam: " + topla(a, b));
    yaz("�arp�m: " + carp(a, b));

    if (ciftMi(a)) {
        yaz("Birinci say� �ift.");
    } else {
        yaz("Birinci say� tek.");
    }

    yaz("Birinci say�n�n karesi: " + kare(a));
    yaz("�kinci say�n�n fakt�riyeli: " + faktoriyel(b));
}


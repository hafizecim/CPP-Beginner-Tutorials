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
        cout << "Hata: Sýfýra bölünemez!" << endl;
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
    int x = yazVeAl("Bir sayý girin: ");
    
    int a = yazVeAl("1. sayýyý gir: ");
    int b = yazVeAl("2. sayýyý gir: ");

    yaz("Toplam: " + topla(a, b));
    yaz("Çarpým: " + carp(a, b));

    if (ciftMi(a)) {
        yaz("Birinci sayý çift.");
    } else {
        yaz("Birinci sayý tek.");
    }

    yaz("Birinci sayýnýn karesi: " + kare(a));
    yaz("Ýkinci sayýnýn faktöriyeli: " + faktoriyel(b));
}


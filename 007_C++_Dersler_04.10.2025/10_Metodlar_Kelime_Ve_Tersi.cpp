// Bir kelime girilir e�er kelimenin tersi ile okunu�u ayn� �se true de�ilse false d�ndr� metodlarlar yap
#include <iostream>
#include <string>  // string kullan�m� i�in
using namespace std;

// PARAMETREL� ve GER� DE�ER D�ND�REN METOT
bool kelimeTersiMetodlarOrnek10(string kelime) {
    int uzunluk = kelime.length();

    for (int i = 0; i < uzunluk / 2; i++) {
        if (kelime[i] != kelime[uzunluk - 1 - i]) {
            return false;  // Tersinden biri uyu�muyorsa palindrom de�il
        }
    }
    return true;  // T�m harfler tersinden ayn�ysa
}

int main() {
    string giris;
    cout << "Bir kelime giriniz: ";
    cin >> giris;

    // PAL�NDROM MU KONTROL�
    if (kelimeTersiMetodlarOrnek10(giris)) {
        cout << "\"" << giris << "\" bir palindromdur (true)" << endl;
    } else {
        cout << "\"" << giris << "\" bir palindrom degildir (false)" << endl;
    }

    return 0;
}


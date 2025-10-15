// Bir kelime girilir eðer kelimenin tersi ile okunuþu ayný þse true deðilse false döndrü metodlarlar yap
#include <iostream>
#include <string>  // string kullanýmý için
using namespace std;

// PARAMETRELÝ ve GERÝ DEÐER DÖNDÜREN METOT
bool kelimeTersiMetodlarOrnek10(string kelime) {
    int uzunluk = kelime.length();

    for (int i = 0; i < uzunluk / 2; i++) {
        if (kelime[i] != kelime[uzunluk - 1 - i]) {
            return false;  // Tersinden biri uyuþmuyorsa palindrom deðil
        }
    }
    return true;  // Tüm harfler tersinden aynýysa
}

int main() {
    string giris;
    cout << "Bir kelime giriniz: ";
    cin >> giris;

    // PALÝNDROM MU KONTROLÜ
    if (kelimeTersiMetodlarOrnek10(giris)) {
        cout << "\"" << giris << "\" bir palindromdur (true)" << endl;
    } else {
        cout << "\"" << giris << "\" bir palindrom degildir (false)" << endl;
    }

    return 0;
}


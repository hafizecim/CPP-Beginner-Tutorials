/*
    C++ TEMPLATE (ÞABLON) ÖRNEÐÝ

    - Template (þablon), fonksiyon ya da sýnýflarýn farklý veri tipleriyle çalýþmasýný saðlar.
    - Ayný iþlevi yapan ama farklý veri türlerini kullanan kodlar için tekrar yazmayý önler.
    - Aþaðýdaki örnekte toplama iþlemi için template fonksiyonu yazýlmýþtýr.
*/

#include <iostream>
#include <string>
using namespace std;

// Template tanýmý: T yerine her veri türü geçebilir (int, float, double, vs.)
template<typename T>
T toplama(T s1, T s2) {
    T sonuc = s1 + s2;
    return sonuc;
}

// Ana fonksiyon
void templateOrnek7() {
    // Þablon fonksiyon çaðrýsý: int türü için
    int sonuc1 = toplama<int>(3, 5);
    cout << "Toplam (int): " << sonuc1 << endl;

    // Þablon fonksiyon çaðrýsý: double türü için
    double sonuc2 = toplama<double>(3.2, 4.8);
    cout << "Toplam (double): " << sonuc2 << endl;

    // Þablon fonksiyon çaðrýsý: string türü için
    string sonuc3 = toplama<string>("Merhaba ", "Dunya!");
    cout << "Toplam (string): " << sonuc3 << endl;

}



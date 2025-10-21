/*
    C++ TEMPLATE (�ABLON) �RNE��

    - Template (�ablon), fonksiyon ya da s�n�flar�n farkl� veri tipleriyle �al��mas�n� sa�lar.
    - Ayn� i�levi yapan ama farkl� veri t�rlerini kullanan kodlar i�in tekrar yazmay� �nler.
    - A�a��daki �rnekte toplama i�lemi i�in template fonksiyonu yaz�lm��t�r.
*/

#include <iostream>
#include <string>
using namespace std;

// Template tan�m�: T yerine her veri t�r� ge�ebilir (int, float, double, vs.)
template<typename T>
T toplama(T s1, T s2) {
    T sonuc = s1 + s2;
    return sonuc;
}

// Ana fonksiyon
void templateOrnek7() {
    // �ablon fonksiyon �a�r�s�: int t�r� i�in
    int sonuc1 = toplama<int>(3, 5);
    cout << "Toplam (int): " << sonuc1 << endl;

    // �ablon fonksiyon �a�r�s�: double t�r� i�in
    double sonuc2 = toplama<double>(3.2, 4.8);
    cout << "Toplam (double): " << sonuc2 << endl;

    // �ablon fonksiyon �a�r�s�: string t�r� i�in
    string sonuc3 = toplama<string>("Merhaba ", "Dunya!");
    cout << "Toplam (string): " << sonuc3 << endl;

}



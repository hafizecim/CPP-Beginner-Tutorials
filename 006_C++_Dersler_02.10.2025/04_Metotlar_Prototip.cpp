#include <iostream>
/*
1. Geri de�er d�nd�rmeyen parametresiz metot
2. Geri de�er d�nd�rmeyen parametreli metot
3. Geri de�er d�nd�ren parametresiz metot
4. Geri de�er d�nd�ren parametreli metot
*/

using namespace std;

// ?? Fonksiyon prototipleri (bildirimler)
// Derleyici bu sayede main() i�inde tan�mlamadan �nce fonksiyonlar� tan�r
int f(int x); // f fonksiyonu: parametre olarak int al�r, int d�nd�r�r
int g(int x); // g fonksiyonu: parametre olarak int al�r, int d�nd�r�r
int s(int x); // s fonksiyonu: parametre olarak int al�r, int d�nd�r�r

void prototipOrnek() {
    // ?? Fonksiyonlar �a�r�l�yor

    cout << "f fonksiyonu : " << f(2) << endl; // f(2) � 2*2 + 3 = 7
    
    cout << "g fonksiyonu : " << g(3) << endl; // g(3) � 3 - 2 = 1
    
    cout << "f(g(3)) i� i�e fonksiyonu : " << f(g(3)) << endl; // g(3) = 1 � f(1) = 1*1 + 3 = 4
    
    cout << "s(3) i� i�e fonksiyonu : " << s(3) << endl; // s(3) = g(3)*g(3) + 3 � 1*1 + 3 = 4
    
}

// ?? Fonksiyon tan�mlar� (prototipler sayesinde a�a��da olmalar� sorun de�il)

// f fonksiyonu: x'in karesi + 3'� d�nd�r�r
int f(int x) {
    int sonuc = x * x + 3;
    return sonuc; // �rn: x = 2 � 4 + 3 = 7
}

// g fonksiyonu: x - 2'yi d�nd�r�r
int g(int x) {
    int sonuc = x - 2;
    return sonuc; // �rn: x = 3 � 1
}

// s fonksiyonu: g(x)'in karesi + 3
int s(int x) {
    return g(x) * g(x) + 3; // �rn: g(3) = 1 � 1*1 + 3 = 4
}



#include <iostream>
/*
1. Geri de�er d�nd�rmeyen parametresiz metot
2. Geri de�er d�nd�rmeyen parametreli metot
3. Geri de�er d�nd�ren parametresiz metot
4. Geri de�er d�nd�ren parametreli metot
*/

using namespace std;

// Fonksiyonlar s�ral� �ekilde yaz�lm�� ��nk� C++ derleyicisi tan�m yap�lmadan fonksiyonu tan�maz (prototip verilmemi�)

// g fonksiyonu: parametre x, d�n�� de�eri x - 2
int g(int x) { // �rne�in g(3) �a�r�ld���nda: 3 - 2 = 1
    int sonuc = x - 2;
    return sonuc; // sonucu d�nd�r
}

// f fonksiyonu: parametre x, d�n�� de�eri x*x + 3
int f(int x) { // �rne�in f(2): 2*2 + 3 = 7
    int sonuc = x * x + 3;
    return sonuc;
}

// s fonksiyonu: i�inde g(x) �a�r�l�p, onun karesi al�n�p 3 ekleniyor
int s(int x) { // �rne�in s(3): g(3) = 1 � 1*1 + 3 = 4
    return g(x) * g(x) + 3;
}

void iciceMetot() {

    cout << "f fonksiyonu : " << f(2) << endl; // f(2) � 2*2 + 3 = 7
    
    cout << "g fonksiyonu : " << g(3) << endl; // g(3) � 3 - 2 = 1
    
    cout << "f(g(3)) i� i�e fonksiyonu : " << f(g(3)) << endl; // g(3) = 1 � f(1) = 1*1 + 3 = 4
    
    cout << "s(3) i� i�e fonksiyonu : " << s(3) << endl; // s(3) � g(3) = 1 � 1*1 + 3 = 4
    
   
}



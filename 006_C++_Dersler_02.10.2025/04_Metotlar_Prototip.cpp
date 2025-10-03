#include <iostream>
/*
1. Geri deðer döndürmeyen parametresiz metot
2. Geri deðer döndürmeyen parametreli metot
3. Geri deðer döndüren parametresiz metot
4. Geri deðer döndüren parametreli metot
*/

using namespace std;

// ?? Fonksiyon prototipleri (bildirimler)
// Derleyici bu sayede main() içinde tanýmlamadan önce fonksiyonlarý tanýr
int f(int x); // f fonksiyonu: parametre olarak int alýr, int döndürür
int g(int x); // g fonksiyonu: parametre olarak int alýr, int döndürür
int s(int x); // s fonksiyonu: parametre olarak int alýr, int döndürür

void prototipOrnek() {
    // ?? Fonksiyonlar çaðrýlýyor

    cout << "f fonksiyonu : " << f(2) << endl; // f(2) › 2*2 + 3 = 7
    
    cout << "g fonksiyonu : " << g(3) << endl; // g(3) › 3 - 2 = 1
    
    cout << "f(g(3)) iç içe fonksiyonu : " << f(g(3)) << endl; // g(3) = 1 › f(1) = 1*1 + 3 = 4
    
    cout << "s(3) iç içe fonksiyonu : " << s(3) << endl; // s(3) = g(3)*g(3) + 3 › 1*1 + 3 = 4
    
}

// ?? Fonksiyon tanýmlarý (prototipler sayesinde aþaðýda olmalarý sorun deðil)

// f fonksiyonu: x'in karesi + 3'ü döndürür
int f(int x) {
    int sonuc = x * x + 3;
    return sonuc; // örn: x = 2 › 4 + 3 = 7
}

// g fonksiyonu: x - 2'yi döndürür
int g(int x) {
    int sonuc = x - 2;
    return sonuc; // örn: x = 3 › 1
}

// s fonksiyonu: g(x)'in karesi + 3
int s(int x) {
    return g(x) * g(x) + 3; // örn: g(3) = 1 › 1*1 + 3 = 4
}



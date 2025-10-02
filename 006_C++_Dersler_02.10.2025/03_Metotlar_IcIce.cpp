#include <iostream>
/*
1. Geri deðer döndürmeyen parametresiz metot
2. Geri deðer döndürmeyen parametreli metot
3. Geri deðer döndüren parametresiz metot
4. Geri deðer döndüren parametreli metot
*/

using namespace std;

// Fonksiyonlar sýralý þekilde yazýlmýþ çünkü C++ derleyicisi taným yapýlmadan fonksiyonu tanýmaz (prototip verilmemiþ)

// g fonksiyonu: parametre x, dönüþ deðeri x - 2
int g(int x) { // örneðin g(3) çaðrýldýðýnda: 3 - 2 = 1
    int sonuc = x - 2;
    return sonuc; // sonucu döndür
}

// f fonksiyonu: parametre x, dönüþ deðeri x*x + 3
int f(int x) { // örneðin f(2): 2*2 + 3 = 7
    int sonuc = x * x + 3;
    return sonuc;
}

// s fonksiyonu: içinde g(x) çaðrýlýp, onun karesi alýnýp 3 ekleniyor
int s(int x) { // örneðin s(3): g(3) = 1 › 1*1 + 3 = 4
    return g(x) * g(x) + 3;
}

void iciceMetot() {

    cout << "f fonksiyonu : " << f(2) << endl; // f(2) › 2*2 + 3 = 7
    
    cout << "g fonksiyonu : " << g(3) << endl; // g(3) › 3 - 2 = 1
    
    cout << "f(g(3)) iç içe fonksiyonu : " << f(g(3)) << endl; // g(3) = 1 › f(1) = 1*1 + 3 = 4
    
    cout << "s(3) iç içe fonksiyonu : " << s(3) << endl; // s(3) › g(3) = 1 › 1*1 + 3 = 4
    
   
}



#include <iostream>
/*
1. Geri de�er d�nd�rmeyen parametresiz metot
2. Geri de�er d�nd�rmeyen parametreli metot
3. Geri de�er d�nd�ren parametresiz metot
4. Geri de�er d�nd�ren parametreli metot
*/

using namespace std;

// 1. Geri de�er d�nd�rmeyen parametresiz metot
void selamla_1() { // METOT TANIMLAMA ��LEM�
    cout << "Merhaba" << endl;
}

// 2. Geri de�er d�nd�rmeyen parametreli metot -> �rnek 1
void selamla_2(string ad, string soyad) { // METOT TANIMLAMA ��LEM�
    cout << "Merhaba " << ad << " " << soyad << endl;
}

// 2. Geri de�er d�nd�rmeyen parametreli metot -> �rnek 2
void selamla_3(string ad, string soyad, int yas) { // METOT TANIMLAMA ��LEM�
    cout << "Merhaba " << ad << " " << soyad << " " << yas << endl;
}

//  main.cpp taraf�ndan �a�r�lacak fonksiyon
void geriDegerDondurmeyen() {
    // selamla_1(); 
    // ��kt�: Merhaba

    string ad = "Fatih";
    string soyad = "Unal";
    int yas = 36;

    selamla_2(ad, soyad);        
    // ��kt�: Merhaba Fatih Unal

    selamla_2(soyad, ad);        
    // ��kt�: Merhaba Unal Fatih

    selamla_3(ad, soyad, yas);   
    // ��kt�: Merhaba Fatih Unal 36

    // selamla_3(yas, soyad, ad); 
    // Hatal�: Derleme hatas� verir ��nk� s�ralama:
    // ad � string | soyad � string | yas � int �eklinde olmal�.
    // Burada ilk parametre `int` oldu�undan t�r uyu�mazl��� hatas� olur.

}


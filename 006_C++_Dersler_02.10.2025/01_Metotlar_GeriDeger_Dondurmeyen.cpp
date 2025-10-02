#include <iostream>
/*
1. Geri deðer döndürmeyen parametresiz metot
2. Geri deðer döndürmeyen parametreli metot
3. Geri deðer döndüren parametresiz metot
4. Geri deðer döndüren parametreli metot
*/

using namespace std;

// 1. Geri deðer döndürmeyen parametresiz metot
void selamla_1() { // METOT TANIMLAMA ÝÞLEMÝ
    cout << "Merhaba" << endl;
}

// 2. Geri deðer döndürmeyen parametreli metot -> Örnek 1
void selamla_2(string ad, string soyad) { // METOT TANIMLAMA ÝÞLEMÝ
    cout << "Merhaba " << ad << " " << soyad << endl;
}

// 2. Geri deðer döndürmeyen parametreli metot -> Örnek 2
void selamla_3(string ad, string soyad, int yas) { // METOT TANIMLAMA ÝÞLEMÝ
    cout << "Merhaba " << ad << " " << soyad << " " << yas << endl;
}

//  main.cpp tarafýndan çaðrýlacak fonksiyon
void geriDegerDondurmeyen() {
    // selamla_1(); 
    // Çýktý: Merhaba

    string ad = "Fatih";
    string soyad = "Unal";
    int yas = 36;

    selamla_2(ad, soyad);        
    // Çýktý: Merhaba Fatih Unal

    selamla_2(soyad, ad);        
    // Çýktý: Merhaba Unal Fatih

    selamla_3(ad, soyad, yas);   
    // Çýktý: Merhaba Fatih Unal 36

    // selamla_3(yas, soyad, ad); 
    // Hatalý: Derleme hatasý verir çünkü sýralama:
    // ad › string | soyad › string | yas › int þeklinde olmalý.
    // Burada ilk parametre `int` olduðundan tür uyuþmazlýðý hatasý olur.

}


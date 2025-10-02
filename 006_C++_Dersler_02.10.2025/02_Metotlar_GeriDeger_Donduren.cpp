#include <iostream>
/*
1. Geri deðer döndürmeyen parametresiz metot
2. Geri deðer döndürmeyen parametreli metot
3. Geri deðer döndüren parametresiz metot
4. Geri deðer döndüren parametreli metot
*/

using namespace std;

// 3. Geri deðer döndüren parametresiz metot -> 1. Örnek
int topla_1() {
    int s1 = 3;
    int s2 = 4;
    int sonuc = s1 + s2;
    return sonuc; // return ile dýþarýya int deðer döndürülüyor (çünkü topla_1 int, return daki sonuc da int olmak zorunda)
}

// 3. Geri deðer döndüren parametresiz metot -> 2. Örnek
int topla_2() {
    int s1 = 3, s2 = 4;
    return s1 + s2; // iþlemin sonucu doðrudan return ediliyor
}

// 4. Geri deðer döndüren parametreli metot -> 1. Örnek
int topla_3(int s1, int s2) {
    return s1 + s2; // parametre olarak gelen deðerlerin toplamý döndürülüyor
}

// 4. Geri deðer döndüren parametreli metot -> 2. Örnek
int topla_4() {
    int s1 = 3, s2 = 4;
    return s1 + s2; // sabit iki sayýnýn toplamý döndürülüyor
}

void geriDegerDonduren() {
    // 1. yöntem çýktý -> 3. Geri deðer döndüren parametresiz metot
    cout << topla_1(); // metot doðrudan cout içine yazýlmýþ

    // 2. yöntem çýktý -> 3. Geri deðer döndüren parametresiz metot
    int islem_sonucu = topla_2(); // dönen deðer önce deðiþkene atanýyor
    cout << islem_sonucu;

    // 1. yöntem çýktý -> 4. Geri deðer döndüren parametreli metot
    cout << topla_3(3, 5); // parametre olarak 3 ve 5 verilmiþ

    // 2. yöntem çýktý -> 4. Geri deðer döndüren parametreli metot
    int s1 = 10, s2 = 20; // dýþarýdan deðerler veriliyor
    cout << topla_3(s1, s2); // bu deðerlerle metot çaðrýlýyor

   
}



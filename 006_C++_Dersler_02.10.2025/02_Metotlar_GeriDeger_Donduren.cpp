#include <iostream>
/*
1. Geri de�er d�nd�rmeyen parametresiz metot
2. Geri de�er d�nd�rmeyen parametreli metot
3. Geri de�er d�nd�ren parametresiz metot
4. Geri de�er d�nd�ren parametreli metot
*/

using namespace std;

// 3. Geri de�er d�nd�ren parametresiz metot -> 1. �rnek
int topla_1() {
    int s1 = 3;
    int s2 = 4;
    int sonuc = s1 + s2;
    return sonuc; // return ile d��ar�ya int de�er d�nd�r�l�yor (��nk� topla_1 int, return daki sonuc da int olmak zorunda)
}

// 3. Geri de�er d�nd�ren parametresiz metot -> 2. �rnek
int topla_2() {
    int s1 = 3, s2 = 4;
    return s1 + s2; // i�lemin sonucu do�rudan return ediliyor
}

// 4. Geri de�er d�nd�ren parametreli metot -> 1. �rnek
int topla_3(int s1, int s2) {
    return s1 + s2; // parametre olarak gelen de�erlerin toplam� d�nd�r�l�yor
}

// 4. Geri de�er d�nd�ren parametreli metot -> 2. �rnek
int topla_4() {
    int s1 = 3, s2 = 4;
    return s1 + s2; // sabit iki say�n�n toplam� d�nd�r�l�yor
}

void geriDegerDonduren() {
    // 1. y�ntem ��kt� -> 3. Geri de�er d�nd�ren parametresiz metot
    cout << topla_1(); // metot do�rudan cout i�ine yaz�lm��

    // 2. y�ntem ��kt� -> 3. Geri de�er d�nd�ren parametresiz metot
    int islem_sonucu = topla_2(); // d�nen de�er �nce de�i�kene atan�yor
    cout << islem_sonucu;

    // 1. y�ntem ��kt� -> 4. Geri de�er d�nd�ren parametreli metot
    cout << topla_3(3, 5); // parametre olarak 3 ve 5 verilmi�

    // 2. y�ntem ��kt� -> 4. Geri de�er d�nd�ren parametreli metot
    int s1 = 10, s2 = 20; // d��ar�dan de�erler veriliyor
    cout << topla_3(s1, s2); // bu de�erlerle metot �a�r�l�yor

   
}



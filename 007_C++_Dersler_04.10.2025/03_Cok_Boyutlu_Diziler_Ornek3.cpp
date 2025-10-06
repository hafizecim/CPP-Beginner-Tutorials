/* Dizi ��kt�s� a�a��daki matris olan C++ kodunu yaz�n�z:

1       0       0       0       0
0       1       0       0       0
0       0       1       0       0
0       0       0       1       0
0       0       0       0       1

*/


#include <iostream>
using namespace std;

// main.cpp taraf�ndan �a�r�lacak �rnek fonksiyon
void cokBoyutluDizilerOrnek3() {

  // 5x5 boyutunda bir �ok boyutlu dizi (matris) tan�mlan�yor
  // int dizi[satir][sutun];
  int dizi[5][5]; // 5 sat�r, 5 s�tunluk matris

  // D�Z�YE DE�ER ATAMA
  // E�er sat�r ve s�tun indeksleri e�itse (yani k��egen), 1 atan�r
  // Di�er h�crelere ise 0 atan�r
  for (int i = 0; i < 5; i++) {        // Sat�rlar� dola�
    for (int j = 0; j < 5; j++) {      // S�tunlar� dola�
      if (i == j) {
        dizi[i][j] = 1;               // K��egen elemanlara 1 ata
      } else {
        dizi[i][j] = 0;               // Di�er elemanlara 0 ata
      }
    }
  }

  // D�Z�Y� EKRANA YAZDIRMA
  // Matris bi�iminde ��kt� al�n�r
  for (int i = 0; i < 5; i++) {        // Sat�rlar� dola�
    for (int j = 0; j < 5; j++) {      // S�tunlar� dola�
      cout << dizi[i][j] << "\t";     // Eleman� yazd�r (sekme ile hizal�)
    }
    cout << endl;                     // Her sat�rdan sonra yeni sat�ra ge�
  }
}






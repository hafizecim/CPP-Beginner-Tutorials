/* Dizi ��kt�s� a�a��daki matris olan C++ kodunu yaz�n�z:

1       1       1       1       1
2       2       2       2       2
3       3       3       3       3
4       4       4       4       4
5       5       5       5       5

*/


#include <iostream>
using namespace std;

// main.cpp taraf�ndan �a�r�lacak �rnek fonksiyon
void cokBoyutluDizilerOrnek7() {

  // 5x5 boyutunda bir �ok boyutlu dizi (matris) tan�mlan�yor
  // int dizi[satir][sutun];
  int dizi[5][5]; // 5 sat�r, 5 s�tunluk matris

  // D�Z�YE DE�ER ATAMA
  // E�er sat�r ve s�tun indeksleri e�itse (yani k��egen), 1 atan�r
  // Di�er h�crelere ise 0 atan�r
  
  // 1. yol
  for (int i = 0; i < 5; i++) {        // Sat�rlar� dola�
    for (int j = 0; j < 5; j++) {      // S�tunlar� dola�
      dizi[i][j]=i+1;
    }
  }
  
  /* 2. Yol
  for (int i = 0; i < 5; i++) {        // Sat�rlar� dola�
    for (int j = 0; j < 5; j++) {      // S�tunlar� dola�
      if (j  == 0 ) {
        dizi[i][j] = 1;               // K��egen elemanlara 1 ata
      } else if (i  == 1 ) {
        dizi[i][j] = 2;               // Di�er elemanlara 0 ata
      }
      else if (i  == 2 ) {
        dizi[i][j] = 3;               // Di�er elemanlara 0 ata
      }
      else if (i  == 3 ) {
        dizi[i][j] = 4;               // Di�er elemanlara 0 ata
      }
      else if (i  == 4 ) {
        dizi[i][j] = 5;               // Di�er elemanlara 0 ata
      }
    }
  }
*/
  // D�Z�Y� EKRANA YAZDIRMA
  // Matris bi�iminde ��kt� al�n�r
  for (int i = 0; i < 5; i++) {        // Sat�rlar� dola�
    for (int j = 0; j < 5; j++) {      // S�tunlar� dola�
      cout << dizi[i][j] << "\t";     // Eleman� yazd�r (sekme ile hizal�)
    }
    cout << endl;                     // Her sat�rdan sonra yeni sat�ra ge�
  }
}

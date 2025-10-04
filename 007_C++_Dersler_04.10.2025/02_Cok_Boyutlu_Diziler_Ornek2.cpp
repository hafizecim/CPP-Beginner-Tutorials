/* Dizi ��kt�s� a�a��daki matris olan C++ kodunu yaz�n�z:

0       0       0       0
1       1       1       1
2       2       2       2
3       3       3       3

*/


#include <iostream>
using namespace std;

// main.cpp taraf�ndan �a�r�lacak �rnek fonksiyon
void cokBoyutluDizilerOrnek2() {

  // 4x4 boyutunda �ok boyutlu bir dizi (matris) tan�mlan�yor
  // int dizi[satir][sutun];
  int dizi[4][4]; // 4 sat�r, 4 s�tunluk matris

  // D�Z�YE DE�ER ATAMA
  // Her bir h�creye i de�eri atan�yor (yani sat�r numaras�)
  for (int i = 0; i < 4; i++) {       // Sat�rlar� dola�
    for (int j = 0; j < 4; j++) {     // S�tunlar� dola�
      dizi[i][j] = i;                 // Her h�creye i de�eri ata
    }
  }

  // D�Z�Y� EKRANA YAZDIRMA
  // Sat�r sat�r, s�tun s�tun t�m dizi yazd�r�l�yor
  for (int i = 0; i < 4; i++) {       // Sat�rlar� dola�
    for (int j = 0; j < 4; j++) {     // S�tunlar� dola�
      cout << dizi[i][j] << "\t";    // Eleman� ekrana yaz ve sekmeyle hizala
    }
    cout << endl;                    // Her sat�rdan sonra bir alt sat�ra ge�
  }
}


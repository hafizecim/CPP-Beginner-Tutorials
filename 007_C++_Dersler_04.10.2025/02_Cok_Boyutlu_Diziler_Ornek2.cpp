/* Dizi çýktýsý aþaðýdaki matris olan C++ kodunu yazýnýz:

0       0       0       0
1       1       1       1
2       2       2       2
3       3       3       3

*/


#include <iostream>
using namespace std;

// main.cpp tarafýndan çaðrýlacak örnek fonksiyon
void cokBoyutluDizilerOrnek2() {

  // 4x4 boyutunda çok boyutlu bir dizi (matris) tanýmlanýyor
  // int dizi[satir][sutun];
  int dizi[4][4]; // 4 satýr, 4 sütunluk matris

  // DÝZÝYE DEÐER ATAMA
  // Her bir hücreye i deðeri atanýyor (yani satýr numarasý)
  for (int i = 0; i < 4; i++) {       // Satýrlarý dolaþ
    for (int j = 0; j < 4; j++) {     // Sütunlarý dolaþ
      dizi[i][j] = i;                 // Her hücreye i deðeri ata
    }
  }

  // DÝZÝYÝ EKRANA YAZDIRMA
  // Satýr satýr, sütun sütun tüm dizi yazdýrýlýyor
  for (int i = 0; i < 4; i++) {       // Satýrlarý dolaþ
    for (int j = 0; j < 4; j++) {     // Sütunlarý dolaþ
      cout << dizi[i][j] << "\t";    // Elemaný ekrana yaz ve sekmeyle hizala
    }
    cout << endl;                    // Her satýrdan sonra bir alt satýra geç
  }
}


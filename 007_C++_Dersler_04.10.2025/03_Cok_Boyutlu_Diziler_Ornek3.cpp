/* Dizi çýktýsý aþaðýdaki matris olan C++ kodunu yazýnýz:

1       0       0       0       0
0       1       0       0       0
0       0       1       0       0
0       0       0       1       0
0       0       0       0       1

*/


#include <iostream>
using namespace std;

// main.cpp tarafýndan çaðrýlacak örnek fonksiyon
void cokBoyutluDizilerOrnek3() {

  // 5x5 boyutunda bir çok boyutlu dizi (matris) tanýmlanýyor
  // int dizi[satir][sutun];
  int dizi[5][5]; // 5 satýr, 5 sütunluk matris

  // DÝZÝYE DEÐER ATAMA
  // Eðer satýr ve sütun indeksleri eþitse (yani köþegen), 1 atanýr
  // Diðer hücrelere ise 0 atanýr
  for (int i = 0; i < 5; i++) {        // Satýrlarý dolaþ
    for (int j = 0; j < 5; j++) {      // Sütunlarý dolaþ
      if (i == j) {
        dizi[i][j] = 1;               // Köþegen elemanlara 1 ata
      } else {
        dizi[i][j] = 0;               // Diðer elemanlara 0 ata
      }
    }
  }

  // DÝZÝYÝ EKRANA YAZDIRMA
  // Matris biçiminde çýktý alýnýr
  for (int i = 0; i < 5; i++) {        // Satýrlarý dolaþ
    for (int j = 0; j < 5; j++) {      // Sütunlarý dolaþ
      cout << dizi[i][j] << "\t";     // Elemaný yazdýr (sekme ile hizalý)
    }
    cout << endl;                     // Her satýrdan sonra yeni satýra geç
  }
}






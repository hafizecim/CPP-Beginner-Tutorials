/* Dizi çýktýsý aþaðýdaki matris olan C++ kodunu yazýnýz:

1       1       1       1       1
2       2       2       2       2
3       3       3       3       3
4       4       4       4       4
5       5       5       5       5

*/


#include <iostream>
using namespace std;

// main.cpp tarafýndan çaðrýlacak örnek fonksiyon
void cokBoyutluDizilerOrnek7() {

  // 5x5 boyutunda bir çok boyutlu dizi (matris) tanýmlanýyor
  // int dizi[satir][sutun];
  int dizi[5][5]; // 5 satýr, 5 sütunluk matris

  // DÝZÝYE DEÐER ATAMA
  // Eðer satýr ve sütun indeksleri eþitse (yani köþegen), 1 atanýr
  // Diðer hücrelere ise 0 atanýr
  
  // 1. yol
  for (int i = 0; i < 5; i++) {        // Satýrlarý dolaþ
    for (int j = 0; j < 5; j++) {      // Sütunlarý dolaþ
      dizi[i][j]=i+1;
    }
  }
  
  /* 2. Yol
  for (int i = 0; i < 5; i++) {        // Satýrlarý dolaþ
    for (int j = 0; j < 5; j++) {      // Sütunlarý dolaþ
      if (j  == 0 ) {
        dizi[i][j] = 1;               // Köþegen elemanlara 1 ata
      } else if (i  == 1 ) {
        dizi[i][j] = 2;               // Diðer elemanlara 0 ata
      }
      else if (i  == 2 ) {
        dizi[i][j] = 3;               // Diðer elemanlara 0 ata
      }
      else if (i  == 3 ) {
        dizi[i][j] = 4;               // Diðer elemanlara 0 ata
      }
      else if (i  == 4 ) {
        dizi[i][j] = 5;               // Diðer elemanlara 0 ata
      }
    }
  }
*/
  // DÝZÝYÝ EKRANA YAZDIRMA
  // Matris biçiminde çýktý alýnýr
  for (int i = 0; i < 5; i++) {        // Satýrlarý dolaþ
    for (int j = 0; j < 5; j++) {      // Sütunlarý dolaþ
      cout << dizi[i][j] << "\t";     // Elemaný yazdýr (sekme ile hizalý)
    }
    cout << endl;                     // Her satýrdan sonra yeni satýra geç
  }
}

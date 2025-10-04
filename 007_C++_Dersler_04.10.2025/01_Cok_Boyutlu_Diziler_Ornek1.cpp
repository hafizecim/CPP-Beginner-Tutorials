#include <iostream>
using namespace std;

// main.cpp tarafýndan çaðrýlacak fonksiyon
void cokBoyutluDizilerOrnek1() {

  // 5 satýr, 4 sütunluk bir çok boyutlu dizi (matris) tanýmlanýyor
  int dizi[5][4];  // int dizi[satir][sutun];

  // Dizinin ilk satýrýndaki elemanlara deðer atanýyor
  dizi[0][0] = 12; // 1. satýr 1. sütun
  dizi[0][1] = 45; // 1. satýr 2. sütun
  dizi[0][2] = 78; // 1. satýr 3. sütun
  dizi[0][3] = 4;  // 1. satýr 4. sütun

  // 2. satýr
  dizi[1][0] = 15;
  dizi[1][1] = 75;
  dizi[1][2] = 48;
  dizi[1][3] = 8;

  // 3. satýr
  dizi[2][0] = 16;
  dizi[2][1] = 49;
  dizi[2][2] = 38;
  dizi[2][3] = 24;

  // 4. satýr
  dizi[3][0] = 32;
  dizi[3][1] = 48;
  dizi[3][2] = 38;
  dizi[3][3] = 64;
  
  // 5. satýr
  dizi[4][0] = 35;
  dizi[4][1] = 68;
  dizi[4][2] = 18;
  dizi[4][3] = 24;

  // Diziyi ekrana yazdýrmak için iç içe döngü
  for (int i = 0; i < 5; i++) {         // Satýrlarý dolaþ
    for (int j = 0; j < 4; j++) {       // Sütunlarý dolaþ
      cout << dizi[i][j] << "\t";      // Elemaný yazdýr ve sekmeyle hizala
    }
    cout << endl;                      // Her satýrdan sonra bir alt satýra geç
  }
}



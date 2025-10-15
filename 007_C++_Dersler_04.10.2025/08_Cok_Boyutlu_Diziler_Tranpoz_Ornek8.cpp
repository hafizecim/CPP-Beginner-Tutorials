/* Dizi çýktýsý aþaðýdaki matris olan C++ kodunu yazýnýz ve transpozunu alýnýz:

1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5


***** Transpoz Çýktýsý ******

1       1       1       1       1
2       2       2       2       2
3       3       3       3       3
4       4       4       4       4
5       5       5       5       5

*/

#include <iostream>
using namespace std;

// main.cpp tarafýndan çaðrýlacak örnek fonksiyon
void cokBoyutluDizilerTranspozOrnek8() {

  // 5x5 boyutunda bir çok boyutlu dizi (matris) tanýmlanýyor
  int dizi[5][5];         // Orijinal matris
  int transpoz[5][5];     // Transpoz matrisi

  // DÝZÝYE DEÐER ATAMA
  // Her satýrda 1 2 3 4 5 olacak þekilde atanýr
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      dizi[i][j] = j + 1;
    }
  }

  // TRANSPOZ ALMA
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      transpoz[j][i] = dizi[i][j];
    }
  }

  // ORÝJÝNAL MATRÝSÝ YAZDIRMA
  cout << "******** Orijinal Matris ********\n";
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << dizi[i][j] << "\t";
    }
    cout << endl;
  }

  // TRANSPOZ MATRÝSÝ YAZDIRMA
  cout << "\n******** Transpoz Matris ********\n";
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << transpoz[i][j] << "\t";
    }
    cout << endl;
  }

} 


/* Dizi ��kt�s� a�a��daki matris olan C++ kodunu yaz�n�z ve transpozunu al�n�z:

1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5


***** Transpoz ��kt�s� ******

1       1       1       1       1
2       2       2       2       2
3       3       3       3       3
4       4       4       4       4
5       5       5       5       5

*/

#include <iostream>
using namespace std;

// main.cpp taraf�ndan �a�r�lacak �rnek fonksiyon
void cokBoyutluDizilerTranspozOrnek8() {

  // 5x5 boyutunda bir �ok boyutlu dizi (matris) tan�mlan�yor
  int dizi[5][5];         // Orijinal matris
  int transpoz[5][5];     // Transpoz matrisi

  // D�Z�YE DE�ER ATAMA
  // Her sat�rda 1 2 3 4 5 olacak �ekilde atan�r
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

  // OR�J�NAL MATR�S� YAZDIRMA
  cout << "******** Orijinal Matris ********\n";
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << dizi[i][j] << "\t";
    }
    cout << endl;
  }

  // TRANSPOZ MATR�S� YAZDIRMA
  cout << "\n******** Transpoz Matris ********\n";
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << transpoz[i][j] << "\t";
    }
    cout << endl;
  }

} 


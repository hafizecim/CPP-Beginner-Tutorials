#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  // For Sonsuz Döngü Örnek 1
  for (int i = 0; true; i++) {
    cout << "FOR : " << i << endl;
  }

  // For Sonsuz Döngü Örnek 2
  for (; true;) {
    cout << "FOR : " << endl;
  }

  // For Sonsuz Döngü Örnek 3
  bool kontrol = true;
  for (; kontrol;) {
    cout << "FOR : " << endl;
  }

  // For Sonsuz Döngü Örnek 4
  for (;;) {
    cout << "FOR : " << endl;
  }

  // For Sonsuz Döngü Örnek 1 (break ile sonlandýrma)
  for (int j = 0; true; j++) {
    cout << "FOR : " << j << endl;
    if (j == 1000) {
      break;
    }
  }

  // For Sonsuz Döngü Örnek 3 (þart deðiþimiyle sonlandýrma)
  bool kontrol2 = true;
  int k = 0;
  for (; kontrol2;) {
    cout << "FOR : " << k << endl;
    k++;
    if (k == 5000) {
      kontrol2 = false;
    }
  }

  // While Sonsuz Döngü Örnek 1
  int a = 0;
  while (true) {
    cout << "WHILE :" << a << endl;
    a++;
  }

  // While Sonsuz Döngü Örnek 2
  bool kontrol3 = true;
  while (kontrol3) {
    cout << "WHILE" << endl;
  }

  // Do-While Sonsuz Döngü Örnek 1
  int b = 0;
  do {
    cout << "DO WHILE:" << b << endl;
    b++;
  } while (true);

  return 0;
}


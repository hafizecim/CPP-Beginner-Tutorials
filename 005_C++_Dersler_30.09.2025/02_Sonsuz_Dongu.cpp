#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  // For Sonsuz D�ng� �rnek 1
  for (int i = 0; true; i++) {
    cout << "FOR : " << i << endl;
  }

  // For Sonsuz D�ng� �rnek 2
  for (; true;) {
    cout << "FOR : " << endl;
  }

  // For Sonsuz D�ng� �rnek 3
  bool kontrol = true;
  for (; kontrol;) {
    cout << "FOR : " << endl;
  }

  // For Sonsuz D�ng� �rnek 4
  for (;;) {
    cout << "FOR : " << endl;
  }

  // For Sonsuz D�ng� �rnek 1 (break ile sonland�rma)
  for (int j = 0; true; j++) {
    cout << "FOR : " << j << endl;
    if (j == 1000) {
      break;
    }
  }

  // For Sonsuz D�ng� �rnek 3 (�art de�i�imiyle sonland�rma)
  bool kontrol2 = true;
  int k = 0;
  for (; kontrol2;) {
    cout << "FOR : " << k << endl;
    k++;
    if (k == 5000) {
      kontrol2 = false;
    }
  }

  // While Sonsuz D�ng� �rnek 1
  int a = 0;
  while (true) {
    cout << "WHILE :" << a << endl;
    a++;
  }

  // While Sonsuz D�ng� �rnek 2
  bool kontrol3 = true;
  while (kontrol3) {
    cout << "WHILE" << endl;
  }

  // Do-While Sonsuz D�ng� �rnek 1
  int b = 0;
  do {
    cout << "DO WHILE:" << b << endl;
    b++;
  } while (true);

  return 0;
}


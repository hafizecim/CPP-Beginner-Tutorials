#include <iostream>
using namespace std;

int main() {

  cout << "\n// For Sonsuz D�ng� 1: �art hep true" << endl;
  for (int i = 0; true; i++) {
    cout << "FOR1: " << i << endl;
    if (i == 5) break; // break ile sonland�rma
  }

  cout << "\n// For Sonsuz D�ng� 2: Saya� yok, sadece �art var" << endl;
  int j = 0;
  for (; true;) {
    cout << "FOR2: " << j << endl;
    j++;
    if (j == 5) break; // break ile ��k��
  }

  cout << "\n// For Sonsuz D�ng� 3: bool de�i�kenle kontrol" << endl;
  bool kontrol = true;
  int k = 0;
  for (; kontrol;) {
    cout << "FOR3: " << k << endl;
    k++;
    if (k == 5) kontrol = false; // d��ar�dan �art� de�i�tirme
  }

  cout << "\n// For Sonsuz D�ng� 4: Tamamen bo� for (;;)" << endl;
  int m = 0;
  for (;;) {
    cout << "FOR4: " << m << endl;
    m++;
    if (m == 5) break; // klasik sonsuz d�ng�, break ile ��k��
  }

  cout << "\n// While Sonsuz D�ng� 1: true ile" << endl;
  int a = 0;
  while (true) {
    cout << "WHILE1: " << a << endl;
    a++;
    if (a == 5) break; // break ile sonland�rma
  }

  cout << "\n// While Sonsuz D�ng� 2: bool de�i�kenle kontrol" << endl;
  bool devam = true;
  int b = 0;
  while (devam) {
    cout << "WHILE2: " << b << endl;
    b++;
    if (b == 5) devam = false; // �art� de�i�tirerek ��k
  }

  cout << "\n// Do-While Sonsuz D�ng�: En az bir kez �al���r" << endl;
  int c = 0;
  do {
    cout << "DO-WHILE: " << c << endl;
    c++;
    if (c == 5) break; // break ile ��k��
  } while (true);

  return 0;
}


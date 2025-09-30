#include <iostream>
using namespace std;

int main() {

  cout << "\n// For Sonsuz Döngü 1: Þart hep true" << endl;
  for (int i = 0; true; i++) {
    cout << "FOR1: " << i << endl;
    if (i == 5) break; // break ile sonlandýrma
  }

  cout << "\n// For Sonsuz Döngü 2: Sayaç yok, sadece þart var" << endl;
  int j = 0;
  for (; true;) {
    cout << "FOR2: " << j << endl;
    j++;
    if (j == 5) break; // break ile çýkýþ
  }

  cout << "\n// For Sonsuz Döngü 3: bool deðiþkenle kontrol" << endl;
  bool kontrol = true;
  int k = 0;
  for (; kontrol;) {
    cout << "FOR3: " << k << endl;
    k++;
    if (k == 5) kontrol = false; // dýþarýdan þartý deðiþtirme
  }

  cout << "\n// For Sonsuz Döngü 4: Tamamen boþ for (;;)" << endl;
  int m = 0;
  for (;;) {
    cout << "FOR4: " << m << endl;
    m++;
    if (m == 5) break; // klasik sonsuz döngü, break ile çýkýþ
  }

  cout << "\n// While Sonsuz Döngü 1: true ile" << endl;
  int a = 0;
  while (true) {
    cout << "WHILE1: " << a << endl;
    a++;
    if (a == 5) break; // break ile sonlandýrma
  }

  cout << "\n// While Sonsuz Döngü 2: bool deðiþkenle kontrol" << endl;
  bool devam = true;
  int b = 0;
  while (devam) {
    cout << "WHILE2: " << b << endl;
    b++;
    if (b == 5) devam = false; // þartý deðiþtirerek çýk
  }

  cout << "\n// Do-While Sonsuz Döngü: En az bir kez çalýþýr" << endl;
  int c = 0;
  do {
    cout << "DO-WHILE: " << c << endl;
    c++;
    if (c == 5) break; // break ile çýkýþ
  } while (true);

  return 0;
}


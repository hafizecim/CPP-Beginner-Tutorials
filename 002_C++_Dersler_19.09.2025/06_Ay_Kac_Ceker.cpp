
// Aylar�n ka� g�n cekti�ine g�re s�rlama ( 1.3.5.7.8.10.12 31 g�n, 4.6.9.11 30
// g�n, 2 28 g�n yada 29 g�n(y�l 4 e tam b�l�n�yorsa))))))
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int ay;
  cout << "Ay Giriniz :";
  cin >> ay;

  if (ay == 1 || ay == 3 || ay == 5 || ay == 7 || ay == 8 || ay == 10 ||
      ay == 12) {
    cout << ay<<" 31 gun ceker";
  } else if (ay == 4 || ay == 6 || ay == 9 || ay == 11) {
    cout << ay<<" 30 gun ceker";
  } else {
    int yil;
    cout << "Y�l Giriniz :";
    cin >> yil;
    if (yil % 4 == 0) {
      cout << ay<<" 29 g�n ceker";
    } else {
      cout << ay<<" 28 g�n ceker";
    }
  }
  return 0;
}

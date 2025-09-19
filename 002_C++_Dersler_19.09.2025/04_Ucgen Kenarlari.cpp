#include <iostream>
using namespace std;
int main(int argc, char **argv) {
  // 1. YÖNTEM
  int kenar1, kenar2, kenar3;
  cout << "1. kenari giriniz :";
  cin >> kenar1;
  cout << "2. kenari giriniz :";
  cin >> kenar2;
  cout << "3. kenari giriniz :";
  cin >> kenar3;

  if (kenar1 == kenar2 && kenar2 == kenar3) {
    cout << "Ucgen eskenar ucgendir";
  } else if (kenar1 == kenar2 && kenar2 != kenar3) {
    cout << "Ucgen İkiz kenar ucgendir";
  } else if (kenar1 == kenar3 && kenar2 != kenar3) {
    cout << "Ucgen İkiz kenar ucgendir";
  } else if (kenar2 == kenar3 && kenar2 != kenar1) {
    cout << "Ucgen İkiz kenar ucgendir";
  } else {
    cout << "Ucgen cesit kenar ucgendir";
  }
  
  // 2. YÖNTEM
  int kenar1, kenar2, kenar3;
  cout << "Ucgenin kenarlarini giriniz :\n";
  cin >> kenar1 >> kenar2 >> kenar3;

  if (kenar1 == kenar2 && kenar2 == kenar3) {
    cout << "Ucgen eskenar ucgendir";
  } else if (kenar1 != kenar2 && kenar2 != kenar3 && kenar1 != kenar3) {
    cout << "Ucgen İkiz kenar ucgendir";
  } else {
    cout << "Ucgen cesit kenar ucgendir";
  }

  return 0;
}

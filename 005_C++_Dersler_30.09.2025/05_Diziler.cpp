#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  int sayilar_dizisi_1[5];
  sayilar_dizisi_1[0] = 12;
  sayilar_dizisi_1[1] = 43;
  sayilar_dizisi_1[2] = 1;
  sayilar_dizisi_1[3] = 120;
  sayilar_dizisi_1[4] = 17;

  int sayilar_dizisi_2[5] = {12, 43, 1, 120, 17};

  int sayilar_dizisi_3[] = {12, 43, 1, 120, 17};

  int sayilar[5] = {12, 43, 1, 120, 17};
  cout << sayilar[0] << endl;
  cout << sayilar[1] << endl;
  cout << sayilar[2] << endl;
  cout << sayilar[3] << endl;
  cout << sayilar[4] << endl;

  for (int i = 0; i < 5; i++) {
    cout << sayilar[i] << endl;
  }

  float oranlar[3] = {1.2f, 3.14f, 0.5f};
  for (int i = 0; i < 3; i++) {
    cout << "float: " << oranlar[i] << endl;
  }

  double piDegerleri[3] = {3.14159, 2.71828, 1.61803};
  for (int i = 0; i < 3; i++) {
    cout << "double: " << piDegerleri[i] << endl;
  }

  char harfler[4] = {'A', 'B', 'C', 'D'};
  for (int i = 0; i < 4; i++) {
    cout << "char: " << harfler[i] << endl;
  }

  bool dogruluk[3] = {true, false, true};
  for (int i = 0; i < 3; i++) {
    cout << "bool: " << boolalpha << dogruluk[i] << endl;
  }

#include <string>
  string isimler[3] = {"Ali", "Ayþe", "Zeynep"};
  for (int i = 0; i < 3; i++) {
    cout << "string: " << isimler[i] << endl;
  }

  return 0;
}


// 3. Klavyeden girilen 2 tam sayýnýn ebob ve ekok hesaplanmasý ( negetif uyarýsý ver)
#include <iostream>
using namespace std;

int main() {
  int sayi1, sayi2;
  string sonuc;
  string metin;
  cout << "Bir sayi giriniz: ";
  cin >> sayi1;
  cout << "Bir sayi giriniz: ";
  cin >> sayi2;
  if (sayi1 < 0 || sayi2 < 0) {
    cout << "Lutfen negatif sayi girmeyiniz.";
  }

  for (int i = 1; i <= sayi1; i++) {
    for (int j = 1; j <= sayi2; j++) {
      if (sayi1 % i == 0 && sayi2 % i == 0) {
        sonuc = sonuc + " " + to_string(i) + " , ";
        break;
      }
    }
  }
  metin = to_string(sayi1) + " ve " + to_string(sayi2) + " nin EBOB larý : ";
  cout << metin << sonuc << endl;
  return 0;
}

 

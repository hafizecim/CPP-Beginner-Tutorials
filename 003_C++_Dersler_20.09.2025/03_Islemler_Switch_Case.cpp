
// Klavyeden 2 sayý girilsin toplama çýkarma çarpma bölme iþlemini seçecek
// iþlemler yapýlacak

#include <iostream>
using namespace std;
int main(int argc, char **argv) {
  int s1, s2;
  char islem;
  cout << "1. sayiyi giriniz: ";
  cin >> s1;
  cout << "2. sayiyi giriniz: ";
  cin >> s1;
  cout << "Islemler:" << endl;
  cout << "*************************" << endl;
  cout << "Toplama islemi : + " << endl;
  cout << "Fark islemi : - " << endl;
  cout << "Carpma islemi : * " << endl;
  cout << "Bolme islemi : / " << endl;
  cout << "*************************" << endl;

  cout << "Bir islem Giriniz:";
  cin >> islem;
  switch (islem) {
  case '+':
    cout << "Toplam : " << s1 << "+" << s2 << "=" << s1 + s2;
    break;
  case '-':
    cout << "Fark: " << s1 << "-" << s2 << "=" << s1 - s2;
    break;
  case '*':
    cout << "Carpma : " << s1 << "*" << s2 << "=" << s1 * s2;
    break;
  case '/':
    if (s2 == 0) {
      cout << "Bolen sayisi 0 olamaz";
    } else {
      cout << "Bolme : " << s1 << "/" << s2 << "=" << s1 / s2;
    }
    break;
  default:
    cout << "Hatali Giriþ Yaptiniz";
    break;
  }

  return 0;
}

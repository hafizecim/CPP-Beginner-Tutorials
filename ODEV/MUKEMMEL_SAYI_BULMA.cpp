// 2. soru : klavyeden girilen bir sayýnýn mükmemel bir sayýyý kontrol eden
#include <iostream>
using namespace std;

int main() {
  int sayi;
  int toplam = 1;
  cout << "Bir sayi giriniz: ";
  cin >> sayi;

  bool mukemmel = true; // asal mý?
  for (int i = 2; i <= sayi; i++) {
    if (sayi % i == 0) {
      toplam = toplam + i;
      if (sayi == toplam) {
        mukemmel = false;
        break; // asal deðil, döngüyü býrak
      }
    }
  }

  if (mukemmel) {
    cout << sayi << " mukemmeldir." << endl;
  } else {
    cout << sayi << " mukemmel deðildir." << endl;
  }

  return 0;
}

 



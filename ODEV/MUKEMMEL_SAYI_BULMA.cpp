// 2. soru : klavyeden girilen bir say�n�n m�kmemel bir say�y� kontrol eden
#include <iostream>
using namespace std;

int main() {
  int sayi;
  int toplam = 1;
  cout << "Bir sayi giriniz: ";
  cin >> sayi;

  bool mukemmel = true; // asal m�?
  for (int i = 2; i <= sayi; i++) {
    if (sayi % i == 0) {
      toplam = toplam + i;
      if (sayi == toplam) {
        mukemmel = false;
        break; // asal de�il, d�ng�y� b�rak
      }
    }
  }

  if (mukemmel) {
    cout << sayi << " mukemmeldir." << endl;
  } else {
    cout << sayi << " mukemmel de�ildir." << endl;
  }

  return 0;
}

 



#include <iostream>
using namespace std;

/*
  POINTER VE DÝZÝLER

  C++ dilinde dizilerle pointer'lar yakýndan iliþkilidir. Bir dizinin ismi (örneðin: dizi), 
  aslýnda dizinin ilk elemanýnýn adresini tutan bir pointer gibi davranýr.

  Örneðin:
      int dizi[] = {10, 20, 30};
      dizi          › dizinin 0. elemanýnýn adresini verir (yani &dizi[0])
      *(dizi + 1)   › dizinin 1. elemanýnýn deðerini verir (yani dizi[1])
      dizi + i      › i. elemanýn adresi (pointer aritmetiði)

  Bu örnek, pointer ile dizilere nasýl eriþilebileceðini ve adres-deðer iliþkisini göstermek için hazýrlanmýþtýr.
*/

void pointerDizilerOrnek2() {
    int dizi[] = {10, 45, 64, 78}; // 4 elemanlý bir tam sayý dizisi

    cout << "dizi[0] deger : " << dizi[0] << endl; // dizinin 0. elemanýnýn deðeri
    cout << "dizi[0] adres : " << dizi << endl;    // dizinin 0. elemanýnýn adresi (dizi ismi bir pointer gibi davranýr)
    cout << "dizi[1] adres : " << dizi + 1 << endl; // dizinin 1. elemanýnýn adresi
    cout << "dizi[2] adres : " << dizi + 2 << endl; // dizinin 2. elemanýnýn adresi

    cout << "*****************************" << endl;

    // Adresleri yazdýran döngü 
    for (int i = 0; i < 4; i++) {
        cout << "dizi[" << i << "] adres: " << dizi + i << endl;
    }

    cout << "*****************************" << endl;

    // Deðerleri yazdýran döngü (pointer kullanýlarak)
    for (int i = 0; i < 4; i++) {
        cout << "dizi[" << i << "] deger: " << *(dizi + i) << endl;
    }
}



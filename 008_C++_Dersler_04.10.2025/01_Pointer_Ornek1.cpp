
#include <iostream>
using namespace std;

/*
  POINTER (ÝÞARETÇÝ) NEDÝR?

  Pointer, C++ dilinde bir deðiþkenin bellek adresini tutan özel bir deðiþken türüdür.
  Normal deðiþkenler bir deðer tutarken, pointer'lar bu deðerin RAM'deki yerini (adresini) tutar.
  
  Örneðin:
      int x = 10;        // x normal bir deðiþkendir, 10 deðerini tutar
      int *p = &x;       // p bir pointer'dýr, x'in adresini tutar
  
  Pointer'lar özellikle bellek yönetimi, dinamik bellek kullanýmý (heap), diziler, fonksiyonlara referansla veri gönderme gibi durumlarda kullanýlýr.

  *ptr  › iþaretçinin gösterdiði adresteki deðeri verir (dereference)
  &x    › bir deðiþkenin bellekteki adresini verir (adres operatörü)

  Aþaðýdaki örnek, pointer'ýn bir deðiþkenin deðerini nasýl etkileyebileceðini gösterir.
*/

void pointerOrnek1() {

 	int sayi =10;
	cout << "Sayi deger: "<<sayi<<endl;
	cout << "Sayi adres: "<<&sayi<<endl;
    int *ptr = &sayi; // 'ptr' adýnda bir iþaretçi (pointer) tanýmlanýyor ve sayi deðiþkeninin adresi atanýyor
    cout << "ptr  adres: " << ptr << endl; // ptr'nin tuttuðu adres (yani sayi'nin adresi) ekrana yazdýrýlýyor
    cout << "ptr  deger: " << *ptr << endl; // ptr'nin iþaret ettiði adresteki deðer (yani sayi'nin deðeri) yazdýrýlýyor
	*ptr = 20; // ptr'nin gösterdiði bellekteki adrese 20 deðeri yazýlýyor, yani sayi'nin deðeri deðiþtiriliyor
	cout << "Sayi deger: "<<sayi<<endl; // Güncel sayi deðeri yazdýrýlýyor (20)
}


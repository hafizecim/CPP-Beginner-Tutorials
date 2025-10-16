#include <iostream>
using namespace std;

/*
  POINTER ÝLE FONKSÝYONA DEÐER GÖNDERME

  Bu örnekte, iki sayýyý fonksiyona pointer (adres) yoluyla gönderip onlarýn deðerlerini deðiþtirmeye çalýþýyoruz.
  Ancak dikkat edilmesi gereken bir hata var:
  
  Fonksiyon içinde:
      s1 = 10; › burada s1 bir pointer'dýr, ama 10 atanarak pointer kaydýrýlmýþ olur. Bellekteki deðer deðiþmez.
      *s1 = 10; › olmasý gereken budur: iþaret edilen adresteki deðeri deðiþtirir.

  Bu yüzden bu örnekte deðiþkenler deðiþtirilemez. Kodda düzeltme gerekebilir.
*/

int degistir(int *s1, int *s2) {
    // Hatalý: burada s1 ve s2'nin gösterdiði yerin içeriði deðil, kendileri deðiþtirilmiþ olur
    // s1 = 10; // HATALI › pointer'a doðrudan int atayamazsýn (adres bekler)
    // s2 = 20;

    // Doðrusu þöyle olmalýydý:
     *s1 = 10;
     *s2 = 20;

    return *s1; 
}

void pointerTypeOrnek3() {
    int sayi1 = 1;
    int sayi2 = 2;

    // degistir fonksiyonuna deðiþkenlerin adresleri gönderiliyor
    degistir(&sayi1, &sayi2);

    // Ancak fonksiyon içinde adresin gösterdiði yere deðer atamasý yapýlmadýðý için deðerler deðiþmeyecek
    cout << "Sayi 1 deger: " << sayi1 << endl; // 1
    cout << "Sayi 2 deger: " << sayi2 << endl; // 2
}



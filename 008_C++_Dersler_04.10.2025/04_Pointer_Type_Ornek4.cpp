#include <iostream>
using namespace std;
/*
  POINTER (ÝÞARETÇÝ) KULLANARAK DEÐÝÞKENLERÝN DEÐERÝNÝ VE ADRESÝNÝ DEÐÝÞTÝRME

  Bu örnekte iki farklý fonksiyonla pointer kullanýmý gösterilmektedir:

  1. `ptr_degistir`: Pointer kullanarak, deðiþkenin bellekteki adresine gidilip deðeri doðrudan deðiþtirilir.
     › *s1 = 10; ifadesi, s1'in gösterdiði bellek adresindeki deðeri 10 yapar.

  2. `adres_degistir`: Bu fonksiyonda pointer deðiþkenine doðrudan sayýsal deðer atanýr (örneðin: s1 = 100).
     › Bu iþlem pointer'ýn gösterdiði adresi deðiþtirir, ama bu deðiþiklik sadece fonksiyon içinde geçerlidir.
     › Fonksiyon dýþýnda orijinal deðiþkenin adresi deðiþmez ve deðeri de etkilenmez.

  NOT: C++ dilinde fonksiyona gönderilen pointer parametreler kopyalanýr. Bu yüzden adres deðiþtirseniz bile
  dýþarýda etkisi olmaz. Ancak pointer'ýn iþaret ettiði yerdeki deðeri deðiþtirirseniz bu dýþarýda da görünür.
*/

/*
  ptr_degistir: Pointer ile gösterilen adreslerdeki deðerleri deðiþtirir.
  Bu fonksiyon doðrudur, çünkü *s1 ve *s2 kullanýlarak bellekteki gerçek deðiþkenler deðiþtirilir.
*/
int ptr_degistir(int *s1, int *s2) {
    *s1 = 10; // s1'in gösterdiði yerdeki deðeri 10 yap (yani sayi1 deðiþir)
    *s2 = 20; // s2'nin gösterdiði yerdeki deðeri 20 yap (yani sayi2 deðiþir)

    return *s1; // s1'in iþaret ettiði deðeri döndür
}

/*
  adres_degistir: Pointer ile gösterilen adreslerdeki deðerleri deðiþtirir.
  Bu, yukarýdaki fonksiyonun aynýsýdýr. Amaç, ayný iþlemi farklý isimle yapmaktýr.
*/
int adres_degistir(int *s1, int *s2) {
    *s1 = 100; // s1'in iþaret ettiði yere 100 yaz
    *s2 = 200; // s2'nin iþaret ettiði yere 200 yaz
    return *s1;
}

/*
  pointerTypeOrnek4: Pointer kullanýmý örneði
*/
void pointerTypeOrnek4() {
    int sayi1 = 1;
    int sayi2 = 2;

   
    // Deðiþkenlerin adresleri gönderiliyor, yani deðerleri fonksiyon içinde deðiþtirilecek
    ptr_degistir(&sayi1, &sayi2);

    cout << "ptr_degistir sonrasý:" << endl;
    cout << "Sayi 1 deger: " << sayi1 << endl; // 10
    cout << "Sayi 2 deger: " << sayi2 << endl; // 20

    // adres_degistir fonksiyonu da ayný þekilde adresle çalýþýyor
    adres_degistir(&sayi1, &sayi2);

    cout << "adres_degistir sonrasý:" << endl;
    cout << "Sayi 1 deger: " << sayi1 << endl; // 100
    cout << "Sayi 2 deger: " << sayi2 << endl; // 200
}


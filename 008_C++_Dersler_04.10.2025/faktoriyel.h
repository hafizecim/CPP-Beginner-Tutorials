// faktoriyel.h
#ifndef FAKTORIYEL_H
#define FAKTORIYEL_H

// Sadece fonksiyon prototipi yer alýr
int fakt(int*);

#endif


/* 
NEDEN .h dosyasý kullandýk?
| Sebep                   | Açýklama                                                                                                                  |
| ----------------------- | ------------------------------------------------------------------------------------------------------------------------- |
|  Kod Tekrarýný Önler  | `fakt()` fonksiyonunu her `.cpp` dosyasýnda yeniden yazmak zorunda kalmazsýn.                                             |
|  Hata Riskini Azaltýr | Ayný fonksiyon iki yerde tanýmlandýðýnda "multiple definition" hatasý oluþur, `.h` ile bunu engelleriz.                   |
|  Proje Düzeni Saðlar  | Büyük projelerde mantýksal olarak parçalamayý saðlar (`.h` = taným, `.cpp` = içerik).                                     |
|  Kolay Bakým          | Sadece `faktoriyel.h`'de taným varsa, fonksiyonun prototipini deðiþtirmek gerektiðinde tüm projede otomatik geçerli olur. |


*/

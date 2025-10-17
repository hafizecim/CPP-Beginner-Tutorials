// faktoriyel.h
#ifndef FAKTORIYEL_H
#define FAKTORIYEL_H

// Sadece fonksiyon prototipi yer al�r
int fakt(int*);

#endif


/* 
NEDEN .h dosyas� kulland�k?
| Sebep                   | A��klama                                                                                                                  |
| ----------------------- | ------------------------------------------------------------------------------------------------------------------------- |
|  Kod Tekrar�n� �nler  | `fakt()` fonksiyonunu her `.cpp` dosyas�nda yeniden yazmak zorunda kalmazs�n.                                             |
|  Hata Riskini Azalt�r | Ayn� fonksiyon iki yerde tan�mland���nda "multiple definition" hatas� olu�ur, `.h` ile bunu engelleriz.                   |
|  Proje D�zeni Sa�lar  | B�y�k projelerde mant�ksal olarak par�alamay� sa�lar (`.h` = tan�m, `.cpp` = i�erik).                                     |
|  Kolay Bak�m          | Sadece `faktoriyel.h`'de tan�m varsa, fonksiyonun prototipini de�i�tirmek gerekti�inde t�m projede otomatik ge�erli olur. |


*/


##  `README.txt` � C++ Pointer'lara Giri� ve �rneklerle A��klama

---

###  Nedir Bu Pointer?

**Pointer**, bellekteki bir adresi tutan de�i�kendir. Yani bir pointer, ba�ka bir de�i�kenin **konumunu (adresini)** g�sterir.

```cpp
int sayi = 10;
int *ptr = &sayi; // ptr, sayi'n�n adresini tutar
```

---

###  Neden Pointer Kullan�l�r?

| Ama�                         | A��klama                                                         |
| ---------------------------- | ---------------------------------------------------------------- |
|  De�eri do�rudan de�i�tirmek | Fonksiyona de�i�kenin adresini g�nderip, as�l de�eri de�i�tirmek |
|  Bellek y�netimi             | Dinamik olarak bellek ay�rmak (`new`, `delete`)                  |
|  Verimlilik                  | B�y�k veri yap�lar�nda kopyalama yerine referansla �al��mak      |
|  Dizi ve string i�lemleri    | Dizi ismi = ilk eleman�n adresi � pointer gibi davran�r          |

---

###  Temel Pointer �rnekleri

---

####  Pointer ile De�i�kenin Adresine Eri�me

```cpp
int sayi = 5;
int *ptr = &sayi;

cout << "Deger: " << sayi << endl;     // 5
cout << "Adres: " << ptr << endl;      // 0x61ff0c gibi
cout << "Ptr'nin g�sterdi�i de�er: " << *ptr << endl; // 5
```

---

####  Pointer ile De�er De�i�tirme (Ornek 1)

```cpp
int sayi = 10;
int *ptr = &sayi;
*ptr = 20;  // sayi art�k 20 olur
```

---

####  Fonksiyona Pointer ile De�er G�nderme

```cpp
void degistir(int *x) {
    *x = 100;
}

int sayi = 5;
degistir(&sayi);  // sayi art�k 100
```

---

####  Pointer ile Diziye Eri�im

```cpp
int dizi[3] = {10, 20, 30};
cout << *(dizi + 1); // 20 verir (dizi[1])
```

---

###  �RNEKLER � Bu Projede Neler Var?

| Dosya Ad�                                     | A��klama                                                |
| --------------------------------------------- | ------------------------------------------------------- |
| `01_Pointer_Ornek1.cpp`                       | Temel pointer tan�m�, adres g�sterme, de�er de�i�tirme  |
| `02_Pointer_Diziler_Ornek2.cpp`               | Dizi �zerinden pointer ile dola�ma                      |
| `03_Pointer_Type_Ornek3.cpp`                  | Fonksiyona de�er de�il, adres g�nderme fark�            |
| `04_Pointer_Type_Ornek4.cpp`                  | Pointer ile de�er de�i�tirmenin detayl� fark�           |
| `05_Pointer_Fonksiyonlar_Ornek5.cpp`          | 3 pointer parametre ile fonksiyon �zerinden i�lem yapma |
| `06_Pointer_Fasktoriyel_Hesaplama_Ornek6.cpp` | Pointer kullanarak fakt�riyel hesaplama                 |
| `07_Pointer_DiziSiralama_Ornek7.cpp`          | Pointer ile diziyi k���kten b�y��e s�ralama             |

---

###  Derleme Hatalar�na Dikkat!

* Ayn� fonksiyon (�rne�in `fakt()`) birden fazla `.cpp` dosyas�nda tan�mlan�rsa **hata verir**.
* Bu y�zden ortak fonksiyonlar `.h` dosyas�nda tan�mlan�r (�rn: `faktoriyel.h`)
* Fonksiyon ad� ve �a��rma ad� birebir **ayn�** olmal� (`pointerFonksiyonlarOrnek5` ? `pointerFonsiyonOrnek5`)

---

###  Tavsiyeler

* Pointer�� ezberlemek yerine **g�zlemleyerek** anlamaya �al��.
* De�er � adres � de�erin adresi � bu s�ray� ��zersen konu oturur.
* Kodlar� ad�m ad�m debug ederek bellekte neler oluyor incele.

---

###  Bu projeyi nas�l �al��t�r�rs�n?

1. Dev-C++ ya da Code::Blocks kullan
2. T�m `.cpp` dosyalar�n� ayn� klas�rde tut
3. `main.cpp` i�inden �rnek fonksiyonu se�
4. Derle (F9) ve �al��t�r (Ctrl + F10)

---



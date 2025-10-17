
##  `README.txt` — C++ Pointer'lara Giriþ ve Örneklerle Açýklama

---

###  Nedir Bu Pointer?

**Pointer**, bellekteki bir adresi tutan deðiþkendir. Yani bir pointer, baþka bir deðiþkenin **konumunu (adresini)** gösterir.

```cpp
int sayi = 10;
int *ptr = &sayi; // ptr, sayi'nýn adresini tutar
```

---

###  Neden Pointer Kullanýlýr?

| Amaç                         | Açýklama                                                         |
| ---------------------------- | ---------------------------------------------------------------- |
|  Deðeri doðrudan deðiþtirmek | Fonksiyona deðiþkenin adresini gönderip, asýl deðeri deðiþtirmek |
|  Bellek yönetimi             | Dinamik olarak bellek ayýrmak (`new`, `delete`)                  |
|  Verimlilik                  | Büyük veri yapýlarýnda kopyalama yerine referansla çalýþmak      |
|  Dizi ve string iþlemleri    | Dizi ismi = ilk elemanýn adresi › pointer gibi davranýr          |

---

###  Temel Pointer Örnekleri

---

####  Pointer ile Deðiþkenin Adresine Eriþme

```cpp
int sayi = 5;
int *ptr = &sayi;

cout << "Deger: " << sayi << endl;     // 5
cout << "Adres: " << ptr << endl;      // 0x61ff0c gibi
cout << "Ptr'nin gösterdiði deðer: " << *ptr << endl; // 5
```

---

####  Pointer ile Deðer Deðiþtirme (Ornek 1)

```cpp
int sayi = 10;
int *ptr = &sayi;
*ptr = 20;  // sayi artýk 20 olur
```

---

####  Fonksiyona Pointer ile Deðer Gönderme

```cpp
void degistir(int *x) {
    *x = 100;
}

int sayi = 5;
degistir(&sayi);  // sayi artýk 100
```

---

####  Pointer ile Diziye Eriþim

```cpp
int dizi[3] = {10, 20, 30};
cout << *(dizi + 1); // 20 verir (dizi[1])
```

---

###  ÖRNEKLER – Bu Projede Neler Var?

| Dosya Adý                                     | Açýklama                                                |
| --------------------------------------------- | ------------------------------------------------------- |
| `01_Pointer_Ornek1.cpp`                       | Temel pointer tanýmý, adres gösterme, deðer deðiþtirme  |
| `02_Pointer_Diziler_Ornek2.cpp`               | Dizi üzerinden pointer ile dolaþma                      |
| `03_Pointer_Type_Ornek3.cpp`                  | Fonksiyona deðer deðil, adres gönderme farký            |
| `04_Pointer_Type_Ornek4.cpp`                  | Pointer ile deðer deðiþtirmenin detaylý farký           |
| `05_Pointer_Fonksiyonlar_Ornek5.cpp`          | 3 pointer parametre ile fonksiyon üzerinden iþlem yapma |
| `06_Pointer_Fasktoriyel_Hesaplama_Ornek6.cpp` | Pointer kullanarak faktöriyel hesaplama                 |
| `07_Pointer_DiziSiralama_Ornek7.cpp`          | Pointer ile diziyi küçükten büyüðe sýralama             |

---

###  Derleme Hatalarýna Dikkat!

* Ayný fonksiyon (örneðin `fakt()`) birden fazla `.cpp` dosyasýnda tanýmlanýrsa **hata verir**.
* Bu yüzden ortak fonksiyonlar `.h` dosyasýnda tanýmlanýr (örn: `faktoriyel.h`)
* Fonksiyon adý ve çaðýrma adý birebir **ayný** olmalý (`pointerFonksiyonlarOrnek5` ? `pointerFonsiyonOrnek5`)

---

###  Tavsiyeler

* Pointer’ý ezberlemek yerine **gözlemleyerek** anlamaya çalýþ.
* Deðer › adres › deðerin adresi › bu sýrayý çözersen konu oturur.
* Kodlarý adým adým debug ederek bellekte neler oluyor incele.

---

###  Bu projeyi nasýl çalýþtýrýrsýn?

1. Dev-C++ ya da Code::Blocks kullan
2. Tüm `.cpp` dosyalarýný ayný klasörde tut
3. `main.cpp` içinden örnek fonksiyonu seç
4. Derle (F9) ve çalýþtýr (Ctrl + F10)

---



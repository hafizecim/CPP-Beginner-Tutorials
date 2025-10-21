/* 
// public yöntemiyle miras býrakýýrsan  deðiþken tipleri deðiþmez:// herþey prublic olarak aktarýlýr.
// private olursa deðiþken tipleri private kabul edilir
// protected olursa: private olanlar private olarak kalýr ama public ve protected ler protected olarak kalýr.

 Miras Alýrken Eriþim Belirleyicilerinin Davranýþlarý (Inheritance Access Modifiers):
1. public miras:
   - Taban sýnýftaki `public` üyeler › alt sýnýfta da `public` kalýr.
   - Taban sýnýftaki `protected` üyeler › alt sýnýfta da `protected` kalýr.
   - `private` üyeler › alt sýnýfa **aktarýlmaz** (eriþilemez).

2. protected miras:
   - Taban sýnýftaki `public` ve `protected` üyeler › alt sýnýfta `protected` olur.
   - `private` üyeler › yine aktarýlmaz (eriþilemez).

3. private miras:
   - Taban sýnýftaki tüm `public` ve `protected` üyeler › alt sýnýfta `private` olur.
   - `private` üyeler › yine aktarýlmaz (eriþilemez).

 Not:
Miras tipi, sadece miras alýnan üyelerin alt sýnýftaki eriþim seviyesini etkiler.
Ancak private üyeler hiçbir þekilde doðrudan alt sýnýfta kullanýlamaz.

| Miras Türü  | public ›  | protected › | private ›  |
| ----------- | --------- | ----------- | ---------- |
| `public`    | public    | protected   | eriþilemez |
| `protected` | protected | protected   | eriþilemez |
| `private`   | private   | private     | eriþilemez |


*/

#include <iostream>
using namespace std;

// Üst sýnýf (Taban sýnýf)
class UstSinif {
private:
    int ozelDeger = 1;        // Alt sýnýfta eriþilemez

protected:
    int korunmusDeger = 2;    // protected miras ile alt sýnýfa geçebilir

public:
    int acikDeger = 3;        // public miras ile alt sýnýfta da public kalýr

    void yazdir() {
        cout << "UstSinif - acikDeger: " << acikDeger << endl;
        cout << "UstSinif - korunmusDeger: " << korunmusDeger << endl;
        cout << "UstSinif - ozelDeger: " << ozelDeger << endl;
    }
};

// 1. Public miras
class Alt1 : public UstSinif {
public:
    void yazdir() {
        cout << "[Public Miras]" << endl;
        // cout << ozelDeger << endl;  // HATA! private olduðu için eriþilemez
        cout << "korunmusDeger: " << korunmusDeger << endl;  // eriþilir
        cout << "acikDeger: " << acikDeger << endl;          // eriþilir
    }
};

// 2. Protected miras
class Alt2 : protected UstSinif {
public:
    void yazdir() {
        cout << "[Protected Miras]" << endl;
        cout << "korunmusDeger: " << korunmusDeger << endl;  // eriþilir
        cout << "acikDeger: " << acikDeger << endl;          // eriþilir ama dýþarýya protected oldu
    }
};

// 3. Private miras
class Alt3 : private UstSinif {
public:
    void yazdir() {
        cout << "[Private Miras]" << endl;
        cout << "korunmusDeger: " << korunmusDeger << endl;  // eriþilir ama dýþarýdan eriþilemez
        cout << "acikDeger: " << acikDeger << endl;          // eriþilir ama private kabul edilir
    }
};

void mirasPublicPrivateProtected() {
    Alt1 a1;
    a1.yazdir();
    cout << a1.acikDeger << endl;  //  Eriþilebilir (çünkü hala public)

    Alt2 a2;
    a2.yazdir();
    // cout << a2.acikDeger << endl;  //  Eriþilemez (protected oldu)

    Alt3 a3;
    a3.yazdir();
    // cout << a3.acikDeger << endl;  //  Eriþilemez (private oldu)
}



/*

### ?? **1. Üst Sýnýftaki Eriþim Belirleyicileri (`public`, `protected`, `private`) Ne Anlama Gelir?**

Bu belirleyiciler, **"bu deðiþken ya da fonksiyona kim eriþebilir?"** sorusunu yanýtlar:

| Eriþim Türü | Nerelerden eriþilebilir?                                       |
| ----------- | -------------------------------------------------------------- |
| `public`    | Her yerden eriþilebilir (main, alt sýnýflar, dýþ sýnýflar)     |
| `protected` | Sadece sýnýfýn kendisi + alt sýnýflar eriþebilir               |
| `private`   | Sadece sýnýfýn kendisi eriþebilir (alt sýnýflar bile eriþemez) |

---

###  **2. Miras Türleri Ne Ýþe Yarar? (`public`, `protected`, `private` inheritance)**

Alt sýnýf üst sýnýftan miras alýrken bu üç anahtar kelimeyi kullanabilirsin:

```cpp
class Alt : public Ust {...};
class Alt : protected Ust {...};
class Alt : private Ust {...};
```

Bu, **üst sýnýfýn hangi üyelerinin, alt sýnýfa nasýl geçeceðini** belirler.

---

###  Anahtar Fark:

> **Miras türü**, sadece `public` ve `protected` üyelerin **alt sýnýfta hangi görünürlükte** olacaðýný belirler.
> `private` üyeler hiçbir þekilde alt sýnýfa geçmez!

---

###  **Örnekle Açýklama**

```cpp
class Ust {
private:
    int a;  // ALT SINIFA GEÇMEZ
protected:
    int b;  // ALT SINIFA GEÇER ama nasýl geçtiði miras türüne baðlý
public:
    int c;  // ALT SINIFA GEÇER ama nasýl geçtiði miras türüne baðlý
};
```

#### `class Alt : public Ust {}`

| Üye           | Alt sýnýftaki görünürlüðü |
| ------------- | ------------------------- |
| `a (private)` | Yok (eriþilemez)          |
| `b`           | protected olarak kalýr    |
| `c`           | public olarak kalýr       |

#### `class Alt : protected Ust {}`

| Üye           | Alt sýnýftaki görünürlüðü |
| ------------- | ------------------------- |
| `a (private)` | Yok (eriþilemez)          |
| `b`           | protected olarak kalýr    |
| `c`           | protected olur            |

#### `class Alt : private Ust {}`

| Üye           | Alt sýnýftaki görünürlüðü |
| ------------- | ------------------------- |
| `a (private)` | Yok (eriþilemez)          |
| `b`           | private olur              |
| `c`           | private olur              |

---

###  DOÐRU ANLAÞILMASI GEREKEN:

| Miras Türü  | `public` Üye | `protected` Üye | `private` Üye  |
| ----------- | ------------ | --------------- | -------------- |
| `public`    | `public`     | `protected`     | Yok (görünmez) |
| `protected` | `protected`  | `protected`     | Yok (görünmez) |
| `private`   | `private`    | `private`       | Yok (görünmez) |

---

###  `private` olan neden eriþilemez?

Çünkü `private` üyeler sadece **tanýmlandýðý sýnýfýn içinde** kullanýlabilir. Alt sýnýfa **mirasla aktarýlmaz**.

> O yüzden bu satýr:

```cpp
cout << ozelDeger << endl;  // HATA! private olduðu için eriþilemez
```

**doðrudur.**

---

###  Örnek Test:

```cpp
Alt1 a1;
cout << a1.acikDeger << endl; // ? eriþilebilir (çünkü hala public)
Alt2 a2;
cout << a2.acikDeger << endl; // ? eriþilemez (çünkü protected oldu)
Alt3 a3;
cout << a3.acikDeger << endl; // ? eriþilemez (çünkü private oldu)
```

---

### Özetle:

* `private` üyeler alt sýnýfa geçmez.
* `public` miras ile: `public` ? `public`, `protected` ? `protected`
* `protected` miras ile: `public/protected` ? `protected`
* `private` miras ile: `public/protected` ? `private`
* Miras türü, **deðiþkenin tipi deðil, görünürlüðü** ile ilgilidir.

Ýstersen bu konuyla ilgili sana test sorularý da hazýrlayabilirim.


*/

/* 
// public y�ntemiyle miras b�rak��rsan  de�i�ken tipleri de�i�mez:// her�ey prublic olarak aktar�l�r.
// private olursa de�i�ken tipleri private kabul edilir
// protected olursa: private olanlar private olarak kal�r ama public ve protected ler protected olarak kal�r.

 Miras Al�rken Eri�im Belirleyicilerinin Davran��lar� (Inheritance Access Modifiers):
1. public miras:
   - Taban s�n�ftaki `public` �yeler � alt s�n�fta da `public` kal�r.
   - Taban s�n�ftaki `protected` �yeler � alt s�n�fta da `protected` kal�r.
   - `private` �yeler � alt s�n�fa **aktar�lmaz** (eri�ilemez).

2. protected miras:
   - Taban s�n�ftaki `public` ve `protected` �yeler � alt s�n�fta `protected` olur.
   - `private` �yeler � yine aktar�lmaz (eri�ilemez).

3. private miras:
   - Taban s�n�ftaki t�m `public` ve `protected` �yeler � alt s�n�fta `private` olur.
   - `private` �yeler � yine aktar�lmaz (eri�ilemez).

 Not:
Miras tipi, sadece miras al�nan �yelerin alt s�n�ftaki eri�im seviyesini etkiler.
Ancak private �yeler hi�bir �ekilde do�rudan alt s�n�fta kullan�lamaz.

| Miras T�r�  | public �  | protected � | private �  |
| ----------- | --------- | ----------- | ---------- |
| `public`    | public    | protected   | eri�ilemez |
| `protected` | protected | protected   | eri�ilemez |
| `private`   | private   | private     | eri�ilemez |


*/

#include <iostream>
using namespace std;

// �st s�n�f (Taban s�n�f)
class UstSinif {
private:
    int ozelDeger = 1;        // Alt s�n�fta eri�ilemez

protected:
    int korunmusDeger = 2;    // protected miras ile alt s�n�fa ge�ebilir

public:
    int acikDeger = 3;        // public miras ile alt s�n�fta da public kal�r

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
        // cout << ozelDeger << endl;  // HATA! private oldu�u i�in eri�ilemez
        cout << "korunmusDeger: " << korunmusDeger << endl;  // eri�ilir
        cout << "acikDeger: " << acikDeger << endl;          // eri�ilir
    }
};

// 2. Protected miras
class Alt2 : protected UstSinif {
public:
    void yazdir() {
        cout << "[Protected Miras]" << endl;
        cout << "korunmusDeger: " << korunmusDeger << endl;  // eri�ilir
        cout << "acikDeger: " << acikDeger << endl;          // eri�ilir ama d��ar�ya protected oldu
    }
};

// 3. Private miras
class Alt3 : private UstSinif {
public:
    void yazdir() {
        cout << "[Private Miras]" << endl;
        cout << "korunmusDeger: " << korunmusDeger << endl;  // eri�ilir ama d��ar�dan eri�ilemez
        cout << "acikDeger: " << acikDeger << endl;          // eri�ilir ama private kabul edilir
    }
};

void mirasPublicPrivateProtected() {
    Alt1 a1;
    a1.yazdir();
    cout << a1.acikDeger << endl;  //  Eri�ilebilir (��nk� hala public)

    Alt2 a2;
    a2.yazdir();
    // cout << a2.acikDeger << endl;  //  Eri�ilemez (protected oldu)

    Alt3 a3;
    a3.yazdir();
    // cout << a3.acikDeger << endl;  //  Eri�ilemez (private oldu)
}



/*

### ?? **1. �st S�n�ftaki Eri�im Belirleyicileri (`public`, `protected`, `private`) Ne Anlama Gelir?**

Bu belirleyiciler, **"bu de�i�ken ya da fonksiyona kim eri�ebilir?"** sorusunu yan�tlar:

| Eri�im T�r� | Nerelerden eri�ilebilir?                                       |
| ----------- | -------------------------------------------------------------- |
| `public`    | Her yerden eri�ilebilir (main, alt s�n�flar, d�� s�n�flar)     |
| `protected` | Sadece s�n�f�n kendisi + alt s�n�flar eri�ebilir               |
| `private`   | Sadece s�n�f�n kendisi eri�ebilir (alt s�n�flar bile eri�emez) |

---

###  **2. Miras T�rleri Ne ��e Yarar? (`public`, `protected`, `private` inheritance)**

Alt s�n�f �st s�n�ftan miras al�rken bu �� anahtar kelimeyi kullanabilirsin:

```cpp
class Alt : public Ust {...};
class Alt : protected Ust {...};
class Alt : private Ust {...};
```

Bu, **�st s�n�f�n hangi �yelerinin, alt s�n�fa nas�l ge�ece�ini** belirler.

---

###  Anahtar Fark:

> **Miras t�r�**, sadece `public` ve `protected` �yelerin **alt s�n�fta hangi g�r�n�rl�kte** olaca��n� belirler.
> `private` �yeler hi�bir �ekilde alt s�n�fa ge�mez!

---

###  **�rnekle A��klama**

```cpp
class Ust {
private:
    int a;  // ALT SINIFA GE�MEZ
protected:
    int b;  // ALT SINIFA GE�ER ama nas�l ge�ti�i miras t�r�ne ba�l�
public:
    int c;  // ALT SINIFA GE�ER ama nas�l ge�ti�i miras t�r�ne ba�l�
};
```

#### `class Alt : public Ust {}`

| �ye           | Alt s�n�ftaki g�r�n�rl��� |
| ------------- | ------------------------- |
| `a (private)` | Yok (eri�ilemez)          |
| `b`           | protected olarak kal�r    |
| `c`           | public olarak kal�r       |

#### `class Alt : protected Ust {}`

| �ye           | Alt s�n�ftaki g�r�n�rl��� |
| ------------- | ------------------------- |
| `a (private)` | Yok (eri�ilemez)          |
| `b`           | protected olarak kal�r    |
| `c`           | protected olur            |

#### `class Alt : private Ust {}`

| �ye           | Alt s�n�ftaki g�r�n�rl��� |
| ------------- | ------------------------- |
| `a (private)` | Yok (eri�ilemez)          |
| `b`           | private olur              |
| `c`           | private olur              |

---

###  DO�RU ANLA�ILMASI GEREKEN:

| Miras T�r�  | `public` �ye | `protected` �ye | `private` �ye  |
| ----------- | ------------ | --------------- | -------------- |
| `public`    | `public`     | `protected`     | Yok (g�r�nmez) |
| `protected` | `protected`  | `protected`     | Yok (g�r�nmez) |
| `private`   | `private`    | `private`       | Yok (g�r�nmez) |

---

###  `private` olan neden eri�ilemez?

��nk� `private` �yeler sadece **tan�mland��� s�n�f�n i�inde** kullan�labilir. Alt s�n�fa **mirasla aktar�lmaz**.

> O y�zden bu sat�r:

```cpp
cout << ozelDeger << endl;  // HATA! private oldu�u i�in eri�ilemez
```

**do�rudur.**

---

###  �rnek Test:

```cpp
Alt1 a1;
cout << a1.acikDeger << endl; // ? eri�ilebilir (��nk� hala public)
Alt2 a2;
cout << a2.acikDeger << endl; // ? eri�ilemez (��nk� protected oldu)
Alt3 a3;
cout << a3.acikDeger << endl; // ? eri�ilemez (��nk� private oldu)
```

---

### �zetle:

* `private` �yeler alt s�n�fa ge�mez.
* `public` miras ile: `public` ? `public`, `protected` ? `protected`
* `protected` miras ile: `public/protected` ? `protected`
* `private` miras ile: `public/protected` ? `private`
* Miras t�r�, **de�i�kenin tipi de�il, g�r�n�rl���** ile ilgilidir.

�stersen bu konuyla ilgili sana test sorular� da haz�rlayabilirim.


*/

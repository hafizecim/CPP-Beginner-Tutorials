// Bu dosyada main() yok. Bu dosya main.cpp'den �a�r�l�r.
/*
 Bu C++ program�, "insan" s�n�f� �zerinden kaps�lleme (encapsulation) ve yap�c� metotlar�n (constructor) kullan�m�n� �rneklemektedir.
 S�n�f�n i�erisinde private de�i�kenler (ad, yas, kilo) yer almakta ve bunlara eri�im i�in getter/setter metodlar� kullan�lmaktad�r.
 Ayr�ca:
 - Parametresiz ve parametreli yap�c� metotlar hem `this->` hem de initializer list y�ntemiyle g�sterilmi�tir.
 - Dinamik bellek y�netimi (`new` ve `delete`) kullan�larak pointer ile nesne olu�turma �rne�i verilmi�tir.
*/

/*
    === YAPICI METOTLAR (Constructor) ===

    - Yap�c� metotlar, bir s�n�ftan nesne (obje) olu�turuldu�unda otomatik olarak �al��an �zel metotlard�r.
    - D�n�� tipi **olmaz** ve ismi s�n�f ismiyle **ayn� olmak zorundad�r**.
    - Overload (a��r� y�kleme) ile birden fazla yap�c� metot tan�mlanabilir.
    - Bellekte nesne olu�tururken ilk de�er atamak (initialize etmek) i�in kullan�l�r.
    
    Yap�c� Metot T�rleri:
    ---------------------
    1. **Parametresiz Yap�c� Metot**:
        - Nesne olu�turuldu�unda herhangi bir de�er girilmezse �al���r.
        - Bu metotta `this->` kullan�larak de�i�kenlere ba�lang�� de�eri atanabilir.
        - Alternatif olarak `initializer list` kullan�larak da ayn� i�lem yap�labilir.
          �rnek: `insan(): ad("insan nesnesi"), kilo(1), yas(0) {}`

    2. **Parametreli Yap�c� Metot**:
        - Nesne olu�turulurken kullan�c�dan de�er alarak ba�latma yap�l�r.
        - `this->` ile ya da `initializer list` y�ntemiyle yaz�labilir.
          �rnek: `insan(string ad, int yas, int kilo): ad(ad), yas(yas), kilo(kilo) {}`

    NOTLAR:
    -------
    - E�er herhangi bir yap�c� metot tan�mlanmazsa, C++ otomatik olarak **default parametresiz yap�c� metot** olu�turur.
    - Ancak bir parametreli yap�c� metot tan�mlan�rsa, **otomatik parametresiz yap�c� olu�turulmaz**, bu y�zden ihtiya� varsa onu da yazmak gerekir.
    - Pointer ile dinamik nesne olu�tururken yap�c� metotlar yine otomatik �al���r. �rnek:
        `insan* ptr = new insan();`  � parametresiz
        `insan* ptr = new insan("Ali", 30, 70);` � parametreli
*/



#include <iostream>
using namespace std;

class insan {
private:
    int yas, kilo;  // private: sadece s�n�f�n i�inde eri�ilebilir, d��ar�dan do�rudan eri�im yok
    string ad;

public:
	
	// Yap�c� metodlar : d�n�� tipi olmaz, s�n�f ad� ile ayn� olmak zorunda, parametreli parametresi olan var. pointer olmal�
	
  // Y�ntem 1: Parametresiz yap�c� metot (this-> kullanarak)
    insan() {
        this->ad = "insan nesnesi";
        this->kilo = 1;
        this->yas = 0;
    }

    // Y�ntem 2: Parametresiz yap�c� metot (initializer list ile)
    // insan(): ad("insan nesnesi"), kilo(1), yas(0) {}

    // Y�ntem 1: Parametreli yap�c� metot (this-> kullanarak)
    insan(string ad, int yas, int kilo) {
        this->ad = ad;
        this->yas = yas;
        this->kilo = kilo;
    }

    // Y�ntem 2: Parametreli yap�c� metot (initializer list ile)
    // insan(string ad, int yas, int kilo): ad(ad), yas(yas), kilo(kilo) {}

    /*  Di�er yap�c� metot olu�turma
	insan():ad("insan nesnesi"),kilo(1),yas(0){}// parametrsiz yap�c� metot
	
	insan(string ad, int yas, int kilo):ad(ad),kilo(kilo),yas(yas){}// parametreli yap�c� metot 
	*/
	
    // Setter ve getter metodlar�
    void set_kilo(int kilo) {
        if (kilo < 0)
            this->kilo = 1;
        else if (kilo > 800)
            this->kilo = 800;
        else
            this->kilo = kilo;
    }

    int get_kilo() const {
        return this->kilo;
    }

    void set_yas(int yas) {
        if (yas < 0)
            this->yas = 0;
        else if (yas > 150)
            this->yas = 150;
        else
            this->yas = yas;
    }

    int get_yas() const {
        return this->yas;
    }

    void set_ad(string ad) {
    	
        this->ad = ad;
    }

    string get_ad() const {
        return this->ad;
    }
	

};

// Fonksiyon: insan s�n�f�ndan nesne olu�turur, kaps�lleme (encapsulation) ile veri eri�imini g�sterir
void yapiciMetotlarOrnek1() {

    insan i1;  // Parametresiz yap�c� metot �a�r�l�r
    i1.set_kilo(801); // Ge�ersiz de�er -> 800'e ayarlan�r
    cout << "Kilo : " << i1.get_kilo() << endl;

    i1.set_yas(-80);  // Ge�ersiz de�er -> 0'a ayarlan�r
    cout << "Yas : " << i1.get_yas() << endl;

    i1.set_ad("Kadir");
    cout << "Ad : " << i1.get_ad() << endl;

    // Yap�c� metot kullanarak dinamik nesne olu�turma
    insan* i2 = new insan(); // Parametresiz yap�c� metot
    insan* i3 = new insan("Ali", 36, 85); // Parametreli yap�c� metot

    cout << "i3 Ad: " << i3->get_ad() << ", Yas: " << i3->get_yas() << ", Kilo: " << i3->get_kilo() << endl;

    // Bellek s�z�nt�s�n� �nlemek i�in silme i�lemi
    delete i2;
    delete i3;
}

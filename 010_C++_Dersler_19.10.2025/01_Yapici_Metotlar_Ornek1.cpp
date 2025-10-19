// Bu dosyada main() yok. Bu dosya main.cpp'den çaðrýlýr.
/*
 Bu C++ programý, "insan" sýnýfý üzerinden kapsülleme (encapsulation) ve yapýcý metotlarýn (constructor) kullanýmýný örneklemektedir.
 Sýnýfýn içerisinde private deðiþkenler (ad, yas, kilo) yer almakta ve bunlara eriþim için getter/setter metodlarý kullanýlmaktadýr.
 Ayrýca:
 - Parametresiz ve parametreli yapýcý metotlar hem `this->` hem de initializer list yöntemiyle gösterilmiþtir.
 - Dinamik bellek yönetimi (`new` ve `delete`) kullanýlarak pointer ile nesne oluþturma örneði verilmiþtir.
*/

/*
    === YAPICI METOTLAR (Constructor) ===

    - Yapýcý metotlar, bir sýnýftan nesne (obje) oluþturulduðunda otomatik olarak çalýþan özel metotlardýr.
    - Dönüþ tipi **olmaz** ve ismi sýnýf ismiyle **ayný olmak zorundadýr**.
    - Overload (aþýrý yükleme) ile birden fazla yapýcý metot tanýmlanabilir.
    - Bellekte nesne oluþtururken ilk deðer atamak (initialize etmek) için kullanýlýr.
    
    Yapýcý Metot Türleri:
    ---------------------
    1. **Parametresiz Yapýcý Metot**:
        - Nesne oluþturulduðunda herhangi bir deðer girilmezse çalýþýr.
        - Bu metotta `this->` kullanýlarak deðiþkenlere baþlangýç deðeri atanabilir.
        - Alternatif olarak `initializer list` kullanýlarak da ayný iþlem yapýlabilir.
          Örnek: `insan(): ad("insan nesnesi"), kilo(1), yas(0) {}`

    2. **Parametreli Yapýcý Metot**:
        - Nesne oluþturulurken kullanýcýdan deðer alarak baþlatma yapýlýr.
        - `this->` ile ya da `initializer list` yöntemiyle yazýlabilir.
          Örnek: `insan(string ad, int yas, int kilo): ad(ad), yas(yas), kilo(kilo) {}`

    NOTLAR:
    -------
    - Eðer herhangi bir yapýcý metot tanýmlanmazsa, C++ otomatik olarak **default parametresiz yapýcý metot** oluþturur.
    - Ancak bir parametreli yapýcý metot tanýmlanýrsa, **otomatik parametresiz yapýcý oluþturulmaz**, bu yüzden ihtiyaç varsa onu da yazmak gerekir.
    - Pointer ile dinamik nesne oluþtururken yapýcý metotlar yine otomatik çalýþýr. Örnek:
        `insan* ptr = new insan();`  › parametresiz
        `insan* ptr = new insan("Ali", 30, 70);` › parametreli
*/



#include <iostream>
using namespace std;

class insan {
private:
    int yas, kilo;  // private: sadece sýnýfýn içinde eriþilebilir, dýþarýdan doðrudan eriþim yok
    string ad;

public:
	
	// Yapýcý metodlar : dönüþ tipi olmaz, sýnýf adý ile ayný olmak zorunda, parametreli parametresi olan var. pointer olmalý
	
  // Yöntem 1: Parametresiz yapýcý metot (this-> kullanarak)
    insan() {
        this->ad = "insan nesnesi";
        this->kilo = 1;
        this->yas = 0;
    }

    // Yöntem 2: Parametresiz yapýcý metot (initializer list ile)
    // insan(): ad("insan nesnesi"), kilo(1), yas(0) {}

    // Yöntem 1: Parametreli yapýcý metot (this-> kullanarak)
    insan(string ad, int yas, int kilo) {
        this->ad = ad;
        this->yas = yas;
        this->kilo = kilo;
    }

    // Yöntem 2: Parametreli yapýcý metot (initializer list ile)
    // insan(string ad, int yas, int kilo): ad(ad), yas(yas), kilo(kilo) {}

    /*  Diðer yapýcý metot oluþturma
	insan():ad("insan nesnesi"),kilo(1),yas(0){}// parametrsiz yapýcý metot
	
	insan(string ad, int yas, int kilo):ad(ad),kilo(kilo),yas(yas){}// parametreli yapýcý metot 
	*/
	
    // Setter ve getter metodlarý
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

// Fonksiyon: insan sýnýfýndan nesne oluþturur, kapsülleme (encapsulation) ile veri eriþimini gösterir
void yapiciMetotlarOrnek1() {

    insan i1;  // Parametresiz yapýcý metot çaðrýlýr
    i1.set_kilo(801); // Geçersiz deðer -> 800'e ayarlanýr
    cout << "Kilo : " << i1.get_kilo() << endl;

    i1.set_yas(-80);  // Geçersiz deðer -> 0'a ayarlanýr
    cout << "Yas : " << i1.get_yas() << endl;

    i1.set_ad("Kadir");
    cout << "Ad : " << i1.get_ad() << endl;

    // Yapýcý metot kullanarak dinamik nesne oluþturma
    insan* i2 = new insan(); // Parametresiz yapýcý metot
    insan* i3 = new insan("Ali", 36, 85); // Parametreli yapýcý metot

    cout << "i3 Ad: " << i3->get_ad() << ", Yas: " << i3->get_yas() << ", Kilo: " << i3->get_kilo() << endl;

    // Bellek sýzýntýsýný önlemek için silme iþlemi
    delete i2;
    delete i3;
}

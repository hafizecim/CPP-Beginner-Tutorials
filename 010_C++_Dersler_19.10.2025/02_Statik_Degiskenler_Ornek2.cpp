// Bu dosyada main() yok. Bu dosya main.cpp'den çaðrýlýr.
 /*
        === STATIC DEÐÝÞKENLER (Sýnýf Düzeyinde Deðiþkenler) ===

        - `static` anahtar kelimesiyle tanýmlanan sýnýf deðiþkenleri, **tüm nesneler arasýnda ortak** olarak paylaþýlýr.
        - Bellekte sadece **tek bir kez** yer ayrýlýr, hangi nesne üzerinden eriþilirse eriþilsin ayný deðeri taþýr.
        - Bu örnekte: `static int sayac`, oluþturulan "insan" nesnelerinin sayýsýný tutar.

        Kullaným Notlarý:
        -----------------
        - Static deðiþkenin deðeri nesneye özel deðildir, sýnýfa aittir.
        - Static deðiþken mutlaka **sýnýf dýþýnda tanýmlanmalý ve ilk deðer verilmelidir.**
            Örnek: `int insan::sayac = 0;`
        - Yapýcý metotlarda `sayac++` yapýlarak her yeni nesne oluþturulduðunda sayaç artýrýlýr.
        - Static deðiþkene nesne olmadan da sýnýf ismiyle eriþilebilir:
            Örnek: `cout << insan::sayac;`
        - Özellikle sayaç, toplam kayýt, sistem genel durumu izleme gibi global verilerde static kullanýlýr.
        
        Kodda ayrýca:
        -----------------
	    - Parametresiz ve parametreli yapýcý metotlar var.
	    - Nesneye özel set/get metodlarý var.
	    - Nesneye ait ve static metotlarla sayaç ve nesne bilgileri gösteriliyor.
	    - `friend` fonksiyon ile nesnenin özel verisi deðiþtirilip (örneðin kilo arttýrma) örnek gösterildi.
	    - Dinamik oluþturulan nesneler `delete` ile bellekten temizleniyor.
*/

#include <iostream>
using namespace std;

// insan sýnýfý: kapsülleme (encapsulation) + yapýcý metot + static deðiþken örneði
class insan {
private:
    int yas, kilo;  // Sadece sýnýf içinde eriþilebilir
    string ad;

public:
    static int sayac;  // Tüm nesneler arasýnda ortak olan sýnýf düzeyinde sayaç deðiþkeni

    // === Parametresiz Yapýcý Metot ===
    // Nesne oluþturulduðunda otomatik çalýþýr. Varsayýlan baþlangýç deðerleri atanýr.
    insan() {
        sayac++;  // Her nesne oluþtuðunda sayaç artýrýlýr
        this->ad = "insan nesnesi";
        this->kilo = 1;
        this->yas = 0;
    }

    // === Parametreli Yapýcý Metot ===
    // Nesne oluþturulurken dýþarýdan deðer almak için kullanýlýr
    insan(string ad, int yas, int kilo) {
        sayac++;  // Her nesne oluþtuðunda sayaç artýrýlýr
        this->ad = ad;
        this->yas = yas;
        this->kilo = kilo;
    }

    /*  Alternatif olarak initializer list ile de tanýmlanabilir:
    
        insan(): ad("insan nesnesi"), kilo(1), yas(0) { sayac++; } // Parametresiz
        insan(string ad, int yas, int kilo): ad(ad), kilo(kilo), yas(yas) { sayac++; } // Parametreli
    */

	// Setter metotlar 
	void set_ad(string ad) {
    	this->ad = ad;
	}

	void set_kilo(int kilo) {
	    if (kilo < 0) this->kilo = 1;
	    else if (kilo > 800) this->kilo = 800;
	    else this->kilo = kilo;
		}
	
	void set_yas(int yas) {
	    if (yas < 0) this->yas = 0;
	    else if (yas > 150) this->yas = 150;
	    else this->yas = yas;
	}		
    
    // Getter metotlar (dýþarýdan veriye eriþim için)
    string get_ad() const { return this->ad; }
    int get_yas() const { return this->yas; }
    int get_kilo() const { return this->kilo; }
    
    void bilgi_goster1(){ // Nesneye ait metot
    	cout << "Toplam insan nesnesi sayisi: " << sayac << endl;
	}
	
	static void bilgi_goster2(){ // Static metot
    	cout << "Toplam insan nesnesi sayisi: " << sayac << endl;
	}
	
	static void bilgi_goster3(insan *nesne){ // Static metot
    	cout << "Ad: "   << nesne->get_ad()   << endl;
    	cout << "Yas: "  << nesne->get_yas()  << endl;
    	cout << "Kilo: " << nesne->get_kilo() << endl;
    	cout << "***************************" << endl;
	}
	
	friend void yemek_ye(insan *kisi);
};

// static deðiþkenin tanýmý
int insan::sayac = 0;  // Static deðiþkenin sýnýf dýþýnda tanýmlanmasý zorunludur


void yemek_ye(insan *kisi){
	kisi->kilo++;
}
	
// Yapýcý metot ve static deðiþken kullaným örneði
void statikDegiskenlerOrnek2() {
	    // Dinamik olarak parametresiz yapýcý metotla nesne oluþturma
	insan* i2 = new insan(); 
	
	// Parametreli yapýcý metotla dinamik nesne oluþturma
	insan* i3 = new insan("Ali", 36, 85); 
	
	// i3 nesnesinin bilgilerini ekrana yazdýrma
	cout << "i3 Ad: " << i3->get_ad() 
	     << ", Yas: " << i3->get_yas() 
	     << ", Kilo: " << i3->get_kilo() << endl;
	
	// Nesneye ait normal metot ile toplam nesne sayýsýný ekrana yazdýrma
	i2->bilgi_goster1();
	i3->bilgi_goster1();
	
	i2->set_kilo(80);
	i2->bilgi_goster1();
	yemek_ye(i2);  // i2'yi yemeðe gönderiyoruz
	i2->bilgi_goster1();
	
	// i2 nesnesinin adýný deðiþtirme
	i2->set_ad("Ali");
	
	// Static metodu sýnýf ismiyle çaðýrarak toplam nesne sayýsýný yazdýrma
	insan::bilgi_goster2();
	
	insan::bilgi_goster3(i2);
	
	// Dinamik olarak oluþturulan nesneleri bellekten temizleme
	delete i2;
	delete i3;
	
	// Static deðiþkeni kullanarak toplam oluþturulan insan nesnesi sayýsýný ekrana yazdýrma
	cout << "Toplam insan nesnesi sayisi: " << insan::sayac << endl;

}




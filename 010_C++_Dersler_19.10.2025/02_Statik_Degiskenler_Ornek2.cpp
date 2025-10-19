// Bu dosyada main() yok. Bu dosya main.cpp'den �a�r�l�r.
 /*
        === STATIC DE���KENLER (S�n�f D�zeyinde De�i�kenler) ===

        - `static` anahtar kelimesiyle tan�mlanan s�n�f de�i�kenleri, **t�m nesneler aras�nda ortak** olarak payla��l�r.
        - Bellekte sadece **tek bir kez** yer ayr�l�r, hangi nesne �zerinden eri�ilirse eri�ilsin ayn� de�eri ta��r.
        - Bu �rnekte: `static int sayac`, olu�turulan "insan" nesnelerinin say�s�n� tutar.

        Kullan�m Notlar�:
        -----------------
        - Static de�i�kenin de�eri nesneye �zel de�ildir, s�n�fa aittir.
        - Static de�i�ken mutlaka **s�n�f d���nda tan�mlanmal� ve ilk de�er verilmelidir.**
            �rnek: `int insan::sayac = 0;`
        - Yap�c� metotlarda `sayac++` yap�larak her yeni nesne olu�turuldu�unda saya� art�r�l�r.
        - Static de�i�kene nesne olmadan da s�n�f ismiyle eri�ilebilir:
            �rnek: `cout << insan::sayac;`
        - �zellikle saya�, toplam kay�t, sistem genel durumu izleme gibi global verilerde static kullan�l�r.
        
        Kodda ayr�ca:
        -----------------
	    - Parametresiz ve parametreli yap�c� metotlar var.
	    - Nesneye �zel set/get metodlar� var.
	    - Nesneye ait ve static metotlarla saya� ve nesne bilgileri g�steriliyor.
	    - `friend` fonksiyon ile nesnenin �zel verisi de�i�tirilip (�rne�in kilo artt�rma) �rnek g�sterildi.
	    - Dinamik olu�turulan nesneler `delete` ile bellekten temizleniyor.
*/

#include <iostream>
using namespace std;

// insan s�n�f�: kaps�lleme (encapsulation) + yap�c� metot + static de�i�ken �rne�i
class insan {
private:
    int yas, kilo;  // Sadece s�n�f i�inde eri�ilebilir
    string ad;

public:
    static int sayac;  // T�m nesneler aras�nda ortak olan s�n�f d�zeyinde saya� de�i�keni

    // === Parametresiz Yap�c� Metot ===
    // Nesne olu�turuldu�unda otomatik �al���r. Varsay�lan ba�lang�� de�erleri atan�r.
    insan() {
        sayac++;  // Her nesne olu�tu�unda saya� art�r�l�r
        this->ad = "insan nesnesi";
        this->kilo = 1;
        this->yas = 0;
    }

    // === Parametreli Yap�c� Metot ===
    // Nesne olu�turulurken d��ar�dan de�er almak i�in kullan�l�r
    insan(string ad, int yas, int kilo) {
        sayac++;  // Her nesne olu�tu�unda saya� art�r�l�r
        this->ad = ad;
        this->yas = yas;
        this->kilo = kilo;
    }

    /*  Alternatif olarak initializer list ile de tan�mlanabilir:
    
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
    
    // Getter metotlar (d��ar�dan veriye eri�im i�in)
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

// static de�i�kenin tan�m�
int insan::sayac = 0;  // Static de�i�kenin s�n�f d���nda tan�mlanmas� zorunludur


void yemek_ye(insan *kisi){
	kisi->kilo++;
}
	
// Yap�c� metot ve static de�i�ken kullan�m �rne�i
void statikDegiskenlerOrnek2() {
	    // Dinamik olarak parametresiz yap�c� metotla nesne olu�turma
	insan* i2 = new insan(); 
	
	// Parametreli yap�c� metotla dinamik nesne olu�turma
	insan* i3 = new insan("Ali", 36, 85); 
	
	// i3 nesnesinin bilgilerini ekrana yazd�rma
	cout << "i3 Ad: " << i3->get_ad() 
	     << ", Yas: " << i3->get_yas() 
	     << ", Kilo: " << i3->get_kilo() << endl;
	
	// Nesneye ait normal metot ile toplam nesne say�s�n� ekrana yazd�rma
	i2->bilgi_goster1();
	i3->bilgi_goster1();
	
	i2->set_kilo(80);
	i2->bilgi_goster1();
	yemek_ye(i2);  // i2'yi yeme�e g�nderiyoruz
	i2->bilgi_goster1();
	
	// i2 nesnesinin ad�n� de�i�tirme
	i2->set_ad("Ali");
	
	// Static metodu s�n�f ismiyle �a��rarak toplam nesne say�s�n� yazd�rma
	insan::bilgi_goster2();
	
	insan::bilgi_goster3(i2);
	
	// Dinamik olarak olu�turulan nesneleri bellekten temizleme
	delete i2;
	delete i3;
	
	// Static de�i�keni kullanarak toplam olu�turulan insan nesnesi say�s�n� ekrana yazd�rma
	cout << "Toplam insan nesnesi sayisi: " << insan::sayac << endl;

}




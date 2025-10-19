// 1. Arac ad�nda bir s�n�f tan�mlay�n�z.
// 2. Arac s�n�f�na ait olan ve d��ar�dan  eri�ime kapal� olan h�z ad�nda bir de�i�ken tan�mly�n�z.
// 3. Hiz de�i�keninin kaps�llemesinde kullan�lan setter ve getter metotlar� tan�mlay�n�z.
// 4. Arac s�n�f�na ait olan parametreli ve parametresiz yap�c� metotlar� tan�mlay�n�z.
// 5. Arac s�n�fa ait ve d��ar�dan eri�ime a��k olan parametreli ve parametresiz gaz ve fren metotler�n� tan�mlay�n�z.
// 6. Ara� nesnesinin adedi tutabilen adet ad�ndaki statik de�i�keni tan�mlay�n�z ve her nesne �retildi�inde adedin bir art�r�lmas� sa�lay�n�z.
// 7. Ara� s�n�f�na ait hiz bilgisi ad�ndaki metodu tan�mlay�n�z ve h�z bilgisininin ekranda yazd�r�lmas�n� sa�lay�n�z.


#include <iostream>
using namespace std;

// 1. Arac ad�nda bir s�n�f tan�mlan�yor
class arac {
	
// 2. D��ar�dan eri�ime kapal� (private) hiz de�i�keni tan�mlan�yor
private:
    int hiz;

public:
	// 6. Nesne say�s�n� tutan static de�i�ken (s�n�fa ait, nesnelere de�il)
    static int adet;  // Statik de�i�ken: ka� tane nesne olu�turuldu�unu sayar

    // 4. Parametresiz yap�c� metot: Nesne olu�turulurken otomatik �al���r
    arac() {
        hiz = 0;
        adet++;  // Her nesne olu�tu�unda sayac� art�r
    }

    // 4. Parametreli yap�c� metot: Ba�lang�� de�erleri ile nesne olu�turur
    arac(int hiz): hiz(hiz) {adet++;}
	void gaz();
	void gaz(int saniye);
	void fren();
	void fren(int saniye);
    // 3. Kaps�lleme: hiz de�i�keni i�in setter metodu
    void set_hiz(int hiz) {
        if (hiz < -50)
            this->hiz = 0;
        else if (hiz > 250)
            this->hiz = 250;
        else
            this->hiz = hiz;
    }

    // 3. Kaps�lleme: hiz de�i�keni i�in getter metodu
    int get_hiz() const {
        return hiz;
    }

    
    
    // 7. Arac�n h�z bilgisini ve toplam ara� say�s�n� ekrana yazd�ran metot
    static void nesne_sayisi() {
    	cout<< "********************"<<endl;
        cout << "Arac hiz bilgisi: " <<  << adet << endl;
        cout<< "********************"<<endl;
    }
    
    friend void hiz_bilgisi(arac *nesne);
};

void hiz_bilgisi(arac *nesne){
	if(nesne->get_hiz() == 0){
		cout << "arac hareket etmiyor" <<endl;
		
	
	if(nesne->get_hiz() > 250){
		cout << "Maksimum hiza ulasildi" <<endl;
		nesne->set_hiz(250);
	}
	else if(nesne->get_hiz() < -50){
		cout << "Minimum hiza ulasildi" <<endl;
		nesne->set_hiz(-50);
	}
	cout<< "Hiz : " << nesne->hiz<< endl;
	cout<< "********************"<<endl;
	
}
void arac::gaz(){
	if(get_hiz() >= 0){
		this->hiz += 20;
	}else{
		this->hiz -= 20;
	}
		
}

void arac::gaz(int saniye){
	if(get_hiz() >= 0){
		for(int i = 0; i<saniye;i++){ // size_t == unsigned int
			this->hiz += 5;
		}
	}else{
		for(int i = 0; i<saniye;i++){ // size_t == unsigned int
			this->hiz -= 5;
		}
	}
}


void arac::fren(){
	if(get_hiz() >= 0){
		this->hiz -= 10;
	}else{
		this->hiz += 10;
	}	
}

void arac::fren(int saniye){
	if(get_hiz() >= 0){
		for(int i = 0; i<saniye;i++){ // size_t == unsigned int
		this->fren -= 2;
		}
	}else{
		for(int i = 0; i<saniye;i++){ // size_t == unsigned int
		this->fren += 2;
		}
	}
	
}


// 6. Static de�i�ken s�n�f d���nda tan�mlanmal� (ba�lang�� de�eri 0)
int arac::adet = 0;

// Test fonksiyonu: S�n�f�n i�levlerini kontrol eder
void nesneYonelimliProgAlistirma1() {
	
    arac *nesne1 = new arac();
    arac *nesne2 = new arac();
    arac::nesne_sayisi();
    nesne1->hiz_bilgisi(nesne1);
    
    arac *a1 = new arac();
    hiz_bilgisi(a1);
    a1->set_hiz(240);
    hiz_bilgisi(a1);
    a1->set_hiz(240);
    a1->gaz();
    hiz_bilgisi(a1);
    
    
    arac *a2 = new arac();
    hiz_bilgisi(a2);
    a1->set_hiz(-50);
    hiz_bilgisi(a2);
    a1->fren();
    hiz_bilgisi(a2);
    
    
}



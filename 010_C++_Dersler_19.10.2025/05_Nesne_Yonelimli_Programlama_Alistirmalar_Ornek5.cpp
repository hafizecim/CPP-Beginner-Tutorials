// 1. Arac adýnda bir sýnýf tanýmlayýnýz.
// 2. Arac sýnýfýna ait olan ve dýþarýdan  eriþime kapalý olan hýz adýnda bir deðiþken tanýmlyýnýz.
// 3. Hiz deðiþkeninin kapsüllemesinde kullanýlan setter ve getter metotlarý tanýmlayýnýz.
// 4. Arac sýnýfýna ait olan parametreli ve parametresiz yapýcý metotlarý tanýmlayýnýz.
// 5. Arac sýnýfa ait ve dýþarýdan eriþime açýk olan parametreli ve parametresiz gaz ve fren metotlerýný tanýmlayýnýz.
// 6. Araç nesnesinin adedi tutabilen adet adýndaki statik deðiþkeni tanýmlayýnýz ve her nesne üretildiðinde adedin bir artýrýlmasý saðlayýnýz.
// 7. Araç sýnýfýna ait hiz bilgisi adýndaki metodu tanýmlayýnýz ve hýz bilgisininin ekranda yazdýrýlmasýný saðlayýnýz.


#include <iostream>
using namespace std;

// 1. Arac adýnda bir sýnýf tanýmlanýyor
class arac {
	
// 2. Dýþarýdan eriþime kapalý (private) hiz deðiþkeni tanýmlanýyor
private:
    int hiz;

public:
	// 6. Nesne sayýsýný tutan static deðiþken (sýnýfa ait, nesnelere deðil)
    static int adet;  // Statik deðiþken: kaç tane nesne oluþturulduðunu sayar

    // 4. Parametresiz yapýcý metot: Nesne oluþturulurken otomatik çalýþýr
    arac() {
        hiz = 0;
        adet++;  // Her nesne oluþtuðunda sayacý artýr
    }

    // 4. Parametreli yapýcý metot: Baþlangýç deðerleri ile nesne oluþturur
    arac(int hiz): hiz(hiz) {adet++;}
	void gaz();
	void gaz(int saniye);
	void fren();
	void fren(int saniye);
    // 3. Kapsülleme: hiz deðiþkeni için setter metodu
    void set_hiz(int hiz) {
        if (hiz < -50)
            this->hiz = 0;
        else if (hiz > 250)
            this->hiz = 250;
        else
            this->hiz = hiz;
    }

    // 3. Kapsülleme: hiz deðiþkeni için getter metodu
    int get_hiz() const {
        return hiz;
    }

    
    
    // 7. Aracýn hýz bilgisini ve toplam araç sayýsýný ekrana yazdýran metot
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


// 6. Static deðiþken sýnýf dýþýnda tanýmlanmalý (baþlangýç deðeri 0)
int arac::adet = 0;

// Test fonksiyonu: Sýnýfýn iþlevlerini kontrol eder
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



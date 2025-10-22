/*
1. Otomobil adýnda bir sýnýf oluþturunuz ve arac sýnýfýndan miras almasýný saðlayýnýz
2. Otomobil sýnýfýna ait olan dýþarýdan eriþime kapalý olan int türünde koltuk sayisi ve bool türünde otomnatik vites adýndaki deðiþkenlerini ( özellikleri) tanýmlayýnýz.
3. Koltuk sayisi ve otomatik vites Tanýmlanan deðiþkenler (özellikler) için kapsülleme (getter setter) metodlarýný yazýnýz.
4. Bilgi yazdýr metodunda otomobil sýnýfýna ait tüm özelliklerin ekrana yazdýrýlmasýný saðlayýnýz.
5. Parametreli ve parametresiz yapýcý metodlarý (constructor) yazýnýz.
*/

#include <iostream>
#include <string>
using namespace std;

class otomobil {
private:
    int koltukSayisi;
    bool otomatikVites;

public:
    // SETTER'lar
    void set_koltukSayisi(int koltukSayisi) { 
		this->koltukSayisi = koltukSayisi; 
	}
    void set_otomatikVites(bool otomatikVites) { 
		this->otomatikVites = otomatikVites; 
	}

    // GETTER'lar
    int get_koltukSayisi() const { 
		return this->koltukSayisi; 
	}
	bool get_otomatikVites() const { 
		return this->otomatikVites; 
	}

    // PARAMETRESÝZ CONSTRUCTOR

    otomobil() {
        this->koltukSayisi = 2;
        this->otomatikVites = true;
    }
 
//	otomobil(): koltukSayisi(2), otomatikVites(true){}; // parametrsiz yapýcý metot hýzlý taným
  
    // PARAMETRELÝ CONSTRUCTOR 

    otomobil(int koltukSayisi,bool otomatikVites ) {
        this->koltukSayisi = koltukSayisi;
        this->otomatikVites = otomatikVites;
    }

//	otomobil(int koltukSayisi, bool otomatikVites): koltukSayisi(koltukSayisi), otomatikVites(otomatikVites){}; // parametreli yapýcý metot hýzlý taným


    // YAZDIRMA METODU
    void bilgi_yazdir_1()  {
    	cout << "---------------------------" << endl;
        cout << "Koltuk Sayisi: "  << this->get_koltukSayisi()  << endl;
        cout << "Otomatik Vites: " << this->get_otomatikVites() << endl;
        cout << "---------------------------" << endl;
    }
    
    friend void bilgi_yazdir_2(otomobil *ptr);
};

class arac : public otomobil {  // public kalýtým: üst sýnýfýn public ve protected üyeleri, alt sýnýfa geçer
    // Þu anlýk ekstra bir özellik ya da fonksiyon eklenmemiþ
};

 void bilgi_yazdir_2(otomobil *ptr) {
 	    cout << "---------------------------" << endl;
        cout << "Koltuk Sayisi: "  << ptr->get_koltukSayisi()  << endl;
        cout << "Otomatik Vites: " << ptr->get_otomatikVites() << endl;
        cout << "---------------------------" << endl;
    }

// ANA FONKSÝYON
void otomobilOopOrnek10() {
 
    otomobil *o1 = new otomobil();
    o1->bilgi_yazdir_1(); // otomobil nesnesi üzerinde çaðýrma iþlemi
    bilgi_yazdir_2(o1); // friend metot çaðrýlmasý iþlemi
    
    
    
}


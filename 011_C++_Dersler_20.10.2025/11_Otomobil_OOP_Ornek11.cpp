/*
1. Araç adýnda bir sýnýf oluþturunuz
2. Araç sýnýfýna ait olan yanlýzca sýnýf içinden ve alt sýnýflardan eriþime açýk olan marka, model ve yýl deðiþkenlerini tanýmlayýnýz.
3. Tanýmlanan deðiþkenler (özellikler) için kapsülleme (getter setter) metodlarýný yazýnýz.
4. Araç sýnýfýna ait olan parametreli ve parametresiz yapýcý metodlarý (constructor) yazýnýz.
5. Araç bilgilerini yazdýran geri deðer döndürmeyen bilgi yazdýr adýnda metod yazýnýz ve metot içinde bilgilerini alt alta satýrlarda olacak þekilde ekrana  yazdýrýlmasýný saðlayýnýz.

*/

#include <iostream>
#include <string>
using namespace std;

class arac {
protected:
    string marka, model;
    int yil;

public:
    // SETTER'lar
    void set_marka(string marka) { 
		this->marka = marka; 
	}
    void set_model(string model) { 
		this->model = model; 
	}
    void set_yil(int yil) { 
		this->yil = yil; 
	}

    // GETTER'lar
    string get_marka() const { 
		return this->marka; 
	}
    string get_model() const { 
		return this->model; 
	}
    int get_yil() const { 
		return this->yil; 
	}

    // PARAMETRESÝZ CONSTRUCTOR

    arac() {
        this->marka = "TOGG";
        this->model = "Bilinmiyor";
        this->yil = 2023;
    }
 
//	arac(): marka("TOGG"), model("Bilinmiyor"),yil(2023){}; // parametrsiz yapýcý metot hýzlý taným
  
    // PARAMETRELÝ CONSTRUCTOR 

    arac(string marka, string model, int yil) {
        this->marka = marka;
        this->model = model;
        this->yil = yil;
    }

//	arac(string marka, string model, int yil): marka("TOGG"), model("Bilinmiyor"),yil(2023){}; // parametreli yapýcý metot hýzlý taným


    // YAZDIRMA METODU
    void bilgi_yazdir_1()  {
    	cout << "---------------------------" << endl;
        cout << "Marka: " << this->get_marka() << endl;
        cout << "Model: " << this->get_model() << endl;
        cout << "Yil  : " << this->get_yil()   << endl;
        cout << "---------------------------" << endl;
    }
    
    
};

class otomobil : public arac{
private:
    int koltukSayisi;
    bool otomatikVites;

public:
	otomobil(): arac(), koltukSayisi(2), otomatikVites(false){};  // PARAMETRESÝZ CONSTRUCTOR
	otomobil(string marka, string model, int yil, int koltukSayisi, bool otomatikVites): 
	arac(marka, model, yil), koltukSayisi(koltukSayisi), otomatikVites(otomatikVites){}; // PARAMETRELÝ CONSTRUCTOR 
	
    // SETTER'lar
    void set_koltukSayisi(int koltukSayisi) {
		if(koltukSayisi <2) 
			this->koltukSayisi = 2; 
		else
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
   

    // YAZDIRMA METODU
    void bilgi_yazdir_1()  {
    	arac::bilgi_yazdir_1();
    	cout << "---------------------------" << endl;
        cout << "Koltuk Sayisi: "  << this->get_koltukSayisi()  << endl;
        cout << "Otomatik Vites: " << this->get_otomatikVites() << endl;
        cout << "---------------------------" << endl;
    }
    
		
};


// ANA FONKSÝYON
void otomobilOopOrnek11() {
 /*
    arac *a1 = new arac();
    a1->bilgi_yazdir_1(); // arac nesnesi üzerinde çaðýrma iþlemi
    bilgi_yazdir_2(a1); // friend metot çaðrýlmasý iþlemi
    
 */
 
 otomobil *otomobil1 = new otomobil();
 otomobil1->bilgi_yazdir_1();
    
}


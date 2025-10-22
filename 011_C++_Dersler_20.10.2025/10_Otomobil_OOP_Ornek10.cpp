/*
1. Otomobil ad�nda bir s�n�f olu�turunuz ve arac s�n�f�ndan miras almas�n� sa�lay�n�z
2. Otomobil s�n�f�na ait olan d��ar�dan eri�ime kapal� olan int t�r�nde koltuk sayisi ve bool t�r�nde otomnatik vites ad�ndaki de�i�kenlerini ( �zellikleri) tan�mlay�n�z.
3. Koltuk sayisi ve otomatik vites Tan�mlanan de�i�kenler (�zellikler) i�in kaps�lleme (getter setter) metodlar�n� yaz�n�z.
4. Bilgi yazd�r metodunda otomobil s�n�f�na ait t�m �zelliklerin ekrana yazd�r�lmas�n� sa�lay�n�z.
5. Parametreli ve parametresiz yap�c� metodlar� (constructor) yaz�n�z.
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

    // PARAMETRES�Z CONSTRUCTOR

    otomobil() {
        this->koltukSayisi = 2;
        this->otomatikVites = true;
    }
 
//	otomobil(): koltukSayisi(2), otomatikVites(true){}; // parametrsiz yap�c� metot h�zl� tan�m
  
    // PARAMETREL� CONSTRUCTOR 

    otomobil(int koltukSayisi,bool otomatikVites ) {
        this->koltukSayisi = koltukSayisi;
        this->otomatikVites = otomatikVites;
    }

//	otomobil(int koltukSayisi, bool otomatikVites): koltukSayisi(koltukSayisi), otomatikVites(otomatikVites){}; // parametreli yap�c� metot h�zl� tan�m


    // YAZDIRMA METODU
    void bilgi_yazdir_1()  {
    	cout << "---------------------------" << endl;
        cout << "Koltuk Sayisi: "  << this->get_koltukSayisi()  << endl;
        cout << "Otomatik Vites: " << this->get_otomatikVites() << endl;
        cout << "---------------------------" << endl;
    }
    
    friend void bilgi_yazdir_2(otomobil *ptr);
};

class arac : public otomobil {  // public kal�t�m: �st s�n�f�n public ve protected �yeleri, alt s�n�fa ge�er
    // �u anl�k ekstra bir �zellik ya da fonksiyon eklenmemi�
};

 void bilgi_yazdir_2(otomobil *ptr) {
 	    cout << "---------------------------" << endl;
        cout << "Koltuk Sayisi: "  << ptr->get_koltukSayisi()  << endl;
        cout << "Otomatik Vites: " << ptr->get_otomatikVites() << endl;
        cout << "---------------------------" << endl;
    }

// ANA FONKS�YON
void otomobilOopOrnek10() {
 
    otomobil *o1 = new otomobil();
    o1->bilgi_yazdir_1(); // otomobil nesnesi �zerinde �a��rma i�lemi
    bilgi_yazdir_2(o1); // friend metot �a�r�lmas� i�lemi
    
    
    
}


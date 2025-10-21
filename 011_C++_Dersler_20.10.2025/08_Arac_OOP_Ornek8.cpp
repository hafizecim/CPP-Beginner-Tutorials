/*
1. Ara� ad�nda bir s�n�f olu�turunuz
2. Ara� s�n�f�na ait olan yanl�zca s�n�f i�inden ve alt s�n�flardan eri�ime a��k olan marka, model ve y�l de�i�kenlerini tan�mlay�n�z.
3. Tan�mlanan de�i�kenler (�zellikler) i�in kaps�lleme (getter setter) metodlar�n� yaz�n�z.
4. Ara� s�n�f�na ait olan parametreli ve parametresiz yap�c� metodlar� (constructor) yaz�n�z.
5. Ara� bilgilerini yazd�ran geri de�er d�nd�rmeyen bilgi yazd�r ad�nda metod yaz�n�z ve metot i�inde bilgilerini alt alta sat�rlarda olacak �ekilde ekrana  yazd�r�lmas�n� sa�lay�n�z.

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

    // PARAMETRES�Z CONSTRUCTOR
    arac() {
        this->marka = "TOGG";
        this->model = "Bilinmiyor";
        this->yil = 2023;
    }
/*
	arac(): marka("TOGG"), model("Bilinmiyor"),yil(2023){}; // parametrsiz yap�c� metot h�zl� tan�m
*/   
    // PARAMETREL� CONSTRUCTOR
    arac(string marka, string model, int yil) {
        this->marka = marka;
        this->model = model;
        this->yil = yil;
    }
/*
	arac(string marka, string model, int yil): marka("TOGG"), model("Bilinmiyor"),yil(2023){}; // parametreli yap�c� metot h�zl� tan�m
*/

    // YAZDIRMA METODU
    void bilgi_yazdir() const {
    	cout << "---------------------------" << endl;
        cout << "Marka: " << this->get_marka() << endl;
        cout << "Model: " << this->get_model() << endl;
        cout << "Yil  : " << this->get_yil()   << endl;
        cout << "---------------------------" << endl;
    }
};

// ANA FONKS�YON
void aracOopOrnek8() {
    arac a1;
    arac a2("Ford", "Fiesta", 2024);

    a1.bilgi_yazdir();
    a2.bilgi_yazdir();

}


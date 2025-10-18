/*
| Metot T�r� | Parametre Al�r m�? | Geriye De�er D�nd�r�r m�? | Ne i�e yarar?                          |
| ---------- | ------------------ | ------------------------- | -------------------------------------- |
| `setter`   |  Evet              |  Hay�r                    | S�n�f de�i�kenine d��ar�dan de�er atar | -> de�er atma
| `getter`   |  Hay�r             |  Evet                     | S�n�f de�i�keninin de�erini d�nd�r�r   | -> de�er yazd�rma


*/


#include <iostream>
using namespace std;

class Araba {
private:
    string marka;
    int hiz; // <<< BU: s�n�fa (nesneye) ait de�i�ken

public:
    // Setter metotlar (de�er atama)
    void setMarka(string marka) { // string parametre al�r
        this->marka = marka;  // "this->" s�n�f�n i�indeki de�i�kene eri�ir
    }
    
    /* E�er parametre ad�n� farkl� koyarsan this kullanmaya gerek kalmaz: Ama �o�u zaman okunabilirli�i art�rmak i�in this ile yazmak tercih edilir.
    void setMarka(string marka) { 
        marka = yenimarka;  
    }
	*/
    void setHiz(int hiz) {  // int parametre al�r // <<< BU: metot parametresi
        if (hiz < 0)
            this->hiz = 0;
        else
            this->hiz = hiz; // <<< SOL taraf: nesnenin i�indeki yas
            				 //     SA� taraf: d��ar�dan gelen parametre
    }

    // Getter metotlar (de�er okuma)
    string getMarka() { // parametre almaz, string d�ner  
        return marka;
    }

    int getHiz() { // parametre almaz, int d�ner
        return hiz;
    }

    void yazdir() {
        cout << "Marka: " << getMarka() << ", H�z: " << getHiz() << " km/s" << endl;
    }
};

int main() {
    Araba a1;
    a1.setMarka("Toyota");
    a1.setHiz(120);

    a1.yazdir();  // ��kt�: Marka: Toyota, H�z: 120 km/s
}


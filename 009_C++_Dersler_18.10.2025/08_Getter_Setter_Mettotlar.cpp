/*
| Metot Türü | Parametre Alýr mý? | Geriye Deðer Döndürür mü? | Ne iþe yarar?                          |
| ---------- | ------------------ | ------------------------- | -------------------------------------- |
| `setter`   |  Evet              |  Hayýr                    | Sýnýf deðiþkenine dýþarýdan deðer atar | -> deðer atma
| `getter`   |  Hayýr             |  Evet                     | Sýnýf deðiþkeninin deðerini döndürür   | -> deðer yazdýrma


*/


#include <iostream>
using namespace std;

class Araba {
private:
    string marka;
    int hiz; // <<< BU: sýnýfa (nesneye) ait deðiþken

public:
    // Setter metotlar (deðer atama)
    void setMarka(string marka) { // string parametre alýr
        this->marka = marka;  // "this->" sýnýfýn içindeki deðiþkene eriþir
    }
    
    /* Eðer parametre adýný farklý koyarsan this kullanmaya gerek kalmaz: Ama çoðu zaman okunabilirliði artýrmak için this ile yazmak tercih edilir.
    void setMarka(string marka) { 
        marka = yenimarka;  
    }
	*/
    void setHiz(int hiz) {  // int parametre alýr // <<< BU: metot parametresi
        if (hiz < 0)
            this->hiz = 0;
        else
            this->hiz = hiz; // <<< SOL taraf: nesnenin içindeki yas
            				 //     SAÐ taraf: dýþarýdan gelen parametre
    }

    // Getter metotlar (deðer okuma)
    string getMarka() { // parametre almaz, string döner  
        return marka;
    }

    int getHiz() { // parametre almaz, int döner
        return hiz;
    }

    void yazdir() {
        cout << "Marka: " << getMarka() << ", Hýz: " << getHiz() << " km/s" << endl;
    }
};

int main() {
    Araba a1;
    a1.setMarka("Toyota");
    a1.setHiz(120);

    a1.yazdir();  // Çýktý: Marka: Toyota, Hýz: 120 km/s
}


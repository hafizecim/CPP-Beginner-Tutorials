/*
  Bu örnekte, C++ dilinde std::vector kullanýlarak dinamik diziler oluþturulmuþtur.
  - Eleman eklemek için push_back() fonksiyonu kullanýlmýþtýr.
  - Eleman sayýsýný öðrenmek için size() metodu kullanýlmýþtýr.
  - Vektör içeriðini yazdýrmak için bir yardýmcý fonksiyon (vector_yazdir) tanýmlanmýþtýr.
  Vektörler, eleman sayýsý deðiþebilen diziler gibi davranýr ve bellek yönetimini otomatik yapar.
*/

#include <iostream>
#include <vector>
using namespace std;

// vektörün elemanlarýný yazdýran fonksiyon
void vector_yazdir(vector<int> dizi){
    for (size_t i = 0; i < dizi.size(); i++) { // vektörün eleman sayýsý kadar döner
        cout << dizi[i] << " "; // her elemaný ekrana yazdýrýr
    }
    cout << endl;
}

void dizilerVector() {
    vector<int> sayilar; // int türünde boþ bir vektör tanýmlanýr
    cout << sayilar.size() << endl; // baþlangýçta eleman sayýsý 0'dýr

    sayilar.push_back(5);   // 0. indise 5 verisi eklenir
    sayilar.push_back(25);  // 1. indise 25 verisi eklenir
    sayilar.push_back(76);  // 2. indise 76 verisi eklenir

    cout << sayilar.size() << endl; // vektörün güncel eleman sayýsý yazdýrýlýr

    vector_yazdir(sayilar); // vektör içeriði yazdýrýlýr
}


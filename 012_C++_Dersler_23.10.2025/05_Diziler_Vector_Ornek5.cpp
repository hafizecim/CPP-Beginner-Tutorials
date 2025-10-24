/*
  Bu �rnekte, C++ dilinde std::vector kullan�larak dinamik diziler olu�turulmu�tur.
  - Eleman eklemek i�in push_back() fonksiyonu kullan�lm��t�r.
  - Eleman say�s�n� ��renmek i�in size() metodu kullan�lm��t�r.
  - Vekt�r i�eri�ini yazd�rmak i�in bir yard�mc� fonksiyon (vector_yazdir) tan�mlanm��t�r.
  Vekt�rler, eleman say�s� de�i�ebilen diziler gibi davran�r ve bellek y�netimini otomatik yapar.
*/

#include <iostream>
#include <vector>
using namespace std;

// vekt�r�n elemanlar�n� yazd�ran fonksiyon
void vector_yazdir(vector<int> dizi){
    for (size_t i = 0; i < dizi.size(); i++) { // vekt�r�n eleman say�s� kadar d�ner
        cout << dizi[i] << " "; // her eleman� ekrana yazd�r�r
    }
    cout << endl;
}

void dizilerVector() {
    vector<int> sayilar; // int t�r�nde bo� bir vekt�r tan�mlan�r
    cout << sayilar.size() << endl; // ba�lang��ta eleman say�s� 0'd�r

    sayilar.push_back(5);   // 0. indise 5 verisi eklenir
    sayilar.push_back(25);  // 1. indise 25 verisi eklenir
    sayilar.push_back(76);  // 2. indise 76 verisi eklenir

    cout << sayilar.size() << endl; // vekt�r�n g�ncel eleman say�s� yazd�r�l�r

    vector_yazdir(sayilar); // vekt�r i�eri�i yazd�r�l�r
}


#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  int sayilar[20];
  int cift_adet = 0;
  int tek_adet = 0;
  int boyut =sizeof(sayilar) / sizeof(int); // 20 / 4 = 5

  for (int i = 0; i < 20; i++) {
    cout << i << ". dizinin elemanini giriniz : ";
    cin >> sayilar[i] ;
  }

  for (int i = 0; i < 20; i++) {
    if (sayilar[i] % 2 == 0) {
      cout << i << ". dizinin elemanini  "<< sayilar[i] << " Sayisi cifttir." << endl;
      cift_adet++;
    } else {
      cout << i << ". dizinin elemanini  "<< sayilar[i] << " Sayisi tektir." << endl;
      tek_adet++;
    }
    cout << "Cift sayilarin adedi : " << cift_adet<< endl;
    cout << "Tek sayilarin adedi : " << tek_adet<< endl;
    cout << "Tek sayilarin adedi : " << 20 - cift_adet   << endl; // deðiþken tanýmlamamak için bu þekildede yapýlabilir
  }

  return 0;
}


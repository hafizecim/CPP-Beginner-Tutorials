// alt alta olcak �ekilde ad�n�z� 10 kere  ekrana yazd�r�n d�ng� kullan�n
//  for(int i=0; i<10; i++) -- > �nce i = 0 ve i nin 10 dan k���k olup olmad���n�n kontrol et ve artt�rmadan for d�ng�s� i�ine gir. 2. d�ng�ye girmeden �nce i yi 1 artt�r ve kontrol et.
/*
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
 string ad;
  cout << "Adinizi giriniz: ";
  cin >> ad;
  for(int i=0; i<10; i++){ // �nce artt�r daha sonra kontrol et
    cout << ad << endl;
  }
  cout << "Programi sonlandirmak icin bir tusa basin..." << endl;
  cin.get();
  return 0;
}

/*
 // alt alta olcak �ekilde ad�n�z� 10 kere  ekrana yazd�r�n d�ng� kullan�n
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  cout << "Alt alta olacak �ekilde ad�n�z� yazd�r�n" << endl;
  cout << "-----------------------------------------" << endl;
  string ad;
  cout << "Ad�n�z� girin: ";
  cin >> ad;
  for (int i = 0; i < ad.length(); i++)
    cout << ad[i] << endl;
  cout << "-----------------------------------------" << endl;
  cout << "Program sonu" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "Program� sonland�rmak i�in bir tu�a bas�n..." << endl;
  cin.get();
  cin.get();
  cout << "-----------------------------------------" << endl;
  cout << "Program sonland�" << endl;
  cout << "-----------------------------------------" << endl;
  return 0;
}
*/

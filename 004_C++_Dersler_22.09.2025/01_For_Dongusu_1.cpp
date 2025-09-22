// alt alta olcak þekilde adýnýzý 10 kere  ekrana yazdýrýn döngü kullanýn
//  for(int i=0; i<10; i++) -- > önce i = 0 ve i nin 10 dan küçük olup olmadýðýnýn kontrol et ve arttýrmadan for döngüsü içine gir. 2. döngüye girmeden önce i yi 1 arttýr ve kontrol et.
/*
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
 string ad;
  cout << "Adinizi giriniz: ";
  cin >> ad;
  for(int i=0; i<10; i++){ // önce arttýr daha sonra kontrol et
    cout << ad << endl;
  }
  cout << "Programi sonlandirmak icin bir tusa basin..." << endl;
  cin.get();
  return 0;
}

/*
 // alt alta olcak þekilde adýnýzý 10 kere  ekrana yazdýrýn döngü kullanýn
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  cout << "Alt alta olacak þekilde adýnýzý yazdýrýn" << endl;
  cout << "-----------------------------------------" << endl;
  string ad;
  cout << "Adýnýzý girin: ";
  cin >> ad;
  for (int i = 0; i < ad.length(); i++)
    cout << ad[i] << endl;
  cout << "-----------------------------------------" << endl;
  cout << "Program sonu" << endl;
  cout << "-----------------------------------------" << endl;
  cout << "Programý sonlandýrmak için bir tuþa basýn..." << endl;
  cin.get();
  cin.get();
  cout << "-----------------------------------------" << endl;
  cout << "Program sonlandý" << endl;
  cout << "-----------------------------------------" << endl;
  return 0;
}
*/

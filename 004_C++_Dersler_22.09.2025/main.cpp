
// 1. soru : Klavyeden girilen bir tamsay�n�n asal say� olup olmad���n� kontrol eden asal ise ekrana asal de�ilse de�ildir yazd�r�n e�er negatif say� giirlirse uyar� ver

// 2. soru : klavyeden girilen bir say�n�n m�kmemel bir say�y� kontrol eden 

// 3. Klavyeden girilen 2 tam say�n�n ebob ve ekok hesaplanmas� ( negetif uyar�s� ver)


#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int sayi;
  cout<< " Bir sayi giriniz : ";
  cin>> sayi;
  for(int i = 2 ; i = sayi ; i++ ){
  	if(sayi % i != 0){
  			 cout<<"Sayi asal degildir";
  			 break;
	  }else{
	  	cout<<"Sayi asaldir";
	  	break;
	  }

  }

  return 0;
}



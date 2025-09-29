
// 1. soru : Klavyeden girilen bir tamsayýnýn asal sayý olup olmadýðýný kontrol eden asal ise ekrana asal deðilse deðildir yazdýrýn eðer negatif sayý giirlirse uyarý ver

// 2. soru : klavyeden girilen bir sayýnýn mükmemel bir sayýyý kontrol eden 

// 3. Klavyeden girilen 2 tam sayýnýn ebob ve ekok hesaplanmasý ( negetif uyarýsý ver)


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



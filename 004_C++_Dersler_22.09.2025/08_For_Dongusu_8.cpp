/*

// klavyeden girilen sayilar�n toplam�
#include <iostream>

using namespace std;

int main(int argc, char** argv) { 
int sayi;
int toplam=0;
  for(int i=1; i<10; i++){   
	cout<< i << ". sayiyi giriniz:";
	cin>> sayi;
    toplam = toplam + sayi;   	       
}
	cout<< "Sayilar�n toplami : " <<toplam<< endl;
  	
  return 0;
}

/*
// klavyeden girilen bir say�n�n 10 a kadar toplam�

#include <iostream>

using namespace std;

int main(int argc, char** argv) { 
int sayi;
int toplam;
cout<< "Bir sayi girniz:";
cin>> sayi;
  for(int sayi=0; sayi<10; sayi++){   
    toplam = toplam + sayi;   	       
}
	cout<< toplam<< endl;
  	
  return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int switch_fonksiyon(int a, int b, int c){
	int sonuc = 0;
	switch(a){
		case 1:
			sonuc= b+c;
			break;
		case 2:
			sonuc= b+c;
			break;
		case 3:
			sonuc= b+c;
			break;
		case 4:
			sonuc= b+c;
			break;
		default:
			sonuc= 0;
			break;
			
	}
	return sonuc;
}

void metotlarSinavOrnek3(){
	int sayi1, sayi2, islem;
	cout << "Sayi 1 :";
	cin>>sayi1;
	cout << "Sayi 2 :";
	cin>>sayi2;
	cout<< "******************";
	cout << "1. Toplama " <<endl;
	cout << "2. Cikarma " <<endl;
	cout << "3. Carpma " <<endl;
	cout << "4. Bolme " <<endl;
	cout<< "Lutfen bir secim giriniz: ";
	cout<< "******************";
	cin>> islem;
	int sonuc = switch_fonksiyon(sayi1, sayi2, islem);
	
}

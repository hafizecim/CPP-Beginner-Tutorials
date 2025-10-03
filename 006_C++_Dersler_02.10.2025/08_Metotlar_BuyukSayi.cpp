#include <iostream> 
// METOTLARLA FAKTÖRÝYEL HESAPLAMA

using namespace std;

// Metot prototipleri – önce bildirildiði için main'den sonra tanýmlanabilirler
int buyukSayi(int,int);    
int kucukSayi(int,int);

void buyukSayi() {

	cout<< " 1. sayiyi giriniz : ";
	cin>> sayi1;
	cout<< " 2. sayiyi giriniz : ";
	cin>> sayi2;
	int = buyuk = buyukSayi(sayi1, sayi2);
	cout<< "Buyuk sayi : " << buyuk << endl;
	int = kucuk = kucukSayi(sayi1, sayi2);
	cout<< "Kucuk sayi : " << kucuk << endl;
	
	
}


int buyukSayi(int sayi1, int sayi2) {
	
	if ( sayi1 > sayi2) return sayi1;
	else return sayi2;
	
		
}

int kucukSayi(int sayi1, int sayi2) {
	
	if ( sayi1 > sayi2){
		return sayi2;
	}else{
		return sayi1;
	}
		
}


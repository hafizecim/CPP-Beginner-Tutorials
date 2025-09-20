#include <iostream>
using namespace std;
int main(int argc, char** argv) {


// 1. ÖRNEK	

	int sayi = 1;
	if(sayi==1){
		cout<<"Bir";
	}
	else if(sayi==2){
		cout<<"Iki";
	}
	else{
		cout<<"Bir yada iki deðidir";
	}
	
	
	
// 2. ÖRNEK	

	int sayi =1;
	switch(sayi){
		case 1:
			cout<<"Bir"
			break;
		case 2:
			cout<<"Iki"
			break;
		case 3:
			cout<<"Bir yada iki deðidir"
			break;
	}
	
	
// 3. ÖRNEK	

		int sifre =1234;
	switch(sayi){
		case 1234:
			cout<<"Merhaba Ali"
			break;
		case 2234:
			cout<<"Merhaba Fatma"
			break;
		case 3234:
			cout<<"Merhaba Ayþe"
			break;
	}
	
	
// 4. ÖRNEK	
	
		char harf ='a';
	switch(sayi){
		case 'a':
			cout<<"Merhaba Ali"
			break;
		case 'b':
			cout<<"Merhaba Fatma"
			break;
		case 'c':
			cout<<"Merhaba Ayþe"
			break;
	}
	

// 5. ÖRNEK	

		string gun ="pazartesi";
	switch(sayi){
		case "pazartesi":
			cout<<"1. gun"
			break;
		case "sali":
			cout<<"2. gun"
			break;
		case "carsamba":
			cout<<"3. gun"
			break;
		case "persembe":
			cout<<"4. gun"
			break;
		case "cuma":
			cout<<"5. gun"
			break;
		case "cumartesi":
			cout<<"6. gun"
			break;
		case "pazar":
			cout<<"7. gun"
			break;
			
			
			
// 6. ÖRNEK	

	int sayi =1;
	switch(sayi){
		case 1:
			cout<<"Bir "
			
		case 2:
			cout<<"Iki "

		case 3:
			cout<<"Bir yada iki deðidir" // ÇIKTI: Bir Iki Bir yada iki deðidir
			
	}
			
			
	}
	return 0;
}

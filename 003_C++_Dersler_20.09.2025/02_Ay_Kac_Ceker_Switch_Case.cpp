// Aylar�n ka� g�n cekti�ine g�re s�rlama ( 1.3.5.7.8.10.12 31 g�n, 4.6.9.11 30
// g�n, 2 28 g�n yada 29 g�n(y�l 4 e tam b�l�n�yorsa))))))
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int ay;
  cout << "Ay Giriniz :";
  cin >> ay;
  
  	switch(ay){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:	
		case 10:
		case 12:
			cout<< ay<<". ayda 31 gun ceker";
	        break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<< ay<<". ayda 30 gun ceker";
	        break;
		case 2:
			int yil;
    		cout << "Yil Giriniz :";
    		cin >> yil;
			if (yil % 4 == 0) {
      			cout << ay<<". ayda 29 g�n ceker";
    	  					  } 
		    else {
      			cout << ay<<". ayda 28 g�n ceker";
    		    }
    		break;
		default:
        cout << "Hatal� Giri� Yapt�n�z";
        break;	
	}
	
  return 0;
}


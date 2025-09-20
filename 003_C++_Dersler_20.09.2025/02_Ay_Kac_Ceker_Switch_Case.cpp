// Aylarýn kaç gün cektiðine göre sýrlama ( 1.3.5.7.8.10.12 31 gün, 4.6.9.11 30
// gün, 2 28 gün yada 29 gün(yýl 4 e tam bölünüyorsa))))))
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
      			cout << ay<<". ayda 29 gün ceker";
    	  					  } 
		    else {
      			cout << ay<<". ayda 28 gün ceker";
    		    }
    		break;
		default:
        cout << "Hatalý Giriþ Yaptýnýz";
        break;	
	}
	
  return 0;
}


// 1. soru : Klavyeden girilen bir tamsayýnýn asal sayý olup olmadýðýný kontrol eden asal ise ekrana asal deðilse deðildir yazdýrýn eðer negatif sayý giirlirse uyarý ver
#include <iostream>
using namespace std;

int main() {
    int sayi;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    if (sayi <= 1) {
        cout << sayi << " asal deðildir." << endl;
        return 0;
    }

    bool asal = true;  // asal mý?

    for (int i = 2; i <= sayi / 2; i++) {
        if (sayi % i == 0) {
            asal = false;
            break;  // asal deðil, döngüyü býrak
        }
    }

    if (asal) {
        cout << sayi << " asaldir." << endl;
    } else {
        cout << sayi << " asal deðildir." << endl;
    }

    return 0;
}





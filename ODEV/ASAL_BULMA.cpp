// 1. soru : Klavyeden girilen bir tamsay�n�n asal say� olup olmad���n� kontrol eden asal ise ekrana asal de�ilse de�ildir yazd�r�n e�er negatif say� giirlirse uyar� ver
#include <iostream>
using namespace std;

int main() {
    int sayi;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    if (sayi <= 1) {
        cout << sayi << " asal de�ildir." << endl;
        return 0;
    }

    bool asal = true;  // asal m�?

    for (int i = 2; i <= sayi / 2; i++) {
        if (sayi % i == 0) {
            asal = false;
            break;  // asal de�il, d�ng�y� b�rak
        }
    }

    if (asal) {
        cout << sayi << " asaldir." << endl;
    } else {
        cout << sayi << " asal de�ildir." << endl;
    }

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    int sayi1, sayi2;
    cout << "Birinci sayýyý giriniz: ";
    cin >> sayi1;
    cout << "Ýkinci sayýyý giriniz: ";
    cin >> sayi2;

    // Negatif kontrolü
    if (sayi1 <= 0 || sayi2 <= 0) {
        cout << "Lütfen pozitif tam sayýlar giriniz!" << endl;
        return 0;
    }

    int a = sayi1;
    int b = sayi2;
    int ebob;

    // EBOB hesaplama
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            ebob = i;
    }

    // EKOK formülü: (a * b) / ebob
    int ekok = (a * b) / ebob;

    cout << a << " ve " << b << " sayýlarýnýn EBOB'u: " << ebob << endl;
    cout << a << " ve " << b << " sayýlarýnýn EKOK'u: " << ekok << endl;

    return 0;
}

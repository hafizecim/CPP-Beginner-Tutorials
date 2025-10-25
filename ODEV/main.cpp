#include <iostream>
using namespace std;

int main() {
    int sayi1, sayi2;
    cout << "Birinci say�y� giriniz: ";
    cin >> sayi1;
    cout << "�kinci say�y� giriniz: ";
    cin >> sayi2;

    // Negatif kontrol�
    if (sayi1 <= 0 || sayi2 <= 0) {
        cout << "L�tfen pozitif tam say�lar giriniz!" << endl;
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

    // EKOK form�l�: (a * b) / ebob
    int ekok = (a * b) / ebob;

    cout << a << " ve " << b << " say�lar�n�n EBOB'u: " << ebob << endl;
    cout << a << " ve " << b << " say�lar�n�n EKOK'u: " << ekok << endl;

    return 0;
}

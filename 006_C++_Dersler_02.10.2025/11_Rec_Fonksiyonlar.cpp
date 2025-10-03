

#include <iostream>
using namespace std;

// Recursive (özyinelemeli) faktöriyel fonksiyonu
int rec_fakt(int sayi) {
    if (sayi == 0 || sayi == 1)
        return 1;
    return sayi * rec_fakt(sayi - 1);
}

// Iterative (döngüsel) faktöriyel fonksiyonu
int itr_fakt(int sayi) {
    int sonuc = 1;
    for (int i = 1; i <= sayi; i++) {
        sonuc *= i;
    }
    return sonuc;
}

int recursive() {
    int n;

    cout << "Faktoriyel hesaplamak icin bir sayi girin: ";
    cin >> n;

    cout << "Recursive faktoriyel: " << rec_fakt(n) << endl;
    cout << "Iterative faktoriyel: " << itr_fakt(n) << endl;

    
}


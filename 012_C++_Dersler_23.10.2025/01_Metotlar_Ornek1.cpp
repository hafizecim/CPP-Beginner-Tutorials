#include <iostream>
#include <string>
using namespace std;


// T�m giri�leri yapan metot
void girisYap(int &a, int &b, int &secim) {
    cout << "Birinci say�y� girin: ";
    cin >> a;

    cout << "�kinci say�y� girin: ";
    cin >> b;

    cout << "��lem se�in (1: Topla, 2: ��kar, 3: �arp): ";
    cin >> secim;
}

// ��lem yapan metot
int islemYap(int a, int b, int secim) {
    if (secim == 1)
        return a + b;
    else if (secim == 2)
        return a - b;
    else if (secim == 3)
        return a * b;
    else {
        cout << "Ge�ersiz i�lem!" << endl;
        return 0;
    }
}

// Ana program

void metotlarOrnek1 (){
	
	int sayi1, sayi2, secim;
	
    // Giri�leri al
    girisYap(sayi1, sayi2, secim);

    // ��lemi yap
    int sonuc = islemYap(sayi1, sayi2, secim);

    // Sonucu yazd�r
    cout << "Sonu�: " << sonuc << endl;
	
}

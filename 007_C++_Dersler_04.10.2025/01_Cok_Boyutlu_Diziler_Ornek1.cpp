#include <iostream>
using namespace std;

// main.cpp taraf�ndan �a�r�lacak fonksiyon
void cokBoyutluDizilerOrnek1() {

  // 5 sat�r, 4 s�tunluk bir �ok boyutlu dizi (matris) tan�mlan�yor
  int dizi[5][4];  // int dizi[satir][sutun];

  // Dizinin ilk sat�r�ndaki elemanlara de�er atan�yor
  dizi[0][0] = 12; // 1. sat�r 1. s�tun
  dizi[0][1] = 45; // 1. sat�r 2. s�tun
  dizi[0][2] = 78; // 1. sat�r 3. s�tun
  dizi[0][3] = 4;  // 1. sat�r 4. s�tun

  // 2. sat�r
  dizi[1][0] = 15;
  dizi[1][1] = 75;
  dizi[1][2] = 48;
  dizi[1][3] = 8;

  // 3. sat�r
  dizi[2][0] = 16;
  dizi[2][1] = 49;
  dizi[2][2] = 38;
  dizi[2][3] = 24;

  // 4. sat�r
  dizi[3][0] = 32;
  dizi[3][1] = 48;
  dizi[3][2] = 38;
  dizi[3][3] = 64;
  
  // 5. sat�r
  dizi[4][0] = 35;
  dizi[4][1] = 68;
  dizi[4][2] = 18;
  dizi[4][3] = 24;

  // Diziyi ekrana yazd�rmak i�in i� i�e d�ng�
  for (int i = 0; i < 5; i++) {         // Sat�rlar� dola�
    for (int j = 0; j < 4; j++) {       // S�tunlar� dola�
      cout << dizi[i][j] << "\t";      // Eleman� yazd�r ve sekmeyle hizala
    }
    cout << endl;                      // Her sat�rdan sonra bir alt sat�ra ge�
  }
}



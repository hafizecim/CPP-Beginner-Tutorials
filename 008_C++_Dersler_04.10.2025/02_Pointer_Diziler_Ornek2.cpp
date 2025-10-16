#include <iostream>
using namespace std;

/*
  POINTER VE D�Z�LER

  C++ dilinde dizilerle pointer'lar yak�ndan ili�kilidir. Bir dizinin ismi (�rne�in: dizi), 
  asl�nda dizinin ilk eleman�n�n adresini tutan bir pointer gibi davran�r.

  �rne�in:
      int dizi[] = {10, 20, 30};
      dizi          � dizinin 0. eleman�n�n adresini verir (yani &dizi[0])
      *(dizi + 1)   � dizinin 1. eleman�n�n de�erini verir (yani dizi[1])
      dizi + i      � i. eleman�n adresi (pointer aritmeti�i)

  Bu �rnek, pointer ile dizilere nas�l eri�ilebilece�ini ve adres-de�er ili�kisini g�stermek i�in haz�rlanm��t�r.
*/

void pointerDizilerOrnek2() {
    int dizi[] = {10, 45, 64, 78}; // 4 elemanl� bir tam say� dizisi

    cout << "dizi[0] deger : " << dizi[0] << endl; // dizinin 0. eleman�n�n de�eri
    cout << "dizi[0] adres : " << dizi << endl;    // dizinin 0. eleman�n�n adresi (dizi ismi bir pointer gibi davran�r)
    cout << "dizi[1] adres : " << dizi + 1 << endl; // dizinin 1. eleman�n�n adresi
    cout << "dizi[2] adres : " << dizi + 2 << endl; // dizinin 2. eleman�n�n adresi

    cout << "*****************************" << endl;

    // Adresleri yazd�ran d�ng� 
    for (int i = 0; i < 4; i++) {
        cout << "dizi[" << i << "] adres: " << dizi + i << endl;
    }

    cout << "*****************************" << endl;

    // De�erleri yazd�ran d�ng� (pointer kullan�larak)
    for (int i = 0; i < 4; i++) {
        cout << "dizi[" << i << "] deger: " << *(dizi + i) << endl;
    }
}




#include <iostream>
using namespace std;

/*
  POINTER (��ARET��) NED�R?

  Pointer, C++ dilinde bir de�i�kenin bellek adresini tutan �zel bir de�i�ken t�r�d�r.
  Normal de�i�kenler bir de�er tutarken, pointer'lar bu de�erin RAM'deki yerini (adresini) tutar.
  
  �rne�in:
      int x = 10;        // x normal bir de�i�kendir, 10 de�erini tutar
      int *p = &x;       // p bir pointer'd�r, x'in adresini tutar
  
  Pointer'lar �zellikle bellek y�netimi, dinamik bellek kullan�m� (heap), diziler, fonksiyonlara referansla veri g�nderme gibi durumlarda kullan�l�r.

  *ptr  � i�aret�inin g�sterdi�i adresteki de�eri verir (dereference)
  &x    � bir de�i�kenin bellekteki adresini verir (adres operat�r�)

  A�a��daki �rnek, pointer'�n bir de�i�kenin de�erini nas�l etkileyebilece�ini g�sterir.
*/

void pointerOrnek1() {

 	int sayi =10;
	cout << "Sayi deger: "<<sayi<<endl;
	cout << "Sayi adres: "<<&sayi<<endl;
    int *ptr = &sayi; // 'ptr' ad�nda bir i�aret�i (pointer) tan�mlan�yor ve sayi de�i�keninin adresi atan�yor
    cout << "ptr  adres: " << ptr << endl; // ptr'nin tuttu�u adres (yani sayi'nin adresi) ekrana yazd�r�l�yor
    cout << "ptr  deger: " << *ptr << endl; // ptr'nin i�aret etti�i adresteki de�er (yani sayi'nin de�eri) yazd�r�l�yor
	*ptr = 20; // ptr'nin g�sterdi�i bellekteki adrese 20 de�eri yaz�l�yor, yani sayi'nin de�eri de�i�tiriliyor
	cout << "Sayi deger: "<<sayi<<endl; // G�ncel sayi de�eri yazd�r�l�yor (20)
}


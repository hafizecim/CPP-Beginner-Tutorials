// Template (�ablon) fonksiyonlar, farkl� veri tipleri i�in ayn� i�levi yapabilen 
// genel fonksiyonlar olu�turman� sa�lar. B�ylece fonksiyonlar� t�r t�r 
// a��r� y�klemek (overload) yerine tek bir �ablonla t�m t�rlerde kullanabilirsin.

#include <iostream>
#include <string>
using namespace std;

int toplama(int a, int b){
	return a + b; // int t�r�ndeki iki say�y� toplar ve sonucu d�nd�r�r
}

double toplama(double a, double b){
	return a + b; // double t�r�ndeki iki say�y� toplar ve sonucu d�nd�r�r
}

float toplama(float a, float b){
	return a + b; // float t�r�ndeki iki say�y� toplar ve sonucu d�nd�r�r
}

template<typename tip>
tip toplama(tip a, tip b){
	return a + b; // template ile herhangi bir t�rde iki de�eri toplar ve sonucu d�nd�r�r
}

template<typename tip1, typename tip2> // �ki farkl� t�r� parametre olarak alabilir
void bilgilar (tip1 degisken1, tip2 degisken2){
	cout << degisken1 << " " << degisken2 << endl; // �ki de�i�keni arada bo�lukla ekrana yazd�r�r
}

void metotlarTemplateOrnek4(){
	toplama(2.1, 5.5);           // double tipindeki say�lar� toplar
	toplama<int>(2,4);           // int tipi belirtilerek iki say� toplan�r
	
	bilgilar("Ali",36);          // t�rler otomatik ��kar�l�r, string ve int ekrana yazd�r�l�r
	bilgilar<string, int>("Ali",36); // t�rler a��k�a belirtilir, string ve int ekrana yazd�r�l�r
}


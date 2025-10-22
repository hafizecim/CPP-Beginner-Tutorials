// Template (þablon) fonksiyonlar, farklý veri tipleri için ayný iþlevi yapabilen 
// genel fonksiyonlar oluþturmaný saðlar. Böylece fonksiyonlarý tür tür 
// aþýrý yüklemek (overload) yerine tek bir þablonla tüm türlerde kullanabilirsin.

#include <iostream>
#include <string>
using namespace std;

int toplama(int a, int b){
	return a + b; // int türündeki iki sayýyý toplar ve sonucu döndürür
}

double toplama(double a, double b){
	return a + b; // double türündeki iki sayýyý toplar ve sonucu döndürür
}

float toplama(float a, float b){
	return a + b; // float türündeki iki sayýyý toplar ve sonucu döndürür
}

template<typename tip>
tip toplama(tip a, tip b){
	return a + b; // template ile herhangi bir türde iki deðeri toplar ve sonucu döndürür
}

template<typename tip1, typename tip2> // Ýki farklý türü parametre olarak alabilir
void bilgilar (tip1 degisken1, tip2 degisken2){
	cout << degisken1 << " " << degisken2 << endl; // Ýki deðiþkeni arada boþlukla ekrana yazdýrýr
}

void metotlarTemplateOrnek4(){
	toplama(2.1, 5.5);           // double tipindeki sayýlarý toplar
	toplama<int>(2,4);           // int tipi belirtilerek iki sayý toplanýr
	
	bilgilar("Ali",36);          // türler otomatik çýkarýlýr, string ve int ekrana yazdýrýlýr
	bilgilar<string, int>("Ali",36); // türler açýkça belirtilir, string ve int ekrana yazdýrýlýr
}


/*
#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  // ?? 1. FOR D�NG�S�: Tan�ms�z davran�� yok, g�venli kod
  // Ama�: i'yi kontroll� �ekilde art�rarak ��kt� �retmek
  for (int i = 0; i < 100; i += 5) {
    ++i;               // i bir art�r�l�r (�rne�in 0'dan 1'e ��kar)

    int a = ++i;       // i bir daha art�r�l�r (�rne�in 2 olur) ve a'ya atan�r
                       // bu sat�rda hem i hem a = 2 olur

    int b = i++;       // b, i'nin mevcut de�erini al�r (2), sonra i art�r�l�r (i = 3 olur)

    cout << a << " " << b << " ";  // 2 2 yazd�r�l�r

    i--;               // i bir azalt�l�r (i = 2 olur), b�ylece net art�� dengelenir
                       // sonra d�ng� art���yla (i += 5) bir sonraki tur ba�lar
  }

  // ? Bu kodun ��kt�s�:
  // 2 2 9 9 16 16 23 23 30 30 37 37 44 44 51 51 58 58 65 65 72 72 79 79 86 86 93 93 100 100

  cout << endl; // Yeni sat�ra ge�mek i�in


  // ?? 2. FOR D�NG�S�: TANIMSIZ DAVRANI� ��EREB�L�R ?
  // Ayn� ifadede i �zerinde birden fazla yan etkili i�lem yap�lm��

  for (int i = 0; i < 100; i += 5) {
    ++i;               // i bir art�r�l�r (�rne�in 0 � 1)

    // ?? Ayn� sat�rda i'ye iki farkl� art�� uygulan�yor
    // 1. ++i � i'yi art�r�p d�ner (�rne�in 2 olur ve yaz�l�r)
    // 2. i++ � i'nin mevcut de�erini yaz�p sonra art�r�r
    cout << ++i << " " << i++ << " ";

    i--;               // i azalt�l�r
                       // sonra d�ng� sonunda i += 5 ile bir sonraki ad�mda devam eder
  }

  // ?? Bu yap� baz� derleyicilerde tan�ms�z davran�� olu�turur,
  // ama burada ��kt�s� genellikle:
  // 2 2 9 9 16 16 23 23 30 30 37 37 44 44 51 51 58 58 65 65 72 72 79 79 86 86 93 93 100 100

  return 0;
}
*/


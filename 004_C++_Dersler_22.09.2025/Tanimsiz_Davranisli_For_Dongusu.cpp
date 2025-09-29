/*
#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  // ?? 1. FOR DÖNGÜSÜ: Tanýmsýz davranýþ yok, güvenli kod
  // Amaç: i'yi kontrollü þekilde artýrarak çýktý üretmek
  for (int i = 0; i < 100; i += 5) {
    ++i;               // i bir artýrýlýr (örneðin 0'dan 1'e çýkar)

    int a = ++i;       // i bir daha artýrýlýr (örneðin 2 olur) ve a'ya atanýr
                       // bu satýrda hem i hem a = 2 olur

    int b = i++;       // b, i'nin mevcut deðerini alýr (2), sonra i artýrýlýr (i = 3 olur)

    cout << a << " " << b << " ";  // 2 2 yazdýrýlýr

    i--;               // i bir azaltýlýr (i = 2 olur), böylece net artýþ dengelenir
                       // sonra döngü artýþýyla (i += 5) bir sonraki tur baþlar
  }

  // ? Bu kodun çýktýsý:
  // 2 2 9 9 16 16 23 23 30 30 37 37 44 44 51 51 58 58 65 65 72 72 79 79 86 86 93 93 100 100

  cout << endl; // Yeni satýra geçmek için


  // ?? 2. FOR DÖNGÜSÜ: TANIMSIZ DAVRANIÞ ÝÇEREBÝLÝR ?
  // Ayný ifadede i üzerinde birden fazla yan etkili iþlem yapýlmýþ

  for (int i = 0; i < 100; i += 5) {
    ++i;               // i bir artýrýlýr (örneðin 0 › 1)

    // ?? Ayný satýrda i'ye iki farklý artýþ uygulanýyor
    // 1. ++i › i'yi artýrýp döner (örneðin 2 olur ve yazýlýr)
    // 2. i++ › i'nin mevcut deðerini yazýp sonra artýrýr
    cout << ++i << " " << i++ << " ";

    i--;               // i azaltýlýr
                       // sonra döngü sonunda i += 5 ile bir sonraki adýmda devam eder
  }

  // ?? Bu yapý bazý derleyicilerde tanýmsýz davranýþ oluþturur,
  // ama burada çýktýsý genellikle:
  // 2 2 9 9 16 16 23 23 30 30 37 37 44 44 51 51 58 58 65 65 72 72 79 79 86 86 93 93 100 100

  return 0;
}
*/


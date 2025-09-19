/* vize, final, büt notlarý alýnacak ve ortalamasý hesaplanacak 
(30% vize, 50% final, 20% büt) ve not ortalamasýna göre harf notu hesaplanacak 
(90-100 AA, 80-89 BA, 70-79 BB, 60-69 CB, 50-59 CC, 40-49 DC, 30-39 DD, 0-29 FF)
ve bu iþlemler bir fonksiyon içinde yapýlacak ve main fonksiyonunda çaðrýlacak 
ve sonucu ekrana yazdýrýlacak ve bu iþlemler bir döngü içinde yapýlacak ve 
döngüden çýkýþ için bir tuþa basýlacak */
#include <iostream>
using namespace std;
int main(int argc, char **argv) {
  int vize, final, ortalama = 0;
  cout << "Vize :";
  cin >> vize;
  if (vize >= 0 && vize <= 100) {
    cout << "Final :";
    cin >> final;
    if (final >= 0 && final <= 100) {
      ortalama = vize * 0.4 + final * 0.6;
      cout << "Ortalama :" << ortalama << endl;

      if (ortalama >= 50) {
        cout << "Geçti.Ortalama : " << ortalama;
      } else {
        cout << "Kaldi.Ortalama : " << ortalama;
      }
    } else {
      cout << "Gecersiz final notu";
    }
  } else {
    cout << "Gecersiz vize notu";
  }

  return 0;
}

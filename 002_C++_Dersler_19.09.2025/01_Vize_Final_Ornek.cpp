/* vize, final, b�t notlar� al�nacak ve ortalamas� hesaplanacak 
(30% vize, 50% final, 20% b�t) ve not ortalamas�na g�re harf notu hesaplanacak 
(90-100 AA, 80-89 BA, 70-79 BB, 60-69 CB, 50-59 CC, 40-49 DC, 30-39 DD, 0-29 FF)
ve bu i�lemler bir fonksiyon i�inde yap�lacak ve main fonksiyonunda �a�r�lacak 
ve sonucu ekrana yazd�r�lacak ve bu i�lemler bir d�ng� i�inde yap�lacak ve 
d�ng�den ��k�� i�in bir tu�a bas�lacak */
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
        cout << "Ge�ti.Ortalama : " << ortalama;
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

#include <iostream>
using namespace std;
int main(int argc, char **argv) {

  string veri_tabani_kullanici = "admin";
  int veri_tabani_sifre = 1234;
  int veri_tabani_bakiye = 1000;
  string kullanici, yeni_kullanici;
  int sifre, yeni_sifre;

  cout << "Kullanici adinizi giriniz : ";
  cin >> kullanici;
  cout << "Kullanici sifrenizi giriniz : ";
  cin >> sifre;
  if (veri_tabani_sifre == sifre && veri_tabani_kullanici == kullanici) {
    int islem;
    cout << "********************" << endl;
    cout << "1. Kullanici adi degistirme için : 1 " << endl;
    cout << "2. Kullanici sifre degistirme için : 2 " << endl;
    cout << "3. Para yatirmak için : 3 " << endl;
    cout << "4. Para cekmek için : 4 " << endl;
    cout << "********************" << endl;
    cout << " 1 ile 4 arasinda islem giriniz "<< endl;
    cin >> islem;

    switch (islem) {
    case 1:
      cout << "Degistimek istediginiz kullanici adini giriniz: ";
      cin >> yeni_kullanici;
      veri_tabani_kullanici = yeni_kullanici;
      cout << "Kullanici adiniz " << yeni_kullanici << " olarak degistirilmistir. "<< endl;
      break;
    case 2:
      cout << "Degistimek istediginiz sifreyi giriniz: ";
      cin >> yeni_sifre;
      veri_tabani_sifre = yeni_sifre;
      cout << "Sifreniz " << yeni_sifre << " olarak degistirilmistir. " << endl;
      break;
    case 3:
      int yatirilan_para;
      cout << "Yatirmak istediginiz para miktarini giriniz: ";
      cin >> yatirilan_para;
      cout << "Toplam bakiyeniz: " << yatirilan_para + veri_tabani_bakiye << endl;
      veri_tabani_bakiye = veri_tabani_bakiye + yatirilan_para;
      break;
    case 4:
      int cekilen_para;
      cout << "Cekmek istediginiz para miktarini giriniz: ";
      cin >> cekilen_para;
      if (veri_tabani_bakiye < cekilen_para) {
        cout << "Bakiyeniz yetersiz" << endl;
      } else {
        cout << "Kalan bakiyeniz: " << veri_tabani_bakiye - cekilen_para
             << endl;
        veri_tabani_bakiye = veri_tabani_bakiye - cekilen_para;
      }
      break;
    default:
      cout << "Hatali Giriþ Yaptiniz.";
      break;
    }

  } else {
    cout << "Kullanici adi ve ya sifreyi yanlis girdiniz. ";
  }

  return 0;
}

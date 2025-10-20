/*
  ============================================
  �RNEK: C++'ta Kal�t�m (Inheritance) Kullan�m�
  ============================================

  Bu �rnekte nesne y�nelimli programlaman�n (OOP) �nemli bir �zelli�i olan 
  "kal�t�m" (inheritance) konusu ele al�nm��t�r.

  1. 'insan' ad�nda bir temel (base) s�n�f tan�mlanm��t�r.
     Bu s�n�fta ya�, kilo ve boy gibi �zellikler bulunmaktad�r.

  2. 'calisan' ad�nda bir alt (t�retilmi�) s�n�f olu�turulmu�tur.
     Bu s�n�f, 'insan' s�n�f�ndan 'public' yoluyla kal�t�m alm��t�r.

  3. Kal�t�m yoluyla 'insan' s�n�f�n�n protected �yelerine 'calisan' s�n�f� eri�ebilir.
     Private �yeler do�rudan miras al�nsa bile eri�ilemez.

  4. �rnek olarak bir �al��an nesnesi olu�turulup, bilgileri atanm�� ve ekrana yazd�r�lm��t�r.

  NOT:
    - Kal�t�m, kod tekrar�n� azaltmak ve ili�kili nesneleri mant�kl� �ekilde 
      gruplamak i�in kullan�l�r.
    - Eri�im belirleyicilerine dikkat etmek gerekir (private, protected, public).

*/


#include <iostream>  // Giri�/��k�� i�lemleri i�in gerekli (cout, cin vs.)
#include <string>    // string veri tipini kullanabilmek i�in
using namespace std; // std:: �n ekini yazmadan cout, cin gibi �geleri kullanmam�z� sa�lar

// 1. insan ad�nda bir s�n�f tan�mlan�yor
class insan {
public:            // Bu de�i�kenlere sadece s�n�f i�inden eri�ilebilir // �nceden privatedeydi bu yanlisitr
    int yas;        // Ki�inin ya��
    int kilo;       // Ki�inin kilosu
    int boy;        // Ki�inin boyu
};

// 2. calisan s�n�f�, insan s�n�f�ndan t�retiliyor (kal�t�m yap�l�yor)
class calisan : public insan {  // public kal�t�m: �st s�n�f�n public ve protected �yeleri, alt s�n�fa ge�er
    // �u anl�k ekstra bir �zellik ya da fonksiyon eklenmemi�
};

// 3. Ana fonksiyon: �rneklerin olu�turuldu�u yer
void mirasKalitimOrnek3() {
    insan ali;              // insan s�n�f�ndan bir nesne olu�turuluyor
    ali.boy = 172;          // ? HATA: boy de�i�keni private oldu�u i�in eri�ilemez public olarak de�i�tirildi

    calisan calisan1;       // calisan s�n�f�ndan bir nesne olu�turuluyor
    calisan1.yas = 36;      // ? HATA: yas da private oldu�u i�in eri�ilemez (kal�t�m yoluyla da) public olarak de�i�tirildi
}


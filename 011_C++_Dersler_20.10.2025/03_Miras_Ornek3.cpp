/*
  ============================================
  ÖRNEK: C++'ta Kalýtým (Inheritance) Kullanýmý
  ============================================

  Bu örnekte nesne yönelimli programlamanýn (OOP) önemli bir özelliði olan 
  "kalýtým" (inheritance) konusu ele alýnmýþtýr.

  1. 'insan' adýnda bir temel (base) sýnýf tanýmlanmýþtýr.
     Bu sýnýfta yaþ, kilo ve boy gibi özellikler bulunmaktadýr.

  2. 'calisan' adýnda bir alt (türetilmiþ) sýnýf oluþturulmuþtur.
     Bu sýnýf, 'insan' sýnýfýndan 'public' yoluyla kalýtým almýþtýr.

  3. Kalýtým yoluyla 'insan' sýnýfýnýn protected üyelerine 'calisan' sýnýfý eriþebilir.
     Private üyeler doðrudan miras alýnsa bile eriþilemez.

  4. Örnek olarak bir çalýþan nesnesi oluþturulup, bilgileri atanmýþ ve ekrana yazdýrýlmýþtýr.

  NOT:
    - Kalýtým, kod tekrarýný azaltmak ve iliþkili nesneleri mantýklý þekilde 
      gruplamak için kullanýlýr.
    - Eriþim belirleyicilerine dikkat etmek gerekir (private, protected, public).

*/


#include <iostream>  // Giriþ/çýkýþ iþlemleri için gerekli (cout, cin vs.)
#include <string>    // string veri tipini kullanabilmek için
using namespace std; // std:: ön ekini yazmadan cout, cin gibi ögeleri kullanmamýzý saðlar

// 1. insan adýnda bir sýnýf tanýmlanýyor
class insan {
public:            // Bu deðiþkenlere sadece sýnýf içinden eriþilebilir // önceden privatedeydi bu yanlisitr
    int yas;        // Kiþinin yaþý
    int kilo;       // Kiþinin kilosu
    int boy;        // Kiþinin boyu
};

// 2. calisan sýnýfý, insan sýnýfýndan türetiliyor (kalýtým yapýlýyor)
class calisan : public insan {  // public kalýtým: üst sýnýfýn public ve protected üyeleri, alt sýnýfa geçer
    // Þu anlýk ekstra bir özellik ya da fonksiyon eklenmemiþ
};

// 3. Ana fonksiyon: örneklerin oluþturulduðu yer
void mirasKalitimOrnek3() {
    insan ali;              // insan sýnýfýndan bir nesne oluþturuluyor
    ali.boy = 172;          // ? HATA: boy deðiþkeni private olduðu için eriþilemez public olarak deðiþtirildi

    calisan calisan1;       // calisan sýnýfýndan bir nesne oluþturuluyor
    calisan1.yas = 36;      // ? HATA: yas da private olduðu için eriþilemez (kalýtým yoluyla da) public olarak deðiþtirildi
}


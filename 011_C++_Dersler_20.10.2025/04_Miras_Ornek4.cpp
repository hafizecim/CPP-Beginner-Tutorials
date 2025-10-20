/*
  =====================================================
  C++ Eriþim Belirleyicileri: private, protected, public
  =====================================================

  ? public    : Her yerden eriþilebilir (sýnýf dýþýndan da).
  ? protected : Sadece sýnýfýn kendisinden ve ondan türeyen alt sýnýflardan eriþilebilir.
  ? private   : Yalnýzca tanýmlandýðý sýnýfýn içinde eriþilebilir (alt sýnýflar bile eriþemez).

  Kullaným Amaçlarý:
  ------------------
  - Bilgi gizleme (encapsulation) saðlar.
  - Sýnýf dýþý müdahaleleri sýnýrlayarak veri güvenliði oluþturur.
  - Hangi verilere nereden eriþilebileceðini kontrol altýnda tutar.

  Örnek:
  -------
  class Ornek {
  private:
      int gizliDeger;       // sadece sýnýfýn içinden eriþilebilir
  protected:
      int korunmusDeger;    // sýnýfýn içi ve alt sýnýflar eriþebilir
  public:
      int acikDeger;        // her yerden eriþilebilir
  };
  
  // yapýcý metotlar public olmak zorunda sýnýf içine açýk olmalý
*/

#include <iostream>  
#include <string>    
using namespace std; 

// 1. insan adýnda bir sýnýf tanýmlanýyor
class insan {
	public:           
	    int yas;  
	protected:      
	    int kilo; 
	private:      
	    int boy;        
};

// 2. calisan sýnýfý, insan sýnýfýndan türetiliyor (kalýtým yapýlýyor)
class calisan : public insan {  // public kalýtým: üst sýnýfýn public ve protected üyeleri, alt sýnýfa geçer
   public: // yapýcý metotlar public olmak zorunda sýnýf içine açýk olmalý
   	calisan(){
   		this->kilo = 67;
	   }
};
// public yöntemiyle miras býrakýýrsan  deðiþken tipleri deðiþmez:// herþey prublic olarak aktarýlýr.
// private olursa deðiþken tipleri private kabul edilir
// protected olursa: private olanlar private olarak kalýr ama public ve protected ler protected olarak kalýr.

// 3. Ana fonksiyon: örneklerin oluþturulduðu yer
void mirasKalitimOrnek4() {
    insan ali;             
    //ali.boy = 172;          

    calisan calisan1;       
    calisan1.yas = 36;      
}


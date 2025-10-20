/*
  =====================================================
  C++ Eri�im Belirleyicileri: private, protected, public
  =====================================================

  ? public    : Her yerden eri�ilebilir (s�n�f d���ndan da).
  ? protected : Sadece s�n�f�n kendisinden ve ondan t�reyen alt s�n�flardan eri�ilebilir.
  ? private   : Yaln�zca tan�mland��� s�n�f�n i�inde eri�ilebilir (alt s�n�flar bile eri�emez).

  Kullan�m Ama�lar�:
  ------------------
  - Bilgi gizleme (encapsulation) sa�lar.
  - S�n�f d��� m�dahaleleri s�n�rlayarak veri g�venli�i olu�turur.
  - Hangi verilere nereden eri�ilebilece�ini kontrol alt�nda tutar.

  �rnek:
  -------
  class Ornek {
  private:
      int gizliDeger;       // sadece s�n�f�n i�inden eri�ilebilir
  protected:
      int korunmusDeger;    // s�n�f�n i�i ve alt s�n�flar eri�ebilir
  public:
      int acikDeger;        // her yerden eri�ilebilir
  };
  
  // yap�c� metotlar public olmak zorunda s�n�f i�ine a��k olmal�
*/

#include <iostream>  
#include <string>    
using namespace std; 

// 1. insan ad�nda bir s�n�f tan�mlan�yor
class insan {
	public:           
	    int yas;  
	protected:      
	    int kilo; 
	private:      
	    int boy;        
};

// 2. calisan s�n�f�, insan s�n�f�ndan t�retiliyor (kal�t�m yap�l�yor)
class calisan : public insan {  // public kal�t�m: �st s�n�f�n public ve protected �yeleri, alt s�n�fa ge�er
   public: // yap�c� metotlar public olmak zorunda s�n�f i�ine a��k olmal�
   	calisan(){
   		this->kilo = 67;
	   }
};
// public y�ntemiyle miras b�rak��rsan  de�i�ken tipleri de�i�mez:// her�ey prublic olarak aktar�l�r.
// private olursa de�i�ken tipleri private kabul edilir
// protected olursa: private olanlar private olarak kal�r ama public ve protected ler protected olarak kal�r.

// 3. Ana fonksiyon: �rneklerin olu�turuldu�u yer
void mirasKalitimOrnek4() {
    insan ali;             
    //ali.boy = 172;          

    calisan calisan1;       
    calisan1.yas = 36;      
}


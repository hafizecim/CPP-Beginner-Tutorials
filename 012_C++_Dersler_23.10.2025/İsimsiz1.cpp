/*
herþey public
private hepsi private
protectet da sadece private prrivate - public protected
*/

#include <iostream>
using namespace std;
class Kisi{
	private:
		int yas;
		string isim;
	public:
		Kisi(){
			this->isim = "isim";
			this->yas =0;
		}
		
		Kisi(string isim , int yas){
			this->isim = isim;
			this->yas =yas;
		}
		Kisi(): isim("isim"), yas(0){}
		Kisi(string isim, int yas):isim(isim), yas(yas){}
		
		void setIsim(string isim){
			this->isim = isim;
		}
		
		void setYas(int yas){
			if(yas<0){
				this->yas = 0;	
			}else{
				this->yas = yas;
			}		
		}
		
		string getIsim(){
			return this->isim;
		}
		
		int getYas(){
			return this->yas;
		}
		
		void bilgi_yazdir(){
			cout<<"isim : " <<getIsim()<<endl;
			cout<<"Yas : " <<getYas()<<endl;
		}
		
};

class Ogrenci: public Kisi{
	private:
		int ogrNo;
		string bolum;
	public:
		Ogrenci(){
			//Kisi();
			Kisi("Ogrenci", 5);
			this->bolum = "Bolum";
			this->ogrNo = 1;
		}
		
		Ogrenci(string isim, int yas, int ogrNo, string bolum){
			//Kisi();
			Kisi(isim, yas);
			this->bolum = bolum;
			this->ogrNo = ogrNo;
		}
		
		Ogrenci():Kisi("Ogrenci", 5), bolum("Bolum"),ogrNo(1){}
		Ogrenci(string isim, int yas, int ogrNo, string bolum):Kisi(isim, yas), bolum(bolum),ogrNo(ogrNo){}
		
		void setOgrNo(int OgrNo){
			if(ogrNo<0){
				this->ogrNo = 1;	
			}else{
				this->ogrNo = ogrNo;
			}		
		}
		
		string getIsim(){
			return this->isim;
		}
		
		int getYas(){
			return this->yas;
		}
		
		void bilgi_yazdir(){
			cout<<"isim : " <<getIsim()<<endl;
			cout<<"Yas : " <<getYas()<<endl;
		}
		
		
		
};

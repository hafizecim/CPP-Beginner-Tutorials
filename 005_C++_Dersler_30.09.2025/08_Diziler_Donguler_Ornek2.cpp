#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  string ogrenciler[5];
  int vize[5];
  int final[5];
  
  string gecen_ogrenciler[5];
  string kalan_ogrenciler[5];
  int gecen_notlar[5];
  int kalan_notlar[5];
  
  for (int i = 0 ; i < 5;i++){
  	gecen_notlar[i]=-1;
  	kalan_notlar[i]=-1;
  }
  
  for(int i = 0; i<5;i++){
  	cout<< i+1 << " ogrenci : ";
  	cin>>ogrenciler[i];
  	cout<< ogrenciler[i]<< " kisinin vize notu :";
  	cin>>vize[i];
  	cout<< ogrenciler[i]<< " kisinin final notu :";
  	cin>>final[i];
  	
  	int ortalama = vize[i]*0.4 + final[i]*0.6;
  	if(ortalama >=50 ){
  		gecen_ogrenciler[i]= ogrenciler[i];
  		gecen_notlar[i]=ortalama;
	  }else{
	  	kalan_ogrenciler[i]= ogrenciler[i];
  		kalan_notlar[i]=ortalama;
	  }
  }
	
	cout<<"******************************************"<<endl;
	cout<<"Gecen ogrenciler "<<endl;
	for (int i =0 ;i<5;i++){
		if(gecen_notlar[i] != -1){
			cout<<gecen_ogrenciler[i]<<" - " <<gecen_notlar[i]<<endl;
		}
	}
	
	cout<<"******************************************"<<endl;
		cout<<"Kalan ogrenciler "<<endl;
	for (int i =0 ;i<5;i++){
		if(kalan_notlar[i] != -1){
			cout<<kalan_ogrenciler[i]<<" - " <<kalan_notlar[i]<<endl;
		}
	}
  

  return 0;
}


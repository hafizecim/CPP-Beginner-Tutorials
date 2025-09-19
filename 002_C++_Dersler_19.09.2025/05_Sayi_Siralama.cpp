// ekrandan girilen sayýyý küçükten büyüðe sýralayan program
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  // 1. YÖNTEM
  int sayi1, sayi2, sayi3;
  cout << "1. Sayiyi Giriniz :";
  cin >> sayi1;
  cout << "2. Sayiyi Giriniz :";
  cin >> sayi2;
  cout << "3. Sayiyi Giriniz :";
  cin >> sayi3;
  if (sayi1 < sayi2 && sayi1 < sayi3) {
    if (sayi2 < sayi3)
      cout << sayi1 << " < " << sayi2 << " < " << sayi3;
    else
      cout << sayi1 << " < " << sayi3 << " < " << sayi2;
  } else {
    if (sayi2 < sayi1 && sayi2 < sayi3) {
      if (sayi1 < sayi3)
        cout << sayi2 << " < " << sayi1 << " < " << sayi3;
      else
        cout << sayi2 << " < " << sayi3 << " < " << sayi1;
    } else {
      if (sayi3 < sayi1 && sayi3 < sayi2) {
        if (sayi1 < sayi2) {
          cout << sayi3 << " < " << sayi1 << " < " << sayi2;
        } else {
          cout << sayi3 << " < " << sayi2 << " < " << sayi1;
        }
      }
    }
  }
  
  // 2. YÖNTEM
	int a,b,c;
	cout<< "Birbirinden farkli uc tamsayi giriniz : ";
    cin>>a>>b>>c;
	if(a<b && c<b){
		   cout<<a<<"<"<<b<<"<"<<c;
	}else if(a<c && c<b){
		   cout<<a<<"<"<<c<<"<"<<b;
	}else if(b<a && a<c){
		   cout<<b<<"<"<<a<<"<"<<c;
	}else if(b<c && c<a){
		   cout<<b<<"<"<<c<<"<"<<a;
	}else if(c<a && a<b){
		   cout<<a<<"<"<<a<<"<"<<b;
	}else{
		   cout<<c<<"<"<<b<<"<"<<a;
	}
  return 0;
}

/*
// fibonaççi sayilarý çýktýsý
#include <iostream>

using namespace std;

int main(int argc, char** argv) { 
int sayi1 =1,sayi2 =1;
int sayi3;
cout<<sayi1 <<" "<<sayi2 <<" ";
  for( int i =1; i<8 ;i++){   
    sayi3 = sayi1 + sayi2;
	cout<<sayi3<<" "  ; 
	sayi1 = sayi2;
	sayi2 = sayi3;	       
}
// çýktý : 1 1 2 3 5 8 13 21 34
  return 0;
}
*/

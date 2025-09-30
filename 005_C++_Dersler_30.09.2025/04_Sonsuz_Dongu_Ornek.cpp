#include <iostream>
//using namespace std;

int main(int argc, char **argv) {

  int sayi;
  int adet = 0;
  for (;;) {
    std::cout << "Sayi : ";
    std::cin >> sayi;
    if (sayi == 0) {
      break;
    }
    adet++;
  }
  cout << "Sayi adedi : " << adet;
  
  int sayi2;
  int adet2 = 0;
  std::cout << "Sayi : ";
  std::cin >> sayi2; 
  for ( ; sayi2 != 0 ; ) {
	adet2++;
	std::cout<<"Sayi :";
	std::cin>>sayi2;
  }
  cout << "Sayi adedi : " << adet2;
  
  int sayi3;
  int adet3 = 0;
  do  {
	std::cout<<"Sayi :";
	std::cin>>sayi3;
	adet3++;
  }while(sayi3 != 0)
  cout << "Sayi adedi : " << adet3;
  
  return 0;
}


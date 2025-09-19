#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	
	// < <= > >= == !=
	int a =10;
	int b = 20;
	bool kontrol = a < b ;
	cout<<"Deger : " << kontrol; // true
	
	bool kontrol2 = a == b ;
	cout<<"Deger : " << kontrol2; // false
	
	return 0;
}

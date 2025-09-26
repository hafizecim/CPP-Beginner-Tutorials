/*

#include <iostream>

using namespace std;

int main(int argc, char** argv) { 
  for(int i=0; i<100; i+=5){      		// |  0       7        14         --- 105         
  	++i; 	                     	    // |  1       8        15                
    cout << ++i <<" "<< i++ << " ";    // |   2 2(3)  9 9(10)  16 16(17)  --- 100 100(101)    // Önce i'yi 1 artýr ve yazdýr, sonra i'yi yazdýr ve sonra artýr
    i--; 						       // |   2  9  16  
  }
  // çýktý : 2 2 9 9 16 16 23 23 30 30 37 37 44 44 51 51 58 58 65 65 72 72 79 79 86 86 93 93 100 100 --> burada yanlýþ çalýþýyor
  // 
  // i nin son deðeri 104 dir.
  return 0;
}

/* 
for(int i=0; i<100; i+=5){
    ++i; // i'yi 1 artýr
    cout << ++i << " " << i++ << " "; // Önce i'yi 1 artýr ve yazdýr, sonra i'yi yazdýr ve sonra artýr
    i--; // i'yi tekrar 1 azalt
}

*/




/*

#include <iostream>

using namespace std;

int main(int argc, char** argv) { 
  for(int i=0; i<100; i+=5){      		// |  0       7        14         --- 105         
  	++i; 	                     	    // |  1       8        15                
    cout << ++i <<" "<< i++ << " ";    // |   2 2(3)  9 9(10)  16 16(17)  --- 100 100(101)    // �nce i'yi 1 art�r ve yazd�r, sonra i'yi yazd�r ve sonra art�r
    i--; 						       // |   2  9  16  
  }
  // ��kt� : 2 2 9 9 16 16 23 23 30 30 37 37 44 44 51 51 58 58 65 65 72 72 79 79 86 86 93 93 100 100 --> burada yanl�� �al���yor
  // 
  // i nin son de�eri 104 dir.
  return 0;
}

/* 
for(int i=0; i<100; i+=5){
    ++i; // i'yi 1 art�r
    cout << ++i << " " << i++ << " "; // �nce i'yi 1 art�r ve yazd�r, sonra i'yi yazd�r ve sonra art�r
    i--; // i'yi tekrar 1 azalt
}

*/




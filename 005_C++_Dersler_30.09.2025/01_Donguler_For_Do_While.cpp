#include <iostream>
using namespace std;
int main(int argc, char **argv) {

  for (int i = 0; i < 10; i++) {
    cout << "FOR :" << i << endl;
  }
  cout << "*************************************" << endl;
  int a = 0;
  while (a < 10) {
    cout << "WHILE :" << a << endl;
    a++;
  }

  cout << "*************************************" << endl;
  int b = 0;
  do { // �art yanl�� dahi olsa bir kere yazd�r�l�r
    cout << "DO WHILE:" << b << endl;
    b++;
  } while (b < 10);

  return 0;
}

#include <iostream>
using namespace std;

// 1. versiyon - iki tamsay�y� toplar
int topla(int a, int b) {
    return a + b;
}

// 2. versiyon - iki ondal�kl� say�y� toplar
float topla(float a, float b) {
    return a + b;
}

// 3. versiyon - �� tamsay�y� toplar
int topla(int a, int b, int c) {
    return a + b + c;
}

void overloading() {
    cout << "int topla(2, 3): " << topla(2, 3) << endl;         // 1. versiyon
    cout << "float topla(2.5f, 3.5f): " << topla(2.5f, 3.5f) << endl; // 2. versiyon
    cout << "int topla(1, 2, 3): " << topla(1, 2, 3) << endl;   // 3. versiyon

}


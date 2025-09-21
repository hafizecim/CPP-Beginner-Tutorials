
#include <iostream>using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Division by zero error!" << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}



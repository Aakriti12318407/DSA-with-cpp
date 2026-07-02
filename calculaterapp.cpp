#include <iostream>
using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    char op;

    cout << "Calculator\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result = " << add(num1, num2);
            break;

        case '-':
            cout << "Result = " << subtract(num1, num2);
            break;

        case '*':
            cout << "Result = " << multiply(num1, num2);
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << divide(num1, num2);
            else
                cout << "Error: Division by zero!";
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}
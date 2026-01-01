#include<iostream>
using namespace std;

int main() {
    char op;
    float a,b;

    cout << "Enter operator : +, _, *, / ";
    cin >> op;

    cout << "Enter two number: ";
    cin >> a >> b;
    switch(op) {
        case '+':
        cout << a << "+" << b << " = " << a + b;
        break;
        case '-': 
        cout << a << "-" << b << " = " << a - b;
        break;
        case '*': 
        cout << a << "*" << b << " = " << a * b;
        break;
        case '/': 
        cout << a << "/" << b << " = " << a / b;
        break;
        default:
        cout << "Invalid operation";
    }
    return 0;
}
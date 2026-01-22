#include <iostream>
using namespace std;

int main() {
    int x, y;
    char operation;
    
    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    cout << "Enter the operator (+, -, *, /, %): ";
    cin >> operation;
    
    switch(operation) {
        case '+':
            cout << x << " + " << y << " = " << (x + y) << endl;
            break;
        case '-':
            cout << x << " - " << y << " = " << (x - y) << endl;
            break;
        case '*':
            cout << x << " * " << y << " = " << (x * y) << endl;
            break;
        case '/':
            if (y != 0)
                cout << x << " / " << y << " = " << (x / y) << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        case '%':
            if (y != 0)
                cout << x << " % " << y << " = " << (x % y) << endl;
            else
                cout << "Error: Modulo by zero!" << endl;
            break;
        default:
            cout << "Invalid Operator" << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

// Does calculactions with num1, num2 base on operation.
// Parses the operation and and does calculations.
void calculate(double num1, double num2, char operation) {
    switch(operation) {
        case '*':
            cout << "The product is: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "The quotient is: " << num1 / num2 << endl;
            break;
        case '+':
            cout << "The sum is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The difference is: " << num1 - num2 << endl;
            break;
        default:
            cout << "This operation is not included in this basic calculator." << endl;
            break;
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first operand: ";
    cin >> num1;
    cout << "Enter the second operand: ";
    cin >> num2;
    cout << "Enter the operation: ";
    cin >> operation;
    calculate(num1, num2, operation);    
    return 0;
}

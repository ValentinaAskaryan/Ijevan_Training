#include <iostream>
using namespace std;

// Returns the sum of the user provided numbers.
// Uses pointers arithmetics.
int addTwoNumbers(int* ptr1, int* ptr2) {
    return *ptr1 + *ptr2;
}

int main() {
    int num1, num2;

    cout << "Input the first number: ";
    cin >> num1;
    cout << "Input the second number: ";
    cin >> num2;

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    cout << "The sum is: " << addTwoNumbers(ptr1, ptr2) << endl;

    return 0;
}


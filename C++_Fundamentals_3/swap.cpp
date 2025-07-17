#include <iostream>
using namespace std;

// This swaps the actual <a> and <b> variables.
void swap(int& a, int& b);

int main() {
    int a, b;

    cout << "Enter the value of  <a>: ";
    cin >> a;
    cout << "Enter the value of  <b>: ";
    cin >> b;

    swap(a, b);

    return 0;
}

// Swaps two variables values. 
// Holds in temporary variable for not losing the number.
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "The <a> variable after swapping: " << a << endl;
    cout << "The <b> variable after swapping: " << b << endl;
}

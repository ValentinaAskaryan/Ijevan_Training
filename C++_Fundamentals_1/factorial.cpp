#include <iostream>
using namespace std;

// Uses recursion concept for calculating the factorial.
int factorial(int num) {
    if(!num) return 1;
    return num * factorial(num - 1);
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;
    if(num < 0) cout << "Your number is not positive." << endl;
    else cout << "The factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

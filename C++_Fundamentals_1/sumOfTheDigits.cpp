#include <iostream>
using namespace std;

// Calculates the sum of the digits of
// user inputted number and returns the sum.
int sumOfDigits(int number) {
    int sum = 0;
    while(number > 0) {
        sum += (number % 10);
        number /= 10;
    }
    return sum;
}

int main() {
    int num;

    cout << "Please enter a number." << endl;
    cin >> num;
    cout << "The sum of digits of the number " << num << " is " << sumOfDigits(num) << endl; 

    return 0;
}

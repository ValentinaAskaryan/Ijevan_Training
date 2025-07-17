#include <iostream>
#include <cmath>
using namespace std;

// Functions declarations.
bool isPrimeOrComposite(int num);

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num > 1) {
        bool isPrime = isPrimeOrComposite(num);
        if(isPrime) cout << num << " is a prime number." << endl;
        else cout << num << " is a composite number." << endl;

    } else cout << "Please enter a number greather than 1." << endl; 
    return 0;
}

// Checks if the given number is prime or composite.
bool isPrimeOrComposite(int num) {
    if(num == 2) return true;

    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) return false;
    }

    return true;
}



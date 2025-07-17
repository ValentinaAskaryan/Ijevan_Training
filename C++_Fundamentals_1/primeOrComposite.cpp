#include <iostream>
using namespace std;

// Checks is the given number is PRIME or COMPOSITE.
// Devides all the numbers starting from 2 to the half of
// the given number. Ignoring all the cases bigger from the 
// half of the number as they can't be divided.
void isPrimeOrComposite(int num) {
    bool isPrime = true;
    
    if(num == 1) {
        cout << "The number is neither prime not composite." << endl;
        return;
    }
    if(num == 2) { 
        cout << "The number is PRIME." << endl;
        return; 
    }

    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            cout << num / i << endl;
            isPrime = false;
            cout << "The number is COMPOSITE!" << endl;
            break;
        }
    }
    if(isPrime) cout << "The number is PRIME!" << endl;
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;
    
    if(num < 0) cout << "The number is negative." << endl;
    else isPrimeOrComposite(num);
    return 0;
}

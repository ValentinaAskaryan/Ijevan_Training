#include <iostream>
using namespace std;

// Writes the number in inverse order. 
int inverseNumber(int num) {
    int inverseNum = 0;

    while(num != 0) {
        int digit = num % 10;
        inverseNum = inverseNum * 10 + digit;
        num /= 10;
    }
    return inverseNum;
    
}

int main() {
    int num;

    cout << "Input a positive number: ";
    cin >> num;
    if(num < 0) cout << "The number is negative." << endl;
    else cout << "The inversed number is: " << inverseNumber(num) << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Gets number and converts it to binary.
// Both quotient and reminder are stored in a string.
// After all the string is reversed and is printed to user.
void convertToBinary(int num) {
    string binary = "";
    while(num > 0) {
        char bit = '0' + (num % 2);
        binary += bit;
        num /= 2;
    }

    // Reverse the string manually
    for(int s = 0; s < binary.length() / 2; s++) {
        char temp = binary[s];
        binary[s] = binary[binary.length() - 1 - s];
        binary[binary.length() - 1 - s] = temp;
    }

    cout << "Binary: " << binary << endl;
}

int main() {
    convertToBinary(6);
    return 0;
}


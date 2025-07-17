#include <iostream>
#include <string>
using namespace std;

string convertToBinary(int num);

int main() {
    int num;
    cin >> num;

    cout << "Binary: " <<convertToBinary(num) << endl;
    return 0;
}

// Converts the given number into binary.
// Stores it in a string and returns.
string convertToBinary(int num) {
    string binary = "";
    
    // Representing numbers in 8 bits.
    for(int i = 7; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if(bit) binary += '1';
        else binary += '0';
    }

    return binary;
}

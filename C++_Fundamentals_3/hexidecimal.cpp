#include <iostream>
using namespace std;

// Functions declarations.
string convertToHex(int num);
string reverse(string text);

int main() {
    int num;
    cin >> num;

    cout << "Hexadecimal: " << convertToHex(num) << endl;
    return 0;
}

// Converts number to hexadecimal.
string convertToHex(int num) {
    string hex = "";

    while(num > 0) {
        int bit = num % 16;
        if(bit < 10)  hex += (bit + '0');
        else hex += (bit - 10 + 'A');
        num /= 16;
    }
    hex = reverse(hex);
    return hex;
}

// Reverses the given string.
string reverse(string text) {
    for(int i = 0; i < text.length() / 2; i++) {
        char temp = text[i];
        text[i] = text[text.length() - i - 1]; 
        text[text.length() - i - 1] = temp;
    }
    return text;
}

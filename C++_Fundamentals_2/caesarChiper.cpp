#include <iostream>
using namespace std;

// Using caesar chiper to encrypt message with k key.
char* caesarChiper(char* text, int k) {
    char* ptr = text;
    while(*ptr != '\0') {
        if(*ptr >= 'a' && *ptr <= 'z') {
            *ptr = ('a' + (*ptr - 'a' + k) % 26);
        }else if(*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = ('A' + (*ptr - 'A' + k) % 26);
        }
        ptr++;
    }
    return text;
}

int main() {
    char text[100]; 
    int k;

    cin.getline(text, 100);
    cout << "Enter shift number: ";
    cin >> k;

    cout << "Encrypted caesar chiper: " << caesarChiper(text,k) << endl;

    return 0;
}


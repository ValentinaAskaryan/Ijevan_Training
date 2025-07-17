#include <iostream>
using namespace std;

// Takes two char arrays with max size 50.
// Takes the third char array with max size 100.
// Copies the first array into the third and then the second to 
// the end of the third array.
char* concatenate(char* string1, char* string2) {
    char* concString = new char[100];;
    char* ptr1 = string1;
    char* ptr2 = string2;
    char* cPtr = concString;

    while(*ptr1 != '\0') {
        *cPtr = *ptr1;
        ptr1++;
        cPtr++;
    }

    while(*ptr2 != '\0') {
        *cPtr = *ptr2;
        ptr2++;
        cPtr++;
    }
    *cPtr = '\0';
    return concString;
}

// Prints the given array.
void printArray(char* array) {
    char* cPtr = array;
    while(*cPtr != '\0') {
        cout << *cPtr;
        cPtr++;
    }
}

int main() {
    char string1[50];
    char string2[50];

    cout << "Input the first string: ";
    cin.getline(string1, 50);
    cout << "Input the second string: ";
    cin.getline(string2, 50);

    char* conc = concatenate(string1, string2);
    printArray(conc);
    delete[] conc;

    return 0;
}

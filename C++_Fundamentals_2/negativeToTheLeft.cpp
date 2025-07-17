#include <iostream>
using namespace std;

void initializeArray(int* array, int size) {
    for(int *ptr = array; ptr < array + size; ptr++) {
        cout << "Enter a number: ";
        cin >> *ptr;
    }
}

void printArray(int* array, int size) {
    for(int *ptr = array; ptr < array + size; ptr++) {
        cout << *ptr;
    }
    cout << endl;
}

// -4 -2 3 x 3 -2   0
void negativeToTheLeft(int* array, int size) {
    int* left = array;
    for(int *ptr = array; ptr < array + size; ptr++) {
        if(*ptr < 0) {
            int leftVal = *left;
            *left = *ptr;
            for(int* sPtr = left + 1; sPtr < array + size; sPtr++) {
                int temp = *sPtr; 
                *sPtr = leftVal;
                leftVal = temp;
            }
            left++;
        } 
    }
}

int main() {
    int size;

    cout << "Please, enter the array length: ";
    cin >> size;

    int* array = new int[size];
    initializeArray(array, size);
    negativeToTheLeft(array, size);
    printArray(array, size);

    

    return 0;
}

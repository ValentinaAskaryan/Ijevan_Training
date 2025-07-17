#include <iostream>
using namespace std;

// Functions declarations.
void initializeArray(int* array, int size);
int* negativeToLeft(int* array, int size);
void printArray(int* array, int size);

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int* array = new int[size];
    initializeArray(array, size);
    int newArray = *negativeToLeft(array, size);
    printArray(array, size);

    return 0;
}

// Initializes the given array using pointers arithmetics.
void initializeArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << "Enter a number: ";
        cin >> *ptr;
    }
}

// Holds the negative number in temp variable.
// Shifts to the right all elements from position
// where to be inserted to iterator.
// Returns array.
int* negativeToLeft(int* array, int size) {
    int position = 0;
    for(int* ptr = array; ptr < array + size; ptr++) {
        if(*ptr < 0) {
            int temp = *ptr;
            for(int* pPtr = ptr; (pPtr - array) > position; pPtr--) {
                *pPtr = *(pPtr - 1);
            }
            *(array + position) = temp;
            position++; 
        }
    }
    return array;
}

// Prints the array elements using pointers arithmetics.
void printArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << *ptr;
    }
}

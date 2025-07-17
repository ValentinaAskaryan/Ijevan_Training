#include <iostream>
using namespace std;

// Here are function declarations.
void initializeArray(int* array, int size);
int findIndexOfLargestElem(int* array, int size);

int main() {
    int size;

    cout << "Enter the array size: ";
    cin >> size;

    int* array = new int[size];
    initializeArray(array, size);
    cout << "Index: " << findIndexOfLargestElem(array, size) << endl;
    delete[] array;

    return 0;
}

// Initializes the array using pointers arithmetics.
void initializeArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << "Enter an element: ";
        cin >> *ptr;
    }
}

// Finds the largest number and its index.
int findIndexOfLargestElem(int* array, int size) {
    int max = array[0], index = 0;
    for(int* ptr = array + 1; ptr < array + size; ptr++) {
        if(*ptr > max) {
            max = *ptr;
            index = ptr - array;
        }
    }
    return index;
}

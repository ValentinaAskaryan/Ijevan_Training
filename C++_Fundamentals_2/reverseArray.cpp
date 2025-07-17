#include <iostream>
using namespace std;

// Reverse the given array from given start to end indexes.
// Using swap method.
void reverseArray(int* array, int start, int end) {
    int* stPtr = array + start;
    int* endPtr = array + end;

    while(stPtr < endPtr) {
        int temp = *stPtr;
        *stPtr = *endPtr;
        *endPtr = temp;
        stPtr++;
        endPtr--;
    }
    //while(start < end) {
    //    int temp = array[start - 1];
    //    array[start - 1] = array[end - 1];
    //    array[end - 1] = temp;
    //    start++;
    //    end--;
    //}
}

// Initializes array using pointers arithmetics.
void initializeArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        *ptr = ptr - array + 1;
    }
}

// Prints the array using pointers arithmetics.
void printArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << *ptr << ',';
    }
}

int main() {
    int size, left, right;

    cout << "Input array size: ";
    cin >> size;

    int* array = new int[size];
    initializeArray(array, size);

    cout << "First reverse. Input left index : ";
    cin >> left;
    cout << "First reverse. Input right index : ";
    cin >> right;
    reverseArray(array, left, right);

    cout << "Second reverse. Input left index : ";
    cin >> left;
    cout << "Second reverse. Input right index : ";
    cin >> right;
    reverseArray(array, left, right);

    printArray(array, size);

    delete[] array;
    array = nullptr;

    return 0;
}

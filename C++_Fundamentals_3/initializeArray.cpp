#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Here are functions declarations.
void initArray(int* pArr);
void printArray(int* pArr, int size);

int main() {
    int size = 10;
    int array[size];
    initArray(array);
    printArray(array, size);
    return 0;
}

// Initializes the given array using pointers arithmetics.
// Determines array size inside the function.
// For random number generating the rand() function is used.
// Given the range [1; 10] for random numbers.
void initArray(int* pArr) {
    const int size = 10;
    srand(time(0));

    for(int* p = pArr; p < pArr + size; p++) {
        *p = rand() % 10 + 1;
    }
}

// Prints the array elements using pointers arithmetics.
void printArray(int* pArr, int size) {
    for(int* p = pArr; p < pArr + size; p++) {
        cout << *p << ',';
    } 
}

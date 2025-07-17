#include <iostream>
using namespace std;

// Initializes the given array using pointers arithmetics.
void initializeArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << "Enter a number: ";
        cin >> *ptr;
    }
}

// Checks if the index of element is diveded by 3 or 5 and adds them.
int sumOfDividers(int* array, int size) {
    int sum = 0;
    for(int* ptr = array; ptr < array + size; ptr++) {
        if((ptr - array)% 3 == 0 || (ptr - array)% 5 == 0) sum += *ptr; 
    }
    return sum;
}

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int* array = new int[size];
    initializeArray(array, size);
    cout << "The sum is: " << sumOfDividers(array, size) << endl;

    delete[] array;

    return 0;
}

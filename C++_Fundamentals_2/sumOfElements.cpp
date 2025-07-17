#include <iostream>
using namespace std;

// Initializes the given array using pointers arithmetics.
void initializeArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << "Enter an element: ";
        cin >> *ptr;
    }
}

// Counts the sum of all elems of the given array using pointers arithmetics.
int sum(int* array, int size) {
    int sum = 0;
    for(int* ptr = array; ptr < array + size; ptr++) {
        sum += *ptr;
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int* array = new int[size];
    initializeArray(array, size);
    cout << "Sum of the array is: " << sum(array, size) << endl;
    return 0;
}

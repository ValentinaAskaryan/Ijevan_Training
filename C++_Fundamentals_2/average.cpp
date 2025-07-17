#include <iostream>
using namespace std;

// Initializes the array using pointers arithmetics.
void initializeArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << "Enter element: ";
        cin >> *ptr;
    }
}

// Returns average of the array.
double average(int* array, int size) {
    int sum = 0;
    for(int* ptr = array; ptr < array + size; ptr++) {
        sum += *ptr;
    }
    return double(sum) / size;
}

int main() {
    int size;

    cout << "Enter the array size: ";
    cin >> size;

    int* array = new int[size];
    initializeArray(array, size);
    cout << "The average of the array is: " << average(array, size) << endl;

    delete[] array;

    return 0;
}

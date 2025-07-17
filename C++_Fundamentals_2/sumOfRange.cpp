#include <iostream>
using namespace std;

// Initializes the array using pointers arithmetics.
void initializeArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << "Enter a number: ";
        cin >> *ptr;
    }
}

// Counts the sum of the given array elems from start index to end index.
int sumOfRange(int* array, int start, int end) {
    int sum = 0;
    for(int* ptr = array + start; ptr <= array + end; ptr++) {
        sum += *ptr;
    }
    return sum;
}

int main() {
    int size, start, end;

    cout << "Enter array size: ";
    cin >> size;

    int* array = new int[size];
    initializeArray(array, size);

    cout << "Enter the start of the array: ";
    cin >> start;
    cout << "Enter the end of the array: ";
    cin >> end;

    cout << "Sum: " << sumOfRange(array, start, end) << endl;
    delete[] array;

    return 0;
}

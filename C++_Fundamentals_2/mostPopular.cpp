#include <iostream>
using namespace std;

// Initializes array using pointers arithmetics.
void initializeArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << "Enter a number: ";
        cin >> *ptr;
    }
}

// Returns the frequent number in the array.
// Holds variables freq, num, count:
// freq - for the number appearance frequence, inits with 1.
// num - freq number, intis with the first elem of the array.
// count - count of the current elem in the array.
int findTheMostFrequentNum(int* array, int size) {
    int freq = 1, num = array[0], count;
    for(int* ptr = array; ptr < array + size; ptr++) {
        count = 1;
        for(int* ptr1 = ptr + 1; ptr1 < array + size; ptr1++) {
            if(*ptr1 == *ptr) count++;
        }
        if(count > freq) {
            freq = count;
            num = *ptr;
        }
    }
    return num;
}

int main() {
    int size;

    cout << "Enter the array size: ";
    cin >> size;

    int* array = new int[size];
    initializeArray(array, size);
    cout << "The most frequent number is: " << findTheMostFrequentNum(array, size) << endl;

    delete[] array;
    return 0;
}

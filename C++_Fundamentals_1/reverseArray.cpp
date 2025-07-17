#include <iostream>
using namespace std;

// Reverses the given array.
int* reverseArray(int* array, int size) {
	int total;

	for(int i = 0; i < size / 2; i++) {
		total = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = total;
	}
	return array;
}

int main() {
	int array[5] = {1, 2, 3, 4, 5};
	int* reversed = reverseArray(array, 5);
	for(int i = 0; i < 5; i++) {
		cout << reversed[i] << endl; 
	}
	return 0;
}

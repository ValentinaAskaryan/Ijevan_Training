#include <iostream>

// Functions declarations.
void initArray(int* array, int size);
void insertSort(int* array, int size);
void printArray(int* array, int size);


int main() {
	int size = 5;
	int array[size];
	initArray(array, size);
	insertSort(array, size);
	printArray(array, size);
	return 0;
} 
// Initializing the array with user input.
void initArray(int* array, int size) {
	for(int i = 0; i < size; i++) {
			std::cout << "Enter an element: ";
			std::cin >> array[i];
	}
}

// Sorting the array with ascending order. 
void insertSort(int* array, int size) {
	int temp;
	for(int j = 1; j < size; j++) {
		int elem = array[j];
		int prevIndex = j - 1;
		while(prevIndex >= 0 && elem < array[prevIndex]) {
			array[prevIndex + 1] = array[prevIndex];
			prevIndex--;
		}
		array[prevIndex + 1] = elem;
	}
} 

// Printing the array to the console.
void printArray(int* array, int size) {
        for(int i = 0; i < size; i++) {
                std:: cout << array[i] << " ";
        }
        std::cout << "\n";
}


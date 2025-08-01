#include <iostream>

// Functions declarations.
void initArray(int* array, int size);
void selectionSort(int* array, int size);
void printArray(int* array, int size);

int main() {
	int size = 5;
	int array[size];
	initArray(array, size);
	selectionSort(array, size);
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
void selectionSort(int* array, int size) {
	int temp, index;
	for(int i = 0; i < size; i++) {
		index = i; 
		for(int j = i + 1; j < size; j++) {
			if(array[j] < array[index]) {
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;

	}
}

// Printing the array to the console.
void printArray(int* array, int size) {
        for(int i = 0; i < size; i++) {
                std:: cout << array[i] << " ";
        }
        std::cout << "\n";
}


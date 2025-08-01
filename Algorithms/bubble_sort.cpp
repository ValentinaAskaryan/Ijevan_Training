#include <iostream>

// Function declaration.
void initArray(int* array, int size);
int* bubbleSort(int* array, int size);
void printArray(int* array, int size);

// 
int main() {
	int size = 5;
	int array[size];
	initArray(array, size);
	int *bubbledArray = bubbleSort(array, 5);
	printArray(bubbledArray, size);

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
int* bubbleSort(int* array, int size) {
	int temp;
	// Using pointers arithmetics
	for(int* it = array; it < array + size; it++) {
		bool swap = false;
		for(int* el = array; el < array + size - (it - array) - 1; el++) {
			if( *el > *(el + 1)) {
				swap = true;
				temp = *el;
				*el = *(el + 1);
				*(el + 1) = temp;
			} 
		}
		if(!swap) {
			std::cout << "The elements are in right order!" << std::endl;
			break;
		}
	}
	// Using array access operator
	//for(int i = 0; i < size; i++) {
	//	for(int j = 0; j < size - 1 - i; j++) {
	//		if(array[j] > array[j + 1]) {
	//			temp = array[j];
	//			array[j] = array[j + 1];
	//			array[j + 1] = temp;
	//		}
	//	}
	//}
	return array;
}

// Printing the array to the console.
void printArray(int* array, int size) {
	for(int i = 0; i < size; i++) {
		std:: cout << array[i] << " ";
	}
	std::cout << "\n";
}


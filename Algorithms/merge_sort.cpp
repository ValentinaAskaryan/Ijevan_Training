#include <iostream>

// Functions declarations.
void initArray(int* array, int size);
void mergeSort(int* array, int start, int end);
void mergeArray(int* arry, int start, int middle, int end);
void printArray(int* array, int size);

int main() {
	int size = 6;
	int array[size];
	initArray(array, size);
	mergeSort(array, 0, size - 1);
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
void mergeSort(int* array, int start, int end) { 
	if(start >= end) return;
	
	int middle = start + (end - start) / 2;
	// Left array
	mergeSort(array, start, middle); 

	// Right array
	mergeSort(array, middle + 1, end); 

	mergeArray(array, start, middle, end);
}

// Merging the arrays.
void mergeArray(int* array, int start, int middle, int end) {
	int lArrSize = middle - start + 1;
	int rArrSize = end - middle;

	int* lArray = new int[lArrSize];
	int* rArray = new int[rArrSize];
	
	// Here we copy the values from the real array into the reserved arrays.
	for(int i = 0; i < lArrSize; i++) {
		lArray[i] = array[start + i];
	}
	for(int j = 0; j < rArrSize; j++) {
		rArray[j] = array[middle + 1 + j];
	}

	int i = 0, j = 0, k = start;
	while(i < lArrSize && j < rArrSize) {
		if(lArray[i] <= rArray[j]) {
			array[k++] = lArray[i++];
		} else {
			array[k++] = rArray[j++];
		}
	}

	while(i < lArrSize) array[k++] = lArray[i++];
	while(j < rArrSize) array[k++] = rArray[j++];

	delete[] lArray;
	delete[] rArray;
}

// Printing the array to the console.
void printArray(int* array, int size) {
	for(int i = 0; i < size; i++) {
			std:: cout << array[i] << " ";
	}
	std::cout << "\n";
}



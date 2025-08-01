#include <iostream>
#include <climits>

// Functions declarations.
void initArray(int* array, int size);
int partition(int* array, int start, int end);
void quickSort(int* array, int start, int end);
void printArray(int* array, int size);

int main() {
	int size = 5;
	int array[size];
	initArray(array, size);
	quickSort(array, 0, size - 1);
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

// Sorting the array parts.
int partition(int* array, int start, int end) {
	int pivot = array[start];
	int smallElIndex = start;

	for(int i = start + 1; i <= end; i++) {
		if(array[i] < pivot) {
			smallElIndex++;
			std::swap(array[i], array[smallElIndex]);
		}
	}
	std::swap(array[start], array[smallElIndex] );	
	return smallElIndex;
}

// Dividing the array into two parts using recursion.
void quickSort(int* array, int start, int end) {
	if(start < end) {
		int pivotIndex = partition(array, start, end);
		quickSort(array, start, pivotIndex);
		quickSort(array, pivotIndex + 1, end);
	}
}

// Printing the array to the console.
void printArray(int* array, int size) {
	for(int i = 0; i < size; i++) {
			std:: cout << array[i] << " ";
	}
	std::cout << "\n";
}


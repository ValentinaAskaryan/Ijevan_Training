#include <iostream>
using namespace std;

int searchElement(int* array, int size, int elem) {
	int index = -1;
	for(int i = 0; i < size; i++) {
		if(array[i] == elem) index = i;	
	}
	if(index > -1) return array[index];
	else {
		cout << "No matching value." << endl;
		return 1;
	}
	
}

int main() {
	int array[5] = {1, 2, 3, 4, 5};
	cout << "Number: " << searchElement(array, 5, 4) << endl;
	return 0;
}

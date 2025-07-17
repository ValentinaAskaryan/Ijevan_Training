#include <iostream>
#include <cmath>
using namespace std;

int missingNumber(int* array, int size) {
	int totalSum = size * (size + 1) / 2;
	int actualSum = 0;

	for(int i = 0; i < size - 1; i++) {
		actualSum += array[i]; 
	}

	return totalSum - actualSum;

}

int main() {
	int array[] = {1, 2, 5, 4, 6};
	int size = 6;
	cout << "Missing  number: " << missingNumber(array, size) << endl;
	return 0;
}

#include <iostream>
using namespace std;

int countZeros(int* array, int size) {
	int count = 0;
	for(int i = 0; i < size; i++) {
		if(array[i] == 0) count++;
	}
	return count;
}

int main() {
	int array[5] = {1, 2, 3, 4, 0};
	cout << "Count: " << countZeros(array, 5) << endl;
	return 0;
}

#include <iostream>
using namespace std;

int firstRepeated(int* array, int size) {
	for(int i = 0; i < size; i++) {
		for(int j = i + 1; j < size; j++) {
			if(array[i] == array[j]) return array[i]; 
		}
	}
	return -1;

}

int main() {
	int array[5] = {1, 1, 3, 4, 5};
	cout << "First repeat: " << firstRepeated(array, 5) << endl;
	return 0;
}

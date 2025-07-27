#include <iostream>

// Declaration of the printToN function. 
void printToN(int number);

// Asks user for input. Calling prinToN function.
int main() {
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	printToN(number);
	return 0;
}

// Prints numbers from 1 to the given number separated by space character.
// Uses recursive method.
void printToN(int number) {
	if(number == 1) {
		std::cout << number << " ";
		return;
	}
	printToN(number - 1);
	std::cout << number << " ";
}

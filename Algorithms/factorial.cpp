#include <iostream>

// Declaration of the recursive factorial function.
int factorial(int N);

// Asks user for input and calls the factorial function on it.
int main() {
	int N;
	std::cout << "Enter a number: ";
	std::cin >> N;
	std::cout << factorial(N) << std::endl;
	return 0;
}

// Calculates the factorial of the given number.
// Checks number validity as it must be positive.
// Checks the 0 case.
// Checks the base canse.
int factorial(int N) {
	if(N < 0) {
		std::cout << "The number must be positive." << std::endl;
		return -1;
	}

	// This is the base case.
	if(N == 0) return 1; 
	if(N == 1) return 1;
	return N * factorial(N - 1);
}

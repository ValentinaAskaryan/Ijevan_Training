#include <iostream>

// Declaration of the powerOfNum function.
int powerOfNum(int num, int pow);

// Asks user to input number and the power.
// Calls  the powerOfNum.
int main() {
	int a, b;
	std::cout << "Enter the number: ";
	std::cin >> a;
	std::cout << "ENter the power: ";
	std::cin >> b;
	std::cout << powerOfNum(a, b) << std::endl;
	return 0;
}

// Calculates the a with the given power of b.
int powerOfNum(int num, int pow) {
	if(pow == 0) return 1;
	return num * powerOfNum(num, pow - 1);
}

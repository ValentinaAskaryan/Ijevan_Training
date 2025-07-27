#include <iostream>

// Declares the gdb function.
int gdb(int a, int b);

// Asks user for two numbers. 
// Calls the gdb function on that numbers.
int main() {
	int a, b;
	std::cout << "Enter the first num: ";
	std::cin >> a;
	std::cout << "Enter the second num: ";
	std::cin >> b;
	std::cout << "GDB is: " << gdb(a, b) << std::endl;
	return 0;
}

// Calculates the gdb of the a and b.
// Uses recursion.
int gdb(int a, int b) {
	if(a == 0 && b == 0)  return 0;
	if(a == b) return a;
	if(a > b) return gdb(a - b, b);
	if(a < b) return gdb(a, b - a);
	return 0;
}

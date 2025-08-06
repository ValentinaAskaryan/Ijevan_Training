#include <iostream>
#include "../inc/Counter.hpp"

// Static data members initialization.
int Counter::createdInstCount = 0;
int Counter::destroyedInstCount = 0;

// Counter class constructor. Just calculates the created instance count.
Counter::Counter() {
	Counter::createdInstCount++;
	std::cout << "Current instance count is: " << Counter::createdInstCount << std::endl;
}

// Counter class destructor. Just tells the remaining instance count.
Counter::~Counter() {
	Counter::destroyedInstCount++;
	std::cout << "Remaining instance count is: " << Counter::createdInstCount - Counter::destroyedInstCount << std::endl;
}

int main() {
	Counter c1;
	Counter c2;
	return 0;
}

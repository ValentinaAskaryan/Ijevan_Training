#include <iostream>
#include <vector>

// Declaration of the function randomSequence.
int randomSequence(int N, std::vector<int>&);

// Initializes the vector, fills the base cases.
// Resizes the vector to 40 size and fills remaining ones with -1.
// Calls the randomSequence function.
int main() {
	std::vector<int> seq = {0, 5, 3, 4, 4}; 
	seq.resize(40, -1);

	int N;
	std::cout << "Enter a number: ";
	std::cin >> N;

    if (N < 0 || N >= (int)seq.size()) {
        std::cerr << "Out of range!\n";
        return 1;
    }

	std::cout << randomSequence(N, seq) << std::endl;
	return 0;
}

// Checks if the sequence vector has the given index value.
// If yes it takes the result, else it pushes the values to approptiate elem.
// Returns the basic calculation.
// Done using recursion.
int randomSequence(int N, std::vector<int>& seq) {
	if(N == 0) return seq[0];
	if(N == 1) return seq[1];
	if(N == 2) return seq[2];
	if(N == 3) return seq[3];
	if(N == 4) return seq[4];
	return seq[N] != -1
		? seq[N] 
		: (seq[N] = (randomSequence(N - 5, seq) * 
					 randomSequence(N - 4, seq)) + 
					 randomSequence(N - 2, seq));
}


#include <iostream>
#include <string>

// Declaration of the isPalindrome function.
bool isPalindrome(std::string text, int it);

// Asks user for text input.
// Calls the isPalindrom function.
int main() {
	std::string text;
	std::cin >> text;
	std::cout << std::boolalpha;
	std::cout << isPalindrome(text, 0) << std::endl;
	return 0;
}

// Checks if the text is palindrome. The string is palindrome when it reads
// the same forword and backword.
// Uses recursison.
bool isPalindrome(std::string text, int it) {
	if(it >= text.length() / 2) return true;

	if(text[it] != text[text.length() - 1 - it]) return false;

	return isPalindrome(text, it + 1);
}

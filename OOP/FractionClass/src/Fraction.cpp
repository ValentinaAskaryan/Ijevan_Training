#include <iostream>
#include <stdexcept>
#include "../inc/Fraction.hpp"

// Setting my default constructor as 0/1.
Fraction::Fraction() {
	this->numerator = 0;
	this->denominator = 1;
}

// Creating an instance  by getting numerator and denominator.
Fraction::Fraction(int num, int denom) {
	this->numerator = num;
	this->denominator = denom;
	if(this->denominator == 0)
		throw std::invalid_argument("The denominator can not be 0."); 
}

// Calculating the greatest common devider of two numbers.
int Fraction::gcd(int num_1, int num_2) const {
	while(num_1 != num_2)
		if(num_1 > num_2)
			num_1 -= num_2;
		else
			num_2 -= num_1;

	return num_1;
}

// Calculating the least common denominator of two numbers.
int Fraction::lcm(int num_1, int num_2) const {
	return (num_1 * num_2) / this->gcd(num_1, num_2);
}

// Adding two fractions. Uses opeator overloading.
Fraction Fraction::operator + (const Fraction& other) const {
	int lcm = this->lcm(this->denominator, other.denominator);	
	int sum = (this->numerator * lcm / this->denominator) + 
		(other.numerator * lcm / other.denominator);
	return Fraction(sum, lcm);
}

// Subtracting two fractions. Uses opeator overloading.
Fraction Fraction::operator - (const Fraction& other) const {
	int lcm = this->lcm(this->denominator, other.denominator);
	int diff = (this->numerator * lcm / this->denominator) -
		(other.numerator * lcm / other.denominator);
	return Fraction(diff, lcm);
}

// Multiplying two fractions. Uses opeator overloading.
Fraction Fraction::operator * (const Fraction& other) const {
	int multNum = this->numerator * other.numerator;
	int multDenom = this->denominator * other.denominator;
	return Fraction(multNum, multDenom);
}

// Dividing two fractions. Uses opeator overloading.
Fraction Fraction::operator / (const Fraction& other) const {
	int tempDenom = other.numerator;
	int tempNum = other.denominator;
	return *this * Fraction(tempNum, tempDenom);
}

// Compares two fractions. Returns the bigger one. Uses operator overloading.
Fraction Fraction::operator > (const Fraction& other) const {
	if(this->denominator == other.denominator) 
		return this->numerator > other.numerator ? *this : other;
	else 
		return (this->numerator * other.denominator) > (other.numerator * this->denominator) ? *this : other;
}

// Compares two fractions. Returns the smaller one. Uses operator overloading.
Fraction Fraction::operator < (const Fraction& other) const {
	if(this->denominator == other.denominator)
		return this->numerator < other.numerator ? *this : other;
	else 
		return (this->numerator * other.denominator) < (other.numerator * this->denominator) ? *this : other;
}

// Compares two fractions. Returns true if they are equal. Uses operator overloading.
bool Fraction::operator == (const Fraction& other) const {
	return this->numerator == other.numerator && this->denominator == other.denominator;
}

// Compares two fractions. Returns true if they are not equal. Uses operator overloading.
bool Fraction::operator != (const Fraction& other) const {
	return this->numerator != other.numerator || this->denominator != other.denominator;
}

// Printing the fraction to the console. Uses operator overloading.
std::ostream& operator<<(std::ostream& os, const Fraction& f) {
	os << f.numerator << "/" << f.denominator;
	return os;
}

// Simplifies the fraction and returns.
Fraction& Fraction::simplify() {
	int gcd = this->gcd(this->numerator, this->denominator);
	this->numerator /= gcd;
	this->denominator /= gcd;
	return *this;
}

// Returns the fraction as a double number.
double Fraction::toDouble() const {
	return static_cast<double>(this->numerator) / this->denominator;
}

int main() {
	Fraction num_1(3, 4);
	Fraction num_2(16, 4);
	Fraction simplified = num_2.simplify();
	std::cout << num_1 + num_2 << std::endl;
	std::cout << num_1 - num_2 << std::endl;
	std::cout << num_1 * num_2 << std::endl;
	std::cout << num_1 / num_2 << std::endl;
	std::cout << (num_1 > num_2) << std::endl;
	std::cout << (num_1 < num_2) << std::endl;
	std::cout << (num_1 == num_2) << std::endl;
	std::cout << (num_1 != num_2) << std::endl;
	std::cout << simplified << std::endl;
	std::cout << num_2.toDouble() << std::endl;
	return 0;
}

#pragma once

class Fraction {
public:
	// Constructors.
	Fraction();
	Fraction(int num, int denom);

	// Operators.
	Fraction operator + (const Fraction& other) const;
	Fraction operator - (const Fraction& other) const;
	Fraction operator * (const Fraction& other) const;
	Fraction operator / (const Fraction& other) const;
	
	// Conditions.
	Fraction operator < (const Fraction& other) const;
	Fraction operator > (const Fraction& other) const;
	bool operator == (const Fraction& other) const;
	bool operator != (const Fraction& other) const;

	// Printing.
	friend std::ostream& operator<<(std::ostream&, const Fraction&);

	// Simplifiers.
	Fraction& simplify();
	double toDouble() const;

private:
	// Data members.
	int numerator, denominator;

	// Helper data methods. Encapsulated.
	int gcd(int, int) const;
	int lcm(int, int) const;
};

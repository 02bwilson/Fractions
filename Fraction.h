#ifndef FRACTION_H
#define FRACTION_H
#include <string>

using namespace std; 

class fraction {
private: 
	int numerator;
	int denominator; 
public: 
	// Default constructor sets numerator to 0 and denom to 1
	fraction();
	// Sets numerator to input and denom to 1
	fraction(int);
	// Sets fraction with both inputs
	fraction(int, int);

	// Copys a fraction
	fraction(fraction& copyFrac);
		

	// Returns the value of the fraction as a double 
	double toDouble() const;
	// Returns string version of fraction in the form of "x / y" 
	string toString() const;
	// Returns the numerator 
	int getNumerator() const;
	// Return denom 
	int getDenominator() const;

	// Custom operator for adding fractions 
	const friend fraction operator+(const fraction & frac1, const fraction & frac2);

	friend fraction operator-(const fraction& frac1, const fraction & frac2);

	const friend fraction operator*(const fraction& frac1, const fraction& frac2);

	const friend fraction operator/(const fraction& frac1, const fraction& frac2);

	friend ostream& operator<<(ostream &out, fraction & fraction);

	friend istream& operator>>(istream& in, fraction& fraction);
};

#endif 

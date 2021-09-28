#include <iostream>
#include "Fraction.h"


using namespace std; 





fraction::fraction() {
	numerator = 0;
	denominator = 1;
}

fraction::fraction(int numeratorIn) {
	numerator = numeratorIn;
	denominator = 1;
}

fraction::fraction(int numeratorIn, int denominatorIn) {
	numerator = numeratorIn;
	denominator = denominatorIn;
}

int fraction::getDenominator() const{
	return denominator;
}

int fraction::getNumerator() const {
	return numerator; 
}

double fraction::toDouble() const {
	return ((static_cast<double>(numerator)) / static_cast<double>(denominator));
}

string fraction::toString() const {
	return to_string(numerator)+ " / " + to_string(denominator);
}

fraction::fraction(fraction& copyFrac) {
	numerator = copyFrac.getNumerator();
	denominator = copyFrac.getDenominator();
}

const fraction operator+(const fraction& frac1, const fraction& frac2) {
	int num;
	int den;
	// If denom are not the same multiply them to get common denom 
	if (frac1.getDenominator() != frac2.getDenominator()) {
		den = (frac1.getDenominator() * frac2.getDenominator());
	}
	else { 
		// if the denom are the same simply add the numerators 
		den = frac1.getNumerator(); 
		fraction returnFrac((frac1.getNumerator() + frac2.getNumerator()), den);
		return returnFrac; 
	}
	// Sets num for the return to the num of each * common denom 
	num = ((den / frac1.getDenominator()) * frac1.getNumerator()) + ((den / frac2.getDenominator()) * frac2.getNumerator());

	fraction returnFrac(num, den);
	return returnFrac; 
	




}



const fraction operator*(const fraction& frac1, const fraction& frac2) {
	int numerator = frac1.getNumerator() * frac2.getNumerator();
	int denom = frac1.getDenominator() * frac2.getDenominator();
	fraction returnFrac(numerator, denom);
	return returnFrac;
}

ostream& operator<<(ostream& out, fraction& fraction) {
	return cout << fraction.toString();
}

istream& operator>>(istream& in, fraction& fraction) {
	in >> fraction.numerator;
	in >> fraction.denominator;
	return in;
}

const fraction operator/(const fraction& frac1, const fraction& frac2) {
	int num;
	int den; 


	num = (frac1.getNumerator() * frac2.getDenominator());
	den = (frac1.getDenominator() * frac2.getNumerator());
	fraction returnFrac(num, den);
	return returnFrac; 
}

#include <iostream>
#include "Fraction.h"

using namespace std; 

int main() {

	 // Defines fractions with each of the 3 constructor types 
	fraction a;
	fraction b(3);
	fraction c(6, 12);
	// This Fraction will be used to test operator overloads
	fraction d;

	
	
	d = b + c;
	cout << d;






	return 0;
}
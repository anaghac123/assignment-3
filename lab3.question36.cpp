#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int input, i, digit, productOfDigits;
	digit = 0;
	productOfDigits = 1;
	
	cout << "Enter a number: ";
	cin >> input;
	
	
	i = input;
	
	while (i != 0) {
		digit = i % 10;
		i = i/10;
		productOfDigits = productOfDigits * digit;
	}
	
	cout << "The product of digits of the number " << input << " is " << productOfDigits << ".\n";
	
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int input, i, digit, sumOfDigits;
	digit = 0;
	sumOfDigits = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	
	i = input;
	
	while (i != 0) {
		digit = i % 10;
		i = i/10;
		sumOfDigits += digit;
	}
	
	cout << "The sum of digits of the number " << input << " is " << sumOfDigits << ".\n";
	
	return 0;
}

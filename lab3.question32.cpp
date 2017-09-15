#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int input, i, k, lastDigit, firstDigit, numOfDigits;
	numOfDigits = 0;
	k = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	lastDigit = input % 10;
	
	i = input;
	
	while (i != 0) {
		numOfDigits++;
		k = i;
		i = i/10;
	}
	
	firstDigit = k;
	
	if (numOfDigits == 1) {
		cout << "The number that you entered has only one digit and that is " << input << ".\n";
	}
	
	else{
			cout << "The first digit of the number " << input << " is " << firstDigit << " and its last digit is " << lastDigit << ".\n";
	}

	return 0;
}

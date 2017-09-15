#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int input, i, lastDigit, firstDigit, numOfDigits, swapped;
	numOfDigits = 0;
	firstDigit = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	lastDigit = input % 10;
	
	i = input;
	
	while (i != 0) {
		numOfDigits++;
		firstDigit = i;
		i = i/10;
	}
	
	swapped = input - ((firstDigit - lastDigit)*pow(10,numOfDigits-1)) - lastDigit + firstDigit;
	
	if (numOfDigits == 1) {
		cout << "The number that you entered has only one digit.\n";
	}
	
	else{
		cout << "The number " << input << " with its first and last digits swapped is " << swapped << ".\n";
	}

	return 0;
}



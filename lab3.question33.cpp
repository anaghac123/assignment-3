#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int input, i, k, lastDigit, firstDigit, numOfDigits, sum;
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
	
	sum = firstDigit + lastDigit;
	
	if (numOfDigits == 1) {
		cout << "The number that you entered has only one digit.\n";
	}
	
	else{
			cout << "The product of the first and the last digits of the number " << input << " is " << sum << ".\n";
	}

	return 0;
}

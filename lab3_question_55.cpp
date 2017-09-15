#include <iostream>
using namespace std;


int main() {
	
	int input, i, digit, factorial, sumFactorials;
	sumFactorials = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	
	i = input;
	
	while (i != 0) {
		factorial = 1;
		digit = i % 10;
		i = i/10;
		
		
		for (int j = 1; j <= digit; j++) {
			factorial = factorial*j;
		}
		
		sumFactorials += factorial;
		
	}
	
	if (sumFactorials == input) {
		cout << input << " is a strong number.";
	}
	
	else {
		cout << input << " is not a strong number.";
	}
	
	cout << endl;
	
	return 0;
}

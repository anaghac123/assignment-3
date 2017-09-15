#include <iostream>
using namespace std;


int main() {
	
	int input, i, numOfDigits;
	numOfDigits = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
    
	i = input;
	
	while (i != 0) {
		numOfDigits++;
		i = i/10;
	}
	
	cout << "The number " << input << " has " << numOfDigits << " digits.\n";
	
	return 0;
}

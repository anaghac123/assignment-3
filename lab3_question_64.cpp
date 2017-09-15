#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	//Program to convert octal to decimal
	
	int input, i, numberDecimal = 0;
	int digit, p = 0, f;
	
	cout << "Ente a number in octal: ";
	cin >> input;
	i = input;
	
	while (i != 0) {
		digit = i % 10;
		f = pow(8, p);
		p++;
		numberDecimal += digit*f;
		i = i/10;
	}
	
	cout << numberDecimal << endl;
	
	return 0;
}


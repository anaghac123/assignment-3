#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	//Program to convert octal to hexadecimal
	
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
	
	string a = "";
	string numberHexadecimal = "";
	
	i = numberDecimal;
	
	while (i != 0) {
		digit = i % 16;
		i = i/16;
		
		if (digit == 10) {
			a = "A";
		}
		else if (digit == 11) {
			a = "B";
		}
		else if (digit == 12) {
			a = "C";
		}
		else if (digit == 13) {
			a = "D";
		}
		else if (digit == 14) {
			a = "E";
		}
		else if (digit == 15) {
			a = "F";
		}
		else {
			a = to_string(digit);
		}
		numberHexadecimal = a + numberHexadecimal;
	}
	
	cout << numberHexadecimal << endl;
	
	return 0;
}



#include <iostream>
using namespace std;

int main() {
	
	//Program to convert decimal to hexadecimal
	
	int input, i, digit;
	string a = "";
	string b = "";
	
	cout << "Enter a number: ";
	cin >> input;
	
	i = input;
	
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
		b = a + b;
	}
	
	cout << b;
	cout << endl;
	
	return 0;
}

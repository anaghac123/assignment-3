#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	//Program to convert hexadecimal to decimal
	
	string input;
	string digit;
	int n, numberDecimal = 0;
	int j = 0;
	
	cout << "Enter a hexadecimal number: ";
	cin >> input;
	
	for (long i = (input.length() - 1); i >= 0; i--) {
		digit = input[i];
		
		if (digit == "0") {
			n = 0;
		}
		else if (digit == "1") {
			n = 1;
		}
		else if (digit == "2") {
			n = 2;
		}
		else if (digit == "3") {
			n = 3;
		}
		else if (digit == "4") {
			n = 4;
		}
		else if (digit == "5") {
			n = 5;
		}
		else if (digit == "6") {
			n = 6;
		}
		else if (digit == "7") {
			n = 7;
		}
		else if (digit == "8") {
			n = 8;
		}
		else if (digit == "9") {
			n = 9;
		}
		else if (digit == "A") {
			n = 10;
		}
		else if (digit == "B") {
			n = 11;
		}
		else if (digit == "C") {
			n = 12;
		}
		else if (digit == "D") {
			n = 13;
		}
		else if (digit == "E") {
			n = 14;
		}
		else if (digit == "F") {
			n = 15;
		}
		
		numberDecimal += (n*pow(16, j));
		j++;
	}
	
	cout << numberDecimal << endl;
	
	return 0;
}


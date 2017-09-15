#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	//Program to convert binary to octal
	
	long k, number, sum, j;
	string input;
	j = 0;
	number = 0;
	sum = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	if (input.length() % 3 == 2) {
		input = "0" + input;
	}
	
	else if	(input.length() % 3 == 1) {
		input = "00" + input;
	}
	
	else {
		input = input;
	}
	
	for (long i = input.length() - 1; i >= 2; i -= 3) {
		for (long l = 0; l <= 2; l++) {
			k = pow(2, l);
			if (input[i-l] == '1') {
				number += k;
			}
		}
		sum += number*pow(10, j);
		j++;
		number = 0;
	}
	
	cout << sum << endl;
	
	return 0;
}


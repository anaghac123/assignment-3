#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	string number, oneCom;
	char digit;
	int k = 0;
	
	cout << "Enter a binary number: ";
	cin >> number;
	
	for (long i = 0; i <= number.length() - 1; i++) {
		digit = number[i];
		if (digit == '1') {
			oneCom = oneCom + "0";
		}
		else {
			oneCom = oneCom + "1";
		}
	}
		
	for (long j = oneCom.length() - 1; j >= 0; j--) {
		digit = oneCom[j];
		if (digit == '0') {
			oneCom[j] = '1';
			break;
		}
		else {
			oneCom[j] = '0';
			k++;
		}
	}
	
	if (k == oneCom.length()) {
		oneCom = "1" + oneCom;
	}
	
	cout << oneCom << endl;
	
	return 0;
}

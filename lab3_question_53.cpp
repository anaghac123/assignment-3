#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int input, divisor, sum;
	sum = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	for (int i = 1; i <= input/2; i++) {
		if (input % i == 0) {
			divisor = i;
			sum += divisor;
		}
	}
	
	if (sum == input) {
		cout << input << " is a perfect number.";
	}
	
	else {
		cout << input << " is not a perfect number.";
	}
	
	cout << endl;
	
	return 0;
}


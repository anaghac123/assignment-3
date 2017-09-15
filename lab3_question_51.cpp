

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int input, i;
	double n, digit, sum;
	n = 0;
	sum = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	i = input;
	
	while (i != 0) {
		n++;
		i = i/10;
	}
	
	i = input;
	
	while (i != 0) {
		digit = i % 10;
		
		sum += pow(digit, n);
		
		i = i/10;
	}
	
	if (sum == input) {
		cout << "The number " << input << " is an Armstrong number.";
	}
	
	else {
		cout << "The number " << input << " is not an Armstrong number";
	}
	
	cout << endl;
	
	return 0;
}

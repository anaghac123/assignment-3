#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int input, i, digit;
	digit = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	
	i = input;
	
	while (i != 0) {
		digit = i % 10;
		i = i/10;
		cout << digit;
	}
	
	cout << endl;
	
	return 0;
}

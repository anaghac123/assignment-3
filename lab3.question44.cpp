#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int number, factorial;
	factorial = 1;
	
	cout << "Enter a number: ";
	cin >> number;
	
	for (int i = 1; i <= number; i++) {
		factorial = factorial * i;
	}
	
	cout << "The factorial of " << number << " is " << factorial << ".\n";
	
	return 0;
}

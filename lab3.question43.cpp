#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	
	cout << "The factors of the number " << number << " are : ";
	
	for (int factor = 1; factor <= number/2; factor++) {
		int reminder = number % factor;
		
		if (reminder == 0) {
			cout << factor << " ";
		}
	}
	
	cout << number << endl;
	
	return 0;
}

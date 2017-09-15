#include <iostream>
using namespace std;


int main() {
	
	int input, i, digit, factorial, sumFactorials;
	
	cout << "Enter a number: ";
	cin >> input;
	
	for (int l = 1; l <= input; l++) {
		sumFactorials = 0;
		i = l;
		while (i != 0) {
			factorial = 1;
			digit = i % 10;
			i = i/10;
			
			
			for (int j = 1; j <= digit; j++) {
				factorial = factorial*j;
			}
			
			sumFactorials += factorial;
			
		}
		
		if (sumFactorials == l) {
			cout << l << " ";
		}
	}
	
	cout << endl;
	
	return 0;
}

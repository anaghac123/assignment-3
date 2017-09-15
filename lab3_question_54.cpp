#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int input, divisor, sum;
	sum = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	for (int j = 1; j <= input; j++) {
		for (int i = 1; i <= j/2; i++) {
			if (j % i == 0) {
				divisor = i;
				sum += divisor;
			}
		}
		
		if (sum == j) {
			cout << j << " ";
		}
		sum = 0;
	}
	
	cout << endl;
	
	return 0;
}

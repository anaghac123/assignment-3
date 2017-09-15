#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int input, j;
	double n, digit, sum;
	sum = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	for (int i = 1; i <= input; i++) {
		n = 0;
		sum = 0;
		j = i;
		while (j != 0) {
			n++;
			j = j/10;
		}
		
		j = i;
		
		while (j != 0) {
			digit = j % 10;
			
			sum += pow(digit, n);
			
			j = j/10;
		}
		
		if (sum == i) {
			cout << i << " ";
		}
	}

	cout << endl;
	
	return 0;
}


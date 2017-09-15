
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	//Defining variables
	int input, i, numOfDigits, divisor1, divisor2, j, fd, ld;
	numOfDigits = 0;
	j = 1;
	
	cout << "Enter a number: ";
	cin >> input;
	
	i = input;
	
	//Finding the number of digits in the input number
	while (i != 0) {
		numOfDigits++;
		i = i/10;
	}
	
	//Checking whether it is a palindrome or not
	while (j <= numOfDigits/2) {
		
		divisor1 = pow(10,j-1);
		ld = (input/divisor1) % 10;
		
		divisor2 = pow(10,numOfDigits - j);
		fd = (input/divisor2) % 10;
		
		if (ld != fd) {
			cout << "The number " << input << " is not a palindrome.\n";
			return 0;
		}
		
		j++;
	}
	
	cout << "The number " << input <<  " is a palindrome.\n";
	
	return 0;
}

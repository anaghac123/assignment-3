#include <iostream>
using namespace std;

int main() {
	
	//Program to convert decimal to binary
	
	int input, i, digit;
	string a = "";
	string b = "";
	
	cout << "Enter a number: ";
	cin >> input;
	
	i = input;
	
	while (i != 0) {
		digit = i % 2;
		i = i/2;
		
		a = to_string(digit);
		b = a + b;
	}
	
	cout << b;
	cout << endl;
	
	return 0;
}


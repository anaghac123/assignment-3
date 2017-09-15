#include <iostream>
using namespace std;

int main() {
	
	//Program to convert decimal to octal
	
	int input, i, digit;
	string a = "";
	string b = "";
	
	cout << "Enter a number: ";
	cin >> input;
	
	i = input;
	
	while (i != 0) {
		digit = i % 8;
		i = i/8;
		a = to_string(digit);
		b = a + b;
	}
	
	cout << b;
	cout << endl;
	
	return 0;
}

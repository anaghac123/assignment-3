#include <iostream>
using namespace std;

int main() {
	
	int base, power, result;
	result = 1;
	
	cout << "Enter the base: ";
	cin >> base;
	
	cout << "Enter the power: ";
	cin >> power;
	
	for (int i = 1; i <= power; i++) {
		result = result * base;
	}
	
	cout << base << " raised to the power " << power << " is " << result << ".";
	cout << endl;
	
	return 0;
}

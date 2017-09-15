#include <iostream>
using namespace std;

int main() {
	
	int units, cost, totalCost;
	
	cout << "Enter the units of electricity consumed: ";
	cin >> units;
	
	if (units <= 50) {
		cost = 50*0.5;
	}
	
	else if (units <= 150) {
		cost = 25 + (units-50)*0.75;
	}
	
	else if (units <= 250) {
		cost = 100 + (units - 150)*1.2;
	}
	
	else {
		cost = 220 + (units - 250)*1.5;
	}
	
	totalCost = cost*1.2;
	
	cout << "Your total electricity bill is " << totalCost << ".\n";
	
	return 0;
}

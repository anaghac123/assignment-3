#include <iostream>
using namespace std;


int main() {
	
	int days;
	
	cout << "Enter the number of days in the year: ";
	cin >> days;
	
	if (days == 366) {
		cout << "The given year is a leap year.";
	}
	
	else if (days == 365) {
		cout << "The given year is not a leap year.";
	}
	
	else {
		cout << days << " days do not form a year.";
	}
	
	cout << endl;
	
	return 0;
}

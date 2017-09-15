#include <iostream>
using namespace std;

int main() {
	
	int basicSalary, hra, da, grossSalary;
	
	cout << "Enter the basic salary of the employee: ";
	cin >> basicSalary;
	
	if (basicSalary <= 10000) {
		hra = basicSalary * 0.2;
		da = basicSalary * 0.8;
		grossSalary = basicSalary + hra + da;
	}
	
	else if (basicSalary <= 20000) {
		hra = basicSalary * 0.25;
		da = basicSalary * 0.9;
		grossSalary = basicSalary + hra + da;
	}
	
	else {
		hra = basicSalary * 0.3;
		da = basicSalary * 0.95;
		grossSalary = basicSalary + hra + da;
	}
	
	cout << "The employee's gross salary is " << grossSalary << ".\n";
	
	return 0;
}

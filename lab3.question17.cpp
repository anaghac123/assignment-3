#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	double a, b, c, x1, x2, determinant;
	
	cout << "A quadratic equation is of the form ax^2 + bx + c = 0. Therefore, to specify a quadratic equation, the values of a, b and c must be given.";
	
	cout << "Enter the value of the coefficient of x^2 a: ";
	cin >> a;
	
	cout << "Enter the value of the coefficient of x b: ";
	cin >> b;
	
	cout << "Enter the value of the constant c: ";
	cin >> c;
	
	determinant = pow(b,2) - (4*a*c);
	
	x1 = (-1*b + sqrt(determinant))/(2*a);
	x2 = (-1*b - sqrt(determinant))/(2*a);
	
	cout << x1 << " and " << x2 << " are the two roots of the quadratic equation " << a << "x^2 + " << b << "x + " << c << ".";
	
	return 0;
}

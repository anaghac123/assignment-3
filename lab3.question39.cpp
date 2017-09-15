#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	//Defining and initialiing variables
	int input, i, numOfDigits, digit;
	
	int zeros = 0;
	int ones = 0;
	int twos = 0;
	int threes = 0;
	int fours = 0;
	int fives = 0;
	int sixes = 0;
	int sevens = 0;
	int eights = 0;
	int nines = 0;
	
	numOfDigits = 0;
	
	cout << "Enter a number: ";
	cin >> input;
	
	
	i = input;
	
	//Finding frequency
	while (i != 0) {
		digit = i % 10;
		numOfDigits++;
		i = i/10;
		
		if (digit == 0) {
			zeros++;
		}
		
		else if (digit == 1) {
			ones++;
		}
		
		else if (digit == 2) {
			twos++;
		}
		
		else if (digit == 3) {
			threes++;
		}
		
		else if (digit == 4) {
			fours++;
		}
		
		else if (digit == 5) {
			fives++;
		}
		
		else if (digit == 6) {
			sixes++;
		}
		
		else if (digit == 7) {
			sevens++;
		}
		
		else if (digit == 8) {
			eights++;
		}
		
		else {
			nines++;
		}
	}
	
	//Printing output
	cout << "The number " << input << " has the following frequency of digits starting from the number of zeros to the number of nines respectively: \n";
	cout << zeros << " " << ones << " " << twos << " " << threes << " " << fours << " " << fives << " " << sixes << " " << sevens << " " << eights << " " << nines;
	cout << endl;
	
	return 0;
}

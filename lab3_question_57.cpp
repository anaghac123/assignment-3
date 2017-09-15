#include <iostream>
using namespace std;


int main() {
	
	int n, firstTerm, secondTerm, thirdTerm;
	
	firstTerm = 1;
	secondTerm = 1;
	thirdTerm = 2;
	
	cout << "Enter a number: ";
	cin >> n;
	
	if (n == 1) {
		cout << firstTerm;
	}
	
	else if (n == 2) {
		cout << firstTerm << " " << secondTerm << " ";
	}
	
	else {
		cout << firstTerm << " " << secondTerm << " ";
		for (int i = 3; i <= n; i++) {
			cout << thirdTerm << " ";
			firstTerm = secondTerm;
			secondTerm = thirdTerm;
			thirdTerm = firstTerm + secondTerm;
		}
	}
	
	cout << endl;
	
	return 0;
}

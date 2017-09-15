#include <iostream>
using namespace std;

int main() {
	
	int bought, sold, profitLoss;
	
	cout << "Enter the price at which you bought: ";
	cin >> bought;
	
	cout << "Enter the price at which you sold: ";
	cin >> sold;
	
	profitLoss = sold - bought;
	
	if (profitLoss > 0) {
		cout << "You earned a profit of " << profitLoss << ".\n";
	}
	
	else if (profitLoss < 0) {
		cout << "You incurred a loss of " << profitLoss << ".\n";
	}
	
	else {
		cout << "You have no profit or loss.";
	}
	
	return 0;
}

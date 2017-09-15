#include <iostream>
using namespace std;


int main() {
	
	int rupees, twoThousand, fiveHundred, hundred, fifty, twenty, ten, five, two, one;
	int reminder;
	
	cout << "Enter the amount: ";
	cin >> rupees;
	
	twoThousand = rupees / 2000;
	reminder = rupees % 2000;
	
	fiveHundred = reminder / 500;
	reminder = reminder % 500;
	
	hundred = reminder / 100;
	reminder = reminder % 100;
	
	fifty = reminder / 50;
	reminder = reminder % 50;
	
	twenty = reminder / 20;
	reminder = reminder % 20;
	
	ten = reminder / 10;
	reminder = reminder % 10;
	
	five = reminder / 5;
	reminder = reminder % 5;#include <iostream>
using namespace std;


int main() {
	
	int rupees, twoThousand, fiveHundred, hundred, fifty, twenty, ten, five, two, one;
	int reminder;
	
	cout << "Enter the amount: ";
	cin >> rupees;
	
	twoThousand = rupees / 2000;
	reminder = rupees % 2000;
	
	fiveHundred = reminder / 500;
	reminder = reminder % 500;
	
	hundred = reminder / 100;
	reminder = reminder % 100;
	
	fifty = reminder / 50;
	reminder = reminder % 50;
	
	twenty = reminder / 20;
	reminder = reminder % 20;
	
	ten = reminder / 10;
	reminder = reminder % 10;
	
	five = reminder / 5;
	reminder = reminder % 5;
	
	two = reminder / 2;
	reminder = reminder % 2;
	
	one = reminder;
	
	cout << twoThousand << " two thousand notes, " << fiveHundred << " five hundred notes, " << hundred << " hundred notes, ";
	cout << fifty << " fifty notes, " << twenty << " twenty notes, " << ten << " ten notes, " << five << " five rupee notes, ";
	cout << two << " two rupee coins and " << one << " one rupee coins make up " << rupees << " rupees.";
	
	cout << endl;
	
	return 0;
}
	
	two = reminder / 2;
	reminder = reminder % 2;
	
	one = reminder;
	
	cout << twoThousand << " two thousand notes, " << fiveHundred << " five hundred notes, " << hundred << " hundred notes, ";
	cout << fifty << " fifty notes, " << twenty << " twenty notes, " << ten << " ten notes, " << five << " five rupee notes, ";
	cout << two << " two rupee coins and " << one << " one rupee coins make up " << rupees << " rupees.";
	
	cout << endl;
	
	return 0;
}

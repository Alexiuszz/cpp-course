#include <iostream>

using namespace std;

int main()
{
	unsigned short int number;
	cout << "Enter a number between 1 and 5: ";
	cin >> number;
	switch (number)
	{
		case 0: cout << "Too small, sorry!";
			break;
		case 5: cout << "Good job!\n";
		case 4 :cout << "Nice Pick!\n";
		case 3: cout << "Excellent!\n";
		case 2: cout << "Masteful!\n";
		case 1: cout << "Incredible!\n";
			break;
		default: cout << "Too large!\n";
			break;
	}
	cout << "\n\n";
		return 0;
}


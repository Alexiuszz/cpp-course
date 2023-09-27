//Returning multipe values from a function

#include <iostream>

using namespace std;
typedef unsigned short Ushort;

short Factor(Ushort, Ushort*, Ushort*);

int main()
{
	Ushort number, squared, cubed;
	short error;
	
	cout << "Enter a number (0 - 20): ";
	cin >> number;
	
	error = Factor(number, &squared, &cubed);
	
	if (!error)
	{
		cout << "number: " << number << "\n";
		cout << "square: " << squared << "\n";
		cout << "Cube: " << cubed << "\n";
	}
	else
	cout << "Error encountered!!\n";
return 0;
}

short Factor(Ushort n, Ushort *pSquared, Ushort *pCubed)
{
	short Value = 0;
	if (n > 20)
	Value  = 1;
	else
	{
		*pSquared  = n*n;
		*pCubed = n*n*n;
		Value = 0;
	}
	return Value;
}

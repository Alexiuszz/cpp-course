// Returning multiple values from a function using references 

#include <iostream>

using namespace std;

typedef unsigned short Ushort;
enum ERR_CODE {SUCCESS, ERROR};

ERR_CODE Factor(Ushort, Ushort&, Ushort&);

int main()
{
	Ushort number, squared, cubed;
	ERR_CODE result;
	
	cout << "Enter a number (0 - 20): ";
	cin >> number;
	
	result = Factor(number, squared, cubed);
	
	if (result == SUCCESS)
	{
		cout << "number: " << number << "\n";
		cout << "square: " << squared << "\n";
		cout << "cubed: " << cubed << "\n";
	}
	else 
	cout << "Error encountered!!\n";
return 0;
}

ERR_CODE Factor(Ushort n, Ushort &rSquared, Ushort &rCubed)
{
	if (n > 20)
		return ERROR;
		else
		{
			rSquared = n*n;
			rCubed = n*n*n;
			return SUCCESS;
		}
}

#include <iostream>

using namespace std ;
int main()
{
	// Ask for two numbers 
	// assign the numbers to bigNumber and littleNumber 
	// see if they are evenly divisible 
	//if they are, see if they are the same numbers
	
	
	int firstNumber, secondNumber;
	cout << "Enter two numbers.\nFirst: ";
	cin >> firstNumber;
	cout << "\nSecond: ";
	cin >> secondNumber;
	cout << "\n\n";
	
	if (firstNumber >= secondNumber)
	{
		if ((firstNumber % secondNumber)== 0) // evenly divisible?
		{
			if (firstNumber == secondNumber)
			   cout << "They are the same!\n";
			else
			   cout << "They are evenly divisible!\n";
		}
		else
		    cout << "They are not evenly divisible!\n";
	} 
	else
	   cout << "Hey! The second one is larger!\n";
	     return 0;
}

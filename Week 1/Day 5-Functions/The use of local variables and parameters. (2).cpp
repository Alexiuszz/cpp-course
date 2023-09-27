#include <iostream>
using namespace std;
float Convert(float); //Function prototype
int main()
{
	float TempFer;
	float TempCel;
	
	cout << "Please Enter value for temperature in Fahrenheit: ";
	cin >> TempFer;
	TempCel = Convert(TempFer);
	cout << "\nHere's the temperature in Celsius: ";
	cout << TempCel << endl;
	    return 0;
}

float Convert(float TempFer)               //
{                                          // 
	float TempCel;                         //Function Definition
	TempCel = ((TempFer - 32) * 5) / 9;    //
	  return TempCel;                      // 
}

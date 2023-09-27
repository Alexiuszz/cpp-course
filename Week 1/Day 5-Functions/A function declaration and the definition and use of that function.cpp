typedef unsigned short int UShort;
#include <iostream>

using namespace std;
UShort FindArea(UShort length, UShort width);// function prototype

int main ()
{
	UShort lengthOfYard;
	UShort widthOfYard;
	UShort areaOfYard;
	
	cout << "\nHow wide is your yard? ";
	cin >> widthOfYard;
	cout<< "\nHow long is your yard? ";
	cin >> lengthOfYard;
	
	areaOfYard = FindArea(lengthOfYard, widthOfYard);
	
	cout << "\nYour Yard is ";
	cout << areaOfYard;
	cout << " square feet\n\n";
	    return 0;
}
UShort FindArea(UShort l, UShort w)
{
	return l*w;
} 

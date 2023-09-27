#include <iostream>

using namespace std;
int main()
{
	typedef unsigned int Uint;
	Uint difference;
	Uint bigNumber = 100;
	Uint smallNumber = 50;
	difference = bigNumber - smallNumber;
	cout << "Difference is: " << difference;
	difference = smallNumber - bigNumber;
	cout << "\nNow difference is: " << difference << endl;
	  return 0;
}

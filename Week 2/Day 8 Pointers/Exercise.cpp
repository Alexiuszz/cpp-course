//Exercise

#include <iostream>

using namespace std;

int main()
{
	unsigned short int * pAge = 0;
	unsigned short int yourAge;
	 pAge = &yourAge;
	cout << "Adress of the integer: " << pAge << "\n";
	*pAge = 4;
	cout << "Value stored in the adress: " << *pAge << "\n";
return 0;
}

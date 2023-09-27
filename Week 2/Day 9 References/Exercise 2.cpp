#include <iostream>

using namespace std;

int main()
{
	int varOne =6;
	const int const * pInt = &varOne;
	
	cout << "varOne is: " << varOne << "\n";
	cout << " pInt is : " << pInt << "\n";
	
	*pInt = 7;
	
	cout << "varOne is: " << varOne << "\n";
	cout << " pInt is : " << pInt << "\n";
	
	int varTwo=3;
	int * pInt = varTwo;
	
	cout << "varOne is: " << varOne << "\n";
	cout << " pInt is : " << pInt << "\n";
return 0;
}

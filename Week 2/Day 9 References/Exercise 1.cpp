#include <iostream>
using namespace std;

int main()
{
	int anInt = 3;
	int & rInt = anInt;
	int * pInt = &anInt;
	
	cout << "the value is: "<< anInt << "\n";
	cout << "the reference is : " << rInt << "\n";
	cout << "the pointer : is " << *pInt << "\n";
	
	rInt = 6;
	
	cout << "the value is: "<< anInt << "\n";
	cout << "the reference is : " << rInt << "\n";
	cout << "the pointer : is " << *pInt << "\n";
	
	*pInt = 7;
	
	cout << "the value is: "<< anInt << "\n";
	cout << "the reference is : " << rInt << "\n";
	cout << "the pointer : is " << *pInt << "\n";
return 0;
}

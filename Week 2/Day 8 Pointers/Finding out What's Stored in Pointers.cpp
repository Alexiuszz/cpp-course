#include <iostream>

using namespace std;

typedef unsigned short int Ushort;
int main()
{
	unsigned short int myAge = 5; 
	Ushort yourAge = 10;
	Ushort  *pAge = &myAge;   // a pointer
	
	cout << "myAge:\t" << myAge << "\tyourAge:\t"<< yourAge<<"\n";
	cout << "&myAge:\t" << &myAge << "\t&yourAge:\t"<< &yourAge<<"\n";

	cout << "pAge: \t" << pAge << "\n";
	cout << "*pAge:\t" << *pAge << "\n";
	  
	pAge = &yourAge;	// reassign the pointer
	
	cout << "myAge;\t"<< myAge << "\tyourAge;\t"<< yourAge <<"\n";
	cout << "&myAge;\t"<< &myAge << "\t&yourAge;\t"<< &yourAge << "\n";

	cout << "pAge:\t"<< pAge << "\n";
	cout << "*pAge:\t"<< *pAge << "\n";
	
	cout << "&pAge:\t"<< pAge << "\n";
return 0;
}

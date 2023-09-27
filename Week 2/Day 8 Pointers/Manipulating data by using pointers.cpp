#include <iostream>

using namespace std;

typedef unsigned short int Ushort;
int main ()
{
	Ushort myAge;
	Ushort * pAge = 0;  // a pointer
	myAge = 5;
	cout << "myAge:  "<< myAge << "\n";
	
	pAge = &myAge;		// assign address of myAge to pAge 
	
	cout << " *pAge: "<< *pAge << "\n\n";
	
	cout << " *page = 7\n";
	*pAge = 7;            // sets myAge to 7
	
	cout << "*pAge: " << *pAge << "\n";
	cout << "myAge: " << myAge << "\n\n";
	
	cout << "*pAge = 9\n";
	
	myAge = 9;
	
	cout << "myAge: "<< myAge << "\n";
	cout << "*pAge: "<< *pAge <<" \n";
	
return 0;
}

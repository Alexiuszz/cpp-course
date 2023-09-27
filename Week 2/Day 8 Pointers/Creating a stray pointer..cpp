#include <iostream>
using namespace std;

typedef unsigned short int Ushort;

int main()
{
	Ushort * pInt = new Ushort;
	*pInt = 10;
	cout << "*pInt: " << *pInt << endl;
	delete pInt;
	pInt = 0;
	long * pLong = new long;
	*pLong = 90000;
	cout << "*pLong: "<< *pLong << endl;
	
	*pInt = 20; // uh oh, this was deleted!
	
	cout << "*pInt: "<< *pInt << endl;
	cout << " *pLong: "  << *pLong << endl;
	delete pLong;
return 0;
}


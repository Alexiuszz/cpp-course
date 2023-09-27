#include <iostream>
using namespace std;

int main()
{
	unsigned short shortVar = 5;
	unsigned long longVar = 65535;
	long sVar = -65535;
	
	cout << "shortVar:\t" << shortVar;
	cout << "  Address of shortVar:\t";
	cout <<   &shortVar   << "\n";
	
	cout << "longVar: \t"<< longVar;
	cout << "  Adress of longVar:\t";
	cout <<  &longVar   << "\n";
	
	cout << "sVar:\t" << sVar;
	cout << "  Address of sVar:\t";
	cout <<  &sVar      << "\n";
	
return 0;
}

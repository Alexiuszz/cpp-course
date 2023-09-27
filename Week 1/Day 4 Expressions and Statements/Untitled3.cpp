#include <iostream>

using namespace std;
int main()
{
	int myAge = 39;
	int yourAge = 39;
	cout << "I am: " << yourAge << " years old.\n";
	cout << "You are: " << yourAge << " years old\n";
	myAge++;
	++yourAge;
	cout << "One year later ...\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "Your are: " << yourAge << " years old\n";
	cout << "Another year passes\n";
	cout << "I am: " << myAge++ << " years old.\n";
	cout << "Your are: " << ++yourAge << " years old\n";
	cout << "Lets's print it again.\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "Your are: " << yourAge << " years old\n";
	  return 0;
}

#include <iostream>
// Demostrating the use of reference

using namespace std;

int main()
{
	int intOne;
	int &rSomeRef = intOne;
	
	intOne = 5;
	cout << "intOne: " << intOne << endl;
	cout << "rSomeRef: " << rSomeRef << endl;
	
	rSomeRef = 7;
	cout << "intOne: " << intOne << endl;
	cout << "rSomeRef: " << rSomeRef << endl;
return 0;
}

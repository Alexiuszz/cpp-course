//Arrays
#include <iostream>
using namespace std;
int main()
{
	int myArray[5];
	int i;
	for ( i=0; i<5; i++) //0-4
	{
		cout << "Value fo myArray[" << i << "]: ";
		cin >> myArray[i];
	}
	for(i=0; i<5; i++)
	cout << i << ": " << myArray[i] << "\n";
return 0;
}

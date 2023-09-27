#include <iostream>
typedef unsigned short int Ushort;
typedef unsigned long int Ulong;
using namespace std;

Ulong Pow(Ushort x, Ushort power);

int main()
{
	Ushort x;
	Ushort power;
	Ulong Answer;
	
	cout << "Enter value for x: ";
	cin >> x;
	cout << "\nTo what power??: ";
	cin >> power;
	
	Answer = Pow(x, power);
	
	cout << x << " to the " << power << "th power is: " << Answer << endl; 
}
Ulong Pow(Ushort x, Ushort power)
{
	if (x < 1)
	   return 1;
	if (power == 1)
    {	
	 return x;
   }
else
    return (x* Pow(x, power - 1));	   
   
}

   


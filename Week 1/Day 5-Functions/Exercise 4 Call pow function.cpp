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
 cout << "\nTo what power? ";
 cin >> power;
 
 Answer = Pow(x, power);
 if (Answer > 1)
cout << "Answer: " << Answer;
else
cout << "Error, can't divide by zero!";
   
   	return 0;
}

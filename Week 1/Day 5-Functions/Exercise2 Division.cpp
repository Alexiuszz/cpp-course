#include <iostream>
typedef float Ushort;
using namespace std;

float Division(Ushort x, Ushort y);
int main()
{
	Ushort x;
	Ushort y;
	float Answer;
	
	cout << "Enter Divisor (x): ";
	cin >> x;
	
	cout << "\nEnter Dividend (y): ";
	cin >> y;
	
    Answer = Division(x, y);
	
	cout << "Answer = " << Answer	<< "\n";
}

float Division(Ushort x, Ushort y)
{
	if (y == 0)
{
	return -1;
}
else
	return y / x;
}

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter values for a, b and c: ";
	cin >> a;
	cin >> b;
	cin >> c;

if (b*b>=4*a*c)
{
	int d= b*b-4*a*c;
	int e=(pow(d, (0.5)));
	int x=(-b+e)*0.5;
	int y=(-b-e)*0.5;
	cout << "\nvalue of x equals " << x;
    cout << "\nvalue of y equals " << y;
    cout << "\nvalue of d equals " << d;
    cout << "\nvalue of e equals " << e;
    cout << "\nExiting...\n\n";
}
else;
	cout << "Roots are imaginary";
       return 0;
}

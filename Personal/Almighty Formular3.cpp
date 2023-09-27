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
	int d= b*b-4*a*c;
	int e=(pow(d, (0.5)));
	int x=(-b+e)*0.5;
	int y=(-b-e)*0.5;
	cout << "\nvalues of d, e, x, y equals: " << x << ", " << y << ", " << d << " and " << e << " respectively.";
    cout << "\nExiting...\n\n";
       return 0;
}

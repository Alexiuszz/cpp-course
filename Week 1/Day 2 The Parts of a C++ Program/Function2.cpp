#include <iostream>

using namespace std;
int Add (int x, int y)
{
	cout << "In Add(), recieved " << x << " and " << y << "\n";
	return (x+y);
}

int main()
{
	cout << "I'm in main()\n";
	int a, b, c;
	cout << "Enter two numbers: ";
	cin >> a;
	cin >> b;
	cout << "\nCalling Add()\n";
	c=Add(a,b);
    cout << "\nBack in main().\n";
	cout << "c was set to " << c;
	cout << "\nExiting...\n\n";
	return 0;
}


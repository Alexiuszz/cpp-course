#include <iostream>

using namespace std;

int main()
{
	int counter = 0;
	int max;
	cout << "How many hellos?";
	cin >> max;
	for (;;)
	{
		if (counter < max)
		{
			cout << "Hello!\n";
			counter++;
		}
		else
			break;
	}
	return 0;
}

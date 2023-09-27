#include <iostream>

using namespace std;

int main()
{
	int counter = 0;
	while (1)
	{
		counter++;
		if (counter > 10)
		break;
	}
	cout << "Counter: "  << counter << "\n";
		return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int counter;
	cout << "Enter Number: ";
	cin >> counter;
	while (counter < 5)
	{
		counter++;
		cout << "counter: " << counter << "\n";
	
	}
	
	cout << "Complete. Counter: " << counter << ".\n";
		return 0;
}

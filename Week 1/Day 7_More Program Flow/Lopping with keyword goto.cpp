#include <iostream>

using namespace std;

int main()
{
	int counter = 0;
	
	loop: counter ++;
	cout << "counter :" << counter << "\n";
	
	if (counter < 5)
	goto loop;
	cout << "Complete. Counter: "<< counter << ".\n";
		return 0;
	 	
}

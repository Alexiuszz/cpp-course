#include <iostream>

using namespace std;

int main()
{
	int count = 100;
	
	do
	{
		if ((count % 2) == 0)
		cout << count << " ";
		count++;
	}
	while (count <= 200);
		return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int columns = 10;
	int rows = 10;
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		cout << "0"; 
		cout << "\n";
	}
		return 0;
}

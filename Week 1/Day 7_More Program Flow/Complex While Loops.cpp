#include <iostream>

using namespace std;
int main()
{
	unsigned short small;
	unsigned short large;
	const unsigned short MAXSMALL = 65535;
	
	cout << "Enter a smalll number: ";
		cin>> small;
		cout << "Enter a large number: ";
		cin >> large;
		
		cout << "small: " << small << "...";
		
		while (small < large && large > 0 && small < MAXSMALL)
		{
			if (small % 5000 == 0)
			cout << "[";
			
			small++;
			large-=2;
		}	
		
		cout << "\nSmall: " << small << " Large: " << large << endl;
			return 0;
}

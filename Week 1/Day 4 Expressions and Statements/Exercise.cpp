#include <iostream>
//Write a single if statement that examines two integer variables and changes the larger to
//the smaller, using only one else clause.  
using namespace std;
int main()
{
	int x, y;
	cout << "Enter two numbers.\n";
	cout << "First: ";
	cin >> x;
	
	cout << "\nSecond: ";
	cin >> y;
	
	if (x > y)
	{	
		x = y;
		cout << "x = " << x <<endl;
	}
	else
	{
	    y = x;
	    cout << "y = " << y <<endl;
	}
	
	     return 0;
}

#include <iostream>

using namespace std;
int main ()
{
	enum Days { Sunday, Monday, Tuesday, Wednesdy, Thursday, Friday, Saturday };
	
Days DayOff;
	int x;
	
	cout << "What day would you like off (0-6)? ";
	cin >> x;
    DayOff = Days(x);
	
if (DayOff == Sunday || DayOff == Saturday)
	  cout << "\nYou're already off on weekends!\n";
	else 
	  cout << "\nOkay, I'll put in the vacation day.\n";
	return 0;
}

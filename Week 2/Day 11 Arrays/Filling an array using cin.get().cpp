#include <iostream>
#include <cstring>
// using cin.get()
using namespace std;

int main(int argc, char *argv[])
{
	char buffer[80];
	cout <<  "Enter the string: ";
	cin.get( buffer, 79 );		// get up to 79 or new line
	cout << "Here's the buffer: "<< buffer << endl;
return 0;
}

#include <iostream>

using namespace std;


class Cat
{
	public:
		int itsAge;
		int itsWeight;
};


int main()
{ 
	Cat Frisky;
	Frisky.itsAge = 5;
	cout << "Frisky is a cat who is " ;
	cout << Frisky.itsAge << " years old.\n";
}

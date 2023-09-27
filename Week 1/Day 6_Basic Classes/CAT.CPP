#include "cat.hpp"

using namespace std;

Cat::Cat(int initialAge)
{
	itsAge = initialAge;
}

Cat::~Cat()
{
}


int main()
{
	Cat Frisky(5);
	Frisky.Meow();
	cout << "Frisky is a cat who is ";
	cout << Frisky.GetAge() << " years old.\n";
	Frisky.Meow();
	Frisky.SetAge(7);
	cout << "Now Frisky is " ;
	cout << Frisky.GetAge() << " years old.\n";
	  return 0;
}

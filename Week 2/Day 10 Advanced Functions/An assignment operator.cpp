#include <iostream>

// Copy Constructors
using namespace std;

class Cat
{
	public:
	Cat();
	//copy Constructor and Destructor eluded!
	int GetAge() const {return *itsAge; }
	int GetWeight() const { return *itsAge; }
	void SetAge(int age) { *itsAge = age; }
	Cat operator = (const Cat &);
	
    private:
    	int *itsAge;
    	int *itsWeight;
};

Cat::Cat()
{
	itsAge = new int;
	itsWeight = new int;
	*itsAge = 5;
	*itsWeight = 9;
}


Cat Cat::operator = (const Cat & rhs)
{
	if (this == &rhs)
	return *this;
	delete itsAge;
	delete itsWeight;
	itsAge = new int;
	itsWeight = new int;
	*itsAge = rhs.GetAge();
	*itsWeight = rhs.GetWeight();
	return *this;
}


int main()
{
	Cat Frisky;
	cout << "Frisky's Age:  " << Frisky.GetAge() << endl;
	cout << "Setting Frisky to 6...\n";
	Frisky.SetAge(6);
	Cat whiskers;
	cout << "whiskers' age: " << whiskers.GetAge() << endl;
	cout << "copying Frisky to whiskers...\n";
	whiskers = Frisky;
	cout << "whiskers' age: " << whiskers.GetAge() << endl;
return 0; 
}

#include <iostream>

using namespace std;


class Cat
{
	public:
		Cat();					// default constructor
		Cat(const Cat &);        // copy constructor
		~Cat();					// destructor
		int GetAge() const { return *itsAge; }
		int GetWeight() const { return *itsWeight;}
		void SetAge (int age) {*itsAge = age;		}
		
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

Cat::Cat(const Cat & rhs)
{
	itsAge = new int;
	itsWeight = new int;
	*itsAge = rhs.GetAge();
	*itsWeight = rhs.GetWeight();
}

Cat::~Cat()
{
	delete itsAge;
	itsAge = 0;
	delete itsWeight;
	itsWeight = 0;
}

int main()
{
	Cat frisky;
	cout << "frisky's age: " << frisky.GetAge() << endl;
	cout << "Setting frisky to 6...\n";
	frisky.SetAge(6);
	cout << "Creating boots from Frisky\n";
	Cat boots(frisky);
	cout << "frisky's age: " << frisky.GetAge() << endl;
	cout << "boot's age: " << boots.GetAge() << endl;
	cout << "Setting fisky  to 7...\n";
	frisky.SetAge(7);
	cout << "frisky's age: "<<frisky.GetAge() <<endl;
	cout << "boots's age: "<< boots.GetAge() << endl;
return 0;
}

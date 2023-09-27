#include <iostream>

using namespace std;

class Dog
{
	public:
	
		int GetAge();
		int Birthday(int Birthday);
		void WhatYear(int year);
		int Age();
		void Bark();
		void Dead();
	private:
		int itsAge;
};


int Dog::GetAge()
{
	return itsAge;
}
int Dog::Birthday(int Birthday)
{
	Birthday = Birthday;
}
void Dog::WhatYear(int year)
{
	cout << "What year is it: ";
	cin >> year;

}

int Dog::Age(int year)
{
	cout << "What year is it: ";
	cin >> year;
	itsAge = year - birthday;
}
	
void Dog::Bark()
{
	cout << "He should still bark if thats what your asking";
}
void Dog::Dead()
{
	cout << "Am sorry he'd be dead by then";
}

int main()
{
	enum Dog { Snoopy = 1, Scooby }
	}; 
	cout << "Which Dog Sir? ";
	cin << Dog;
	   if(Dog == Snoopy)
	   {
	   Snoopy.Birthday(2013);
	   
	   cout << "\nSnoopy is " << Snoopy.GetAge() << " years old sir.\n";
	   if (Age > 35)
	   Snoopy.Dead();
	else
	   Snoopy.Bark();
       }
        if(Dog == Scooby)
	   {
	   Scooby.Birthday(2012);
	   cout << "\nScooby is " << Scooby.GetAge() << " years old sir.\n";
	   if (itsAge > 35)
	   Scooby.Dead();
	else
	   Scooby.Bark();
       
}


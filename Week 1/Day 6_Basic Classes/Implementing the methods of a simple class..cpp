#include <iostream>

using namespace std;


class Cat							// begin decleration of the class
{
	public:							// begin public section
		int GetAge();				// accessor function 
		void SetAge (int age);		// accessor function
		void Meow();				// general function
	private:						// begin private section
		int itsAge;					// member variable
};

 // GetAge, Public accessor function 
 // return value of itsAge member
 int Cat::GetAge()
 {
 	return itsAge;
 }
 
 // definition of SetAge, public
 // accessor function
 // returns sets itsAge member
 void Cat::SetAge(int age)
 {
 	// set member variable its age to
 	// value passed in by parameter age 
 	itsAge = age;
 }
 
 // definition of Meow method 
 // returns: void
 // parameters: None
 // action: Prints "meow" to screen
 void Cat::Meow()
 {
 	cout << "Meow.\n";
 }
 
 //create a cat, set its age, have it 
 //meow, tell us its age, then meow again.
 int main()
{
	Cat Frisky;
	Frisky.SetAge(5);
	Frisky.Meow();
	cout << "Frisky is a cat who is " ;
	cout << Frisky.GetAge() << " years old.\n";
	Frisky.Meow();
	  return 0;
}

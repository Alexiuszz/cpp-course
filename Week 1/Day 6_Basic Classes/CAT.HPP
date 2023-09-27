#include <iostream>
using namespace std;
class  Cat
{
	public:
		Cat(int initialAge);
		~Cat();
		int GetAge() {return itsAge;}
		void SetAge(int age) { itsAge = age;}
		void Meow() { cout << "Meow.\n";}
	private:
		int itsAge;
};



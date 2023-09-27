#include <iostream>

using namespace std;


class Cat
{
	public:
		Cat(int initialAge);
		~Cat();
		int GetAge() const;
		void SetAge(int age);
		void Meow();
	private:
		int itsAge;
};

Cat::Cat(int initialAge)
{
	itsAge = initialAge;
	cout << "Cat Constructor\n";
}

Cat::~Cat()
{
	cout << "Cat Destructor\n";
}


int Cat::GetAge() const
{
	return (itsAge++);
}




void Cat::SetAge(int age)
{
	itsAge = age;
}






void Cat::Meow()
{
	cout << "Meow.\n";
}




int main()
{
	Cat Frisky;
	Frisky.Meow();
	Frisky.Bark();
	Frisky.itsAge = 7;
	return 0;
}

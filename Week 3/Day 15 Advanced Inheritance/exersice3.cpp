#include <iostream>

using namespace std;

class Animal;

void setValue(Animal&, int);
void setValue(Animal&, int,int);

class Animal
{
	public:

		friend void setValue(Animal&,int);
		friend void setValue(Animal& theAnimal, int theWeight, int theAge);
	private:
		int itsWeight;
		int itsAge;
};

void setValue(Animal& theAnimal, int theWeight)
{
	theAnimal.itsWeight=theWeight;
}

void setValue(Animal& theAnimal, int theWeight, int theAge)
{
	theAnimal.itsWeight=theWeight;
	theAnimal.itsAge = theAge;
}

int main()
{
	Animal peppy;
	setValue(peppy,5);
	setValue(peppy,7,9);

}

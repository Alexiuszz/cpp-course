// Dog shop program

#include <iostream>

using namespace std;

typedef unsigned short int Ushort;
class Dog;
{
public:
	Dog(Ushort Age, Ushort BirthYear);				//costructor
	~Dog();															//Destructor
	
	// Accessors
	Ushort GetAge() const { return itsAge; }
	Ushort GetBirthYear() const {return itsBirthYear; }	
	void SetYears(Ushort newAge, Ushort BirthYear);

//member functions (Attributes)	
	Bark();
	Behaviour();
	Type();
	Gender();
	
private:
	Ushort itsAge;
	Ushort itsBirthYear;
};
	
	

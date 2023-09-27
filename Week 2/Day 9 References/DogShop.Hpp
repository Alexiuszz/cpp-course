// Dog shop program

#include <iostream>
using namespace std;
typedef unsigned short int Ushort;
class Dog;
{
public:
	Dog(Ushort Age, Ushort birthYear, Ushort lifeSpan);				//costructor
	~Dog();															//Destructor
	
	// Accessors
	Ushort GetAge() const { return itsAge; }
	Ushort GetBirthYear() const {return itsBirthYear; }
	Ushort GetLifeSpan() const { return itsLifeSpan; }
	
	void SetAge(Ushort Age) {itsAge = age;	}
	void SetLifeSpan(Ushort LifeSpan) {itsLifeSpan = LifeSpan; 	}

//member functions (Attributes)	
	Bark();
	Behaviour();
	Type();
	Gender();
	
private:
	Ushort itsAge;
	Ushort itsBirthYear;
	Ushort itsLifeSpan;
};
	
	

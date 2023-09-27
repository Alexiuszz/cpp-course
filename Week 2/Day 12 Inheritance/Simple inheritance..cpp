#include <iostream>

using namespace std;
enum BREED {YORKE, CAIRN, DANDIE,SHETLAND, DOBERMAN, LAB};

class Mammal
{
	public:
		//constructors
		Mammal();
		~Mammal();
		
		//accessors
		int GetAge() const;
		void SetAge(int);
		int GetWeight() const;
		void SetWeight();
		
		//Other methods
		void Speak();
		void Sleep();
		
		
	protected: 
	int itsAge;
	int itsWeight;
};

class Dog: public Mammal
{
	public:
		//Constructors
		Dog();
		~Dog();
		
		//Accessors
		BREED GetBreed() const;
		void SetBreed(BREED);
		
		// Other methods
		// WagTail();
		// BegForFood();
	
	protected:
		BREED itsBreed;
};

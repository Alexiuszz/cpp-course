#include <iostream>

using namespace std;
enum  BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
	public:
		//constructors
		Mammal() { cout << "Mammal destructor...\n"; }
		~Mammal() { cout << "Mammal destructor...\n";}
		
		// other methods 
		void Speak() const { cout << "Mammal sound!\n"; }
		void Sleep() const { cout << "shh. I'm sleeping.\n"; }
		
		
	protected:
		int itsAge;
		int itsWeight;
};

class Dog: public Mammal
{
	public:
		
		//Construtors
		Dog() { cout << "Dog constructors...\n"; }
		~Dog() {cout << "Dog destructor...\n"; }
		
		// Other methods
		void WagTail() { cout << "Tail wagging...\n"; }
		void BegForFood() { cout << "Begging for food...\n"; }
		void Speak() const { cout << "Woof!\n"; }
		
	private:
		BREED itsBreed;
};

int main()
{
	Mammal bigAnimal;
	Dog fido;
	bigAnimal.Speak();
	fido.Speak();
return 0;
}

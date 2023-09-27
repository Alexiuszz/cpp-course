#include <iostream>

using namespace std;
enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
	public:
		// Constructors
		Mammal():itsAge(2), itsWeight(5){}
		~Mammal(){}
		
		//accessors
		int GetAge() const { return itsAge;}
		void SetAge (int age) {itsAge = age;}
		int GetWeight() const { return itsWeight; }
		void SetWeight(int weight) { itsWeight = weight; }
		
		// Other methods
		void Speak()const {cout <<"Mammal sound!\n"; }
		void Sleep ()const { cout << "shh. I'm sleeping.\n";}
		
		
		protected:
			int itsAge;
			int itsWeight;
};

class Dog: public Mammal
{
	public:
		
		// COnstructors
		Dog(): itsBreed(YORKIE){}
		~Dog(){}
		
		// Accessors
		BREED GetBreed() const {return itsBreed;}
		void SetBreed (BREED breed) { itsBreed = breed; }
		
		// Other methods
		void WagTail() { cout << "Tail wagging...\n"; }
		void BegForFood() { cout << "Begging for food...\n"; }
		
	private:
		BREED itsBreed;		
};

int main()
{
	Dog fido;
	fido.Speak();
	fido.WagTail();
	fido.BegForFood();
	cout << "Fido is "<< fido.GetAge() << "years old\n";
return 0;
}

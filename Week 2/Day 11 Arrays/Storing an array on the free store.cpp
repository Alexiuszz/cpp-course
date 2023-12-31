#include <iostream>
//an array of pointers to objects 
using namespace std;

class Cat
{
	public:
		Cat() {itsAge = 1; itsWeight =5; }
		~Cat() {}
		int GetAge() const {return itsAge; }
		int GetWeight() const {return itsWeight; }
		void SetAge(int age) { itsAge = age; }
		
	private:
		int itsAge;
		int itsWeight;
};

int main()
{
	Cat * Family[500];
	int i;
	Cat * pCat;
	for (i = 0; i < 500; i++)
	{
		pCat = new Cat;
		pCat->SetAge(2*i +1);
		Family[i] = pCat;
	}
	
	for (i = 0; i < 500; i++)
	{
		cout << "Cat #"<< i+1 << ": ";
		cout << Family[i]->GetAge() << endl;
	}
return 0;
}

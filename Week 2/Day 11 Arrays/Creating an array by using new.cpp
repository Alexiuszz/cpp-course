#include <iostream>

using namespace std;

class Cat
{
	public:
		Cat() { itsAge = 1; itsWeight= 5;}
		~Cat();
		int GetAge() const { return itsAge; }
		int GetWeight() const { return itsWeight; }
		void SetAge(int age) { itsAge = age; }
		
	private:
		int itsAge;
		int itsWeight;
};

Cat:: ~Cat()
{
//	cout << "Destructor called!\n";
}

int main()
{
	Cat * Family = new Cat[500];
	int i;
	Cat * pCat;
	for (i = 0; i < 500; i++)
	{
		pCat = new Cat;
		pCat-> SetAge(2*i +1);
		Family[i] = *pCat;
		delete pCat;
	}
	for (i =0; i < 500; i++)
	{
		cout << "Cat #" << i+1 << ": ";
		cout <<Family[i].GetAge() << endl;
	}
	
	delete [] Family;
	
return 0;
}


//Returning a reference to an object which no longer exists

#include <iostream>

using namespace std;

class SimpleCat
{
	public:
		SimpleCat (int age, int weight);
		~SimpleCat(){}
		int GetAge(){return itsAge; }
		int GetWeight() {return itsWeight;	}
	private:
		int itsAge;
		int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight):
	itsAge(age), itsWeight(weight) {}
	
SimpleCat &TheFunction();
	
int main()
{
	SimpleCat &rCat = TheFunction();
	int age = rCat.GetAge();
	cout << "rCat is : "<< age << "years old!\n";
return 0;
}

SimpleCat &TheFunction()
{
	SimpleCat Frisky(5,9);
	return Frisky;
}


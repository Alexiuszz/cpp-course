#include <iostream>

using namespace std;


class SimpleCat
{
	public:
		SimpleCat();
		~SimpleCat();
	private:
		int itsAge;
};

SimpleCat::SimpleCat()
{
	cout << "Constructor called,\n";
	itsAge = 1;
}

SimpleCat::~SimpleCat()
{
	cout << "Destructor called.\n";
}

int main()
{
	cout<< "SimpleCat Frisky...\n";
	SimpleCat Frisky;
	cout << "SimpleCat *pRags = new SimpleCat...\n";
	SimpleCat * pRags =  new SimpleCat;
	cout << "delete pRags...\n";
	delete pRags;
	
	cout << " Exiting, watch Frisky go...\n";
	return 0;
}

	

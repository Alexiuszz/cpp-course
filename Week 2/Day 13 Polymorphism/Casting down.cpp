//using dynamic_cast
// using rttti
 #include <iostream>
 enum TYPE { HORSE, PEGASUS };
using namespace std;

class Horse
{
	public:
		virtual void Gallop() { cout <<  "Galloping ...\n"; }
		
	private:
		int itsAge;
};

class Pegasus : public Horse
{
	public:
		
		virtual void Fly() { cout <<"I can fly!\n"; }
};

const int NumberHorses = 5;
int main()
{
	Horse* Ranch[NumberHorses];
	Horse* pHorse;
	int choice, i;
	for (i=0; i<NumberHorses; i++)
	{
		cout << "(1)Horse (2)Pegasus: ";
		cin >> choice;
		if ( choice == 2)
			pHorse = new Pegasus;
		else
			pHorse = new Horse;
		Ranch[i] = pHorse;
	}
	cout << "\n";
	for (i=0; i<NumberHorses; i++)
	{
		Pegasus *pPeg = dynamic_cast< Pegasus *> (Ranch[i]);
		if (pPeg)
			pPeg->Fly();
		else
			cout << "Just a horse\n";
		
		delete Ranch[i];
	}
return 0;
}

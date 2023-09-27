//The counter class 
//Overloading operator++
#include <iostream>
using namespace std;

typedef unsigned short int Ushort;
class Counter
{
	public:
		Counter();
		~Counter(){}
		Ushort GetItsVal() const {return itsVal; }
		void SetItsVal(Ushort x) {itsVal = x;}
		void Increment() { ++itsVal; }
		void operator++ () {++itsVal; }
		
	private:
		Ushort itsVal;
		
};

Counter::Counter():
	itsVal(0)
	{};
	
int main()
{
	Counter i;
	cout << "The value of i is " << i.GetItsVal()  <<endl;
	i.Increment();
	cout << "The value of i is "<< i.GetItsVal() << endl;
	++i;
	cout << "The vlaue of i is " << i.GetItsVal() << endl;
return 0;
}

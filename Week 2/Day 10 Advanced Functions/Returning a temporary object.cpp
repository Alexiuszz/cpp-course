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
		Counter operator++ ();	
	
	private:
		Ushort itsVal;
		
};

Counter::Counter():
	itsVal(0)
	{};
	
Counter Counter::operator++()
{
	++itsVal;
	Counter temp;
	temp.SetItsVal(itsVal);
	return temp;
}

int main()
{
	Counter i;
	cout << "The value of i is " << i.GetItsVal() << endl;
	i.Increment();
	cout << "The value of i is " << i.GetItsVal() << endl;
	++i;
	cout << "The value of i is " << i.GetItsVal() << endl;
	Counter a = ++i;
	cout << "The value of a: " << a.GetItsVal();
	cout << " and i: "  << i.GetItsVal()  << endl;
return 0;
}
	
	

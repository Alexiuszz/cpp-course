#include <iostream>
// Retruning the dereferenced this poointer

using namespace std;
typedef unsigned short Ushort;

class Counter
{
	public:
		Counter();
		~Counter(){}
		Ushort GetItsVal()const { return itsVal; }
		void SetItsVal(Ushort x) {itsVal = x; } // does nothiing in this program
		const Counter& operator++ ();   // prefix
		const Counter operator++ (int); // postfix
		
	private:
		Ushort itsVal;		
};

Counter::Counter():
	itsVal(0)
	{};
	
const Counter& Counter::operator++()
{
	++itsVal;
	return *this;
}

const Counter Counter::operator++(int)
{
	Counter temp(*this);
	++itsVal;
	return temp;
}

int main()
{
	Counter  i;
	cout << "The value of i is " << i.GetItsVal() << endl;
	++i;
	cout << "The value of i is "<< i.GetItsVal() << endl;
	++i;
	cout << "The value of i is :" << i.GetItsVal() << endl;
	Counter a = ++i;
	cout << "The value of a: " << a.GetItsVal();
	cout << " and i: " << i.GetItsVal() << endl;
	a = i++;
	cout << "The value of a: " << a.GetItsVal();
	cout << "and i: " << i.GetItsVal() << endl;
return 0;
}

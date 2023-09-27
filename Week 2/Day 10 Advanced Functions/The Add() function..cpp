//Add Function
#include <iostream>

using namespace std;
typedef unsigned short Ushort;

class Counter
{
	public:
		Counter();
		Counter(Ushort initialValue);
		~Counter(){}
		Ushort GetItsVal()const { return itsVal; }
		void SetItsVal(Ushort x) {itsVal = x;}
		Counter Add(const Counter &);
	
	private:
		Ushort itsVal;
	
};

Counter::Counter(Ushort initialValue):
	itsVal(initialValue)
	{}
	
Counter::Counter():
	itsVal(0)
	{}
	
Counter Counter::Add(const Counter & rhs)
{
	return Counter(itsVal+ rhs.GetItsVal());
}

int main()
{
	Counter varOne(2), varTwo(4), varThree;
	varThree = varOne.Add(varTwo);
	cout << "varOne: " <<varOne.GetItsVal()  << endl;
	cout << "varTwo: " <<varTwo.GetItsVal()  << endl;
	cout << "varThree: " <<varThree.GetItsVal()  << endl;	
	
return 0;
}


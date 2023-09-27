#include <iostream>
//Constructor as conversion operator
using namespace  std;

typedef unsigned short int Ushort;

class Counter
{
	public:
		Counter();
		Counter(Ushort val);
		~Counter(){}
		Ushort GetItsVal()const {return itsVal; }
		void SetItsVal(Ushort x) {itsVal = x; }
		operator unsigned short();
	private:
		Ushort itsVal;

};

Counter::Counter():
	itsVal(0)
	{}
	
Counter::Counter(Ushort val):
	itsVal(val)
	{}
	
Counter::operator unsigned short ()
{
	return ( Ushort (itsVal) );
}
	
int main()
{
	Counter ctr(5);
	Ushort theShort = ctr;
	cout << " theShort: " << theShort << endl;
return 0;
}

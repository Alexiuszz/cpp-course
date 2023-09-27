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
	private:
		Ushort itsVal;

};

Counter::Counter():
	itsVal(0)
	{}
	
Counter::Counter(Ushort val):
	itsVal(val)
	{}
	
	
int main()
{
	Ushort theShort = 5;
	Counter theCtr = theShort;
	cout << " theCtr: " << theCtr.GetItsVal() << endl;
return 0;
}

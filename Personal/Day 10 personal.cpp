#include <iostream>
using  namespace std;


class Counter
{
	public:
		Counter();
		Counter(int x,int  y);
		Counter(const Counter &);
		~Counter();
		
		int  GetVal1() const {return *cnt1; }
		int  GetVal2() const {return *cnt2; }
		void SetVal1(int  num1) { *cnt1 = num1;}
		void Increment () { ++*cnt1, ++*cnt1; }
		void operator++ () { ++*cnt1, ++*cnt1; }
		
	private:
		int  *cnt1;
		int  *cnt2;
};

Counter::Counter()
{
		cnt1 = new int;
	 	cnt2 = new int;
	 	*cnt1 = 0;
	 	*cnt2 = 1;
}

Counter::Counter(int  x, int  y)
{
	*cnt1 = x;
	*cnt2 = y; 
}

Counter::Counter(const Counter & rhs)
{
		cnt1 = new int;
	 	cnt2 = new int;
	 	*cnt1 = rhs.GetVal1();
	 	*cnt2 = rhs.GetVal2();
}

Counter::~Counter()
{
	delete cnt1;
	*cnt1 = 0;
	delete cnt2;
	*cnt2 = 0;
}

int main()
{
	Counter i;
	cout << " Get value for i1 " << i.GetVal1() << endl;
	cout << " Get value for i2 " << i.GetVal2() << endl;
	++i;
	Counter j(i);	
	cout << " Get value for j1 " << j.GetVal1 () << endl;
	cout << " Get value for j2 " << j.GetVal2 () << endl;
return 0;
}

#include <iostream>
using namespace std;

class SimpleCircle 
{
	public:
	SimpleCircle();
	SimpleCircle(int);
	SimpleCircle(const SimpleCircle &);
	~SimpleCircle(){}
	void SetItsRadius(int);
	int GetItsRadius()const {return *ItsRadius; }
	const 	SimpleCircle& operator++ ();
	const	SimpleCircle operator++ (int);
	SimpleCircle& operator =(const SimpleCircle & );
	
	private:
		int *ItsRadius;
};

SimpleCircle::SimpleCircle()
{
	ItsRadius = new int;
	*ItsRadius = 5;
	}
	
SimpleCircle::SimpleCircle(int rad)
{
	ItsRadius = new int;
	*ItsRadius = rad;
	}

SimpleCircle::SimpleCircle(const SimpleCircle & rhs)
{
	ItsRadius = new int;
	*ItsRadius = rhs.GetItsRadius();
}


const SimpleCircle& SimpleCircle::operator++()
{
	++(*ItsRadius);
	return *this;
}
	
const SimpleCircle SimpleCircle::operator++(int)
{
	SimpleCircle temp(*this);
	++(*ItsRadius);
	return temp;
}	

SimpleCircle& SimpleCircle::operator =(const SimpleCircle & rhs)
{
	if (this == &rhs)
	return *this;
	*ItsRadius = rhs.GetItsRadius();
	return *this;
}

int main()
{
	SimpleCircle circle1;
	cout << "Circle1 radius is: " << circle1.GetItsRadius() << endl;
	SimpleCircle circle2(9);
	cout << "Circle2 radius is: " << circle2.GetItsRadius() << endl;
	circle1++;

	++circle2;
	cout << "Circle1 radius is: " << circle1.GetItsRadius() << endl;
	cout << "Circle2 radius is: " << circle2.GetItsRadius() << endl;
	circle1 = circle2	;
	cout << "Circle1 radius is: " << circle1.GetItsRadius() << endl;
	cout << "Circle2 radius is: " << circle2.GetItsRadius() << endl;
return 0;
	 
}


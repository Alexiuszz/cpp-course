#include <iostream>
using namespace std;
class SimpleCircle
{
public:
// constructors
SimpleCircle();
SimpleCircle(int);
SimpleCircle(const SimpleCircle &);
~SimpleCircle() {}
// accessor functions
void SetRadius(int);
int GetRadius()const;
// operators
const SimpleCircle& operator++();
const SimpleCircle operator++(int);
SimpleCircle& operator=(const SimpleCircle &);
private:
int *itsRadius;
};
SimpleCircle::SimpleCircle()
{itsRadius = new int(5);}
SimpleCircle::SimpleCircle(int radius)
{itsRadius = new int(radius);}
SimpleCircle::SimpleCircle(const SimpleCircle & rhs)
{
int val = rhs.GetRadius();
itsRadius = new int(val);
}
SimpleCircle& SimpleCircle::operator=(const SimpleCircle & rhs)
{
if (this == &rhs)
return *this;
*itsRadius = rhs.GetRadius();
return *this;
}
const SimpleCircle& SimpleCircle::operator++()
{
++(itsRadius);
return *this;
}
// Operator ++(int) postfix.
// Fetch then increment
const SimpleCircle SimpleCircle::operator++ (int)
{
// declare local SimpleCircle and initialize to value of *this
SimpleCircle temp(*this);
++(itsRadius);
return temp;
}
int SimpleCircle::GetRadius() const
{
return *itsRadius;
}
int main()
{
SimpleCircle CircleOne, CircleTwo(9);
CircleOne++;
++CircleTwo;
cout << "CircleOne: " << CircleOne.GetRadius() << endl;
cout << "CircleTwo: " << CircleTwo.GetRadius() << endl;
CircleOne = CircleTwo;
cout << "CircleOne: " << CircleOne.GetRadius() << endl;
cout << "CircleTwo: " << CircleTwo.GetRadius() << endl;
return 0;
}

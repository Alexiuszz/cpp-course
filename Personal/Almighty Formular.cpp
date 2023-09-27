#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char** argv)
{
	int a=1;
	int b=-14;
	int c=48;
	int d= b*b-4*a*c;
	int e=(pow(d, (0.5)));
	int x=(-b+e)*0.5;
	int y=(-b-e)*0.5;
cout << x << ", " << y << ", " << d << ", " << e;
return 0;
}

#include <iostream>
using namespace std;

typedef unsigned long int Ulong;

Ulong fib(Ulong position);
int main()
{
	Ulong answer, position;
	cout << "Which position? ";
	cin >> position;
	cout << "\n";
	
	answer = fib(position);
	
	cout << answer << " is the ";
	cout << position << "th Fibonacci number.\n";
 return 0;
}
Ulong fib(Ulong n)
{
	Ulong minusTwo = 1, minusOne = 1, answer = 2;
	if (n < 3)
		return 1;
		
	for (n -= 3; n; n--)
	{
		minusTwo = minusOne;
		minusOne = answer;
		answer = minusOne + minusTwo;
	}
	return answer;
}



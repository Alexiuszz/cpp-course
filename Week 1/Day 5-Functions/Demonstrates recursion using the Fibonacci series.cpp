// Fibonacci series, addition of last two integers to form another and so on
// Fibonacci Find.
//Finds the nth Fibonacci number.
//uses this algorithm: Fib(n) = fib(n-1) + fib(n-2)
//Stop conditions: n < 3 
#include <iostream>

using namespace std;
int fib(int n);

int main()
{
	
	int n, answer;
	cout << "Enter number to find: ";
	cin >> n;
	
	cout <<"\n\n";
	
	answer = fib(n);
	
	cout << answer << " is the " << n << "th Fibonacci number\n";
	  return 0;
}

int fib(int n)
{
	cout << "Processing fib(" << n << ")... ";
	
	if(n < 3)
	{
		cout << "Return 1!\n";
		  return (1);
	}
	else
	{
		cout << "Call fib(" << n - 2 << ") and fib(" << n - 1 <<").\n";
		  return( fib(n - 2) + fib(n - 1));
	}
}



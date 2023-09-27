#include <iostream>

using namespace std;


int Doubler(int AmountToDouble);

int main()
{
	
	int result = 0;
	int input;
	
	cout << "Enter a value between 0 and 10,000 to double: ";
	cin >> input;
	
	cout << "\nBefore doubler is called... ";
	cout << "\ninput: " << input << " double: "<< result << "\n";
	
	result = Doubler(input);
	
	cout << "\nBack from doubler...\n";
	cout << "\ninput: " << input << " doubled: " << result << "\n";
    
    
      return 0;
}

int Doubler(int original)
{
	if (original <=10000)
	   return original * 2;
	else 
	    return -1;
	   cout << "You can't get here!\n"; 
}


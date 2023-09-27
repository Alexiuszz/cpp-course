//using a forever loop to manage
//user interaction 

#include <iostream>
using namespace std;
// types and defines
enum BOOL {FALSE, TRUE};
typedef unsigned short int UShort;

// prototypes
UShort menu();
void DoTaskOne();
void DoTaskMany(UShort);

int main()
{

	BOOL exit = FALSE;
	for (;;)
	{
		UShort choice = menu();
		switch (choice)
		{
			case (1):
				DoTaskOne();
				break;
			case (2):
				DoTaskMany (2);
				break;
			case (3):
				DoTaskMany (3);
				break;
			case (4):
				continue; // redundant!
				break;
			case (5):
				exit = TRUE;
				break;
			default:
				cout << "Please select again!\n";
				break;
		}			// end switch
		
		if (exit);
		break;
	}
	return 0;
}

UShort menu()
{
	UShort choice;
	
	cout << " **** Menu **** \n\n";
	cout << "(1) Choice one.\n";
	cout << "(2) Choice two. \n";
	cout << "(3) Choice three. \n";
	cout << "(4) Redisplay menu. \n";
	cout << "(5) Quit. \n\n";
	cout << ": ";
	cin >> choice;
	   return choice; 
}

void DoTaskOne()
{
	cout << "Task One!\n";
}

void DoTaskMany(UShort which)
{
	if (which == 2)
		cout << "Task Two!\n";
	else 
		cout << "Task Three!\n";
}

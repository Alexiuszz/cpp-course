#include <iostream>
using namespace std;

class Line
{
	public:
		Line(int length): itsLength(length){HowManyLines++;	}
		~Line(){HowManyLines--; }
		int GetLength(){ return itsLength; }
		void SetLength(int length) { itsLength = length;}
		static int GetHowMany(){return HowManyLines;}
	private:
		static int HowManyLines;
		int itsLength;
};

int Line::HowManyLines = 0;

int main()
{
	int (Line::*pFunc)()=&Line::GetLength;
	
	Line *NumbOfLines[3];
	int i;
	int choice; 
	for(i=0; i<3; i++)
	NumbOfLines[i]= new Line(i);
	
	for(i=0; i<3; i++)
	{
	cout << "There are ";
	cout << Line::GetHowMany();
	cout << " Lines left!\n";
	cout << "Deleting the on which is ";
	cout<< (NumbOfLines[i]->*pFunc) ();
	cout << " cm long\n";
	delete NumbOfLines[i];
	NumbOfLines[i] = 0;
}
	return 0;	
	
}

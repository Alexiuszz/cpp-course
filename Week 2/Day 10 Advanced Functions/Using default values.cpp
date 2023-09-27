#include <iostream>

using namespace std;
typedef unsigned short int Ushort;
enum BOOL {FALSE, TRUE};

// Rectangle class declaration
class Rectangle 
{
	public:
		//constructors
		Rectangle (Ushort width, Ushort height);
		~Rectangle (){cout << "destructor \n";}
		void DrawShape(Ushort aWidth, Ushort aHeight, BOOL UseCurrentVals= FALSE) const;
		
	private:
		Ushort itsWidth;
		Ushort itsHeight;
};

//costructor implementation
Rectangle::Rectangle(Ushort width, Ushort height):
	itsWidth(width),			//initialize
	itsHeight(height)
	{
		cout << "Constructor \n";
	}					//empty body
	
	
	// default value used for third parameter
	void Rectangle::DrawShape(
	Ushort width, 
	Ushort height,
	BOOL UseCurrentValue
	) const
	{
		int printWidth;
		int printHeight;
		
		if (UseCurrentValue == TRUE)
		{
			printWidth = itsWidth;			//printWidth and printHeight are variables local to the function
			printHeight = itsHeight;		//use current class values 
		}
		else
		{
			printWidth = width;				// use parameter values
			printHeight = height;
		}
		
		
		for  (int i = 0; i <printHeight; i++)
		{
			for (int j = 0; j<  printWidth; j++)
			{
				cout << "*";
			}
			cout << "\n";
		}
	}
	
	// Driver program to demonstrate overloaded functions
	int main()
	{
		// intitialize a rectangle to 30, 5
		Rectangle theRect(30, 5);
		cout << "DrawShape(0,0,TRUE)...\n";
		theRect.DrawShape(0,0,TRUE);
		cout << "DrawShape(40,2)...\n";
		theRect.DrawShape(40,2);
	return 0;
	}

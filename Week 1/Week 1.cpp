#include <iostream>
using namespace std;
typedef unsigned short int Ushort;
typedef unsigned long int Ulong;
enum BOOL { FALSE, TRUE};
enum CHOICE { DrawRect = 1, GetArea, GetPerim, ChangeDimensions, Quit};

//Rectangle class declration
class Rectangle 
{
	public:
		// contructirs 
		Rectangle(Ushort width, Ushort height);
		~Rectangle();
		
		// accessors 
		Ushort GetHeight() const { return itsHeight; }
		Ushort GetWidth() const { return itsWidth; }
		Ulong GetArea() const { return itsHeight * itsWidth; }
		Ulong GetPerim() const { return 2 * itsHeight + 2 * itsWidth;}
		void SetSize(Ushort newWidth, Ushort newHeight);
		
		//Misc. methods 
		void DrawShape() const;
		
	private:
		Ushort itsWidth;
		Ushort itsHeight; 
};

// Class method implementations 
void Rectangle::SetSize(Ushort newWidth, Ushort newHeight)
{
	itsWidth = newWidth;
	itsHeight = newHeight;
}


Rectangle:: Rectangle(Ushort width, Ushort height)
{
	itsWidth = width;
	itsHeight = height;
}

Rectangle::~Rectangle() {}

Ushort DoMenu();
void DoDrawRect(Rectangle);
void DoGetArea(Rectangle);
void DoGetPerim(Rectangle);

int main()
{
	// initialize a rectangle to 10, 20
	Rectangle theRect(30,5);
	
	Ushort choice = DrawRect;
	Ushort fQuit = FALSE;
	
	while (!fQuit)
	{
		choice = DoMenu();
		if (choice < DrawRect || choice > Quit)
		{
			cout << "\nInvalid Choice, please try again.\n\n";
			continue;
		}
		switch (choice)
		{
			case DrawRect:
				DoDrawRect(theRect);
				break;
			case GetArea:
				DoGetArea(theRect);
				break;
			case GetPerim:
				DoGetPerim(theRect);
				break;
			case ChangeDimensions:
				Ushort newLength, newWidth;
				cout << "\nNew width: ";
				cin >> newWidth;
				cout << "New height: ";
				cin >> newLength;
				theRect.SetSize(newWidth, newLength);
				DoDrawRect(theRect);
				break;
			case Quit:
					fQuit = TRUE;
					cout << "\nExiting...\n\n";
					break;
				default:
					cout << "Error in choice!\n";
					fQuit = TRUE;
					break;
		}	// end switch
	}	// end while
}	// end main


Ushort DoMenu()
{
	Ushort choice;
	cout << "\n\n *** Menu *** \n";
	cout << "(1) Draw Rectangle\n";
	cout << "(2) Area\n";
	cout << "(3) Perimeter\n";
	cout << "(4) Resize\n";
	cout << "(5) Quite\n";
	
	cin >> choice;
	return choice;
} 

void DoDrawRect (Rectangle theRect)
{
	Ushort height = theRect.GetHeight();
	Ushort width = theRect.GetWidth();
	
	for (Ushort i = 0; i < height; i++)
	{
		for (Ushort j = 0; j < width; j++)
			cout << "*";
			cout << "\n";
	}
}


void DoGetArea(Rectangle theRect)
{
	cout << "Area: " <<  theRect.GetArea() << endl;
}

void DoGetPerim(Rectangle theRect)
{
	cout << "Perimeter: " << theRect.GetPerim() << endl;
}

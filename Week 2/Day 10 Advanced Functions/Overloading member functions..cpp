#include <iostream>

using namespace std;
typedef unsigned short int Ushort;
enum BOOl {FALSE, TRUE};

//Rectangle class decleration
class Rectangle
{
public:
	//constructors
	Rectangle(Ushort width, Ushort height);
	~Rectangle(){};
	
	// overloaded class function DrawShape
	void DrawShape /*same name and return type*/ ()const;
	void DrawShape /* with this function*/(Ushort aWidth, Ushort aHeight) const;

private:
	Ushort itsWidth;
	Ushort itsHeight;
};

//Constructor implementation
Rectangle::Rectangle(Ushort width, Ushort height)
{
	itsWidth = width;
	itsHeight = height;
}


//Overloaded DrawShape - takes no values
// Draws based on Current class  member  valued
void Rectangle::DrawShape() const
{
	DrawShape( itsWidth, itsHeight );
}


//overloaded DrawShape - takes two values
// draws based on the parameters 
void Rectangle :: DrawShape (Ushort width, Ushort height ) const
{
	for (Ushort i = 0; i < height; i++)
	{
		for (Ushort j = 0; j < width; j++)
		{
			cout << "x";
		}
		cout << "\n";
	}
}

//Driver program to demonstrate overloaded funtions
int main()
{
	//initialize a rectangle to 30, 5
	Rectangle theRect(30, 5);
	cout << "DrawShape(): \n";
	theRect.DrawShape();
	cout << "\nDrawShape(40, 2): \n";
	theRect.DrawShape(40, 2);
return 0;
}


typedef unsigned short int Ushort;
#include <iostream>

using namespace std;
unsigned long int Perimeter(Ushort length, Ushort width);

int main()
{
	int lengthOfRectangle, widthOfRectangle, perimeterOfRectangle;
	cout << "Enter length of Rectangle: ";
	cin >> lengthOfRectangle;
	
	cout  << "\nEnter width of Rectangle: ";
    cin >> widthOfRectangle;
    
    perimeterOfRectangle = Perimeter(lengthOfRectangle, widthOfRectangle);
    
    cout << "\n";
    cout << "Perimeter of Rectangle is: " << perimeterOfRectangle << "\n";
      return 0;
}

unsigned long int Perimeter(Ushort l, Ushort w)
{

	return (2 * l) + (2 * w);
}

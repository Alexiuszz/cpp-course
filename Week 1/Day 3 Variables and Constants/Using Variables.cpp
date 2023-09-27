#include <iostream>

using namespace std;
 typedef unsigned short int USHORT;
int main()
{
	//using typedef keyword to create alias
    USHORT Width = 5, Length;
    Length = 10;
    USHORT Area = Width * Length;
    
    cout << "Width: " << Width << "\n";
    cout << "Lenght: " << Length << endl;
    cout << "Area: "<< Area << endl;
       return 0;
}

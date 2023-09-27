#include <iostream>

using namespace std;
int main()
{
	int RedSoxScore, YankeesScore;
	cout << "Enter the score for Red Sox: ";
	cin >> RedSoxScore;
	
	cout << "\nEnter the score for the Yankees: ";
	cin >> YankeesScore;
	
	cout << "\n";
	
	if (RedSoxScore > YankeesScore)
	cout << "Go Sox!\n";
	
	if (RedSoxScore < YankeesScore)
	{
		cout << "Go Yankees!\n";
		cout << "Happy days in New York!\n";
	}
	
	if (RedSoxScore == YankeesScore)
	{
		cout << "A tie, it can't be.\n";
		cout << "Give me the real score for the Yankees: ";
		cin >> YankeesScore;
		
		if (RedSoxScore > YankeesScore)
		    cout << "\nKnew it! Go Sox!";
		    
		if (RedSoxScore < YankeesScore)
		    cout << "\nKnew it! Go Yankess!";
		    
		if (YankeesScore == RedSoxScore)
		    cout << "\nWow, it was really a tie!";
	}
	
	cout << "\nThanks for telling me.\n";
	  return 0;
}

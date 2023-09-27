//Linked list imolementaion

#include <iostream>
using namespace std;

//object to add to the list 
class Cat
{
	public:
		Cat() { itsAge = 1; }
		Cat(int age):itsAge(age){}
		~Cat(){}
		int GetAge() const { return itsAge; }
	private:
		int itsAge;
};

//manages list, orders by cat's age!
class Node
{
	public:
		Node (Cat*);
		~Node();
		void SetNext(Node * node) { itsNext= node; }
		Node * GetNext() const { return itsNext; }
		Cat * GetCat() const { return itsCat; }
		void Insert(Node *);
		void Display();
	private:
		Cat *itsCat;
		Node * itsNext;
};


Node::Node(Cat* pCat):
	itsCat(pCat),
	itsNext(0)
	{}
	
Node::~Node()
{
	cout << "Deleting node...\n";
	delete itsCat;
	itsCat = 0;
	delete itsNext;
	itsNext = 0;
}

//****************************
// Insert
// Orders cats bassed on their ages
// Algorithm: if you are last in line, add the cat
// Otherwise, if the new cat is older than you
// and also younger than the next in line, insert it after
// this one. Otherwise call insert on the next in line
//**************************
void Node::Insert(Node* newNode)
{
	if(!itsNext)
		itsNext = newNode;
	else
	{
		int NextCatAge = itsNext->GetCat()->GetAge();
		int NewAge = newNode->GetCat()->GetAge();
		int ThisNodeAge = itsCat->GetAge();
		
		if ( NewAge>=ThisNodeAge && NewAge < NextCatAge)
		{
			newNode->SetNext(itsNext);
			itsNext = newNode;
		}
		else
			itsNext-> Insert(newNode);
	}
}

void Node::Display()
{
	if (itsCat->GetAge() > 0)
	{
		cout << "My cat is ";
		cout << itsCat->GetAge() << "years old\n";
	}
	if (itsNext)
		itsNext->Display();
}

int main()
{
	
	Node *pNode = 0;
	Cat * pCat = new Cat(0);
	int age;
	
	Node *pHead = new Node(pCat);
	
	while (1)
	{
		cout << "New Cat's Agge? (0 to quit): ";
			cin>> age;
		if(!age)
			break;
		pCat = new Cat(age);
		pNode = new Node(pCat);
		pHead->Insert(pNode);
	}
	pHead->Display();
	delete pHead;
	cout << "Exiting...\n\n";
return 0;
}

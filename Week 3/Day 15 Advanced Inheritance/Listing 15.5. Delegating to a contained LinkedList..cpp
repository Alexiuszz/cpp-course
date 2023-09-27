#include <iostream>
using namespace std;

typedef unsigned long Ulong;
typedef unsigned short Ushort;
// *************** Part *******

// Abstract base class of parts 
class Part
{
	public:
		Part():itsPartNumber(1) {}
		Part(Ulong PartNumber):
			itsPartNumber(PartNumber){}
		virtual ~Part(){}
		Ulong GetPartNumber() const 
			{ return itsPartNumber; }
		virtual void Display()const = 0; // pure virtual (must be overridden)
	private:
		Ulong itsPartNumber;
};

// implementation of pure virtual so that
// derived classes can chain up
void Part::Display() const
{
	cout <<"\nPart Number: " << itsPartNumber << endl;
}

// *************** Car Part *************

class CarPart : public Part
{
	public:
		CarPart():itsModelYear(94){}
		CarPart(Ushort year, Ulong PartNumber);
		virtual void Display() const
		{
			Part::Display();
			 cout << "Model Year: ";
			cout << itsModelYear << endl;
		}
	private:
		Ushort itsModelYear;
};

CarPart::CarPart(Ushort year, Ulong PartNumber):
	itsModelYear(year),
	Part(PartNumber)
	{}
	
	
//************* Airplane Part *************

class AirPlanePart : public Part
{
	public:
		AirPlanePart():itsEngineNumber(1){};
		AirPlanePart
			(Ushort EngineNumber, Ulong PartNumber);
		virtual void Display() const
		{
			Part::Display();
			 cout << "Engine No.: ";
			cout << itsEngineNumber << endl;
		}
	private:
		Ushort itsEngineNumber;
};

AirPlanePart::AirPlanePart
	(Ushort EngineNumber, Ulong PartNumber):
	itsEngineNumber (EngineNumber),
	Part(PartNumber)
	{}

// *********** Part Node ********88
class PartNode
{
	public:
		PartNode(Part*);
		~PartNode();
		void SetNext(PartNode * node)
			 { itsNext = node; }
		PartNode * GetNext() const;
		Part * GetPart() const;
	private:
		Part * itsPart;
		PartNode * itsNext;
};
// PartNode Implementations...

PartNode::PartNode(Part* pPart):
	itsPart(pPart),
	itsNext(0)
	{}
	
PartNode::~PartNode()
{
	delete itsPart;
	itsPart = 0;
	delete itsNext;
	itsNext = 0;
}

//Returns NULL if no next PartNode
PartNode * PartNode::GetNext() const
{
	return itsNext;
}

Part * PartNode::GetPart() const
{
	if (itsPart)
		return itsPart;
	else
		return NULL;  // error
}



// ************** PartsList **************
class PartsList
{
	public:
		PartsList();
		~PartsList();
		//needs copy constructor and operator equals!
		void Iterate(void (Part::*f)()const) const;
		Part* Find(Ulong & position, Ulong PartNumber) const;
		Part* GetFirst() const;
		void Insert(Part *);
		Part* operator[](Ulong) const;
		Ulong GetCount() const { return itsCount; }
		static PartsList& GetGlobalPartsList()	
		{
			return GlobalPartsList;
		}
	private:
		PartNode * pHead;
		Ulong itsCount;
		static PartsList GlobalPartsList;
};

PartsList PartsList::GlobalPartsList;

// Implementation for lists...
PartsList:: PartsList():
	pHead(0),
	itsCount(0)
	{}
	
PartsList::~PartsList()
{
	delete pHead;
}

Part* PartsList::GetFirst() const
{
	if (pHead)
		return pHead->GetPart();
	else
		return NULL;		//error catch here	
}

Part * PartsList::operator[](Ulong offSet) const
{
	PartNode* pNode = pHead;
	
	if(!pHead)
		return NULL; // error catch here
	
	if (offSet > itsCount)
		return NULL;// error
		
	for(Ulong i=0; i<offSet; i++)
		pNode = pNode->GetNext();
		
		return pNode->GetPart();
}

Part* PartsList::Find(
	Ulong & position, 
	Ulong PartNumber) const
{
	PartNode * pNode = 0;
	for (pNode = pHead, position = 0;
		pNode!=NULL; 
		pNode = pNode->GetNext(), position++)
	{
		if (pNode->GetPart()->GetPartNumber() == PartNumber)
			break;
	}
	if (pNode == NULL)
		return NULL;
	else
		return pNode->GetPart();
}

void PartsList::Iterate(void (Part::*func)()const) const
{
	if (!pHead)
		return;
	PartNode* pNode = pHead;
	do
		(pNode->GetPart()->*func)();
	while (pNode = pNode->GetNext());
}

void PartsList::Insert(Part* pPart)
{
	PartNode * pNode =  new PartNode(pPart);
	PartNode * pCurrent = pHead;
	PartNode * pNext = 0;
	
	Ulong New = pPart->GetPartNumber();
	Ulong Next = 0;
	itsCount++;
	
	if(!pHead)
	{
		pHead = pNode;
			return;
	}
	
	// if this one is smaller than head
	// this one is the new head
	if (pHead->GetPart()->GetPartNumber() > New)
	{
		pNode->SetNext(pHead);
		pHead = pNode;
			return;
	}
	
		for (;;)
		{
			// if there is no next, append this new one
			if(!pCurrent->GetNext())
			{
				pCurrent->SetNext(pNode);
				return;
			}
			
			//if this goes after this one and before the next
			// then insert it here, otherwise get the next
			pNext = pCurrent->GetNext();
			Next = pNext->GetPart()->GetPartNumber();
			if (Next > New)
			{
				pCurrent->SetNext(pNode);
				pNode->SetNext(pNext);
				return;
			}
			pCurrent = pNext;
		}
	}
	
	
	
class PartsCatalog
{
	public:
		void Insert(Part *);
		Ulong Exists (Ulong PartNumber);
		Part * Get(int PartNumber);
		PartsCatalog operator+(const PartsCatalog &);
		void ShowAll() { thePartsList.Iterate(&Part::Display);}
	private:
		PartsList thePartsList;
};
	
void PartsCatalog::Insert(Part * newPart)
{
	Ulong partNumber = newPart -> GetPartNumber();
	Ulong offset;
	
	if (!thePartsList.Find(offset, partNumber))
	
		thePartsList.Insert(newPart);
	else
		{
			cout << partNumber << " was the ";
			switch (offset)
			{
				case 0: cout << "first "; break;
				case 1: cout << "second "; break;
				case 2: cout << "third "; break;
				default: cout << offset+1 << "th  ";
			}
			cout << "entry. Rejected!\n";
		}
}

Ulong PartsCatalog::Exists(Ulong PartNumber)
{
	Ulong offset;
	thePartsList.Find(offset,PartNumber);
		return offset;
}

Part * PartsCatalog::Get(int PartNumber)
{
	Ulong offset;
	Part * thePart = thePartsList.Find(offset,PartNumber);
		return thePart;
}


int main()
	{
		PartsCatalog pc;
		Part * pPart = 0;
		Ulong PartNumber;
		Ushort value;
		Ulong choice;
		
		while (1)
		{
			cout << "(0)Quit (1)Car (2)Plane: ";
			cin >> choice;
			
			if (!choice)
				break;
				
			cout << "New PartNumber?: ";
			cin >> PartNumber;
			
			if (choice == 1)
			{
				cout << "Model Year?: ";
				cin >> value;
				pPart = new CarPart(value,PartNumber);
			}
			else
			{
				cout << "Engine Number?: ";
				cin >> value;
				pPart = new AirPlanePart(value, PartNumber);
			}
			pc.Insert(pPart);
		}
		pc.ShowAll();
		return 0;
	}

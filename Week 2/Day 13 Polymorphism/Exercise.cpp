/************************************
3. Write a program that derives Car and Bus from the class Vehicle. Make Vehicle be an
ADT with two pure virtual functions. Make Car and Bus not be ADTs.

4. Modify the program in Exercise 3 so that Car is an ADT, and derive SportsCar, Wagon,
and Coupe from Car. In the Car class, provide an implementation for one of the pure virtual
functions in Vehicle and make it non-pure.
*************************************/

#include <iostream>

using namespace std;
enum BOOL { FALSE, TRUE};
enum TYPE {BigType, SmallType};
class Vehicle
{
	public:
		virtual void Start() = 0;
		virtual void Move() = 0;
};

class Car : virtual public Vehicle
{
	public:
	Car(){}
	~Car(){}
	void Start(){ cout << "Start...";}
};

class Bus : virtual public Vehicle
{
	public:
	Bus(TYPE type):
	itsType(type){}
	~Bus(){}
	void Start(){cout <<" Start Bus\n";}
	void Move (){ cout<<" Move Bus\n";}
	int GetItsType(){ return itsType;}
	private:
		TYPE itsType;
};

class SportsCar : virtual public Car
{
	public:
		SportsCar(int speed):
			itsSpeed(speed){}
		~SportsCar(){}
		void Start(){ cout << "Start SportsCar\n";}
		void Move() { cout << " Move SportsCar ... very Fast\n";}
		int GetItsSpeed() const {return itsSpeed;}
	private:
		int itsSpeed;			
};

class Wagon : virtual public Car
{
		public:
		Wagon(int speed):
			itsSpeed(speed){}
		~Wagon(){}
		void Start(){ cout << "Start Wagon\n";}
		void Move() { cout << " Move Wagon ... very Slow\n";}
		int GetItsSpeed() const {return itsSpeed;}
	private:
		int itsSpeed;			
};

int main()
{
	Vehicle *pVehicle = 0;
	int choice;
	BOOL fQuit = FALSE;
	
	while(1)
	{
		cout << "(1)SportsCar (2) Wagon (3)Bus (0)Quit: ";
		cin >> choice;
		
		switch (choice)
		{
			
			case 1: pVehicle = new SportsCar(1000);
			break;
			case 2: pVehicle =  new Wagon(200);
			break;
			case 3: pVehicle = new Bus(BigType);
			break;
			default: fQuit = TRUE;
			break;
		}
		if(fQuit)
		break;
		
		pVehicle->Start();
		pVehicle->Move();		
		delete pVehicle;
		cout<< "\n";
		

	}
	return 0;
}

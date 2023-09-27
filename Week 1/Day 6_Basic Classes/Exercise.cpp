#include <iostream>

using namespace std;
class Employee
{
	public:
		void SetAge(int age) {Eage = age ;}
		int GetAge() const {return Eage;}
		
		
		void SetYearsOfService(int years) {yearsOfService = years;}
		int GetYearsOfService() const {return yearsOfService;}
		
		void SetSalary(int salary) {Esalary = salary ;}
		int GetSalary() const{return Esalary;}
		
		int Rfigures();
		
		
	private:
		int Eage;
		int yearsOfService;
		int Esalary;
};

int Employee::Rfigures()
{
	if (Esalary >= 1000)
	{
			Esalary = (Esalary - (Esalary % 1000));
			cout << "In round figures $" << Esalary << "\n";
		}
	
	else
		cout << "His Salary is quite small\n";
	
}

int main()
{
	Employee John;
	Employee Sam;
	
	John.SetAge(43);
	Sam.SetAge(39);
	
	John.SetYearsOfService(12);
	Sam.SetYearsOfService(6);
	
	John.SetSalary(15004);
	Sam.SetSalary(8500);
	
	cout << "John, an employee " << John.GetAge() << " years of age.\n"; 
	cout << "Has worked here for " << John.GetYearsOfService() << " years.\n";
	cout << "He earns $" << John.GetSalary() << " monthly.\n";
	John.Rfigures();
	
	cout << "\nSam, an employee " << Sam.GetAge() << " years of age.\n"; 
	cout << "Has worked here for " << Sam.GetYearsOfService() << " years.\n";
	cout << "He earns $" << Sam.GetSalary() << " monthly.\n";
	Sam.Rfigures();
		return 0;
	} 




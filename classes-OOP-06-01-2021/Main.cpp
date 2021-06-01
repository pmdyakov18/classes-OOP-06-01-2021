#include<iostream>
#include <vector>
#include < string>
using namespace std;

class Vehicle
{
public:
	
	int f1 = 0;
	Vehicle()
	{
		cout << typeid(*this).name()<<" > Constructor" << endl;
	}
	~Vehicle()
	{
		cout << typeid(*this).name() << " > Destructor" << endl;
	}
protected:
	int f2;
private:
	int f3;
};
class Car : public Vehicle
{
	public:
		void toString()
		{
			cout << "Car" << endl;
		}
	Car()
	{
		cout << typeid(*this).name() << " > Constructor" << endl;
	}
	~Car()
	{
		cout << typeid(*this).name() << " > Destructor" << endl;
	}
};
int main()
{
	Vehicle* c1= new Car();
	
}
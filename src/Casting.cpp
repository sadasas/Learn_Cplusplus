#include "../hfile//TheChernoCplusplusTutorial.h"
#include <iostream>


class Base
{
public:
	virtual void tes() {};
};

class Derived : public Base
{
public :
	
};

class AnotherDerived : public Base
{

};

int fun(int* ptr)
{
	return (*ptr + 10);
}

// casting in compile time checking
void StaticCasting()
{
	AnotherDerived* anotherClass = new AnotherDerived;
	Base* base = anotherClass;
	//give an eror in compile time  because the actual entity is not derived type
	Derived* derived = static_cast<Derived*>(base);
	
	

}


void ConstCasting()
{
	const int val = 10;
	int* ptr = const_cast<int*>(&val);
	std::cout << fun(ptr);
}

// casting in runtime time checking
// must have polimorphine type data
void DinamicCasting()
{
	AnotherDerived* derived = new AnotherDerived;
	Base* base = derived;
	//if the casting is valid is return the given type
	//otherwise return null 
	Derived* anotherClass = dynamic_cast<Derived*>(base);
}
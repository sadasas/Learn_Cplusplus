#include "../hfile//TheChernoCplusplusTutorial.h"
#include <iostream>


class Base
{
	
};

class Derived : public Base
{
public :
	int Name = 0;
	Derived(int name) :Name(name)
	{
		std::cout << name <<std::endl;
	}
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

	AnotherDerived* derived = new AnotherDerived;
	Base* base = derived;
	Derived* anotherClass = static_cast<Derived*>(base);
	if(anotherClass) std::cout << anotherClass->Name << std::endl;
	

}

void ConstCasting()
{
	const int val = 10;
	int* ptr = const_cast<int*>(&val);
	std::cout << fun(ptr);
}
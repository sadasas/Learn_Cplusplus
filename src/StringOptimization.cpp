#include <iostream>
#include "hfile/TheChernoCplusplusTutorial.h"

//#define NON_OPTIMAZE 1

uint32_t s_allocation = 0;

//overload new operator
void* operator new(size_t size)
{
	s_allocation++;

	std::cout << "Allocating : " << size << "bites" << std::endl;
	return malloc(size);	
}

#if NON_OPTIMAZE
void PrintName(const std::string& data)
{
	std::cout << data << std::endl;
}
#else
void PrintName(std::string_view data)
{
	std::cout << data << std::endl;
}
#endif

void ArrayOptExample()
{

#if NON_OPTIMAZE
	std::string name = "wahyu";
	std::string firstName = name.substr(0, 2);
	std::string lastName = name.substr(2, 3);
	int a = 2;
	PrintName(name);

#else 
	const char* name = "wahyu";
	//refer to a constant contiguous sequence of char-like objects with the first element of the sequence at position zero
	std::string_view firstName(name, 2);
	std::string_view lastName(name +2, 3);
	PrintName(name);

#endif
	std::cout << "Allocation : " << s_allocation << std::endl;
}
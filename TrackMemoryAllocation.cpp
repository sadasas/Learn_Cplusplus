#include <memory>
#include "hfile/TheChernoCplusplusTutorial.h"
#include <iostream>


struct AllocationsMatrics
{
	uint32_t totalAllocated;
	uint32_t totalFried;

	uint32_t CurrentUsaged() { return totalAllocated - totalFried; }
};

static AllocationsMatrics s_allocationMatrics;


//overload operator new
void* operator new (size_t size)
{
	s_allocationMatrics.totalAllocated += size;
	return malloc(size);
}

//overload operator delete
void operator delete(void* memory ,size_t size)
{
	s_allocationMatrics.totalFried += size;
	free(memory);
}

void TrackMemoryExample()
{
	{
		std::string name = "wahyu";

		std::cout << "Memory usaged : " << s_allocationMatrics.CurrentUsaged() << std::endl;
	}
	std::cout << "Memory free : " << s_allocationMatrics.totalFried << std::endl;
}
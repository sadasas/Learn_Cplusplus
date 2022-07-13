#include <iostream>
#include "../hfile/TheChernoCplusplusTutorial.h"



template<typename T, size_t S>
class Array
{
public:
	int Size() { return S; }

	T& operator [](size_t index)
	{
			return m_Data[index]; 
	}
	//if variable const
	const T& operator [](size_t index) const
	{
		return m_Data[index];
	}
private:
	T m_Data[S];
};


void StackDataStructureExample()
{
	Array<int, 5> a;

	std::cout << a.Size() << std::endl;

	const auto& b = a;
	
	for (size_t i = 0; i < a.Size(); i++)
	{
		
		std::cout << b[i] << std::endl;
	}
}
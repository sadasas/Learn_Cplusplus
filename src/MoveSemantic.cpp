#include <iostream>
#include "../hfile/TheChernoCplusplusTutorial.h"
class String
{
public:
	String() = default;
	String(const char* string)
	{
		printf("Created\n");
		m_Size = std::strlen(string);
		m_Data = new char[m_Size];
		std::memcpy(m_Data, string, m_Size);
	}
	String(const String& other)
	{
		printf("Copied\n");
		m_Size = other.m_Size;
		m_Data =other.m_Data;
		std::memcpy(m_Data, other.m_Data, m_Size);
	}
	~String()
	{
		printf("deleted");
		delete m_Data; 
	
	}
private:
	char* m_Data;
	uint32_t m_Size;

};

class Entity
{
public:
	Entity(const String& name):m_Name(name) {};
private:
	String m_Name;
};

void MoveSemanticExample()
{
	Entity a("aaa");
}
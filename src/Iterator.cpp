#include <unordered_map>
#include <iostream>

#include "../hfile/TheChernoCplusplusTutorial.h"


void IteratorExample()
{
	std::unordered_map <std::string, int> map;
	map["wahyu"] = 4;

	
	//iterate with structure binding c++11
	for ( const auto[key,value] : map)
	{
		std::cout << value << std::endl;
	}

	for (std::unordered_map<std::string, int>::const_iterator it = map.begin(); it != map.end(); it++)
	{
		std::cout << it->first << std::endl;
	}

}
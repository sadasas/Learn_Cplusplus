#include <fstream>
#include <optional>
#include <iostream>
#include "..\hfile\TheChernoCplusplusTutorial.h"



/// <summary>
/// return optional value 
/// </summary>
/// <param name="pathFile"></param>
/// <returns></returns>
std::optional <std::string> ReadDataAsString(const std::string& pathFile)
{

	std::ifstream stream(pathFile);
	if (stream)
	{
		std::string result;
		stream.close();
		return result;
	}

	return {};
}


void OptionalExample()
{
	std::optional <std::string> data = ReadDataAsString("data.txt");

	std::cout << data.value_or("null") << std::endl;
}

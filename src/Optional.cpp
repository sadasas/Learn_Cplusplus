#include <fstream>
#include <optional>
#include <iostream>
#include "..\hfile\TheChernoCplusplusTutorial.h"




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

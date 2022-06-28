#include <variant>
#include<iostream>
#include "../hfile//TheChernoCplusplusTutorial.h"

void VariantExample()
{
	std::variant<int, bool> num;
	num = 10;
	
	std::cout << std::get<int>(num) << std::endl;
}





#include <iostream>
#include "hfile/TheChernoCplusplusTutorial.h"
class Singleton
{
public:
	//avoid copy constructor
	Singleton(const Singleton&) = delete;
	
	
    static Singleton& Get()
	{

		static Singleton s_Instance;
		return s_Instance;
	}
	void Function() {}
	static float Float() { return Get().member; }
private:

	float member = 10;
	//avoid implicit default constructor in public
	Singleton () {}
	static Singleton s_Instance;
};






void SingletonExample()
{

	

	float c = Singleton::Float();

	std::cout << c << std::endl;

}
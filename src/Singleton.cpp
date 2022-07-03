


#include <iostream>
#include <fstream>
#include <string>
#include "../hfile/TheChernoCplusplusTutorial.h"

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




class FileStream
{
public:
	static FileStream& Get()
	{
		static FileStream s_Instance;
		return s_Instance;
	}
	static void Save() { return Get().SaveFile(); }
	static std::string Load() { return Get().LoadFile(); }

private:
	FileStream(){}
	FileStream(const FileStream&);
	static	FileStream s_Instance;
	void SaveFile()
	{
		std::ofstream myFile;
		myFile.open("example.txt");
		myFile << "TES";
		myFile.close();
	}

	std::string LoadFile()
	{
		std::string line;
		std::ifstream myFile("Example.txt");
		if (myFile.is_open())
		{
			std::getline(myFile, line);
		}

		return line;

	}

};



void SingletonExample()
{

 std::cout <<FileStream::Load();

	
}
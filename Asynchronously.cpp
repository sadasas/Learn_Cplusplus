#include <iostream>
#include <thread>
#include <future>
#include <string>
#include <chrono>

#include "hfile/TheChernoCplusplusTutorial.h"



std::string FetchDataFromDB(std::string receivedData)
{

	std::this_thread::sleep_for(std::chrono::seconds(5));

	return "db_" + receivedData;
}

std::string FetchDataFromFile(std::string receivedData)
{

	std::this_thread::sleep_for(std::chrono::seconds(5));

	return "File_" + receivedData;
}



void NotUseAsyncExample()
{
	std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
	std::string data = FetchDataFromDB("data");
	std::string data2 = FetchDataFromFile("data");

	auto end = std::chrono::system_clock::now();

	auto diff = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();


	std::cout << "Duration" << diff << std::endl;
}

void UseAsyncExample()
{
	std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
	std::future<std::string> resultFromDB = std::async(std::launch::async, FetchDataFromDB, "data");

	std::string fileData = FetchDataFromFile("data");

	std::string dBData = resultFromDB.get();

	auto end = std::chrono::system_clock::now();

	auto diff = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();


	std::cout << "Duration " << diff << std::endl;

}

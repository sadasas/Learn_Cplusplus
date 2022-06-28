#include <iostream>
#include <chrono>
#include <array>
#include <memory>


/// <summary>
/// simple benchmark using timer
/// </summary>
class  Timer
{
public:
	Timer()
	{
		m_startTimePoint = std::chrono::high_resolution_clock::now();
	 }
	~Timer()
	{
		Stop();
	}

	void Stop()
	{
		auto endTimePoint = std::chrono::high_resolution_clock::now();

		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_startTimePoint).time_since_epoch().count();
		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimePoint).time_since_epoch().count();

		auto duration = end - start;
		double ms = duration * 0.001;

		std::cout << duration << " us (" << ms << " ms)\n";

	}

private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_startTimePoint;
};

void IterationEx()
{
		int value = 0;
	{
		Timer time;
		for (int i = 0; i < 10000; i++)
			value += 2;
	}
	

	std::cout << value << std::endl;
}

void SmartPointerBenchmark()
{
	struct Vector2
	{
		float x, y;
	};

	std::cout << "shared \n";
	{
		std::array<std::shared_ptr<Vector2>, 10000> sharedPtrs;
		Timer timer;
		for (int i = 0; i < sharedPtrs.size(); i++)
		{
			sharedPtrs[i] = std::make_shared<Vector2>();
		};
	}
	std::cout << " new shared\n ";
	{
		std::array <std::shared_ptr<Vector2>, 10000> sharedPtrs;
		Timer timer;
		for (int i = 0; i < sharedPtrs.size(); i++)
		{
			sharedPtrs[i] = std::shared_ptr<Vector2>();
		};
	}

	std::cout << " unique shared \n";
	{
		std::array < std::unique_ptr<Vector2>, 10000> sharedPtrs;
		Timer timer;
		for (int i = 0; i < sharedPtrs.size(); i++)
		{
			sharedPtrs[i] = std::make_unique<Vector2>();
		};
	}
}


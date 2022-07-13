
#include <iostream>
#include "../hfile/TheChernoCplusplusTutorial.h"



struct Vector3
{

	float x = 0.0f, y = 0.0f, z = 0.0f;
	Vector3(){}
	Vector3(float scalar)
		:x(scalar),y(scalar),z(scalar){}
	Vector3(float x, float y, float z)
		:x(x),y(y),z(z){}

	Vector3(const Vector3& other)
		:x(other.x),y(other.y),z(other.z)
	{
		std::cout << "Copy" << std::endl;
	}
	Vector3( Vector3&& other)
		:x(other.x), y(other.y), z(other.z)
	{
		std::cout << "move" << std::endl;
	}

	Vector3& operator = (const Vector3& other)
	{
		std::cout << "Copy" << std::endl;
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	}
	Vector3& operator = (Vector3&& other)
	{
		std::cout << "Move" << std::endl;
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	}

	~Vector3()
	{
		std::cout << "Destroy" << std::endl;
	}

};

template <typename T>
class Vector
{
public:
	Vector()
	{
		ReAlloc(2);
	}
	void PushBack(const T& value)
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);

		m_Data[m_Size] = value;
		m_Size++;
	}
	void PushBack( T&& value)
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);

		m_Data[m_Size] = std::move(value);
		m_Size++;
	}

	template<typename... Args>
	T& EmplaceBack(Args&&... arg)
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);
		m_Data[m_Size] = T(std::forward<Args>(arg)...);
		m_Size++;
		return m_Data[m_Size];
	}
	void PopBack()
	{
		m_Size--;
		m_Data[m_Size].~T();
	}

	void Clear()
	{
		for (size_t i = 0; i < m_Size;i++)
			m_Data[i].~T();
	}

	size_t Size() const { return m_Size; } 
	size_t Capacity() const { return m_Capacity; } 
	auto* Data() const { return m_Data; } 

	T& operator [](size_t index)
	{
		return m_Data[index];
	}

	const T& operator [](size_t index) const
	{
		return m_Data[index];
	}
private:
   void	ReAlloc(size_t newCapacity)
	{
		T* newBlock = new T[newCapacity];

			if (newCapacity <= m_Size)
				m_Size = newCapacity;
		for (size_t i = 0; i < m_Size; i++)
		{
			newBlock[i] = m_Data[i];
		}
			delete[] m_Data;
			m_Data = newBlock;
			m_Capacity = newCapacity;
		
	}
	T* m_Data = nullptr;
	size_t m_Size =0;
	size_t m_Capacity=0;
};

template<typename T>
void PrintVector(const Vector<T>& vector)
{
	for (size_t i = 0; i < vector.Size(); i++)
	{
		std::cout << vector[i] << std::endl;
	}
}


void PrintVector(const Vector<Vector3>& vector)
{
	for (size_t i = 0; i < vector.Size(); i++)
	{
		std::cout << vector[i].x << vector[i].y << vector[i].z << std::endl;
	}
}

void HeapDataStructureExample()
{
	Vector<Vector3> vector;
	vector.PushBack(std::move(Vector3()));
	
	PrintVector(vector);
	
}
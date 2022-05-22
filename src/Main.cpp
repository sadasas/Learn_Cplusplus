#include "..\hfile\Log.h"
#include <string>
#include <memory>
#include <iostream>
#include <vector>
using namespace std;

//template in class
template<typename T, int A>
class Person
{
    T availableSlot[A];
public:

    T GetSlot() const
    {
        return availableSlot;
    }
};

//template in function
template<typename type>
void Print(type value)
{
    cout << value << endl;
}

int main()
{
    Print(5);
    Print("sadsa");

    Person<int,4> wahyu;
    wahyu.GetSlot();
    cout << "end";

}
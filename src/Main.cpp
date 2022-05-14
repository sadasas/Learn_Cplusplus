#include "..\hfile\Log.h"
#include <string>
using namespace std;



class Vector2
{
   
public:
    int _a, _b;
    Vector2(int a, int b) : _a(a), _b(b) {};

    //overloading + operator
    Vector2 operator +(const Vector2 other) const
    {
        return Vector2(_a + other._a, _b + other._b);
    }

};

//overloading << operator
 ostream& operator<< (ostream& stream, const Vector2 point)
{
     stream << point._a << "," << point._b;
}
int main()
{
    
    Vector2 pointA(2, 1);
    Vector2 pointB(3, 1);

    cout << pointA + pointB;
    cout << "end";

}
#include "..\hfile\Log.h"
#include <string>
#include <memory>
using namespace std;

class Vector2
{
 
public:
    int _a, _b;

    Vector2(int a, int b) : _a(a), _b(b) {};

    Vector2 operator +(const Vector2 other) const
    {
        return Vector2(_a + other._a, _b + other._b);
    }
};
int main()
{
    {
        weak_ptr<Vector2> pointA;
        {
            //automate destroy when reference count all 0 / null
            shared_ptr<Vector2> pointB(new Vector2(1, 2));
            //reference count increase of pointB
            pointA = pointB;
        }
        // out of scope of pointB but count reference still alive
        // not  freeing memory of pointB
    }
    // out of scope of pointA and the reference count to the poinB decrease
    // the reference count  pointB are 0 
    // automate freeing memory of pointB allocation
    
    

    
    cout << "end";

}
#include "..\hfile\Log.h"
#include <string>
#include <memory>
using namespace std;

class Vector2
{
     
public:
    int _a, _b;

    Vector2(int a, int b) : _a(a), _b(b) {};

    int Subtraction()
    {
        return _a + _b;
    }


};
int main()
{
    {
      Vector2* pointA = new Vector2(1, 2);
      cout <<  pointA->Subtraction();

    }
 
    
    cout << "end";

}
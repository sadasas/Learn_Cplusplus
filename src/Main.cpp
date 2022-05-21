#include "..\hfile\Log.h"
#include <string>
#include <memory>
#include <iostream>
#include <vector>
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

    Vector2(const Vector2& other)
    {
        cout << "Copied" << endl;
    }

};
int main()
{
    {
        vector<Vector2> points;
        //instance in main function and copied to actual data alocation of points
        points.push_back({ 1,2 });
        points.push_back({ 2,2 });

        //instance in actual data allocation of points
        points.emplace_back(Vector2(1, 2));
        points.emplace_back(Vector2(2, 2));


        for (int i = 0; i < points.size(); i++)
        {
            cout << points[i].Subtraction() << endl;
        }

    }
 
    
    cout << "end";

}
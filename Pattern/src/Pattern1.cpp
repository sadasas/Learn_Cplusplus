#include "..\hfile\Pattern1.h"
#include <iostream>

using namespace std;

int Pattern1::Calculate(int length)
{   
    cout << endl << endl << endl;

     for (int i = 0; i <= length; i++)
    {
        for (int a = 0; a <= i; a++)
        {
            cout << "*";
        }
        
        cout << endl;
    };
    
    for (int i = 0; i <= length; i++)
    {
        for (int a = length; a >= i; a--)
        {
             cout << "*";
        }

         cout << endl;
        
    };

    return length;
}
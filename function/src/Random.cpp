#include "..\hfile\Random.h"
#include <cstdlib>
#include <iostream>

using namespace std;



int Random::Generate()
{ 
    char Continue;
    int Result;
    while (true)
    {
        cout << "Throw dice? y/n" << endl;
        cin >> Continue;

        if(Continue == 'y')
        {
            Result = 1 + rand()% 6;
            cout << Result << endl;
        }
        else if(Continue=='n')
        {
            break;
        }
    }
 return Result ;
}
   




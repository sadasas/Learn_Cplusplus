#include <cmath>
#include "..\hfile\Cmath.h"
#include <iostream>

using namespace std;


double Cmath::Calculate()
{ 
    int x = 0;
    double result = 0.0;
    cout << "Calculate rot of : " << endl;
    cin >> x;

    result = sqrt(x);
    cout << "rot is : "<< result << endl;

    return result;
   
}

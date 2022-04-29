#include <iostream>
#include "..\hfile\Calculator.h"

using namespace std;


int main()
{   
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout<< "Calculator Console Application"<<endl<<endl;
    cout<< "Please enter to perform. Format: a+b | a-b | a/b | a*b"<<endl;

    Calculator d;

    while (result==0)
    {
       cin >> x >> oper >> y ;
       result = d.Calculate(x,oper,y);
       cout << "Result is" << result << endl;
    }
    
    return 0;
}
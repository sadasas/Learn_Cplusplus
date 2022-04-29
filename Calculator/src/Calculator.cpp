#include "..\hfile\Calculator.h"

double Calculator::Calculate(double x,char oper,double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '/':
        return x / y;
    case '*':
        return x * y;
    default :
        return 0.0;
   
    }
}

// void Input::Input()
// {
//     double x = 0.0;
//     double y = 0.0;
//     double result = 0.0;
//     char operator= '+';

//     cout<< "Calculator Console Application"<<endl<<endl;
//     cout<< "Please enter to perform. Format: a+b | a-b | a/b | a*b"<<endl;

//     cin >> x >> operator >> y >> endl;

// }

// void Output::Result()
// {
//     cout<<
// }


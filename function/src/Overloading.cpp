#include "..\hfile\Overloading.h"
#include <iostream>
      
using namespace std;

double Overloading::Result()
{
    double length;
    double widht;
    double side;
    double result = 0.0;
    char choose;
    
   
    cout << "Calculate Rectangle Area" << endl <<endl;
    cout << "format : length and width ? y/n " << endl;
    cin >> choose;
    
    if(choose=='y')
    {
        cout << "Enter length and width. format : L W"<<endl;
        cin  >> length >> widht ;

        result = Area(length,widht);

        cout << "Result :" << result <<endl;

    }
    else if(choose=='n')
    {
        cout << "Enter side. format : S"<<endl;
        cin  >> side ;
        result = Area(side);
        cout << "Result :" << result <<endl;

    }
    return result;
};

double Overloading ::Area(double length,double width)
{
    return length * width;
};

double Overloading ::Area(double side)
{
    return side * side;
};
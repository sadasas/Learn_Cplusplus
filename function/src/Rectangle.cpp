#include "..\hfile\TwoDimentional.h"
#include <iostream>

using namespace std;

double TwoDimentional::Input()
{
    double length;
    double width;

    cout << "Two Dimentional Area and Around" << endl << endl;
    cout << "Enter the length :";
    cin >> length;
    cout << "Enter the whidth :";
    cin >> width;

    TwoDimentional c;
    c.Around(length,width);
    cout << endl;
    c.Area(length,width);
    return 0.0;

}

double TwoDimentional::Area(double length,double width )
{   
  
    double area;

    area  = length * width;
    cout << "Area : " << area;
   
    return area;
}

double TwoDimentional::Around(double length,double width)
{   
  
    double around;

    around = length + width;
    cout << "Around : " << around;

    return around;
}
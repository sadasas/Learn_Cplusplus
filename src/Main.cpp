#include "..\hfile\Log.h"
#include <string>
using namespace std;



class Person
{
public :
    int a, b;

    //the method cannot change a variable member
    //return value cannot be change by a content or address.
   const int* const  GetVar () const
    {
        a = 2;
        return &a;
    }

};

void PrintPerson( Person& a)
{
   // reference to return value.
   // not allowed because return value is a const
   // but the init entity not const 
   int* ss = a.GetVar();
   ss = new int;
   *ss = 4;
};

int main()
{
    const int MAX_AGE = 31;

    // declare const before name variable 
     int* const a = new int;

    //dereference
    *a = 3;

    //reassign actual pointer
    a =(int*) MAX_AGE;
    
  
   cout << "end";


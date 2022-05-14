#include "..\hfile\Log.h"
#include <string>
using namespace std;



class Person
{
public :
    int a, b;
    Person() :a(11) {};
    Person(int n): a(n){}
   
};



int main()
{
    //heap
    Person* wahyu = new Person(4);
    delete wahyu;

    //stack
    Person p;

    Person c(4);
        
    cout << "end";

}
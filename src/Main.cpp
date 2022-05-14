#include "..\hfile\Log.h"
#include <string>
using namespace std;



class Person
{
public :
    int m_age;
    const string m_name;
     Person(int age) :m_age(age),m_name("anonim") {};
    explicit Person(const string& name): m_age(-1),m_name(name){}
   
};

void CheckPerson(const Person& person )
{

}

int main()
{
    
   //Implicit conversion
    Person wahyu = 10;
    //Explicit conversion
    Person wahyu("wahyu");

    //Implicit conversion in argument
    CheckPerson(10);
    //Explicit conversion in argument
    CheckPerson(Person("wahyu"));
    cout << "end";

}
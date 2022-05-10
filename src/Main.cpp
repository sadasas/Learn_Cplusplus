#include "..\hfile\Log.h"
using namespace std;

class Employe
{ public:
   enum Job
   {  
      Admin, Manager, Staff
   };
  Job job ; 

  ~Employe()
      {
      cout << "Destroyed" << endl;
      }
  
};

class Person :Employe
{
public:
    string Name;

    Person()
    {
        Name = "Unidentified";
        job = Staff;
    }

    void Print()
    {
        cout << Name << job << endl;
    }

};
int main()
{
   Person Wahyu;
   Wahyu.Print();
   
  
}

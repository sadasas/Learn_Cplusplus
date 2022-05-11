#include "..\hfile\Log.h"
using namespace std;

class Gender
{
public:
    virtual string GetGender() = 0;
};


class Employe: public Gender
{ public:
   enum Job
   {  
      Admin, Manager, Staff
   };
  Job m_job ; 

  virtual void PrintJob()
  {
      cout <<  Admin << endl;
  }

  string GetGender() override
  {
      return "MALE";
  };
  ~Employe()
      {
      cout << "Destroyed" << endl;
      }
  
};

class Person :public Employe
{
public:
    string m_name;

    Person(std::string name = "unidentified", Employe::Job job = Employe::Staff): m_name(name)
    {
        m_job = job;
    }

    void PrintJob () override
    {
        cout << m_job << endl;
    }
    void PrintName()
    {
        cout << m_name << m_job << endl;
    }

};
int main()
{
    Person Wahyu;
    Wahyu.PrintJob();

   Employe& User = Wahyu;
   User.PrintJob();
  
   cout << "ssss";

}

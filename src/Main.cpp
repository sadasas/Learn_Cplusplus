#include "..\hfile\Log.h"
using namespace std;

class Employe
{ public:
   enum Job
   {  
      Admin=10, Manager, Staff
   };
  Job job = Admin; 
};
int main()
{
   Employe Wahyu;
   Wahyu.job = Employe::Manager;
   int ptr = Wahyu.job;
  
}

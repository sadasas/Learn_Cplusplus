#include "..\hfile\Log.h"
using namespace std;

struct Data
{
   static int count;
};
int Data::count;
int main()
{
   Data data1;
   data1.count = 2;

   Data data2;
  
}

#include "..\hfile\Log.h"
using namespace std;


int Substract(int a, int b);
void Increment(int& c)
{
	c++;
}

class Player
{
   private:
   int a,b;
   public:
   int c,d;

   void Move(int aa, int bb)  
   {
      a+= aa;
      b+= bb;
   } 
};
int main()
{
   Player pp;
   pp.Move(1,2);
}

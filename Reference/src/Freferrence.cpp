#include <iostream>

using namespace std;

void FPointer ( int &b)
{
    cout << b << endl;
    cout << &b << endl;
}

void Square( int &valPtr)

{
    valPtr = valPtr * valPtr;
}
int main()
{
    int a = 10;

    cout << &a <<endl;
    cout << a <<endl;
    FPointer(a);
    Square(a);

    cout << a<<endl;




    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    int* aPtr = nullptr;
    aPtr = &a;

    cout << &a << endl;
    cout << aPtr << endl;

     a =20;
    cout << *aPtr<< endl;

    return 0;
}
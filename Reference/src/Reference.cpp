#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << &a << endl;

    int &b = a;
    cout << b << endl;
    cout << &b << endl;

    b=10;
    cout << b << endl;
    cout << a << endl;

    return 0;
}
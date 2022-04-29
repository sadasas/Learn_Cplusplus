#include <iostream>
#include "..\hfile\Pattern1.h"

using namespace std;

int main()
{
    int length = 0;
    cout << "Please enter length of pattern : " << endl;
    cin >> length;

    Pattern1 c;

    c.Calculate(length);
    return 0;
}
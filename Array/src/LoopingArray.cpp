#include <iostream>
#include<array>

using namespace std;

int main()
{
    

    array <int,10> arrayValue = {0,1,2,3,4,5,6,7,8,9};

    for(int nilai : arrayValue)
    {
        cout << "address :" << &nilai << "value :" << nilai <<endl;
        nilai *= 2;
    }


    cout << endl;
    for(int &nilaiRef :arrayValue)
    {
        nilaiRef*=2;
    }

    for(int &nilaiRef :arrayValue)
    {
         cout << "address :" << &nilaiRef << "value :" << nilaiRef <<endl;
    }
    return 0;
}
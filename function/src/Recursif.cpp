#include <iostream>

using namespace std;


int Factorial (int n);

int main()
{
    int value,result;
    cout << " Calculate faktorial of : ";
    cin >> value;

    result = Factorial(value);

    cout << "Value of factorial : " << result << endl;
    return 0;

};

int Factorial(int n)
{
    if(n<=1)
    {
        cout << " * " << n << endl;
        return n;
    }
    else
    {
        cout << " * " << n;
    }
    return n * Factorial(n - 1);
};
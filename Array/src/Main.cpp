#include <iostream>

using namespace std;

void printArray( int *ptrArray,int row,int col)
{
    int index = 0;
    for(int i = 0;i<row;i++)
    {
        cout<< "[";
        for (int j = 0; j < col; j++)
        {
          cout<< *(ptrArray + index);
          index++;
        }
        cout << "]" << endl;
    }

}

int main()
{
    int arrayMD[2][2] = {1,2,3,4};

    cout << *arrayMD+1 << endl;
    printArray(*arrayMD,2,2);
}
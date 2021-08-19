#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << ptr[i]<<" ";
    }

    return 0;
}
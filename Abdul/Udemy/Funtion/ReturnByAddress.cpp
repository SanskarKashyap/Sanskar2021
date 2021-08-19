#include <iostream>
using namespace std;

int *fun(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }

    return p;
}
int main()
{
    int size;
    cin >> size;
    int *ptr = fun(size);
    // for (int x : ptr)
    //     cout << x;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i];
    }

    return 0;
}
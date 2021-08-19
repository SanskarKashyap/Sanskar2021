#include <iostream>
using namespace std;
int *fun(int l)
{
    int *p;
    p = new int[l];
    for (int i = 0; i < l; i++)
    {
        p[i] = 5 * i;
    }

    return p;
}

int main()
{

    int *a;
    a = fun(5);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}
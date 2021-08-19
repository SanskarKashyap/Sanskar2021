// increasing size of array
#include <iostream>
using namespace std;

int main()
{
    int *p = new int[5]; // existing array ;
    p[0] = 1;
    p[1] = 10;
    p[2] = 100;
    p[3] = 15;
    p[4] = 18;

    int *q = new int[10];
    for (int i = 0; i < 10; i++)
    {
        q[i] = p[i];
    }
    delete[] p;
    p = q;
    q = NULL;
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}
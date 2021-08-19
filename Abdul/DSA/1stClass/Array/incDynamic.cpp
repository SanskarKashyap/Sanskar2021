#include <iostream>
using namespace std;

int main()
{
    int *p = new int[5];
    int *q = new int[15];
    p[0] = 4;
    p[1] = 5;
    p[2] = 6;
    p[3] = 16;
    p[4] = 26;
    p[5] = 21;
    p[6] = 27;
    p[7] = 26;
    p[8] = 31;
    p[9] = 5;
    p[10] = 21;

    for (int i = 0; i < 7; i++)
    {
        cout << p[i] << endl;

        q[i] = p[i];
        cout << "hi 1" << endl;
    }
    
    p = q;
    // cout << "hi 2" << endl;
    delete[] p;
    
    p = q;
    q = NULL;
    for (int j = 0; j < 10; j++)
    {
        cout << p[j] << endl;
    }
}
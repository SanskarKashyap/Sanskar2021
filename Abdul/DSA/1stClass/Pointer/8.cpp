#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int *p;
    p = &a;
    cout << a << endl;
    cout << *p << endl;
    p = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}
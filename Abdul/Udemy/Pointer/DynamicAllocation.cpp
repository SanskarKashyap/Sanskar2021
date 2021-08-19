#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p;
    p = new int[5];
    p[0] = 12;
    p[1] = 13;
    p[2] = 13;
    p[3] = 13;
    p[4] = 13;
    p[5] = 13;

    delete[] p;
    // p= nullptr ;
    p = new int[6];

    cout << p[1] << endl;
    cout << p[2] << endl;
    cout << p[3] << endl;
    cout << p[4] << endl;
    cout << p[5] << endl;
    cout << p[6] << endl;

    return 0;
}
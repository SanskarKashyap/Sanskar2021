#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    cout << &i << endl;
    int *p = &i; // pointer p = &i;       // P is pointer to an integer ;  // integer ke iye int pointer
    cout << p << endl;
    float j = 15;
    cout << &j << endl;
    float *pf = &j;
    cout << pf << endl; //pointer me stored value i.e addres of i is presented
    return 0;
}
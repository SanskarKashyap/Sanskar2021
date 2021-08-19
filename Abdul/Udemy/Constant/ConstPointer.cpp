#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 10;
    int *p = &a;
    // int const *p = &a;           //increment of read-only location '* p'
    // const int *p = &a;               //increment of read-only location '* p'
    (*p)++;
    cout << *p;

    int b;
    b = 20;
    // *p = &b;
    return 0;
}

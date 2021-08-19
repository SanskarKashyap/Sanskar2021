#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p+1 << endl;
}

int main()
{
    int i = 10, *p, **j;
    p = &i;
    j = &p;
    print(p);
     cout << **j+1 << endl;
    return 0;
}
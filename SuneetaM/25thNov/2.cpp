#include <iostream>
using namespace std;

template <class T1, class T2>
void display(T1 a, T2 b)
{

    cout << a << endl
         << b;
}

int main()
{
    int a = 308;
    char b = 'S';
    display(a, b);
    return 0;
}

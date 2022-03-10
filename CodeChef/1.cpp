#include <iostream>
using namespace std;

void fun()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 50)
    {
        cout << "A\n";
    }
    else if (b > 50)
    {
        cout << "B\n";
    }
    else if (c > 50)
    {
        cout << "C\n";
    }
    else
        cout << "NOTA\n";
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        fun();
    }

    return 0;
}
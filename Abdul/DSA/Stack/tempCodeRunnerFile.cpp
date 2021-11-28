#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter 3 numbers" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "greatest is" << a << endl;
    }
    else if (b > c)
    {
        cout << "greatest is " << b << endl;
    }
    else
    {
        cout << "greatest is" << c;
    }
    return 0;
}
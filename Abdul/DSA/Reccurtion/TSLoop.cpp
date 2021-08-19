#include <iostream>
using namespace std;

double expo(int x, int n)
{
    double s = 1;
    double num = 1;
    double den = 1;

    for (int i = 1; i <= n; i++)
    {

        num *= x;
        den *= i;
        s += num / den;
    }

    return s;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << expo(x, n);
    return 0;
}

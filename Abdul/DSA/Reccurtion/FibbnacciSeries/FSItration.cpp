#include <iostream>
using namespace std;
int fib(int n)
{
    int t = 0, t1 = 1, s = 0, i;
    if (n <= 1)
    {
        return n;
    }

    for (i = 2; i <= n; i++)
    {
        cout << s << " " << t1 << " " << t << endl;

        s = t + t1;
        t = t1;
        t1 = s;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
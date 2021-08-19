#include <iostream>
using namespace std;
int F[10];
int fib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == 0)
        {
            F[n - 2] = fib(n - 2);
        }
        if (F[n - 1] == 0)
        {
            F[n - 1] = fib(n - 1);
        }
    }
    return F[n - 2] + F[n - 1];
}

int main()
{
    int n;
    cin >> n;
    cout << F[8]; 
    cout << fib(n);
    return 0;
}
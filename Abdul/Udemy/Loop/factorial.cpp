#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << " Find Factorial ";
    cin >> n;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << "factorial of " << n << " is " << fact;
    }
    else
    {
        cout << "factorial of is 1";
    }
    
}
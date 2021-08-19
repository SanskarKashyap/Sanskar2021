#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << " Enter a No. ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout << "sum is factors " << sum <<endl ;
    if (sum == 2 * n)
    {
        cout << " Given no is a perfect No. ";
    }
    else
        cout << " Given no is not a  perfect No. ";

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

void cinfun(long long *p, int a)
{
    for (int i = 0; i < a; i++)
    {
        cin >> p[i];
    }
}

void coutfun(long long *p, int a)
{
    long long minSum = 0, maxSum = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (p[i] > p[j])
            {
                swap(p[i], p[j]);
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        minSum = p[i] + minSum;
    }
    for (int i = 1; i < a; i++)
    {
        maxSum = p[i] + maxSum;
    }
    cout << minSum << " " << maxSum;
}

int main()
{
    int a = 5;
    long long *p = new long long[a];
    cinfun(p, a);
    coutfun(p, a);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n;)
    {
        int j = i;
        if (a[j] != a[j + 1])
        {
            return a[i];
        }
        i = i + 2;
    }
    return 0;
}
int main()
{
    int a;
    cin >> a;
    int *p = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> p[i];
    }
    cout << lonelyinteger(p, a);
    return 0;
}

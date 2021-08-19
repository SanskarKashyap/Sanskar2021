#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pv = 0, nv = 0, zero = 0;

    int a[n];
    for (int &x : a)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            pv++;
        }
        else if (a[i] < 0)
        {
            nv++;
        }
        else
        {
            zero++;
        }
    }
    cout << (float)pv / n << " " << (float)nv / n << " " << (float)zero / n;

    return 0;
}
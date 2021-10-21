#include <iostream>
#include <string>
using namespace std;
void cinfun(long long *p, int a)
{
    for (int i = 0; i < a; i++)
    {
        cin >> p[i];
    }
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
}
float coutevenfun(long long *p, int a)
{
    return (float)(p[((a / 2) - 1)] + p[a / 2]) / 2;
}
float coutoddfun(long long *p, int a)
{
    return (float)p[a / 2];
}

int main()
{
    int a;
    cin >> a;
    long long *p = new long long[a];
    cinfun(p, a);
    if (a % 2 == 0)
    {
        cout << coutevenfun(p, a);
    }
    else
        cout << coutoddfun(p, a);
    return 0;
}
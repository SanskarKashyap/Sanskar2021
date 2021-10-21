#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int **p;
    p = new int *[a];
    for (int i = 0; i < a; i++)
    {
        p[i] = new int[a];
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> p[i][j];
        }
    }
    int lsum = 0, rsum = 0;
    for (int i = 0, j = 0; i < a; i++, j++)
    {
        lsum = lsum + p[i][j];
    }
    for (int i = 0, j = a - 1; i < a; i++, j--)
    {
        rsum = rsum + p[i][j];
    }
    if (lsum > rsum)
    {
        cout << lsum - rsum;
    }
    else
        cout << rsum - lsum;

    return 0;
}
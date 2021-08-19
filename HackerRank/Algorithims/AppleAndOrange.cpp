#include <iostream>
using namespace std;

double totalApples = 0;
double totalOranges = 0;

void countApplesAndOranges(int s, int t, int a, int b, int n, int m, int A[], int B[])
{

    for (int i = 0; i <= m; i++)
    {
        int loc = a + A[i];
        if (loc >= s && loc <= t)
        {
            ++totalApples;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        int loc = b + B[i];
        if (loc >= s && loc <= t)
        {
            ++totalOranges;
        }
    }
}
int main()

{

    int s, t; // starting and ending pt of house
    cin >> s >> t;
    int a, b;
    cin >> a >> b; // location of apple and orange thee
    int m, n;
    cin >> m >> n; // no of apple and orange
    int A[m], B[n];
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    countApplesAndOranges(s, t, a, b, n, m, A, B);

    cout << totalApples << endl;
    cout << totalOranges << endl;
    return 0;
}
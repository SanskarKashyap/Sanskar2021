#include <iostream>   // 
using namespace std;

void diffrence(int a, int b)
{
    int dif;
    if (b > 0)
    {
        dif = a - b;
    }
    else
    {
        dif = a - (b);
        // cout << "b is -ve" ; 
    }

    cout<<dif; 
}

int main()
{
    int n, max, min;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    max = A[0];
    min = A[0];

    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
        else if (min > A[i])
            min = A[i];
    }

    // cout << "Max - " << max << endl;
    // cout << "Min - " << min;
    diffrence(max, min);
    return 0;
}
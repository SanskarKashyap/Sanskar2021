#include <iostream>
using namespace std;

void CountSort(int *A, int n)
{
    int k = A[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, A[i]);
    }

    int *count;
    count = new int[k+1];

    for (int i = 0; i <= k; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }

    for (int i = 0; i <= k; i++)
    {
        cout << count[i] << " ";
    }
}

int main()
{
    int len;
    cin >> len;
    int *A = new int[len];
    for (int i = 0; i < len; i++)
    {
        cin >> A[i];
    }
    CountSort(A, len);

    return 0;
}
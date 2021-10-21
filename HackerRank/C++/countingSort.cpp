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
    count = new int[k];

    for (int i = 0; i < k; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    // for (int i = 0; i <= k; i++)
    // {
    //     cout << count[i] << " ";
    // }

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[A[i]]] = A[i];
    }

    for (int i = 0; i < n; i++)
    {
        A[i] = output[i];
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
    for (int i = 0; i < len; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
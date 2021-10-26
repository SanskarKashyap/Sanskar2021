#include <iostream>
using namespace std;
int largest(int arr[], int n)
{
    int i;

    int max = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
int main()
{
    int ptr[6][6];

    int sum[16];
    // sum = new int[16];
    int k = 0;
    int m = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> ptr[i][j];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i > 0 && i < 5 && j > 0 && j < 5)
            {
                // cout << i << j << " ";
                // cout << ptr[i][j] << " ";
                sum[k] = ptr[i - 1][j - 1] + ptr[i - 1][j] + ptr[i - 1][j + 1] + ptr[i][j] + ptr[i + 1][j - 1] + ptr[i + 1][j] + ptr[i + 1][j + 1];
                k++;
            }
        }
       
    }
    cout << largest(sum, 16);

    return 0;
}
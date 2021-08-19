// 2 D dynamic array ko pass karna sikhe aur static variable ka v use kiye
// and algorithm v banae
#include <iostream>
using namespace std;
int j = 0;
int sum1 = 0;
int sum2 = 0;
void digonal(int **A, int a)
{
    for (int i = 0; i < a; i++)
    {
        sum1 = sum1 + A[i][j];
        j++;
    }

    for (int i = 0; i < a; i++)
    {
        j--;
        sum2 = sum2 + A[i][j];
    }
}

int main()
{
    int r; // row
    cin >> r;
    int c = r;
    int **A = new int *[r];
    for (int i = 0; i < r; i++)
    {
        A[i] = new int[c];
    }
    for (int j = 0; j < r; j++)
    {
        for (int k = 0; k < c; k++)
        {
            cin >> A[j][k];
        }
    }
    digonal(A, r);
    if (sum1 > sum2)
    {
        cout << sum1 - sum2 << endl;
    }

    else
        cout << sum2 - sum1 << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int **A;          // created in heap
    A = new int *[2]; // created in heap ,, and can only store pointer type data
    A[0] = new int[3];
    A[1] = new int[3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
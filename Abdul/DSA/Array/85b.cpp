#include <iostream>
using namespace std;

int main()
{
    int *A[2];         // created in stack
    A[0] = new int[3]; // created in heap
    A[1] = new int[3]; // created in heap

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
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int **add(int **A, int **B, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            A[i][j] = A[i][j] + B[i][j];
        }
    }
    return A;
}
void inputM(int **X, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> X[i][j];
        }
    }
}
void outputM(int **X, int r, int c)
{
    cout << &X << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << X[i][j];
        }
    }
}

int main()
{
    int r; // row
    cin >> r;
    int c = r;
    int **A = new int *[r];
    int **B = new int *[r];
    for (int i = 0; i < r; i++)
    {
        A[i] = new int[c];
    }
    inputM(A, r, c);
    inputM(B, r, c);

    add(A, B, r, c);
    outputM(A, r, c);

    return 0;
}
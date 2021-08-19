#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;
    int **ptr = new int *[row]; // 1st of all we have to create an integer pointer   array

    for (int i = 0; i < row; i++)
    {
        ptr[i] = new int[column];
        for (int j = 0; j < column; j++)
        {
            cin >> ptr[i][j];
        }
    }

    // safai karna jaroori hai ,,
    // nahi to memory leak ho jaenga

    for (int j = 0; j < column; j++)
    {
        delete[] ptr[j];
    }
    delete[] ptr;

    return 0;
}
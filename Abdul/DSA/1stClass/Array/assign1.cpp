#include <iostream>
using namespace std;

int main()
{                           //* in static aray ,, variable size aarey cant be initialised 

    int A[] = {4, 5, 6, 7, 8}; // static

    int *P; // dynamic
    int n;
    cin >> n;
    P = new int[n];
    P[0] = 6;
    P[1] = 56;
    P[2] = 3;
    P[3] = 4;
    P[4] = 52;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", A[i]);
    }

    printf("\n\n");

    for (int j = 0; j < 7; j++)
    {
        printf("%d\n", P[j]);
    }

    delete[] P;

    return 0;
}

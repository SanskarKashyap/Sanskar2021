#include <stdio.h>
#include <stdlib.h>

void printPoly(int poly[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // cout << n << " " << i << endl;
        printf("%d", poly[i]);

        if (i != 0)
            printf("x^%d", i);

        if (i != n - 1)
            printf(" + ");
    }
}

int main()
{
    printf(" Enter Digree of Polynomials : ");
    int n;
    scanf("%d", &n);
    int *A;
    A = (int *)malloc(n * sizeof(int));
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }
    int m = sizeof(A) / sizeof(A[0]);

    printf("Polynomial is \n ");
    printPoly(A, m+1);

    return 0;
}

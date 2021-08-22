#include <stdio.h>
#include <stdlib.h>

void printPoly(int poly[], int n)
{
    for (int i = n; i >= 0; i--)
    {
        printf("%d", poly[i]);

        if (i != 0)
            printf("x^%d + ", i);
        else
            printf(" ");
    }
}

int main()
{
    printf(" Enter Digree of Polynomials : ");
    int n;
    scanf("%d", &n);
    int *A;
    A = (int *)malloc(n * sizeof(int));
    printf(" Start entering the coefficient from the smallest degree : ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Polynomial is \n ");
    printPoly(A, n);

    return 0;
}

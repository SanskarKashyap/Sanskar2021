#include <stdio.h>
#include <stdlib.h>

int Max(int m, int n) { return (m > n) ? m : n; }

int *add(int A[], int B[], int m, int n)
{
    int size = Max(m, n);
    // int *sum = new int[size];
    int *sum;
    sum = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < m; i++)
        sum[i] = A[i];

    for (int i = 0; i < n; i++)
        sum[i] += B[i];

    return sum;
}

void printPoly(int poly[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        // cout << n << " " << i << endl;
        printf("%d", poly[i]);

        if (i != 0)
            printf("x^%d +\t", i);

        else
            printf(" ");
    }
}

int main()
{
    // int A[] = {5, 0, 10, 6};
    printf(" Enter Digree of Polynomials 1 : ");
    int a;
    scanf("%d", &a);
    int *A;
    A = (int *)malloc(a * sizeof(int));
    printf("\nEnter coefficient ");
    for (int i = 0; i <= a; i++)
    {
        printf("\nof X^%d : ", i);
        scanf("%d", &A[i]);
    }

    // int B[] = {1, 2, 4};
    printf(" Enter Digree of Polynomials 2 : ");
    int b;
    scanf("%d", &b);
    int *B;
    B = (int *)malloc(b * sizeof(int));
    printf("\nEnter coefficient  ");
    for (int i = 0; i <= b; i++)
    {
        printf("\nof X^%d : ", i);
        scanf("%d", &B[i]);
    }
    // int m = sizeof(A) / sizeof(A[0]);
    // int n = sizeof(B) / sizeof(B[0]);

    printf("\n\nFirst polynomial is \n ");
    printPoly(A, a + 1);
    printf("\n\nSecond polynomial is \n");
    printPoly(B, b + 1);

    int *sum = add(A, B, a + 1, b + 1);
    int size = Max(a + 1, b + 1);

    printf("\n\nsum polynomial is \n");
    printPoly(sum, size);

    return 0;
}
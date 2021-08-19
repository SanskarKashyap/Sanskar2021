#include "stdio.h"

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void main()
{
    int n;
    float sum = 0;
    printf("Enter a number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (float)1 / (float)fact(i);
    }
    printf("\nSol. is : %f", sum);
}
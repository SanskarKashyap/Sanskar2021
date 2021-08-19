#include <stdio.h>

int main(void)
{
    int n, k;
    long int fibo[20];

    printf("Enter Range:\n");
    scanf("%d", &n);
    fibo[0] = -1;
    fibo[1] = 1;
    printf("\n Finonacci Series: \n");
    for (k = 2; k <= n + 1; k++)
    {
        fibo[k] = fibo[k - 1] + fibo[k - 2];
        printf(" %ld", fibo[k]);
    }
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    int i;
    int inp;
    for (i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &inp);
        a[i] = inp;
    }
    int summation = 0, mult = 1;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            summation += a[i];
        }
        else
        {
            mult *= a[i];
        }
    }

    printf("Sum of even elements: %d\n", summation);
    printf("Multiplication of odd elements: %d\n", mult);
    return 0;
}
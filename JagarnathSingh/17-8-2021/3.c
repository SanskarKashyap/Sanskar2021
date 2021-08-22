#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, size1, size2;
    printf("Enter number of terms in Polynomial 1\n");
    scanf("%d", &size1);
    printf("Enter number of terms in Polynomial 2\n");
    scanf("%d", &size2);

    // int a[size1], b[size2], prod[size1 + size2];
    int *a, *b, *prod;
    a = (int *)malloc(size1 * sizeof(int));
    b = (int *)malloc(size2 * sizeof(int));
    prod = (int *)malloc((size1 + size2) * sizeof(int));
    printf("Enter Elements of Polynomial 1\n");
    for (i = 0; i < size1; i++)
    {
        printf("Enter x^%d Co-Efficient of Polynomial 1\n", i);
        scanf("%d", &a[i]);
    }

    printf("Enter Elements of Polynomial 2\n");
    for (i = 0; i < size2; i++)
    {
        printf("Enter x^%d Co-Efficient of Polynomial 2\n", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < size1 + size2; i++)
    {
        prod[i] = 0;
    }

    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            if (a[i] != 0 && b[j] != 0)
                prod[i + j] += a[i] * b[j];
        }
    }
    for (i = size1 + size2 - 1; i >= 0; i--)
    {
        if (prod[i] != 0)
        {
            if (i != 0)
            {
                printf("%d x^%d + ", prod[i], i);
            }
            else
            {
                printf("%d x^%d\n", prod[i], i);
            }
        }
    }
}
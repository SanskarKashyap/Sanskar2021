#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Array in Dynamic And Static Memory\n");
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    int A[5] = {3, 3, 4, 3, 32};

    p[0] = 6;
    p[1] = 56;
    p[2] = 3;
    p[3] = 4;
    p[4] = 52;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", A[i]);
    }

printf("\n\n");

    for (int j = 0; j < 5; j++)
    {
        printf("%d\n", p[j]);
    }

    free(p);
    return 0;
}
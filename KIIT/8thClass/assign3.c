#include <stdio.h>
int main()
{
    int a, c = 1, b;
    printf("find a^b\n enter A and B : \n ");
    scanf("%d%d", &a, &b);
    printf("\n");
    while (b > 0)
    {
        c *= a;
        b--;

        printf("%d\n", c);
    }

    return 0;
}
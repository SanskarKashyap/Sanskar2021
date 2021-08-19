// greatest in 3
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter 3 number for comparison");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greater then %d %d", a, b, c);
        }
    }
    else if (b > c)
    {
        printf("%d is greater then %d %d", b, a, c);
    }
    else
    {
        printf( "%d is greater then % d % d ", c,a,b);
    }

    return 0;
}

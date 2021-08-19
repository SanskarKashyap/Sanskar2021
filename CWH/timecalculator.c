
#include <stdio.h>

int func(int n1, int n2)
{
    int k;
    if (n1 > n2)
    {
        k = n1 - n2;
    }
    else
    {
        k = n1 + 60 - n2;
    }
    return k;
}

int main()
{
    int a, b, c, x, y, z, l, m, n;
    printf("enter ending Hr:Min:sec\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("enter starting Hr:Min:sec\n");
    scanf("%d %d %d", &x, &y, &z);

    if (z > c)
    {
        b--;
    }
    n = func(c, z);

    if (y > b)
    {
        a--;
    }
    m = func(b, y);
    if (a > x)
    {
        l = a - x;
        printf(
            "difference is %d:%d:%d", l, m, n
        );
    } else {
        printf("Invalid formate");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter 3 diffrent number \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (b > c)
        {
            printf("smallest no. : %d", c);
        }
        else
        {
            printf("smallest no. : %d", b);
        }
    }
    else
    {
        if (a > c)
        {
            printf("smallest no. : %d", c);
        }
        else
        {
            printf("smallest no. : %d", a);
        }
    }

    return 0;
}
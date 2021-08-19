#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter 2 diffrent Dates in DD:MM:YYYY  format");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    printf("you have entered %d:%d:%d \n\t\t%d:%d:%d and \n\n", a, b, c, d, e, f);
    if (f >= c)
    {
        if (e >= b)
        {
            if (d > a)
            {
                printf("%d:%d:%d comes First\n\n ", d, e, f);
            }
            printf("%d:%d:%d comes First\n\n ", a, b, c);
        }
    }
    else
    {
        printf("%d:%d:%d comes First\n\n ", a, b, c);
    }

    return 0;
}
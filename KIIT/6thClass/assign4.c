#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter Time In 24 Hr. Format\n");
    scanf("%d%d", &a, &b);
    printf("you Have entered %d:%d \n", a, b);
    if (a > 12)
    {
        c = a-12;
        printf("time is  %d : %d PM\n", c, b);
    }
    else
    {
        printf("Time is %d : %d AM ", a, b);
    }

    return 0;
}
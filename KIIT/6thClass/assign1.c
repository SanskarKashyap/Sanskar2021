#include <stdio.h>
int main()
{
    int year, a, b, c;
    printf("Enter Year : ");
    scanf("%d", &year);

    a = year % 400;
    b = year % 100;
    c = year % 4;

    if (a == 0)
    {
        printf("LY");
    }
    else if (b == 0)
    {

        printf("NLY");
    }
    else if (c == 0)
    {
        printf("LY");
    }
    else
    {
        printf("NLY");
    }

    return 0;
}
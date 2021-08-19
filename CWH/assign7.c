// quotient remainder

#include <stdio.h>

int main()
{
    int a, b;
    printf("enter divisor and divident\n");
    scanf("%d%d", &a, &b);
    int c = b % a, d = b / a;
    printf("%d is your quotient\n", d);
    printf("%d is your remainder\n ", c);

    return 0;
}

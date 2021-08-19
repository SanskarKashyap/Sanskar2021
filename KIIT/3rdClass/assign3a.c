#include <stdio.h>
int main()
{
    int a;
    printf("Enter a 5 digit number \n");
    scanf("%d", &a);
    int b, c, d, e, f, g, h, i;
    b = a % 10;
    c = a / 10;
    d = c % 10;
    e = c / 10;
    f = e % 10;
    g = e / 10;
    h = g % 10;
    i = g / 10;
    printf("reverse :");
    printf("\n%d\n%d\n%d\n%d\n%d\n", b, d, f,h,i);
    printf("\n%d\n%d\n%d\n%d\n%d\n", i,h,f,d,b );

    return 0;
}
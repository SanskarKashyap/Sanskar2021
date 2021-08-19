#include<stdio.h>
int main()
{
 int a;
    printf("Enter a 5 digit number \n");
    scanf("%d", &a);
    int b, c, d, e, f, g, h, i,j;
    b = a % 10;
    c = a / 10;
    d = c % 10;
    e = c / 10;
    f = e % 10;
    g = e / 10;
    h = g % 10;
    i = g / 10;
    j=b*10000+d*1000+f*100+h*10+i; 
    printf("reverse :");
    printf("\n%d\n",j);
return 0;
}
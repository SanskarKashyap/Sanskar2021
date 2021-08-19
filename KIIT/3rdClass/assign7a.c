#include<stdio.h>
int main()
{
 int a;
    printf("Enter a 3 digit number \n");
    scanf("%d", &a);
    int b, c, d, e, f, g, h, i,j;
    b = a % 10;
    c = a / 10;
    d = c % 10;
    e = c / 10;
    // f = e % 10;
    // g = e / 10;
    // h = g % 10;
    // i = g / 10;
    j=b*100+d*10+e; 
    printf("reverse :");
    printf("\n%d\n",j);
    int k = (a==j)?0:1;
    printf("\n%d",k );
return 0;
}
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter a No. ");
    scanf("%d", &a);
    b = a % 10;
    c= a % 100;
    if (b < 5)
    {
        a /= 10;
        a *= 10;
        printf("Round to once place : %d\n", a);
    }
    else
    {
        a/=10;
        a*=10;
        a+=10;
        printf("Round to once place : %d\n",a);
    }
    if (c<50)
    {
        a /= 100;
        a *= 100;
        printf("Round to tens place :%d\n", a);
    }
    else
    {
         a/=100;
        a*=100;
        a+=100;
        printf("Round to tens place :%d\n",a);
    }
    
    
    

        return 0;
}
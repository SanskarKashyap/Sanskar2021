#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter first side\n");
    scanf("%d", &a);

    printf("Enter second side\n");
    scanf("%d", &b);

    printf("Enter third side\n");
    scanf("%d", &c);

    if(a==b&&b==c&&a==c)
    {
        printf("The triangle is equilateral.\n");
    }

    else if(a==b||b==c||c==a)
    {
        printf("The triangle is isoceles.\n");
    }
    else
    {
        printf("The triangle is scalene.\n");
    }
    
    return 0;
}
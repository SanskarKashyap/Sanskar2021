#include<stdio.h>

void main()
{
    int *a;
    int b;
    a = &b;
    printf("Enter the value: ");
    scanf("%d",a);
    printf("Value you entered is: %d",*a);
}
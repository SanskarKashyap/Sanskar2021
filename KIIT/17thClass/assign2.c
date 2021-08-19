#include<stdio.h>

void main()
{
    int *a,*b,*c;
    int x,y,z;
    printf("Enter three values: ");
    scanf("%d%d%d",&x,&y,&z);
    a = &x;
    b = &y;
    c = &z;
    int sum = *a+*b+*c;
    printf("The sum is: %d",sum); 
}
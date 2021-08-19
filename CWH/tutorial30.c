#include<stdio.h>
int main()
{
    int a;
    printf("press 0 for trangular piramid , press 1 for reverse trangular piramid\n");
    scanf("%d",&a);
    if (a=0)
    {
        printf("*\n");
        printf("**\n");
        printf("***\n");
        printf("****\n");
        printf("*****\n");
    }
    else if (a=1)
    {
    printf("*****\n");
    printf("****\n");
    printf("***\n");
    printf("**\n");
    printf("*\n");
    }
    else
    {
        printf("enter 0 or 1 ");
    }
    
    
    return 0;
}
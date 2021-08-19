#include<stdio.h>
int main()
{
    int n ;
    printf("enter a number A");
    scanf("%d", &n);
    if ((n>>1)<<1 == n );   
    {
        printf("A is a even number");

    }
    else
    {
        printf("A is a odd number" );
    }
    
    
    
    return 0;
}

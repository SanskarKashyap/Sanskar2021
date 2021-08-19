#include<stdio.h>
int main()
{
    int a, s = 0, n ;
    printf("enter a 3 or 4 digit number\n");
    scanf("%d", &a);
    printf("%d is selected\n", a);
    
    while( a != 0){
        a = a/10;
        s++;
    }

    printf("Length of no is %d\n", s);
    if (s=3)
    {
        printf("3 digit \n");
       
        
    }
    else if (s=4)
    {
        printf("4 digit \n");
    }
    
    
    return 0;
}
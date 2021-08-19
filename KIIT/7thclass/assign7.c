#include <stdio.h>
int main()
{
    int a;
    printf("Find Absolute Value\n");
    printf("Enter the No. : ");
    scanf("%d", &a);
    if (a<0)
    {
        printf("Absolute value : %d",a*-1);
    }
    else
    {
        printf("Absolute value : %d",a);
    }
    
    


    return 0;
}
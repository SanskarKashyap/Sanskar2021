#include <stdio.h>
int main()
{
    int a,b, rem, sum = 0;
    printf("Enter a no.");
    scanf("%d", &a);
    b=a;
    while (a != 0)
    {
        rem = a % 10;
        sum = sum * 10 + rem;
        a = a / 10;
        
    }
     printf("Reverse no. %d\n", sum);
     if (b==sum)
     {
         printf("Number is equal to its reverse  ");
     }
     else if (b!=sum)
     {
         printf("Number is not equal to its reverse");
     }
     

    return 0;
} 
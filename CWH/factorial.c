#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else 
    {
        return (num * factorial(num - 1));
    }
}

int main()
{ int x ;
    printf("Factorial calculator\n ");
    printf("Enter A Number\n");
    scanf ("%d",&x );

    printf("Factorial of %d is %d" , x, factorial(x));
    return 0;
}

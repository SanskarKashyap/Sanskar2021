#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter n val: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        printf("Prime Number");
    else
        printf("Not prime");

    return 0;
}

//wap to test a Prime number 
//wap to calculate x^y
//wap to find lcm
// wap to program to perform addition sub, mul , div based on funtion
//wap to create intialize assign and access a pointer veriable
//wap to add two number using pointer 
// wap to swap two number using call by refrence 
// submation of 1/i!

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
{   int a;
    float sum =0;
    printf("Find the submation of 1/i!");
    scanf("%d", &a);
    for (int i =1; i <= a; i++)
    {
        sum=sum+(float) 1/(float)factorial(i);
    }
    printf("%0.3f", sum);

    return 0;
}
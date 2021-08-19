#include <stdio.h>
int fibonacci_recurcive(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_recurcive(num - 1) + fibonacci_recurcive(num - 2);
    }
}
int fibonacci_itretive(int num)
{
    int a = 0, b = 1, i;
    for (i = 0; i < num; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
int main()
{
    int x;
    // int y=x+1;
    printf("Enter the index for  fibonacci series  ");
    scanf("%d", &x);

    printf("%d FI\n", fibonacci_itretive(x - 1));
    printf("%d FR\n", fibonacci_recurcive(x - 1));
    return 0;
}
// 0,1,1,2,3,5,8
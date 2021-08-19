#include <stdio.h>

int max(int a, int b);

int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("Enter two numbers:");
    scanf("%d%d", &x, &y);

    z = max(x, y);

    printf("%d is greater", z);
    return 0;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else if (b > a)
    {
        return b;
    }
}
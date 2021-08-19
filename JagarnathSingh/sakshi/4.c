#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
float div(float x, float y)
{
    return x / y;
}
void main()
{
    int a, b;
    printf("Enter numbers :\n");
    scanf("%d%d", &a, &b);
    printf("\nAddition       :%d\n", add(a, b));
    printf("\nSubtraction    :%d\n", sub(a, b));
    printf("\nMultiplicatin  :%d\n", mul(a, b));
    printf("\nDivision       :%f\n", div(a, b));
}
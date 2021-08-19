#include <stdio.h>
int main()
{
    int x, y;
    printf("calculate the value of \n 4x^2 + 3y +5\n");
    printf("enter the value of x and y\n ");
    scanf("%d %d", &x, &y);
    printf("Answer is : %d ", (4 * x * x + 3 * y + 5));
    return 0;
}
#include <stdio.h>
int main()
{
    int a, i = 0;

    printf("Enter a No.");
    scanf("%d", &a);
    while (a > 0)
    {
        a /= 10;
        i++;
    }
    printf("No of digits %d", i);
    return 0;
}
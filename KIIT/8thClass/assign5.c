#include <stdio.h>
int main()
{
    int a, rem;
    printf("Enter a no.");
    scanf("%d", &a);
    while (a != 0)
    {
        rem = a % 10;

        a=a/10;
        printf("%d\n", rem);
    }

    return 0;
}
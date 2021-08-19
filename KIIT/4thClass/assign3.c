#include <stdio.h>

int main()
{
    int n, rev = 0, remender;
    printf("enter A number\n");
    scanf("%d", &n);

    while (n != 0)
    {
        remender = n % 10;
        rev = rev * 10 + remender;
        n = n / 10;
    }
    printf("reversed number is : %d\n",rev);
    n == rev ? printf("reverse is equal to original number  ") : printf("reverse is not equal to original number  ");
    return 0;
}
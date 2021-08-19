#include "stdio.h"

void main()
{
    int n, rev = 0, reminder;
    printf("Enter a no : ");
    scanf("%d", &n);

    while (n != 0)
    {
        reminder = n % 10;
        rev = rev * 10 + reminder;
        n /= 10;
    }
    printf("Reversed number is : %d", rev);
}
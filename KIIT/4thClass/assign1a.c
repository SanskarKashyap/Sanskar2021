#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 Diffrent No.");
    scanf("%d%d", &a, &b);
    printf("Greatest Among them is :");
    char c = (a > b) ? a : b;
    printf("%d", c);
    return 0;
}
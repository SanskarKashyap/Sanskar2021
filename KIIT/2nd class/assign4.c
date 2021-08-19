#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the marks of 3 subjets : \n\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("subject 1 - %d\n", a);
    printf("subject 2 - %d\n", b);
    printf("subject 3 - %d\n", c);
    printf("Average   - %d\n", (a+b+c)/3);
    return 0;
}
#include <stdio.h>
int main()
{
    int a, b;
    printf("start from : ");
    scanf("%d", &a);
    printf("end at : ");
    scanf("%d", &b);
    for (int i = a; i <= b; i++)
    {
        printf("%d\n", i);
    }
return 0 ;
}
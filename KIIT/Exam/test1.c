#include <stdio.h>

int *ptr, i = 1;
void f1()
{
    *ptr = 1 + 3;
}
int main()
{
    int *p = &i;
    ptr = p;
    *p = 2;
    f1();
    i = 2;
    printf("%d", *p);
    return 0;
}

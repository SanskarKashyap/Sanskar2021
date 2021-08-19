#include <stdio.h>
int func1(int c)
{
    return 34;
}

int main()
{
    int b = 144;
    int val = func1(b);
    int *ptr = &val;

    printf(" The value of a is %d ", val);
    return 0;
}
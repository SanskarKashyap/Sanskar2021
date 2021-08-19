#include <stdio.h>
#include <stdlib.h>
int i ; 
int foo()
{

    return i++;
}
void main()
{
    int j;
    {
        int i = foo();
        j = i + 2;
    }
    printf("%d\n", j + 1);
    return 0;
}
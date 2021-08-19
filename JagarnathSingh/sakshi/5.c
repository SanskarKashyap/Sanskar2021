#include <stdio.h>
int main()
{
    int num;
    int *pnum;
    pnum = &num;
    num = 100;
    printf("The value of num is %d\n", num);
    printf("The address of num is %d\n", &num);
    printf("The value of the pointer variable pnum is %d\n", *pnum);
    printf("The address of the pointer variable pnum is %d\n", pnum);
    return 0;
}
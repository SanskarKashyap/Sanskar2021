#include <stdio.h>
int main()
{

    printf(" lets learn about pointer\n");
    int a = 76;
    int *ptra = &a;
    printf("\n\nthe valua of a is %d\n", a);
    printf("the addr. of pointer  is %p\n", &ptra);
    printf("the addr. of pointer in hexadecimal  is %x\n", &ptra);
    printf("the addr. of a in hexa decimal is %x\n", ptra);
    printf("the addr. of a is %p\n", ptra);
    printf("the valua of a is %d\n", *ptra);

    return 0;
}

#include <stdio.h>
int main()
{
    printf("Size of int pointer = %d bytes\n", sizeof(int *));
    printf("Size of char pointer = %d bytes\n", sizeof(char *));
    printf("Size of float pointer = %d bytes\n", sizeof(float *));
    printf("Size of double pointer = %d bytes\n", sizeof(double *));
    printf("Size of long pointer = %d bytes\n", sizeof(long *));
    return 0;
}
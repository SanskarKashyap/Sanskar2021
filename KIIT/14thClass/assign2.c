#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[8];

    printf("Enter no:");

    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
        a[i+4] = a[i];
    }
    
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[8] = {1,2,3,4,5,6,7,8};
    int b;
    printf("Enter Number To Search: ");
    scanf("%d",&b);
    for (int i = 0; i < 8; i++)
    {
        if (a[i] == b)
        {
            printf("%d is in the array",b);
        }
        
    }
    
    return 0;
}
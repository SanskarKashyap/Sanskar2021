#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[8] = {2,3,3,4,5,5,5,8};
    int b;
    int c=0;
    printf("Enter Number To Search Frequency: ");
    scanf("%d",&b);
    for (int i = 0; i < 8; i++)
    {
        if (a[i] == b)
        {
            c++;
        }
        
    }
    printf("frequency of %d is %d",b,c);
    return 0;
}
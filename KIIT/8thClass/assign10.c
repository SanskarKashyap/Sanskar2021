//prime no .

#include <stdio.h>
int main()
{
    int a, j=0;

    printf("Check if a given No. is Prime or Not ");
    scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            j++;
         
        }
       
    }
    
    if (j>1)
    {
        printf("given No. is  Not a Prime");
    }
    else
    {
        printf("given No. is Prime");
    }
    
    

    return 0;
}
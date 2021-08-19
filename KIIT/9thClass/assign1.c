// divisible by 3 and 8

#include<stdio.h>
int main()
{
printf("All the No. divisible by 3 and 8 between 300 and 2000\n ");
for (int i = 200; i <= 3000; i++)
{
    if (i%3==0)
    {
        if (i%8==0)
        {
            printf("%d\n",i);
        }
        
    }
    
}

return 0;
}
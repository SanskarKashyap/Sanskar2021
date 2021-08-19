#include <stdio.h>
int main()
{

    printf("Prime No in the Range of 100 too 200\n");
   
    for (int i = 100; i < 1000; i++)
    {
        int c = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c++;
                // printf("%d\n",c);
            }
        }
        if (c == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
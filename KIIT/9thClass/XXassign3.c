#include <stdio.h>
void check(int a){
    int original = a , rem, sum = 0;
    while (a != 0)
    {
        rem = a % 10;
        sum = sum * 10 + rem;
        a = a / 10;
    }
    if(sum==original){
        printf("%d\n", sum);
    }
}

int main()
{
    // int a , rem, sum = 0;
    
    for (int a = 100; a < 2000; a++)
    {
        check(a);
        // int original = a ;
        // // int original = a, rem, sum = 0;
        // while (a != 0)
        // {
        //     rem = a % 10;
        //     sum = sum * 10 + rem;
        //     a = a / 10;
        // }
        // if (sum == original)
        // {
        //     printf("%d\n", sum);
        // }
        
    }
    return 0;
}
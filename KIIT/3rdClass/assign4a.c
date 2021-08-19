#include <stdio.h>
int main()
{
    int a , d ;

    printf(" Enter a 5 digit Number ");
    scanf("%d", &a);
    int b=a/100 , c=b%10 ;
    printf(" Middle Term is : %d\n", c);


    printf(" Enter a 6 digit Number ");
    scanf("%d", &d);
    int e=d/100 , f=e%100 ;
    printf("Middle Term is : %d\n", f);
    return 0;
}
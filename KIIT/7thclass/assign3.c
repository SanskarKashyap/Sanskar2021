#include<stdio.h>
int main()
{
    int a,b,d;
    char c ;
    printf("enter the value of A,B and operater funtion \n ");
    scanf("%d%d %c",&a,&b,&c );
    switch (c)
    {
    case '+':
        d=a+b;
        printf("sum is : %d", d);
        break;

     case '-':
        d=a-b;
        printf("Diffrence is : %d", d);
        break;

     case '*':
        d=a*b;
        printf("Multiplication : %d", d);
        break;

     case '/':
        d=a/b;
        printf("Devition : %d", d);
        break;
    
     case '%':
        d=a%b;
        printf("Modulus is : %d", d);
        break;

    default:
        break;
    }

    return 0;
}
#include<stdio.h>


int AddAndSubs(int*a , int*b)
{
    int pa=*a;
    *a=*b+*a;
    *b=pa-*b;

       return 0;
}


int main()
{
    int a=3,b=5;
    
    printf("%d and %d\n", a,b);
    AddAndSubs(&a,&b);
    printf("%d and %d\n", a,b);

    return 0;
}
#include<stdio.h>
int swap (int *a, int *b)
{
    int temp ;
    temp=*a;
    *a=*b;
    *b=temp;
return 0;
}

int main()
{
printf("Enter two Diffrent No ");
int a= 10 , b=5 ;
swap(&a,&b);
printf("a = %d    b = %d", a,b);

return 0;
}



// formal parameter can change the actual parameter when call by adderess is used 
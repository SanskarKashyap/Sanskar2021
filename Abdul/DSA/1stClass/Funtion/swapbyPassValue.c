#include<stdio.h>
int   swap (int x, int y )
{
int temp ;
temp=x ;
x=y;
y=temp ;
printf("a = %d    b = %d", x,y);

}
int main()
{
    int a,b;
printf("Enter two diffrent value ");
scanf("%d%d",&a,&b);
swap(a,b);
// printf("a = %d    b = %d", a, b );    { NO USE }

//in swap by value actual parameter will not be changed ,, it will be only affective in formal parameter 


return 0;
}